// Your code here...

#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);

    int arr[N];  // Define array size based on N

    // Read array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    int max=arr[N];
    int k++
    for(int i=0;i<N-1;i++){
        if(max>=arr[i]) k++;
        else;
    }
    if(k=N-1) printf("Sorted");
    else printf("Not Sorted");
    return 0;
}
