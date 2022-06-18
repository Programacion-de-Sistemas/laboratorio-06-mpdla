#include "chess.h"
#include "figures.h"
#include <stdlib.h>
#include <stdio.h>

void display(){
  char** blackSquare = reverse(whiteSquare);
  char** twoSquares = join(blackSquare, whiteSquare);
  free(blackSquare);
  char** figure = repeatH(twoSquares, 4);
  free(twoSquares);
  interpreter(figure);
  free(figure);
}