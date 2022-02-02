#include<stdio.h>
int input()
{
  int a;
  printf("Enter the number\n");
  scanf("%d",&a);
  return a;
}
int cmp(int a,int b,int c)
{
  
  if(a<b && c<b)
     return b;
  else if(a<c)
     return c;
  else
     return a;
}
void output(int a,int b,int c,int largest)
{
  printf("Largest of the three numbers:%d,%d,%d is %d\n",a,b,c,largest);
}
int main()
{
  int a,b,c,r;
  a=input();
  b=input();
  c=input();
  r=cmp(a,b,c);
  output(a,b,c,r);
  return 0;
}