#include<bits/stdc++.h>
using namespace std;
int solve(int n,int m,vector<int>v,vector<int>k){
    vector<int>ans;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(k[j]%v[i]==0){
                ans.push_back(k[j]/v[i]);
            }
            else{
                continue;
            }
        }
    }
    int maxi=INT_MIN;
    for(int i=0;i<ans.size();i++){
        if(ans[i]>maxi){
            maxi=ans[i];
        }
    }
    int count=0;
    for(int j=0;j<ans.size();j++){
        if(ans[j]==maxi){
            count++;
        }
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int m;
    cin>>m;
    vector<int>k(m);
    for(int i=0;i<m;i++){
        cin>>k[i];
    }
    cout<<solve(n,m,v,k);
    return 0;

}