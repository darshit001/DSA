#include<bits/stdc++.h>
using namespace std;

void printdigit(int n) {
   if(n==0) {
      return;
   }
   int newval=n/10;
   printdigit(newval);
   int digit=n%10;
   cout<<digit<<endl;
}

int main() {
    int n=356;
    printdigit(n);
}
