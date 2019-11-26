#include<stdlib.h>
#include <stdlib.h>
#include<string.h>


char ** parse_args( char * line ){
  char *current = line;
  char *token;
  char * args[100];
  int i = 0;
  while(current != NULL){
    token = strsep(&current, " ");
    args[i] = token;
    i++;
  }
}

int main(){
  char input[100] = "ls -a -l";
  char * line = input;
  char ** args = parse_args( line );
  execvp(args[0], args);
  return 0;
}
