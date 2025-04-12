// Your code here...
#include<stdio.h>
int rep(int a[],int n){
    for(int i=0;i<n-1;i++){
        int rep=a[i];
        for(int j=0;j<n;j++){
            if(i==j) continue;
            if(rep==a[j]){
                break;
            }
        }
    }
    printf("%d",rep);
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    rep(a,n);
}