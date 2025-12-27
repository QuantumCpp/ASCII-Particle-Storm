#include <raylib.h>
#include <raymath.h>
#include "rain-mode/rain-ascii.h"

int main(){
  const int ScreenWidth = 500;
  const int ScreenHeight = 500;
  RainAscii Rain; 

  InitWindow(ScreenWidth, ScreenHeight, "ASCII-Particle-Storm");
  SetTargetFPS(60);

  while(!WindowShouldClose()){
    BeginDrawing();
      ClearBackground(BLACK);
      Rain.CreateObject();
    EndDrawing();
  }

  CloseWindow();
  return 0;

}
