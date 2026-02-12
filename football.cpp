#include<bits/stdc++.h>
using namespace std;
string solve(int n, vector<string> s){
    unordered_map<string,int>mp;
    for(auto it:s){
        mp[it]++;
    }
    int maxi=INT_MIN;
    string k="";
    for(auto it:mp){
        if(it.second>maxi){
            k=it.first;
            maxi=it.second;
        }
    }
return k;
}
int main(){
    int n;
    cin>>n;
    vector<string>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    cout<<solve(n,ans);
    return 0;
}