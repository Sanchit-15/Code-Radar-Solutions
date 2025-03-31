#include<stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    
    int arr[N]; // Dynamically sized array

    // Read array elements
    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }

    int k;
    scanf("%d", &k);

    // Swap the first k elements with the last k elements
    for(int i = 0; i < k / 2; i++){
        int temp = arr[i];
        arr[i] = arr[k - i - 1];
        arr[k - i - 1] = temp;
    }

    for(int i = N - k; i < N; i++){
        int temp = arr[i];
        arr[i] = arr[N - i - 1];
        arr[N - i - 1] = temp;
    }
    // Print the array after performing the operation
    for(int i = 0; i < N; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
