#include<bits/stdc++.h>
using namespace std;
int main()
{
     int k=9,n=3,m=4;
     int v[n][m] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int mat[m][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            mat[j][i]=v[i][j];
        }
    }
     for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}