#ifndef PADDLEBALL_PLAYERPADDLEOBJECT_H
#define PADDLEBALL_PLAYERPADDLEOBJECT_H

#include "raylib.h"

class PlayerPaddleObject {
public:
    Rectangle playerPaddle;
    Color playerPaddleColor;
    float playerSpeed;

    void InitPlayerPaddle();

    void UpdatePlayerPaddle();

    void DrawPlayerPaddle();

};


#endif //PADDLEBALL_PLAYERPADDLEOBJECT_H
