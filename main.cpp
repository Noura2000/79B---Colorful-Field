#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int>v;
    int n,m,k,t,a,b,num;
    cin>>n>>m>>k>>t;
    for(int i=0;i<k;i++)
    {
        cin>>a>>b;
        num=(a-1)*m+b;

        v.push_back(num);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<t;i++)
    {
        cin>>a>>b;
        num=(a-1)*m+b;
        auto fnd=lower_bound(v.begin(),v.end(),num);
        if(*fnd==num) {cout<<"Waste"<<endl; continue;}


        int dis=num-(fnd-v.begin());

        if(dis%3==1) cout<<"Carrots"<<endl;
        else if(dis%3==2) cout<<"Kiwis"<<endl;
        else cout<<"Grapes"<<endl;

    }
    return 0;
}
