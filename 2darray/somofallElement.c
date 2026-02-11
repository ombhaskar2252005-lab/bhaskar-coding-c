#include <stdio.h>
int main() {
    int r,c;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);
    int arr[r][c];
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    int sum = 0;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            sum = sum + arr[i][j];
        }
    }
    printf("Sum of all elements: %d\n", sum);
}