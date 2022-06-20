#include<stdio.h>
#include<stdlib.h>

//Definición de node
typedef struct node
{
  int number;
  struct node *next;
}
node;

node *addElement(node *list, int element){
  node *n = malloc(sizeof(node)); //Asignando memoria para node
  if(n==NULL) printf("No se pudo agregar el elemento\n");
  else{
    n->number = element;
    n->next = NULL;
    list = n;
  }
  return list;
}

int main(){
  node *list=NULL;

  list = addElement(list, 45);
  list->next = addElement(list, 15);

  //Imprimiendo los elementos de la lista
  for(node *tmp = list; tmp != NULL; tmp = tmp->next){
    printf("%i\n",tmp->number);
  }

  //Liberando memoria
  while(list!=NULL){
    node *tmp = list->next;
    free(list);
    list=tmp;
  }

  return 0;
}