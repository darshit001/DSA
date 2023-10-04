#include<bits/stdc++.h>
using namespace std;

void arrayr(int a[], int n, int i) {
   if(i >= n) {
      return;
   }
   arrayr(a, n, i+1);
   cout << a[i] << endl;
}

int main() {
    int a[5] = {10, 20, 30, 40, 50};
    int n = 5;
    int i = 0;
    arrayr(a, n, i);
    return 0;
}
