#include <stdio.h>
int main () {
    int n;
    printf("enter number of elements:");
    scanf("%d",&n);
    int arr[n]; //input elements
    printf("enter %d elements:\n", n);
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    //display elements
    printf("Array elements are:\n");
    for(int i = 0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}