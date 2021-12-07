#include <stdio.h>

void swap(int *x, int *y){
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    int a, b;

    printf("Enter values for a and b\n");
    scanf("%d%d", &a, &b);

    swap(&a, &b);

    printf("a = %d and b = %d\n", a, b);

    return 0;
}