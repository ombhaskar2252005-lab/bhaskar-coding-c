// This program swaps two numbers using pass by reference
#include <stdio.h>
void swap(int* x, int* y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    return;
}

    int main(){
        int a;
        printf("enter a number:\n");
        scanf("%d", &a);
        int b;
        printf("enter another number:\n");
        scanf("%d", &b);
        swap(&a, &b);
        printf("the value of a is %d\n", a);
        printf("the value of b is %d\n", b);
        return 0;
    }
