#ifndef PADDLEBALL_BALLOBJECT_H
#define PADDLEBALL_BALLOBJECT_H

#include "raylib.h"

class BallObject {
private:
    float deltaTime;

public:

    Rectangle ball;
    Color ballColor;
    float ballSpeed;
    float speedX;
    float speedY;

    void UpdateBall();

    void DrawBall() const;

    void InitBall();

    void CollisionWithWalls();
};


#endif //PADDLEBALL_BALLOBJECT_H
