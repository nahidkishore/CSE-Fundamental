#include <stdio.h>

int findMax(int arr[], int n,int i){
    if(i==n){
        return ;
    }
    else{

    }

}
int main()
{
  int n;
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  printf("%d\n", findMax(arr,n,0));
  return 0;
}