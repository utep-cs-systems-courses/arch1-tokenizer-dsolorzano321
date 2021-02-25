#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"
#include "history.h"

int main(){
  
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

  printf("%s", "testing for copy string--------\n");
  char copy[] =  "this is test string";
  printf("\ncopy string adress:  %s\n", copy_str( copy, sizeof(copy)));
  
  


  
}
