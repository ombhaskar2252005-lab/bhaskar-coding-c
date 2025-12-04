#include <stdio.h>
int main (){
    int a,b,c;
    printf("enter 1st side\n");
    scanf("%d", &a);
    printf("enter 2nd side\n");
    scanf("%d", &b);
    printf("enter 3rd side\n");
    scanf("%d", &c);
    if (a+b>c && b+c>a && c+a>b){
        printf("valid triangle\n");
    }
    else {
        printf("invalid triangle\n");
    }
    return 0;
}