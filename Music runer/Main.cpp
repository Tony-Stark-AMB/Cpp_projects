#include <windows.h>
#include <fmod.hpp>
#include <filesystem>
#include <vector>
#include <string>
#include <random>

namespace fs = std::filesystem;

HWND hWnd = nullptr;
HHOOK hHook = nullptr;

FMOD::System* system = nullptr;
FMOD::Sound* currentSound = nullptr;
FMOD::Channel* channel = nullptr;

std::vector<std::string> mp3Files;
bool paused = false;

// Загружаем случайный mp3 и играем
void PlayRandomSong() {
    if (currentSound) {
        currentSound->release();
        currentSound = nullptr;
    }

    if (mp3Files.empty()) return;

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist(0, mp3Files.size() - 1);

    std::string path = mp3Files[dist(gen)];

    system->createSound(path.c_str(), FMOD_DEFAULT, 0, &currentSound);
    system->playSound(currentSound, 0, false, &channel);
    paused = false;
}

// Глобальный перехват клавиш
LRESULT CALLBACK KeyboardProc(int nCode, WPARAM wParam, LPARAM lParam) {
    if (nCode == HC_ACTION) {
        KBDLLHOOKSTRUCT* p = (KBDLLHOOKSTRUCT*)lParam;

        bool ctrl = GetAsyncKeyState(VK_CONTROL) & 0x8000;

        if (wParam == WM_KEYDOWN && ctrl) {
            if (p->vkCode == 'P') {
                if (paused) {
                    channel->setPaused(false);
                    paused = false;
                }
                else {
                    PlayRandomSong();
                }
            }
            else if (p->vkCode == 'S') {
                if (!paused) {
                    channel->setPaused(true);
                    paused = true;
                }
            }
        }
    }
    return CallNextHookEx(hHook, nCode, wParam, lParam);
}

void HideConsole() {
    HWND hwnd = GetConsoleWindow();
    ShowWindow(hwnd, SW_HIDE);
}

int main() {
    // Скрыть консоль
    HideConsole();

    // Инициализация FMOD
    FMOD::System_Create(&system);
    system->init(32, FMOD_INIT_NORMAL, 0);

    // Сканируем папку music
    std::string musicDir = "music";
    for (const auto& entry : fs::directory_iterator(musicDir)) {
        if (entry.path().extension() == ".mp3") {
            mp3Files.push_back(entry.path().string());
        }
    }

    // Если нет файлов — выходим
    if (mp3Files.empty()) {
        MessageBoxA(0, "Нет mp3 файлов в папке music", "Ошибка", MB_OK | MB_ICONERROR);
        return 1;
    }

    // Устанавливаем перехват клавиатуры
    hHook = SetWindowsHookEx(WH_KEYBOARD_LL, KeyboardProc, NULL, 0);

    // Играть первую песню
    PlayRandomSong();

    // Главный цикл
    MSG msg;
    while (GetMessage(&msg, NULL, 0, 0)) {
        system->update();
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    // Очистка
    UnhookWindowsHookEx(hHook);
    if (currentSound) currentSound->release();
    if (system) system->release();

    return 0;
}