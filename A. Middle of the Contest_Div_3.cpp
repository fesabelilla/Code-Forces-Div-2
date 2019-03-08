#include<bits/stdc++.h>

using namespace std ;

int main()
{
    int h1,h2,m1,m2;

    scanf("%d:%d",&h1,&m1);
    scanf("%d:%d",&h2,&m2);

    int m = ((((h1*60)+(h2*60))+m1+m2)/2)%60;

    int h = ((((h1*60)+(h2*60))+m1+m2)/2)/60;

    if(h<10 && m<10)
    cout<<"0"<<h<<":"<<"0"<<m<<endl;

    else if(h>9 && m>10)
    cout<<h<<":"<<m<<endl;
    else if(h<10 && m>9)
        cout<<"0"<<h<<":"<<m<<endl;
        else if(h>9 && m<10)
        cout<<h<<":"<<"0"<<m<<endl;



    return 0;
}
