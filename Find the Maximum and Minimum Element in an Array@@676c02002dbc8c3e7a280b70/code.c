// Your code here...
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];

    // Input array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    int max=arr[0];
    int min=arr[0];

    // Check for the first peak element
    for (int i = 0; i < N; i++) {
        if (max<=arr[i]) {
            max=arr[i];
            return 0;
        }
    }for (int i = 0; i < N; i++) {
        if (min>=arr[i]) {
            mi=arr[i];
            return 0;
        }
    }

    printf("%d %d",min ,max);

    return 0;
}
