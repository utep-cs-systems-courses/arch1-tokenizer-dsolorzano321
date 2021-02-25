#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"

/* Return true (non-zero) if c is a whitespace characer
   ('\t' or ' '). 
   Zero terminators are not printable (therefore false) */
int space_char(char c){
  if((c == '\t' || c == ' ')&& c != 0){
    return 1;
  }
  return 0;
}

/* Return true (non-zero) if c is a non-whitespace 
   character (not tab or space).  
   Zero terminators are not printable (therefore false) */ 
int non_space_char(char c){
  if((c != '\t' || c != ' ')&& c != 0){
    return 1;
  }
  return 0;
}

/* Returns a pointer to the first character of the next 
   space-separated word in zero-terminated str.  Return a zero pointer("\0") if 
   str does not contain any words. */
char *word_start(char *str){
  while(*str){
    if(non_space_char(*str)){
	return str;
    }
    str;
  }
}
//str[2]
/* Returns a pointer terminator char following *word */
char *word_terminator(char *word){
  while(*word){
    if(space_char(*word)){
      return word;
    }
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
  char *copiedstr = malloc(sizeof(char)* (len+1));

  int i;
  for(i = 0; i < len; i++){
    copiedstr[i] = inStr[i];
  }

  copiedstr[i] = '0';
  return copiedstr;			   
 
}

/* Returns a freshly allocated zero-terminated vector of freshly allocated 
   space-separated tokens from zero-terminated str.
   For example, tokenize("hello world string") would result in:
     tokens[0] = "hello"
     tokens[1] = "world"
     tokens[2] = "string" 
     tokens[3] = 0
*/
char **tokenize(char* str);






			   

  



      
