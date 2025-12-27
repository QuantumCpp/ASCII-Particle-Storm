#include "../General-utilities/GeneralUtilities.h"
#include <raylib.h>



class RainAscii{
  private:
    Vector2 dimension = {5.0, 5.0};
    Vector2 Posicion = {(float(WidthScreen)/2), (float(HeigthScreen)/2)};
    
    

  public:
    void CreateObject(){
      //Linea vertical derecha
      DrawLine(int(Posicion.x - dimension.x), int(Posicion.y - dimension.y), int(Posicion.x - dimension.x), int(Posicion.y + dimension.y), WHITE);
      //Linea vertical izquierda
      DrawLine(int(Posicion.x + dimension.x), int(Posicion.y - dimension.y), int(Posicion.x + dimension.x), int(Posicion.y + dimension.y), WHITE);
      //Linea horizontal inferior
      DrawLine(int(Posicion.x - dimension.x), int(Posicion.y + dimension.y), int(Posicion.x + dimension.x), int(Posicion.y + dimension.y), WHITE);
      //Linea horizontal superior
      DrawLine(int(Posicion.x - dimension.x), int(Posicion.y - dimension.y), int(Posicion.x + dimension.x), int(Posicion.y - dimension.y), WHITE);
    }

};
