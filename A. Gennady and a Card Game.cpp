#include<bits/stdc++.h>

using namespace std;

int main()
{
    string a[6];
    cin >> a[0];

    bool flag = false;
    for( int i = 1 ; i < 6 ; i++ )
    {
        cin >> a[i];
        if( !flag)
        {
            flag = a[i][0] == a[0][0] || a[i][1] == a[0][1];
        }
    }

    if(flag == true){
        cout<< "YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }


    return 0;
}
