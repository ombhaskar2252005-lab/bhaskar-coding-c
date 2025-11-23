#include <stdio.h>
int main() {
    int a,b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    int r = a % b;
    printf("The modulus of %d and %d is: %d\n", a, b, r);
    return 0;
}