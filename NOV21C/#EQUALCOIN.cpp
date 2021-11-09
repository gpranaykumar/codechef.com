#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long x,y;
        cin>>x>>y;
        
        if(x%2 != 0){
            cout<<"NO\n";
        }else{
            if(y%2==0 || x>=2){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }
    }
    return 0;
}
