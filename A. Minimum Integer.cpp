#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long l,ans;
    cin>>l;
    for(long long i = 0;i<l;i++){
            ans = 0;
        long long l,r,d;
        cin>>l>>r>>d;
         if(d<l){
            cout<<d<<endl;
        }
        else{
             ans = (r/d + 1)*d;
            cout<<ans<<endl;
            }

    }

    return 0;
}



