#include <stdio.h>
void changevalue(int *x){
    *x = *x+10;
}
int main (){
    int a = 5;
    changevalue(&a);
    printf("The value of a is: %d\n", a);
    return 0;
}