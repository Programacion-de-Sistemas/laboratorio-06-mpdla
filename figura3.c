#include "chess.h"
#include "figures.h"
#include <stdlib.h>

void display(){
  char** blackSquare = reverse(whiteSquare);
  char** twoSquares = join(whiteSquare, blackSquare);
  free(blackSquare);
  char** row = repeatH(twoSquares, 4);
  free(twoSquares);
  interpreter(up(reverse(row), row));
  free(row);
}