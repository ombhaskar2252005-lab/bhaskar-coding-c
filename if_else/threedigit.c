#include <stdio.h>
int main(){
    int n;
    printf("Enter a three-digit number: ");
    scanf("%d", &n);
    if(n >99 && n<1000){
        printf("The number is a three-digit number.\n");
    }
    else{
        printf("The number is not a three-digit number.\n");
    }
    return 0;
    
}