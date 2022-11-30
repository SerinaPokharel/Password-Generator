#include <stdio.h>
#include <time.h>
int password(int pw_length) {
  char catalogue[] = "1234567890qwertyuiopasdfghjklzxcvbnm!@#$%^&*()_- "
                     "+=QWERTYUIOPASDFGHJKLZXCVBNM[]{};':\"<>,.?/\|";
  printf("\t");
  for (int i = 0; i < pw_length; i++) {
    printf("*");
  }
  printf("\n");
  printf("\t");
  srand(time(NULL));

  for (int i = 0; i < pw_length; i++) {
    printf("%c", catalogue[rand() % (sizeof catalogue - 1)]);
  }
  printf("\n");
  printf("\t");
  for (int i = 0; i < pw_length; i++) {
    printf("*");
  }
  printf("\n");
}
