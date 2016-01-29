#include<iostream>
#include<cstdio>
void fact(int num)
{
    int a[1000]={1};
    int j,i,k=0,carry=0;
    for(i=1;i<=num;i++)
    {
 
      for(j=0;j<=k;j++)
      {
          a[j]=a[j]*i+carry;
          carry=a[j]/10;
          a[j]=a[j]%10;
      }
 
      while(carry)
      {
          k++;
          a[k]=carry%10;
          carry=carry/10;
    }
 
    }
    for(i=k;i>=0;i--)
        printf("%d",a[i]);
  printf("\n");
 
}
int main()
{
    int num,n;
    scanf("%d",&n);
    while(n-- > 0)
    {
        scanf("%d",&num);
        fact(num);
 
 
    }
   return 0;
}
