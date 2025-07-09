#include <stdio.h>

int main() {
    int sum1 = 0;
    int i, j;
    printf("\nEnter the row & col number : ");
    int a,b;
    scanf("%d %d",&a,&b);
    int array[a][b];


    printf("Enter the elements for array:\n");
    for (i = 0; i < a; i++) {
        for (j = 0; j < b; j++) {
            scanf("%d", &array[i][j]);
        }
    }

    printf("\nArray 1:\n");
    for (i = 0; i < a; i++) {
        for (j = 0; j < b; j++) {
            printf(" %d", array[i][j]);
            sum1 += array[i][j];
        }
        printf("\n");
    }


    printf("\nSum of all elements of array : %d\n", sum1);

    return 0;
}
