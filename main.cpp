#include <raylib.h>
#include <raymath.h>

int main(){
  const int ScreenWidth = 500;
  const int ScreenHeight = 500;

  InitWindow(ScreenWidth, ScreenHeight, "ASCII-Particle-Storm");
  SetTargetFPS(60);

  while(!WindowShouldClose()){
    BeginDrawing();
      ClearBackground(BLACK);
    EndDrawing();
  }

  CloseWindow();
  return 0;

}
