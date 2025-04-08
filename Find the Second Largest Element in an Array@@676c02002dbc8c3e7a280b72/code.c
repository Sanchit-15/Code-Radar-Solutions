#include <stdio.h>

int seclgst(int arr[], int N) {
    if ((N < 2)) {
        return -1;
    }

    int max = arr[0];
    int sec = arr[0];

    for (int i = 1; i < N; i++) {
        if (arr[i] > max) {
            sec = max;
            max = arr[i];
        } else if (arr[i] > sec && arr[i] < max) {
            sec = arr[i];
        }else if(max==sec){
            sec=-1;
        }
    }

    if (sec == -1) {
        return -1;
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
