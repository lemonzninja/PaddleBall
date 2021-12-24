#include "BallObject.h"

void BallObject::InitBall() {

    ballSpeed = 200.f;

    speedX = ballSpeed;
    speedY = ballSpeed;

    ball.x = GetScreenWidth() / 2;
    ball.y = GetScreenHeight() / 2;
    ball.width = 8;
    ball.height = 8;
    ballColor = YELLOW;
}

void BallObject::UpdateBall() {
    deltaTime = GetFrameTime();

    // Give the Ball speed.
    // Move Left.
    ball.x += speedX * deltaTime;
    // Move Down.
    ball.y += speedY * deltaTime;


    CollisionWithWalls();
}

void BallObject::DrawBall() const {
    DrawRectangleRec(ball, ballColor);
}

void BallObject::CollisionWithWalls() {
    // Collision With walls.

    // Right Wall Collision.
    if (ball.x > (float) GetScreenWidth() - ball.width) {
        speedX += -ballSpeed;
    }

    // Collision With Walls.
    if (ball.y > (float) GetScreenHeight()){
        speedY += -ballSpeed;
    }
}
