#include "chess.h"
#include "figures.h"
#include <stdlib.h>

void display(){
  //Tablero
  char** blackSquare = reverse(whiteSquare);
  char** row = repeatH(join(whiteSquare, blackSquare), 4);
  free(blackSquare);
  char** board = repeatV(up(reverse(row), row), 4);
  free(row);
  interpreter(board);
  free(board);
}