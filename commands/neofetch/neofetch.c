#include <stdio.h>

void neofetch(char username[], char hostname[], char os[], char de[], char kernel[], int max_ram) {
  printf("\n----------------------------\n");
  printf("Fullname: %s@%s\n", username, hostname);
  printf("Username: %s\n", username);
  printf("Hostname: %s\n", hostname);
  printf("OS: %s\n", os);
  printf("Kernel: %s\n", kernel);
  printf("DE: %s\n", de);
  printf("RAM: %dMiB\n", max_ram);
  printf("----------------------------\n");
}