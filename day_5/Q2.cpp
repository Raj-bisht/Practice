#include <bits/stdc++.h>

using namespace std;
int main(){
    int i,j,n,s=0;
    cout<<"Enter size of array :";
    cin>>n;
    vector<int> v(n);
    cout<<"Enter values :";
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    for(i=0;i<v.size();i+=2){
        s=s+v[i];
    }
    cout<<s;
}
