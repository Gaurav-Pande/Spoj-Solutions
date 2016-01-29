#include<iostream>
#include<cstdio>
using namespace std;
int main(){
int N,nos;
long long int tot,x;
cin>>N;
//cout<<"\n";
while(N--){
scanf("%lld",&nos);
tot=0;
for(int i=0;i<nos;i++){
scanf("%lld",&x);
tot=tot+x;
if(tot>=nos)
tot%=nos;
}
if(tot==0)
printf("YES\n");
else
printf("NO\n");
}
return 0;
//cout<<tot;
}
