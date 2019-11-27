#include<stdlib.h>
#include <stdlib.h>
#include<string.h>
#include<stdio.h>
#include<unistd.h>


char ** parse_args( char * line ){
  char *current = line;
  char *token;
  char ** args = malloc(10 * sizeof(char*));
  int i = 0;
  while(current != NULL){
    token = strsep(&current, " ");
    args[i] = token;
    i++;
  }
  args[i] = NULL;
  return args;
}

int main(){
  char input[100] = "ls -a -l";
  char * line = input;
  char ** args = parse_args( line );
  execvp(args[0], args);
  return 0;
}
