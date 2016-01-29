#include<iostream>
#include<cstdio>
using namespace std;
 
int main()
{
int len=1,br=1,rec=0,N;
cin>>N;
for(int len=1;len<=N;len++)
for(int br=len;br<=N;br++){
if (len*br<=N)
rec++;
}
 
 
cout<<rec;
return 0;
 
 
}
