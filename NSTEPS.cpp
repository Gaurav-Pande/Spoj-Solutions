#include <iostream>
using namespace std;
 
int main() {
 int n;
 cin>>n;
 while(n--){
     long int x,y;
     cin>>x;
     cin>>y;
     if(y==x){
      if(x%2!=0)
      {cout<<2*x-1<<endl;
     }
     else
     {cout<<2*x<<endl;
     }
}
     else if(y==x-2)
    {
     if(x%2!=0)
      {cout<<2*x-3<<endl;
     }
     else if(x==0 && y==0)
     cout<<0;
     else if(x==1 && y==1)
     cout<<1;
     else
     {cout<<2*x-2<<endl;
     }
    }
    else
    {
    cout<<"No Number"<<endl;
    }
 
 
 
 }
    return 0;
}
