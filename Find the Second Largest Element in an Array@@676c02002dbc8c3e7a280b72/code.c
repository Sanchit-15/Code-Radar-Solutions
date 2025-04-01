#include <stdio.h>
void seclgst(int arr[],int N){
    int max=arr[0];
    for(int i=1;i<N;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    int sec=arr[0];
    for(int i=1;i<N;i++){
        if(sec<arr[i]&&sec<max){
            sec=arr[i];
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
    seclgst(int arr[],int N);
    return 0;
}