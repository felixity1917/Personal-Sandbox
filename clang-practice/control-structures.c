#include <stdio.h>

int main() {
  int integer_input;

  while (1) {
    printf("Enter an integer: ");
    if (scanf("%d", &integer_input) == 1) break;
    else {
      printf("Invalid input. Please enter a valid integer.\n");
      while (getchar() != '\n');
    }
  }
  if (integer_input % 2 == 0) printf("The Integer is Even.\n");
  else printf("The Integer is Odd.\n");
  return 0;
}
