#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n - i; j++) { //print spaces
            printf(" ");
        }
        for(int k = 1; k <= (2 * i - 1); k++) {  //print star
            printf("%d", k);
        }
        printf("\n");
    }
}