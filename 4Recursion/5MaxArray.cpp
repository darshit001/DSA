#include<bits/stdc++.h>
using namespace std;

void arrayr(int a[], int n, int i,int& max) {
   if(i >= n) {
      return;
   }
   if(a[i]>max){
    max=a[i];
   }
   arrayr(a, n, i+1,max);

}

int main() {
    int a[5] = {10, 20, 30, 40, 50};
    int n = 5;
    int i = 0;
    int max=INT_MIN;
    arrayr(a, n, i,max);
    cout<<max<<endl;
    return 0;
}
