#include<stdio.h>
void array(long long int a[],int n,long long int sum){
    long long int result=sum;
    if((n-1)<0){
        printf("%lld",result);
        return;
    };
    sum+=a[n-1];
    array(a,n-1,sum);
}
int main(){
    int n;
    scanf("%d",&n);
    long long int a[n];
    for(int i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }
    array(a,n,0);
    return 0;
}