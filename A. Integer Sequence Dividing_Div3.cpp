#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;

    cin>>n;

    if (n == 1 || n == 2)
        cout<<1<<endl;
    else if(n%2 == 0){
        ll a = n/2;
        if(a%2 == 0)
            cout<<0<<endl;
        else
            cout<<1<<endl;
    }
    else{
        ll a = (n/2);

        if(a%2!=0)
            cout<<0<<endl;
        else
            cout<<1<<endl;


    }

    /*ll arr[n+1];
    if(n==1)
        cout<<"1"<<endl;
    else if(n==2)
        cout<<"1"<<endl;
    else if(n==3)
        cout<<"0"<<endl;
    else{
    for(ll i = 1; i<=n ; i++){
        arr[i] = i;
    }
    ll sum1 = arr[1]+arr[n-1]+arr[n-2];
    ll sum2 = arr[n];
    for(ll j = 2; j<n-2 ; j++){
            sum2+=arr[j];
    }
    ll ans = (sum2-sum1);
    if(ans<0)
    cout<<ans*-1<<endl;
    else
        cout<<ans<<endl;
    }*/
    return 0;
}
