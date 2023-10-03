#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int> a;
    a.push(1);
    a.push(11);
    a.push(111);
    cout<<a.front()<<endl;
    a.pop();
    cout<<a.front()<<endl;
}