#include<iostream>
#include<cstdio>
#include<math.h>
using namespace std;
int main(){
float n,tot=0.00;
int len=0;
while(scanf("%f",&n)){
tot=0.00;
len=0;
if(n==0.00)
break;
while(tot<n){
len++;
tot+=1.00/(1.00+len);
}
printf("%d card(s)\n",len);
}
return 0;
}
