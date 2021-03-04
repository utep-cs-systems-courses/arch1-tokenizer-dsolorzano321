#include <stdlib.h>
#include <stdio.h>
#include "history.h"
#include "tokenizer.h"


/* Initialize the linked list to keep the history. */

List* init_history(){
  List *history_list = malloc(sizeof(List));
 
  return history_list;
}

/* Add a history item to the end of the list.
   List* list - the linked list
   char* str - the string to store
*/
void add_history(List *list, char *str){
  // create space for a node of type item
  Item *Node = (Item*)malloc(sizeof(Item));
  Node->str = str;
  Node->next = NULL;

  
  if(list->root == NULL){
    list->root = Node;
    Node->id = 1;
  }
  else{
    int counter = 2;
    Item *hold;
    hold = list->root;
    while(hold->next != NULL){
      counter++;
      hold = hold->next;
    }
    hold->next = Node;
    Node->id = counter;
  }
  
}

/* Retrieve the string stored in the node where Item->id == id.
   List* list - the linked list
   int id - the id of the Item to find */
char *get_history(List *list, int id){
  if(id == 1){
    list->root->str;
  }  
  Item *temp = list->root;
  
  while(temp != NULL){
    if(temp->id == id){
      return temp->str;
    }  
    temp = temp->next;

  }
  return "no ID found";
}

/*Print the entire contents of the list. */
void print_history(List *list){
  Item *temp = list->root;
  while(temp != NULL){
    printf("str: %s\n", temp->str);
    temp = temp->next;

  }

}

/*Free the history list and the strings it references. */
void free_history(List *list){
  free(list);
}


  


