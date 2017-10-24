#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int nm,ng,a[100000]={0},b[100000]={0};
        getchar();
        cin>>ng>>nm;
        for(int i=0;i<ng;i++)
            cin>>a[i];
        sort(a,a+ng);
        for(int i=0;i<nm;i++)
            cin>>b[i];
        sort(b,b+nm);
        if(a[ng-1]>=b[nm-1])
            cout<<"Godzilla\n";
        else if(a[ng-1]<b[nm-1])
            cout<<"MechaGodzilla\n";
    }
        return 0;
}
