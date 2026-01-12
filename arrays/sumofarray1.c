#include <stdio.h>
int main () {
    int n, i , sum = 0;
    printf("enter number of elements:");
    scanf("%d", &n);

    int arr[n];
    for(i = 0; i < n; i++) {   //index number
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    printf("sum of array element = %d", sum);
    return 0;
}