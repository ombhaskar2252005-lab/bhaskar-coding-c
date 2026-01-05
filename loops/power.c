#include <stdio.h>
int main () {
    int a;
    printf("Enter the base:");
    scanf("%d",&a);
    int b;
    printf("Enter the power:");
    scanf("%d",&b);
    int power = 1;
    for (int i = 1; i <= b; i++) {
        power = power * a;
    }
    printf("The result is %d", power);
}