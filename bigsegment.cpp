#include <bits/stdc++.h>
using namespace std;

pair<long long,long long> solve(int n, vector<long long> &v) {
    long long mini = LLONG_MAX, maxie = LLONG_MIN;
    long long count1 = 0, count2 = 0;

    for (int i = 0; i < n; i++) {
        if (v[i] < mini) {
            mini = v[i];
            count1 = 1;
        } else if (v[i] == mini) {
            count1++;
        }

        if (v[i] > maxie) {
            maxie = v[i];
            count2 = 1;
        } else if (v[i] == maxie) {
            count2++;
        }
    }

    long long maxi = maxie - mini;
    long long ans;
    if (mini == maxie) {
        ans = 1LL * n * (n - 1) / 2; 
    } else {
        ans = count1 * count2;
    }

    
    return{maxi,ans};
}
int main(){
    int n;
    cin>>n;
    vector<long long>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    auto v=solve(n,ans);
    cout<<v.first <<" "<< v.second;
    return 0;
}