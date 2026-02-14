#include <bits/stdc++.h>
using namespace std;
 
pair<int,int> solve(int n, int m, vector<int> seats) {
    priority_queue<int> maxHeap;
    for (int s : seats) maxHeap.push(s);
 
    int maxi = 0;
    for (int i = 0; i < n; i++) {
        int x = maxHeap.top(); maxHeap.pop();
        maxi += x;
        if (x - 1 > 0) maxHeap.push(x - 1);
    }
    priority_queue<int, vector<int>, greater<int>> minHeap;
    for (int s : seats) minHeap.push(s);
 
    int mini = 0;
    for (int i = 0; i < n; i++) {
        int x = minHeap.top(); minHeap.pop();
        mini += x;
        if (x - 1 > 0) minHeap.push(x - 1);
    }
 
    return {maxi, mini};
}
 
int main() {
 int n, m;
    cin >> n >> m;
    vector<int> v(m);
    for (int i = 0; i < m; i++) cin >> v[i];
 
    auto ans = solve(n, m, v);
    cout << ans.first << " " << ans.second << endl;
}
