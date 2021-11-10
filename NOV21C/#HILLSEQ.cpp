#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        bool flag=true;
        cin>>n;
        map<long long , long long> lex;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            lex[temp]++;
        }
        for(auto x: lex){
            //cout<<x.first<<" "<<x.second<<"\n";
            auto j=lex.rbegin();
            if(j->second == 2){
                cout<<"-1\n";
                flag=false;
                break;
            }
            else if(x.second >2){
                cout<<"-1\n";
                flag=false;
                break;
            }
        }
        //cout<<"------------------------\n";
        if(flag == true){
            for(auto x:lex){
                if(x.second==2){
                    cout<<x.first<<" ";
                }
            }
            for(auto k=lex.rbegin(); k!=lex.rend();k++){
                cout<<k->first<<" ";
            }
            cout<<"\n";
        }
        
    }

    return 0;
}
