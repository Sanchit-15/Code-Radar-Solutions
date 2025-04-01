#include <stdio.h>
#include <limits.h>

int seclgst(int arr[], int N) {
    if (N < 2) {
        printf("Array must contain at least two elements.\n");
        return INT_MIN;
    }

    int max = INT_MIN;
    int sec = INT_MIN;

    for (int i = 0; i < N; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    for (int i = 0; i < N; i++) {
        if (arr[i] > sec && arr[i] < max) {
            sec = arr[i];
        }
    }

    if (sec == INT_MIN) {
        printf("There is no second largest element.\n");
        return INT_MIN;
    }

    return sec;
}

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int secondLargest = seclgst(arr, N);
    
    if (secondLargest != INT_MIN) {
        printf("%d\n", secondLargest);
    }

    return 0;
}
