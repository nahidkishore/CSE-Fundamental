// Has Return + Parameter:
int add(int x, int y){
    return x + y;
}

// Has Return + No Parameter:
int sum()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int s = a + b;
  
    return s;
}

//No Return + Parameter:
void sum(int x, int y)
{
    int s = x + y;
    printf("%d\n", s);
}
// No Return + No Parameter:
void Message(){
    printf("Hello world!");
}
