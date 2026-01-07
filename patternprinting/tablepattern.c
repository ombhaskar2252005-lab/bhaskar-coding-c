#include <stdio.h>
int main () {
    int space;
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){
        for (int j = 1; j >= i ; j--){
            printf("* ");
        }
        space = 2 * i - 1;
        for (int j = 1; j <= space; j++){
            printf("  ");
        }
        for (int j = 1; j >= i; j--){
            printf("* ");
        }
        printf("\n");
    }
}