#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"
#include "history.h"

int main(){
  /*
  List *newList = init_history();
  add_history(newList, "add");
  add_history(newList, "this");
  add_history(newList, "string");
  
  print_history(newList);
  printf("get history: %s\n", get_history(newList, 4));
  free_history(newList);
  print_history(newList);
  */
  
  List *list = init_history();
  char user_in[100];
  while(user_in[0] != 3){
   
    printf("select a menu option: \n");
    printf("1: tokenize string\n");
    printf("2: print history\n");
    printf("3: exit\n");
    scanf("%d", &user_in);
    if(user_in[0] == 1){
      
      
      printf("enter string: ");
      char str[100];
      scanf(" %[^\n]",&str);
      char **tokens = tokenize(str);
      add_history(list, str);
      print_tokens(tokens);
    }
    if(user_in[0] == 2){
      print_history(list);
    }
    if(user_in[0] == 3){
      exit(0);
    }
    

  }
  
  
  /*
  printf("$ ");
  char user_input[100];
  fgets(user_input, 100, stdin);
  puts(user_input);
  // printf("%s\n", user_input);
  char **tokens = tokenize(user_input);
  print_tokens(tokens);
  */
  /*
  char str[] = " hello";
  char *ptr = word_start(str);
  printf("pointer for word start to first space\n");
  printf("\n%s%p\n", "Pointer: ", ptr);
  printf("&str[2] ");
  printf("%p", &str[2]);

  
  printf("%s","\n--------Testing for word_terminator-------\n");
  char str2[] = "hello";
  char *ptrt = word_terminator(str2);
  
  printf("%s", str2);
  //printf("\n%p\n", ptrt);
  
  printf("word terminator manual: %p\n", &str2[5]);
  printf("Word terminator using function: %p\n",ptrt);
  

  printf("count words test\n");
  char *words = "hello world there";
  int num = count_words(words);
 
  printf("%d\n",num);

  printf("testing for copy string--------\n");
  char copy[] =  "this is test string";
  printf("\ncopy string adress:  %s\n", copy_str( copy, sizeof(copy)));
  */
  


  
}
