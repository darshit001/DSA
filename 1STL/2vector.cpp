#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> a;
    a.push_back(3);/**/    a.push_back(54);
    a.push_back(387);
    cout<<a.size()<<endl;
    cout<<a.front()<<endl;
    cout<<a.back()<<endl;
    a.pop_back();
    for(int i:a){
        cout<<i<<" ";
    }
    vector<int> aa(5,2);
     for(int i:aa){
        cout<<i<<" ";
    }

}