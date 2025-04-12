// Your code here...
#include<stdio.h>
int longes(int a[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    int curre=1;
    int maxlen=1;
    for(int i=1;i<n;i++){
        if(a[i]==a[i-1]+1){
            curre++;
        }else{
            if(curre>maxlen){
                maxlen=curre;
            }
            curre=1;
        }
    }
    printf("%d",maxlen);
}
int main(){
    int n,a[n];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    longes(a,n);

}