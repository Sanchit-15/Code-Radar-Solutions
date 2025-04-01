#include <stdio.h>
int isPalindrome(int arr[], int size) {
    int start = 0, end = size - 1;
    while (start < end) {
        if (arr[start] != arr[end]) {
            return 0;
        }
        start++;
        end--;
    }
    return 1; 
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if (isPalindrome(arr, n)) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}