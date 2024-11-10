#include <stdio.h>

int main() {
  int integer_input;
  float float_input;
  char char_input;

  // Integer Input
  while (1) {
    printf("Enter an integer: ");
    if (scanf("%d", &integer_input) == 1) break;
    else {
      printf("Invalid input. Please enter a valid integer.\n");
      while (getchar() != '\n');
    }
  }

  // Float Input
  while (1) {
    printf("Enter a float: ");
    if (scanf("%f", &float_input) == 1) break;
    else {
      printf("Invalid input. Please enter a valid float.\n");
      while (getchar() != '\n');
    }
  }

  getchar();

  // Character Input
  while (1) {
    printf("Enter a character: ");
    if (scanf("%c", &char_input) == 1) break;
    else {
      printf("Invalid input. Please enter a valid character.\n");
      while (getchar() != '\n');
    }
  }

  // Output the values
  printf("You entered: Integer: %d, Float: %.2f, Character: %c\n", integer_input, float_input, char_input);

  return 0;
}
