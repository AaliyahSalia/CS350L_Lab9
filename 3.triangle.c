// Create a program to print the following triangle pattern 

// Output:
// Enter the number of lines you want to print: 7
  
// Results:
// 1
// 2   3
// 4   5   6 
// 7   8   9   10 
// 1112 13 14 15
// 16 17 18 19 20 21
// 22 23 24 25 26 27 28 

#include <stdio.h>

int main() {
    int n, i, j, count = 1;
    printf("Please enter the number of lines you want to print: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j=1; j<= i; j++) {
            printf("%d ", count);
            count++;
        }
        printf("\n");
    }

    return 0;
}


