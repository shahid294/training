#include <stdio.h>

void guess() {
    int num = 90, guess;
    
    while (1) {
        printf("Enter the number: ");
        scanf("%d", &guess);
        
        if (num == guess) {
            printf("correct");
        } else {
            printf("Incorrect \n");
        }
    }
}

int main() {
    guess();
    return 0;
}
