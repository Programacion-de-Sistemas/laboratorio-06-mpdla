#include "chess.h"
#include "figures.h"
#include <stdlib.h>

void display(){
  //Fila de tablero
  char** blackSquare = reverse(whiteSquare);
  char** twoSquares = join(blackSquare, whiteSquare);
  free(blackSquare);
  char** row = repeatH(twoSquares, 4);
  free(twoSquares);
  //Piezas
  char** pieces = join(join(rook, knight), bishop);
  
  interpreter(pieces);
  free(row);
  free(pieces);
}