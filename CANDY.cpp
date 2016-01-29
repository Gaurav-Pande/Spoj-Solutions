#include <iostream>
#include<stdio.h>
#include<cstdio>
using namespace std;
int main() {
    // your code goes here
    while(1){
        long long n,i,j,sum=0,maxx,ans=0;
        cin>>n;
        int ar[n+1];
        for(j=0;j<n;j++)
        scanf("%d",&ar[j]);
        if(n == -1)
        break;
        for(i=0;i<n;i++)
        sum = sum + ar[i];
 
        if(sum%n == 0){
 
        maxx = sum/n;
        for(j=0;j<n;j++)
        {
        if(maxx>ar[j])
        ans = ans + (maxx - ar[j]);
        }
        cout<<ans<<endl;
        }
 
        else
        cout<<"-1"<<endl;
    }
    return 0;
}
