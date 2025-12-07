#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);
    printf("Enter 3rd number: ");
    scanf("%d", &c);
    if(a>b){
        if(a>c)
            printf("%d id the greatest number", a);
        else 
            printf("%d is the greatest number", c);
        
    }
    else{
        if(b>c)
            printf("%d is the greatest number", b);
        else
            printf("%d is the greatest number", c);
    }
    return 0;
}