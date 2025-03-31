// Your code here...
#include<stdio.h>
int main(){
    int N;
    int arr[sizeof(N)];
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    for(int i=0,j=N-1;i<k,j>=N-k;i++j--){
        int temp =arr[i];
        arr[i]=arr[k];
        arr[k]=temp;
    }    
    for(int i=0;i<N;i++){
        printf("%d\n",arr[i]);
    }

}