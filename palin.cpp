#include<iostream>
#include<cstdio>
using namespace std;
unsigned long long find_palin(unsigned long long k);

int main(){
int t;
int flag=1;
unsigned long long k;
cin>>t;
while(t--){
    scanf("%lld",&k);
    while(flag==1){
    int count=0,d=10;
    unsigned long long x,y;
    unsigned long long arr[6];
    x=k;
    while(x!=0){
    count++;
    x=x/d;
    }
    x=k;
    //cout<<x<<endl;
    //printf("%d\n",count);
    //printf("hhhhhhhhhh");
    //d=10;
        for(int i=count-1;i>=0;i--){
        //printf("in");
        arr[i]=x%d;
        x=x/d;
        }
        for(int m=0;m<count;m++)
        printf("%lld",arr[m]);
        printf("\n%lld",k);
        //flag=0;
        if(k%2==0){
                        printf("loop1");
                        int i=count/2-1;
                        int j=count/2;

                        for(int l=0,m=j;l<=i,m<count-1;l++,m--){
                                if(arr[l]==arr[m])
                                {
                                printf("inside if \n ");
                                continue;
                                }

                                else
                                {

                                            k++;
                                            l=0;
                                            m=j;
                                            break;

                                }
                                if(l>m)
                                    {
                                        printf("inside %lld",k);
                                        flag=0;
                                        break;
                                    }

                        }
                    }



}
}
}





