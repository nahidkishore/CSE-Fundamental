#include <stdio.h>
int main()
{
  long long int n;
  scanf("%lld", &n);
  long long int arr[n];
  long long int sum = 0;

  for (int i = 0; i < n; i++)
  {
    scanf("%lld", &arr[i]);
    sum = sum + arr[i];
  }
  if (sum < 0)
  {
    printf("%lld", (-1 * sum));
  }
  else
  {
    printf("%lld", sum);
  }

  return 0;
}