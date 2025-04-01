#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];

    // Input array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Check if the array is a palindrome
    int isPalindrome = 1;  // Assume the array is a palindrome

    for (int i = 0; i < N / 2; i++) {
        if (arr[i] != arr[N - i - 1]) {
            isPalindrome = 0;  // Set to 0 if a mismatch is found
            break;  // Exit loop as it's not a palindrome
        }
    }

    if (isPalindrome) {
        printf("Yes\n");  // Array is a palindrome
    } else {
        printf("No\n");  // Array is not a palindrome
    }

    return 0;
}
