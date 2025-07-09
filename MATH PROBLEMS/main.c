#include <stdio.h>
int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}
double calculateAverage(int sum, int total){
    return (double)sum / total;
}

int main() {
    int N;
    printf("Enter an integer N such that N > 0: ");
    scanf("%d", &N);

    int prime_numbers[1000];
    int totalprime = 0;
    int sum = 0;

    printf("The prime numbers between 0 and %d are: ", N);
    for (int i = 2; i <= N; i++) {
        if (isPrime(i)) {
            prime_numbers[totalprime] = i;
            totalprime++;
            sum += i;
            printf("%d ", i);
        }
    }

    double average = (double)sum / totalprime;

    printf("\nThere are in total %d prime numbers between 0 and %d.\n", totalprime, N);
    printf("Their sum is %d.\n", sum);
    printf("Their average is %.2f.\n", average);

    return 0;
}
