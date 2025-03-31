// Your code here...
#include<stdio.h>
void rev(int arr[];int a; int b;){
    for(int i=a,j=b;i<j;i++,j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}
int main(){
    int N;
    int arr[sizeof(N)];
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    rev(arr[],0,N-1);
    rev(arr[],k,N-K);
    for(int i=0;i<N;i++){
        printf("%d\n",arr[i]);
    }

}