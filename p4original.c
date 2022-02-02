#include<stdio.h>
int input_array_size()
{
  int n;
  printf("Enter the size of the array\n ");
  scanf("%d",&n);
  return n;
}
void input_array(int n,int a[n])
{
  printf("Enter the elements:\n");
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
}
int sum_n_arrays(int n,int a[n])
{
  int s=0;
  for(int i=0;i<n;i++)
  {
    s+=a[i];
  }
  return s;
}
void out_put(int n,int a[n],int sum)
{
  int i;
  for(i=0;i<n-1;i++)
    printf("%d+",a[i]);
  printf("%d is %d",a[i],sum);
}
int main()
{
  int n=input_array_size();
  int a[n];
  input_array(n,a);
  int s=sum_n_arrays(n,a);
  out_put(n,a,s);
  return 0;
}