#include<iostream>
#include<ostream>
#include<vector>
#include<algorithm>
using namespace std;
 
int main()
{
    vector<int> ar1,ar2;
    int n,N,test,x;
    cin>>test;
    while(test--){
    long int sum=0;
    cin>>N;
    x=N;
    while(N--){
    cin>>n;
    ar1.push_back(n);
    }
    sort(ar1.begin(),ar1.end());
    while(x--){
    cin>>n;
    ar2.push_back(n);
    }
    sort(ar2.begin(),ar2.end());
    for(int i = 0;i!=ar1.size() && i!= ar2.size();++i)
    sum =sum + ar1[i]*ar2[i];
    cout<<sum<<endl;
    ar1.clear();
    ar2.clear();
    }
    return 0;
}
