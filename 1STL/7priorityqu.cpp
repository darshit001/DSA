#include<bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<int> maxi;
    priority_queue<int,vector<int>,greater<int>> mani;
    maxi.push(1);
    maxi.push(11);
    maxi.push(111);
    int  n=maxi.size();
    for(int i=0;i<n;i++){
       cout<<maxi.top()<<" ";
    }
}