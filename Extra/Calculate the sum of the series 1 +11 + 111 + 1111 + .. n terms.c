#include<stdio.h>
int main()
{
  int n,i,sum=0,t=1;
  printf("Input the number of terms : ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
     sum=sum+t;
     t=(t*10)+1;
  }
  printf("The Sum is : %d\n",sum);
}
