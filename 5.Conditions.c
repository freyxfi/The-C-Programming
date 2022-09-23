#include <stdio.h>

void guessNumber(int guess) {


if (guess < 555){
  printf("Your guess is too low.\n");
} else if (guess > 555) {
  printf("Your guess is too high.\n");
} else {
  printf("Correct. You guessed it!\n");
}
}
int main() {
    guessNumber(500);
    guessNumber(600);
    guessNumber(555);
}

