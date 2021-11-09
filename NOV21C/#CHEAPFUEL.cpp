#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int p,d,a,b,k,i;
        cin>>p>>d>>a>>b>>k;
        for(i=0;i<k;i++){
            p+=a;
            d+=b;
            //cout<<p<<" -- "<<d<<"\n";
        }
        if(p<d){
            cout<<"PETROL\n";
        }else if(d<p){
            cout<<"DIESEL\n";
        }else{
            cout<<"SAME PRICE\n";
        }
    }

    return 0;
}
