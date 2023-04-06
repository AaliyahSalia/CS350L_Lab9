// Write program in C to delete duplicate elements in an array

// Output:
// Enter size of array: 5
// Enter each element for the given array:	-1 0 -1 0 2
  
// Results: -1 0 2

#include <stdio.h>

int main() {
    int n, i, j, k;
    printf("Please enter the size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Please enter each element for the given array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i=0; i < n; i++) {
        for (j = i + 1; j < n;) {
            if (arr[j] == arr[i]) {
                for (k = j; k < n; k++) {
                    arr[k] = arr[k+1];
                }
                n--;
            } else {
                j++;
            }
        }
    }

    printf("The result are removing duplicates is: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}