#ifndef PADDLEBALL_GAME_H
#define PADDLEBALL_GAME_H

#include "raylib.h"
#include "Scenes/SceneManager.h"

class Game {
private:
       SceneManager _sceneManager;
public:
    void Initiate();

    void Update();

    void Draw();

};


#endif //PADDLEBALL_GAME_H
