#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n][n] , sum=0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        sum = sum + arr[i][i];
    }
    printf("diagonal sum = %d\n", sum);
    return 0;
}