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
  char** pieces = join(join(join(join(join(join(join(rook, knight), bishop), queen), king), bishop), knight), rook);
  //Figura completa
  char** figure = superImpose(pieces, row);
  free(row);
  free(pieces);
  interpreter(figure);
  free(figure);
}