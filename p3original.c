#include<stdio.h>
int intput_n()
{
  int n;
  scanf("%d",&n);
  return n;
}
int sum_n(int n)
{
  int i,sum=0;
  for(i=1;i<=n;i++)
    sum+=i;
  return sum;
}
void output(int n,int sum)
{
  int i;
  for(i=1;i<n;i++)
    printf("%d+",i);
  printf("%d is %d",i,sum);
}
int main()
{
  int n,s;
  n=intput_n();
  s=sum_n(n);
  output(n,s);
  return 0;
}