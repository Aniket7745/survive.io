#include "../include/Game.h"

#include <raylib.h>

Game::Game() {}

void Game::Run() {
  Initialize();

  while (!WindowShouldClose()) {
    Update();

    BeginDrawing();

    Draw();

    EndDrawing();
  }

  Shutdown();
}

void Game::Initialize() {
  InitWindow(screenWidth, screenHeight, "Survivor");
  SetTargetFPS(144);
}

void Game::Update() {}

void Game::Draw() {
  ClearBackground(RAYWHITE);

  DrawText("Survivor", 20, 20, 30, BLACK);
}

void Game::Shutdown() { CloseWindow(); }
