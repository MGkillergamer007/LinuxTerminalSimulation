#include <stdio.h>
#include "include/ask_names.h"

void ask_names(char username[25], char hostname[15]){
  printf("Type Username: ");
  scanf("%s", username);

  printf("Type Hostname: ");
  scanf("%s", hostname);

}
