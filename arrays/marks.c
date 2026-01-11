#include <stdio.h>
int main() {
    int marks[10];
    for (int i = 0; i < 10; i++) {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%d", &marks[i]);
        if(marks[i]<35){
            printf("marks less than 35 at index: %d\n", i);
        }
    }
    return 0;
}