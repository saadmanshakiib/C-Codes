#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

float calculateAverage(int sum, int total) {
    return (float)sum / total;
}

int main() {
    int firstnumber = 2;
    int prime_numbers[1000];
    int totalprimenumbers = 0;
    int sum = 0;
    char option;

        while (1){
        if (isPrime(firstnumber)) {
            prime_numbers[totalprimenumbers] = firstnumber;
            totalprimenumbers++;
            sum  += firstnumber;
            printf("%d ", firstnumber);
        }
        
        printf("\nDo you want to continue? (Y/N): ");
        scanf(" %c", &option);

        if (option == 'Y' || option == 'y') {
            firstnumber++;
        } else if (option == 'N' || option == 'n') {
            break;
        } else {
            printf("Invalid choice. Exiting.\n");
            return 1;
        }
    } 

    float average = calculateAverage(sum,totalprimenumbers);

    printf("\nThe prime numbers found are: ");
    for (int i = 0; i < totalprimenumbers; i++) {
        printf("%d ", prime_numbers[i]);
    }
    printf("\nThere are in total %d prime numbers.\n", totalprimenumbers);
    printf("Their sum is %d.\n", sum);
    printf("Their average is %.2f.\n", average);

    return 0;
}
