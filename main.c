#include <stdio.h>
#include "ask_names.c"
#include "terminal_proccess.c"


int main(){

  char username[25];
  char hostname[15];
  char os[] = "Ubuntu 20.04.4 LTS x86_64";
  char de[] = "Gnome";
  char kernel[] = "Linux 5.13.0-39-generic";
  int max_ram = 7826;
  char line[1000000];

  ask_names(username, hostname);

  terminal(username, hostname, os, de, kernel, max_ram);

  return 0; 
}