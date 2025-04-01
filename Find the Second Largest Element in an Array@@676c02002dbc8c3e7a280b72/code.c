#include <stdio.h>

int seclgst(int arr[], int N) {
    if (N < 2) {
        printf("Array must contain at least two elements.\n");
        return -1; // Return -1 to indicate an error
    }

    int max = arr[0];
    int sec = -1; // Initialize sec to -1 to indicate no second largest found

    for (int i = 1; i < N; i++) {
        if (arr[i] > max) {
            sec = max;
            max = arr[i];
        } else if (arr[i] > sec && arr[i] < max) {
            sec = arr[i];
        }
    }

    if (sec == -1) {
        printf("There is no second largest element.\n");
        return -1; // Return -1 to indicate no second largest found
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
    
    if (secondLargest != -1) {
        printf("%d\n", secondLargest);
    }

    return 0;
}
