#include "chess.h"
#include "figures.h"

void display(){
  char** blackKnight = flipH(knight);
  interpreter(blackKnight);
}
