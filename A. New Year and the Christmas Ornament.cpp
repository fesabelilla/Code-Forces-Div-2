#include<bits/stdc++.h>

using namespace std;

int main()
{
    int y,b,r,a;
    cin>>y>>b>>r;

    int sum = 0;

    a = min(b-1,r-2);
    sum = 3*(min(y,a)+1);


    cout<<sum<<endl;

    return 0;
}

