#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"


/* Return true (non-zero) if c is a whitespace characer
   ('\t' or ' '). 
   Zero terminators are not printable (therefore false) */
int space_char(char c){
  if(c == '\t' || c == ' ' || c == '\n'){
    return 1;
  }
  return 0;
}

/* Return true (non-zero) if c is a non-whitespace 
   character (not tab or space).  
   Zero terminators are not printable (therefore false) */ 
int non_space_char(char c){
  if(c == '\t' || c == ' ' || c == '\n'){
    return 0;
  }
  return 1;
}

/* Returns a pointer to the first character of the next 
   space-separated word in zero-terminated str.  Return a zero pointer("\0") if 
   str does not contain any words. */
char *word_start(char *str){
  while(space_char(*str)){
    str++;
  }
  return str;
}
//str[2]
/* Returns a pointer terminator char following *word */
char *word_terminator(char *word){
  while(non_space_char(*word)){
    word++;
  }
   
  return word;
  
}

/* Counts the number of words in the string argument. */
int count_words(char *str){
  int count = 0;
  while(*str){
    if(space_char(*str)){
      count ++;
    }
    str++;
  }
  return count = count + 1;
  
}
/* Returns a fresly allocated new zero-terminated string 
   containing <len> chars from <inStr> */
char *copy_str(char *inStr, short len){
  char *newstr = malloc(sizeof(char)* (len+1));

  int i;
  for(i = 0; i < len; i++){
    newstr[i] = inStr[i];
  }

  newstr[len] = '\0';
  return newstr;			   
 
}

/* Returns a freshly allocated zero-terminated vector of freshly allocated 
   space-separated tokens from zero-terminated str.
   For example, tokenize("hello world string") would result in:
     tokens[0] = "hello" //tokens[0] = newstr
     tokens[1] = "world"
     tokens[2] = "string" 
     tokens[3] = 0
*/
char **tokenize(char* str){
  // char *newptr = str;// points to string to not modify orignal
  int length = count_words(str);// ount the words in the string
  char **tokens = malloc(sizeof(char) * ((count_words(str))+1));
  int i;
  for(i = 0; i < length; i++){
    str = word_start(str);
    int len_of_word = word_terminator(str) - word_start(str);
    tokens[i] = copy_str(str,len_of_word);
    str = word_terminator(str);
  }
  tokens[length] = '\0';
  return tokens;
}

void print_tokens(char **tokens){
 
  while(*tokens){
    printf("tokens %s\n", *tokens);
    tokens++;
  }
  
}

void free_tokens(char **tokens){
  free(tokens);
}




			   

  



      
