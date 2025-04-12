// Your code here...
int prime(int a[],int n){
    int count =n;
    for(int i=0;i<n;i++){
        for(int j=2;j<a[i];j++){
            if(a[i]%j==0){
                count--;
                break;
                
            }
        }
    }
}
int main(){
    int n;
    scanf("%d",n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",a[i]);
    }
    prime(a,n);
}