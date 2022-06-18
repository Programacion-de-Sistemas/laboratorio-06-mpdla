#include "chess.h"
#include "figures.h"
#include <stdlib.h>

void display(){
  char** blackSquare = reverse(whiteSquare);
  char** twoSquares = join(whiteSquare, blackSquare);
  free(blackSquare);
  char** row = repeatH(twoSquares, 4);
  free(twoSquares);
  char** figure = repeatV(up(reverse(row), row), 2);
  free(row);
  interpreter(figure);
  free(figure);
}