#include<stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void find_palin();
char K[1000002];
int main(){
int t,i;
scanf("%d\n",&t);
for(i=0; i<t; i++)
{
gets(K);
find_palin();
printf("%s\n",K);
}
return 0;
}

void find_palin()
{
printf("inside palin");
int len;
len=strlen(K);
int flag=1;
for(int i=0;i<len;i++){
//e.g 4 check here
if(K[i]=='9')
{
flag=0;
}
else
{
break;
}
}
//makin 9999 case as 10001
if(flag==0){
K[0]='1';
K[len]='1';
K[len+1]='\0';
for(int i=1;i<len;i++){
K[i]='0';
}
return;
}
//check whether the leftpart is greater than right part, if greater than its good we just have to make it palin other wise 
//we will have to increment the centre part also
for(int i=0;i<len/2;i++){
if(K[i]<K[len-1-i])
flag=-1;
else if(K[i]>K[len-1-i])
flag=2;
K[len-1-i]=K[i];
}
if(flag==-1||flag==1){
int t=0,len1;
if(len%2==0)
len1=len/2-1;
else
len1=len/2;
//check it centre part contains 9 also
while(K[len1-t]=='9'){
K[len1-t]='0';
K[len-1-len1+t]='0';
t++;
}
//increment the centre part and replicate left bit to right bit.
K[len1-t]++;
K[len-1-len1+t]=K[len1-t];
}
return;
}



















