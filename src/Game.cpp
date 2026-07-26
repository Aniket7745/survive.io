#include "../include/Game.h"

#include <raylib.h>

Game::Game() {}

// Main game loop
void Game::Run() {
  Initialize();

  while (!WindowShouldClose()) {
    // Update game state
    Update();

    // Start rendering
    BeginDrawing();

    // Draw the current frame
    Draw();

    // Present the frame
    EndDrawing();
  }

  Shutdown();
}

// Initialize the game window and settings
void Game::Initialize() {
  InitWindow(screenWidth, screenHeight, "Survivor");
  SetTargetFPS(144);
}

// Update all game logic
void Game::Update() { player.Update(); }

// Draw everything on the screen
void Game::Draw() {
  ClearBackground(RAYWHITE);
  player.Draw();
  DrawText("Survivor", 20, 20, 30, BLACK);
}

// Release resources and close the game
void Game::Shutdown() { CloseWindow(); }
