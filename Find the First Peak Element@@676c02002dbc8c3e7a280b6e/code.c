#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int isSorted = 1;

    for (int i = 1; i < N - 2; i++) {
        if (arr[i] > arr[i + 1]&&arr[i] > arr[i - 1]) {
            isSorted = arr[i];
            break;
        }else{
            isSorted=-1;
        }
    }
    printf("%d",isSorted);
    

    return 0;
}
