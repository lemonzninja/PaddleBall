#ifndef PADDLEBALL_SCENEMANAGER_H
#define PADDLEBALL_SCENEMANAGER_H

class SceneManager {
private:

public:
    typedef enum GameScenes {
        MAIN_MENU,
        SINGLE_PLAYER,
    } GameScenes;

    GameScenes currentScene;

    void InitScenes();

    void UpdateScenes();

    void DrawScenes();

    // MainMenu
    void DrawMainMenu();


    //Single Player Game
    void InitSinglePlayerGame();


    void DrawSinglePlayerGame();

    void UpdateSinglePlayerGame();
};


#endif //PADDLEBALL_SCENEMANAGER_H
