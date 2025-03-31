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
    int i=0;
    int j=k%N;
    while(i<j){
        arr[i]=arr[k];
        i++;
        k--;
    }
    for(int i=0;i<N;i++){
        printf("%d\n",arr[i]);
    }

        
    

}