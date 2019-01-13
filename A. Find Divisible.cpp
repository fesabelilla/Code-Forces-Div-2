#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;

    long long l,r;

    cin>>t;
    long long arr[2];
    bool flag = true;

    for(int i = 0 ; i<t ; i++){
        cin>>l>>r;
        cout << l << " " << l*(r/l) <<endl;
    }


    return 0;
}
