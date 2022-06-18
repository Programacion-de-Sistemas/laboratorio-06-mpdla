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
  //Piezas blancas (torre, caballo ...)
  char** pieces1 = join(join(join(join(join(join(join(rook, knight), bishop), queen), king), bishop), knight), rook);
  //Peones blancos
  char** pieces2 = repeatH(pawn, 8);
  interpreter(up(pieces1, pieces2));
  free(row1);
  free(row2);
  free(pieces1);
  free(pieces2);
}