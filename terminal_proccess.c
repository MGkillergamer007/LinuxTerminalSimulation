#include <stdio.h>
#include <stdbool.h>
#include "include/terminal_proccess.h"
#include "commands/neofetch/neofetch.c"

void terminal(char username[], char hostname[], char os[], char de[], char kernel[], int max_ram){
  bool terminal_proccess_running = true;
  char command[200];

  while(terminal_proccess_running == true){
    printf("\n%s@%s:~$ ",username, hostname);
    scanf("%s", command);

    printf("%s", command);

    if(command == "neofetch"){
      neofetch(username, hostname, os, de, kernel, max_ram);
    }
    else if(command == "exit"){
      return 0;
    }
    else if(command != "neofetch" || command != "exit"){
      printf("\nbash: %s command not found\n", command);
    }
    
  } 
}