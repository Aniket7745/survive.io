#include "Player.h"

Player::Player() {
  position = {640.0f, 360.0f};
  speed = 400.0f;
  radius = 25.0f;
}

void Player::Update() {
  float dt = GetFrameTime();

  if (IsKeyDown(KEY_W))
    position.y -= speed * dt;

  if (IsKeyDown(KEY_S))
    position.y += speed * dt;

  if (IsKeyDown(KEY_A))
    position.x -= speed * dt;

  if (IsKeyDown(KEY_D))
    position.x += speed * dt;
}

void Player::Draw() { DrawCircleV(position, radius, BLUE); }
