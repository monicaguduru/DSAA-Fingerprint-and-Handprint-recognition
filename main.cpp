#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i=0,count=0;
        string lucky;
        cin>>lucky;
        int len=lucky.size();
        vector<int> arr(len);
        while(i!=len)
        {
            arr[i]=lucky[i]-'0';
            i++;
        }
        for(int j=0;j<len;j++)
        {
            if(arr[j]!=4 && arr[j]!=7)
             count++;
        }
        cout<<count<<endl;
    }
}
