#include<bits/stdc++.h>
using namespace std;
int main()
{
     int k=9,n=3,m=3;
     vector<vector<int> >arr= {{1,1,0},{1,0,1},{0,0,0}};
    for(int i=0;i<n;i++)
    {
        reverse(arr[i].begin(),arr[i].end());
    }
         
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            arr[i][j]=1-arr[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}