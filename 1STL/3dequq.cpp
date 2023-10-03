#include<bits/stdc++.h>
using namespace std;
int main(){
    deque<int> a;
    a.push_back(3);
    a.push_front(1);
    // a.pop_back();
    // a.pop_front();
    // cout<<a.at(1)<<endl;
    a.erase(a.begin(),a.begin()+1);
    

     for(int i:a){
        cout<<i<<" ";
    }

}