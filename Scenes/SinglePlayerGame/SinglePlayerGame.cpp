#include "../SceneManager.h"
#include "../../GameObjects/Ball/BallObject.h"
#include "../../GameObjects/PlayerPaddle/PlayerPaddleObject.h"

BallObject ballObject;
PlayerPaddleObject playerPaddleObject;

void SceneManager::InitSinglePlayerGame() {
    ballObject.InitBall();
    playerPaddleObject.InitPlayerPaddle();
}

void SceneManager::UpdateSinglePlayerGame() {
    ballObject.UpdateBall();
    playerPaddleObject.UpdatePlayerPaddle();

    if (CheckCollisionRecs(ballObject.ball, playerPaddleObject.playerPaddle)){
        ballObject.speedX += ballObject.ballSpeed;
    }
}

void SceneManager::DrawSinglePlayerGame() {
    ballObject.DrawBall();
    playerPaddleObject.DrawPlayerPaddle();
}

