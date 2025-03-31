
#include <stdio.h>

void rev(int arr[], int a, int b) {
    // Reverse the part of the array between indices a and b
    for (int i = a, j = b; i < j; i++, j--) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];  // Define array size based on N

    // Read array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int k;
    scanf("%d", &k);
    k=k%N; // Handle case where k > N

    // Reverse in blocks of size k
    rev(arr, 0, N - 1); // Reverse the entire array
    rev(arr, 0, k - 1); // Reverse the first k elements
    rev(arr, k, N - 1); // Reverse the remaining elements
    // Print the array after performing the operation
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    

    return 0;
}
