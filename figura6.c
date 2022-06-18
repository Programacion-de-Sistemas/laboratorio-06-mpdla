#include "chess.h"
#include "figures.h"
#include <stdlib.h>

void display(){
  //Filas de cuadros
  char** blackSquare = reverse(whiteSquare);
  char** row1 = repeatH(join(whiteSquare, blackSquare), 4);
  char** row2 = reverse(row1);
  free(blackSquare);
  //Piezas
  //Piezas blancas (torre, caballo ...)
  char** pieces1 = join(join(join(join(join(join(join(rook, knight), bishop), queen), king), bishop), knight), rook);
  //Peones blancos
  char** pieces2 = repeatH(pawn, 8);
  //Piezas blancas sobre tablero
  char** rowWithPieces1 = superImpose(pieces1, row2);
  char** rowWithPieces2 = superImpose(pieces2, row1);
  free(pieces1);
  free(pieces2);
  //Figura...
  char** figure = up(rowWithPieces1, rowWithPieces2);
  figure = up(figure, repeatV(up(row2, row1), 2));
  free(rowWithPieces1);
  free(rowWithPieces2);
  interpreter(figure);
  free(figure);
}