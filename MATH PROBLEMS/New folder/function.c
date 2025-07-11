#include <stdio.h>
#include "function.h"

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
