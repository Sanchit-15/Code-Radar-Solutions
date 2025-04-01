#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];

    // Input array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int even = 0;
    int odd = 0;

    // Find the maximum and minimum values
    for (int i = 0; i < N; i++) {
        if (arr[i]%2==0) {
            even++;
        }else{
            odd++;
        }
    }

    printf("%d %d", even, odd);

    return 0;
}
