#include <iostream> 
#include<math.h> 
#include<string.h> 
using namespace std;
int main() {
int i,j,k,n,m;
char ar[200];
while(1){
cin>>n;
if(n==0)
break;
cin>>ar;
//cout<<ar[4];
int c=n;
int r = ceil(strlen(ar))/n;
char nar[r][c];
m=0;
for(i=0;ar[m]!='\0';){
for(k=0;k<c && ar[m]!='\0';)
nar[i][k++] = ar[m++];
i++;
for(k=c-1;k>=0 && ar[m]!='\0';)
nar[i][k--]=ar[m++];
i++;
}
 
for(i=0;i<c;i++){
for(j=0;j<r;j++)
cout<<nar[j][i];
}
 
cout<<endl;
}
 return 0;
}
