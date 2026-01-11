#include<stdio.h>
int main () {
    int arr[7]= {1,43,22,54,33,97,12};
    int max = arr[0];
    for(int i = 0; i<=6; i++){
        if (max < arr[i]){
            max = arr[i];
            }
    }
    printf("Maximum value is: %d\n", max);
    return 0;
}
