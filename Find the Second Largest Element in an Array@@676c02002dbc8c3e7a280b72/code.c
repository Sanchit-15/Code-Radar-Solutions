#include <stdio.h>

int seclgst(int arr[], int N) {
    if (N < 2) {
        return -1;
    }

    int max = arr[0];
    int sec = -1;

    for (int i = 1; i < N; i++) {
        if (arr[i] > max) {
            sec = max;
            max = arr[i];
        } else if (arr[i] < max && (arr[i] > sec || sec == -1)) {
            sec = arr[i];
        }
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
    printf("%d\n", (secondLargest != -1) ? secondLargest : -1);

    return 0;
}
