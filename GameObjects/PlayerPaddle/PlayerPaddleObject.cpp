#include "PlayerPaddleObject.h"

void PlayerPaddleObject::InitPlayerPaddle() {
    playerPaddle.width = 10;
    playerPaddle.height = 100;
    playerPaddle.x = 21;
    playerPaddle.y = GetScreenHeight() / 2 - playerPaddle.height / 2;
    playerSpeed = 5.f;
    playerPaddleColor = WHITE;
}

void PlayerPaddleObject::UpdatePlayerPaddle() {

}

void PlayerPaddleObject::DrawPlayerPaddle() {
    DrawRectangleRec(playerPaddle, playerPaddleColor);
}
