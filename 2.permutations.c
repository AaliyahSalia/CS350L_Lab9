// Find a program to get all permutations from a series of different numbers 

// Output:
// Enter each element for the given array:	5 8 7
  
// All permutations: 587	578	857	875	758	785

#include <stdio.h>

void swap(int *a, int*b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void permute(int arr[], int start, int end) {
    int i;
    if (start == end) {
        for (i = 0; i <= end; i++) {
            printf("%d", arr[i]);
        }
        printf("\t"); 
    } else {
        for (i = start; i <= end; i++) {
            swap(&arr[start], &arr[i]);
            permute(arr, start+1, end);
            swap(&arr[start], &arr[i]);
        }
    }
}

int main() {
    int n, i;
    printf("Please enter each element for the given array: ");
    scanf("%d", &n);

    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("All permutations: ");
    permute(arr, 0, n-1);
    printf("\n");

    return 0;
}