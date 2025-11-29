#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    int random ,guess;
    int no_of_guesses = 0;
    srand(time(NULL));

    printf("Welcome, Let's play a number guessing game!\n");
    random = rand() % 100 + 1; 

    do {
        printf("kindly enter a number between 1 to 100");
        scanf("%d", &guess);
        no_of_guesses++;

        if (guess < random) {
            printf("Your guess is too low, try again!\n");
        } else if (guess > random) {
            printf("Your guess is too high, try again!\n");
        } else {
            printf("Congratulations! You've guessed the correct number in %d attempts\n", no_of_guesses);
        }

    } while (guess != random);

     printf("Thank you for playing the game!\n");
     printf("developed by: Rohan Gawade\n");

    return 0;
}