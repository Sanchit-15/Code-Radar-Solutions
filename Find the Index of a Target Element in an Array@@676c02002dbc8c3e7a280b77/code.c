#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int n[a];
    for(int i=0;i<a;i++){
        scanf("%d",&n[i]);
    }
    int c,d=-1;
    scanf("%d",&c);
    for(int i=0;i<a;i++){
        if(c==n[i]){
            d=i;
            break;
        }
    }
    printf("%d\n",d);
    return 0;
}
