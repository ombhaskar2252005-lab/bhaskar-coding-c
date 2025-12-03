#include <stdio.h>
int main() {
    int length;
    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);
    int breadth;
    printf("Enter the breadth of the rectangle: ");
    scanf("%d", &breadth);
    int area = length*breadth;
    printf("Area of the rectangle is: %d\n", area);
    int perimeter = 2*(length + breadth);
    printf("Perimeter of the rectangle is: %d\n", perimeter);
    if(area>perimeter){
        printf("Area is greater than primeter\n.");
    }
    else{
        printf("perimeter is greater than area\n.");

    }
    if(area==perimeter){
        printf("Area is equal to perimeter\n.");
    }
    return 0;

}