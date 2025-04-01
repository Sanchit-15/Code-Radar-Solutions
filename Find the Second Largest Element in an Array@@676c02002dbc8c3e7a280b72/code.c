#include <stdio.h>

void countFrequency(int arr[], int N) {
    int visited[N]; // Array to track visited elements
    for (int i = 0; i < N; i++) {
        visited[i] = 0; // Initialize all elements as unvisited
    }

    for (int i = 0; i < N; i++) {
        if (visited[i] == 1) {
            continue; // Skip already visited elements
        }

        int count = 1; // Count occurrences of arr[i]
        for (int j = i + 1; j < N; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1; // Mark this element as visited
            }
        }

        // Print the unique number and its frequency
        printf("%d %d\n", arr[i], count);
    }
}

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    countFrequency(arr, N);

    return 0;
}
