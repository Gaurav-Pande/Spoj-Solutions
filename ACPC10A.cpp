#include<iostream>
using namespace std;
int main(){
while(1)
{
long signed int x,y,z;
cin>>x>>y>>z;
if(x==0 && y==0 && z==0)
break;
else
{
if(z+x==2*y)
{
cout<<"AP ";
cout<<z+y-x<<endl;
}
if(z*x==y*y)
{
cout<<"GP ";
cout<<z*(y/x)<<endl;
}
}
 
}
return 0;
}
 
