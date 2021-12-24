#include "SceneManager.h"

void SceneManager::InitScenes() {
    switch (currentScene) {
        case MAIN_MENU:
            break;
        case SINGLE_PLAYER:
            InitSinglePlayerGame();
            break;
        default:
            break;
    }
}

void SceneManager::UpdateScenes() {
    switch (currentScene) {
        case MAIN_MENU:

            break;
        case SINGLE_PLAYER:
            UpdateSinglePlayerGame();
            break;
        default:
            break;
    }
}

void SceneManager::DrawScenes() {
    switch (currentScene) {
        case MAIN_MENU:
            DrawMainMenu();
            break;
        case SINGLE_PLAYER:
            DrawSinglePlayerGame();
            break;
        default:
            break;
    }
}