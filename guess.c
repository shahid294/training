#include <stdio.h>

void guess() {
    int num = 90, guess;
    
    while (1) {
        printf("Enter the number: ");
        scanf("%d", &guess);
        
        if (num == guess) {
            printf("Correct! You guessed the right number.\n");
            return;
        } else if (guess < num) {
            printf("Incorrect, try a higher number.\n");
        } else {
            printf("Incorrect, try a lower number.\n");
        }
    }
}

int main() {
    guess();
    return 0;
}
