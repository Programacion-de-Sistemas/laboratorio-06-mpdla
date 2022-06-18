#include "chess.h"
#include "figures.h"
#include <stdlib.h>

void display(){
  //Filas de cuadros
  char** blackSquare = reverse(whiteSquare);
  char** row1 = repeatH(join(whiteSquare, blackSquare), 4);
  char** row2 = reverse(row1);
  free(blackSquare);
  //Piezas
  interpreter(up(row2, row1));
  free(row1);
  free(row2);
}