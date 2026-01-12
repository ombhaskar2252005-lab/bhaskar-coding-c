#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0, average;
    
    // Get the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    // Declare array
    int arr[n];
    
    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    // Calculate sum
    for(i = 0; i < n; i++) {
        sum += arr[i];
    }
    
    // Calculate average
    average = sum / n;
    
    // Display results
    printf("\nArray elements: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f\n", average);
    
    return 0;
}