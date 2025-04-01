#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];

    // Input array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    char a[5] = "Yes";  // Initialize string

    // Check if the array is a palindrome
    for (int i = 0; i < N / 2; i++) {
        if (arr[i] != arr[N - i - 1]) {
            a = "No";  // If mismatch, set "No"
            break;
        }
    }

    printf("%s", a);  // Print the result
    return 0;
}
