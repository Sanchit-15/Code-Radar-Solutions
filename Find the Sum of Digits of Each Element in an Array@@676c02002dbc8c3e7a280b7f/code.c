#include <stdio.h>
int sum(int n) {
    int sum=0;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
}

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<N;i++){
        printf("%d ",sum(arr[i]));
    }
    return 0;
}