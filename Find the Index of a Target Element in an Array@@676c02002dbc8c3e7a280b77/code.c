// Your code here...
#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int n[a];
    for(int i=0;i<a;i++){
        scanf("%d",&n[i]);
    }
    int c,d;
    scanf("%d",&c);
    for(int i=0;i<a;i++){
        if(c==n[i]){
            d=i;
            break;
        }else{
            d=-1;
        }
    }
    return d;
}