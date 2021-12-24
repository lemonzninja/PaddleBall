#include "Game.h"

int main() {
    Game _game{};

    int windowWidth = 1000;
    int windowHeight = 600;
    const char windowTitle[] = "Paddle Ball";

    InitWindow(windowWidth, windowHeight, windowTitle);
    SetTargetFPS(60);

    _game.Initiate();

    while (!WindowShouldClose()) {
        _game.Update();

        BeginDrawing();
        ClearBackground(BLACK);

        _game.Draw();

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
