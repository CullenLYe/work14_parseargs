#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

char ** parse_args(char *line) {
  char **args = malloc(sizeof(char*)*100);
  char *p = line;
  int i;
  for (i=0; p!=NULL; i++) {
    args[i] = strsep(&p, " ");
  }
  args[i] = NULL;
  return args;
}

int main() {

  char line[] = "ls -a -l";
  char **args = parse_args(line);
  execvp(args[0], args);

  return 0;

}
