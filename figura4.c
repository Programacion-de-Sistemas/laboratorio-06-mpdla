#include "chess.h"
#include "figures.h"
#include <stdlib.h>

void display(){
  char** blackSquare = reverse(whiteSquare);
  char** twoSquares = join(blackSquare, whiteSquare);
  free(blackSquare);
  char** row = repeatH(twoSquares, 4);
  free(twoSquares);
  interpreter(row);
  free(row);
}