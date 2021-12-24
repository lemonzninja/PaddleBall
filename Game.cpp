#include "Game.h"

void Game::Initiate() {
    _sceneManager.currentScene = SceneManager::SINGLE_PLAYER;

    _sceneManager.InitScenes();
}

void Game::Update() {
    _sceneManager.UpdateScenes();
}

void Game::Draw() {
    _sceneManager.DrawScenes();
}