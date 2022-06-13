#include "chess.h"
#include "figures.h"
#include <stdlib.h>

void display(){
  char** blackSquare = reverse(whiteSquare);
  char** twoSquares = join(whiteSquare, blackSquare);
  free(blackSquare);
  char** figure = repeatH(twoSquares, 4);
  free(twoSquares);
  interpreter(figure);
  free(figure);
}