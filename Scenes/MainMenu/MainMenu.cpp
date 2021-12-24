#include "../SceneManager.h"
#include "raylib.h"


void SceneManager::DrawMainMenu() {
    DrawText("Main Menu Text!", GetScreenWidth()/ 2, GetScreenHeight() / 2, 32 ,GREEN);
}