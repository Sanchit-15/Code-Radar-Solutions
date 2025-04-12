// Your code here...
#include<stdio.h>
int max(int a[],int n){
    int max=0;
    int count=1;
    for(int i=0;i<n;i++){
        count=a[i]*a[i+1];
        if(count>max) max=count;
    }
    printf("%d",max);
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    max(a,n);
}