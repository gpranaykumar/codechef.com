#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,i,count=0;
        cin>>n;
        for(i=0;i<n;i++){
            int x;
            cin>>x;
            if(x%2){
                //cout<<"x="<<x<<"\n";
                count++;
            }
        }
        cout<<(count/2)<<"\n";
    }

    return 0;
}
