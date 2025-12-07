#include <stdio.h>
int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    n%2==0 ? printf("even") : printf("odd");
    return 0;
}