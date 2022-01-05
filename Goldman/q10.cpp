#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    // input the huge list;
    int n;cin>>n;
    vector<int> v(n);

    priority_queue<int,vector<int>,greater<int>> pq;
    int cnt = 0;
    for(int i=0;i<n;i++) {
        if(cnt<10){
            pq.push(v[i]);cnt++;
        } else {
            if(pq.top() < v[i]) {
                pq.pop();pq.push(v[i]);
            }
        }
    }
    // we will have top 10 entries of the aray in priority queue
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
}