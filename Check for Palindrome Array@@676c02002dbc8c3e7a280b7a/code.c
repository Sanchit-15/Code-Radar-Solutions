// Your code here...// Your code here...
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];

    // Input array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    char a[5]='Yes'; 
    for(int i=0;i<N/2;i++){
        if(arr[i]=arr[N-i-1]){
            a='Yes';
        }else{
            a='No';
        }
    }
    printf("%s",a);
    return 0;
}
