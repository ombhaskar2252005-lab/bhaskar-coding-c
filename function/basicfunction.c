#include <stdio.h>
void england(){
    printf("you are in emgland\n");//6
    return;//7
}
void australia(){
    printf("you are in australia\n");//4
    england();//calling function //5
    return;//8
}
void india(){
    printf("you are in india\n");//2
    australia();//calling function //3
    return;//9
}
int main(){
    india(); //calling function //1
    return 0; //10
}