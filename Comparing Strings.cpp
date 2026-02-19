#include<bits/stdc++.h>
using namespace std;
int solve(int n,vector<pair<int,int>>a){
    int mini=INT_MAX;
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        mini=min(mini,a[i].first);
        maxi=max(maxi,a[i].second);
    }
    for(int i=0;i<n;i++){
        if(a[i].first==mini && a[i].second==maxi ){
            return i+1;
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    vector<pair<int,int>>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i].first>>ans[i].second;
    }
    cout<<solve(n,ans);
    return 0;

}