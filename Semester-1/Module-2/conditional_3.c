// nested if else condition
#include <stdio.h>
int main()
{
  int tk;
  scanf("%d", &tk);
  if(tk >= 5000){
    printf("cox's bazar jabo\n");

    if(tk >= 10000){
      printf("sant martins jabo");

    }
    else{
      printf("coxs bazar theke ferot chole ashbo");
    }
  }
 
  else
  {
    printf("jabo na!!!");
  }
  return 0;
}