
#include<iostream>
#include<cmath>
#include<cstdio>
unsigned int a[3500],len;
inline bool prime(unsigned long x)
{
	unsigned long i,last=sqrt(x);
	for(i=2;i<=last;i++)
	{
		if(!(x%i))
		return 0;
	}
	return 1;
}
 
 
void generate()
{
	for(unsigned int j=2;j<32000;j++)
    {
	if(prime(j))
	{
		a[len++]=j;
	}
    }
}
 
 
inline bool check(unsigned long x )
{
	unsigned long i,last=sqrt(x);
	for(i=0;a[i]<=last && i<len;i++)
	{
		if(!(x%a[i]))
		return 0;
 
	}
 
	return 1;
}
 
 
int main()
{
    unsigned long int i,n;
    generate();
    scanf("%ld",&n);
    while(n-- >0)
    {
     unsigned long int num1, num2;
        scanf("%ld",&num1);
        scanf("%ld",&num2);
        if (num1==1)
        {
        	num1++;
        }
        while(num1<=num2)
        {
        if(check(num1))
        {printf("%ld\n",num1);
 
        }
        num1++;
        }
    }
    return 0;
}
