#include "chess.h"
#include "figures.h"

void display(){
  char** blackSquare = reverse(whiteSquare);
  interpreter(join(whiteSquare, blackSquare));
}