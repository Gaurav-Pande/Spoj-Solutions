#include<iostream>
#include<map>
using namespace std;
map<long long, long long> a;
long long rec(long long x);
int main()
{
long long n;

while(cin>>n)
{
cout<<rec(n)<<endl;
}
}

long long rec(long long x)
{
long long c,d;
if(x==0)
return 0;
c=a[x];
if(c==0)
{
c=x-x%12;
d = max(x,rec(x/2)+rec(x/3)+rec(x/4));
a[x]=d;
}
return a[x];
}
