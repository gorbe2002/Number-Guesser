#include <stdio.h>

int main() {

  int guess;
  int tries = 0;

  // Asks the user to guess a number between certain parameters.
  printf("I’m thinking of a whole number between 1-20.\n");
  printf("What number am I thinking of?: ");
  scanf("%d", &guess);

  while (guess != 11 && tries < 20) {
    printf("Wrong guess, try again: ");
    scanf("%d", &guess);
    tries++;
  }

  if (guess == 11) {
    printf("That's the number I was thinking about!\n");
  }
  return 0;
}
