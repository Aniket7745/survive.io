#pragma once
#include "Player.h"
class Game {
public:
  Game();

  void Run();

private:
  void Initialize();
  void Update();
  void Draw();
  void Shutdown();

private:
  const int screenWidth = 1280;
  const int screenHeight = 720;
  Player player;
};
