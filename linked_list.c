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
  if(n == NULL) printf("No se pudo agregar el elemento\n");
  else{
    n->number = element;
    n->next = NULL;
    if(list == NULL) list = n;
    else{
      node* tmp = list;
      while(tmp->next != NULL){
        tmp = tmp->next;
      }
      tmp->next = n;
    }
  }
  return list;
}

int main(){
  node *list = NULL;
  int element;
  printf("Ingrese un elemento: ");
  scanf("%d", &element);
  list = addElement(list, element);
  list = addElement(list, element + 1);
  list = addElement(list, element + 2);
  //Imprimiendo los elementos de la lista
  printf("Lista:\n");
  for(node *tmp = list; tmp != NULL; tmp = tmp->next){
    printf("%i ", tmp->number);
  }

  //Liberando memoria
  while(list != NULL){
    node *tmp = list->next;
    free(list);
    list=tmp;
  }

  return 0;
}