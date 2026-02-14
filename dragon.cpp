#include<bits/stdc++.h>
using namespace std;
bool solve(int s,int n,vector<pair<int,int>>v){
    sort(v.begin(), v.end());
    int count=s;
    for(int i=0;i<n;i++){
        if(count>v[i].first){
            count+=v[i].second;
        }
        else{
            return false;
        }
    }
    return true;
}
int main(){
    int s,n;
    cin>>s>>n;
    vector<pair<int,int>>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].first >> v[i].second;
    }
    if(solve(s,n,v)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}