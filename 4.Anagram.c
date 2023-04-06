// Write a program to check whether two given strings are anagram of each other or not. An anagram of a string is another string that contains same characters, only the order of characters can be different. For example, “abcd” and “dabc” are anagram of each other.

// Output:
// Enter the first string: abcd
// And second string: dabc
  
// Results: Yes


#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int len1, len2, i, j, freq1[26] = {0}, freq2[26] = {0}, flag = 1;

    printf("Please enter the first string: ");
    scanf("%s", str1);
    printf("Please enter the second string: ");
    scanf("%s", str2);

    len1 = strlen(str1);
    len2 = strlen(str2);

    if (len1 != len2) {
        printf("No\n");
        return 0;
    }

    for (i = 0; i < len1; i++) {
        freq1[str1[i] - 'a']++;
    }

    for (i = 0; i < len2; i++) {
        freq2[str2[i] - 'a']++;
    }

    for (i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) {
            flag = 0;
            break;
        }
    }

    if (flag) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}