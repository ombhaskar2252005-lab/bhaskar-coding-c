#include <stdio.h>
int main(){
    int ram,shyam,ajay;
    printf("Enter age of ram:");
    scanf("%d",&ram);
    printf("Enter age of shyam:");
    scanf("%d",&shyam);
    printf("Enter age of ajay:");
    scanf("%d",&ajay);
    if(ram<shyam && ram<ajay){
        printf("Ram is the youngest\n");
    }
    else if(shyam<ram && shyam<ajay){
        printf("Shyam is the youngest\n");
    }
    else{
        printf("Ajay is the youngest\n");

    }
    return 0;
}