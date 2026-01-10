//isme pass by value use hai..
#include <stdio.h>
int main() {
    int a;
    printf("enter a number:\n");
    scanf("%d", &a);
    int b;
    printf("enter another number:\n");
    scanf("%d", &b);
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("the value of a is %d\n", a);
    printf("the value of b is %d\n", b);
    return 0;
}