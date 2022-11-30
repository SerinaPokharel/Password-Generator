#include "pw_Generate.h"
#include "red.h"
#include <stdio.h>
int main() {
  int pw_length;

  red();

  printf("\n\t*****************************************\n\n");
  printf("\t\t\t\tPassword generator\n\n");
  printf("\t\t\t\t\t\t\tCoded by serina\n");
  red();
  printf("\t******************************************\n");
  printf("\n\tEnter length of the password = ");
  scanf("%d", &pw_length);
  printf("\n");
  printf("\n");
  printf("Your %d digit password:\n", pw_length);
  password(pw_length);
}
