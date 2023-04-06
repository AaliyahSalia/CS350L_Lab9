// Find a program to calculate the element frequency from an array

// Output:
// Enter size of array: 5
// Enter each element for the given array:	4 5 3 5 3
  
// Frequency for each element: 4-1    5-2     3-2

#include <stdio.h>

int main() {
    int arr[100], freq[100];
    int n, i, j, count;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    // Input the elements of the array
    printf("Enter each element for the given array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1; // Initialize frequency of each element to -1
    }
    
    // Calculate frequency of each element
    for (i = 0; i < n; i++) {
        count = 1;
        for (j = i+1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                freq[j] = 0; // Mark the element as visited
            }
        }
        if (freq[i] != 0) {
            freq[i] = count;
        }
    }
    
    // Output the frequency of each element
    printf("\nFrequency for each element: ");
    for (i = 0; i < n; i++) {
        if (freq[i] != 0) {
            printf("%d-%d \n", arr[i], freq[i]);
        }
    }
    
    return 0;
}
