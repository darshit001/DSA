#include<iostream>
using namespace std;

int sqrt(int n) {
    int start = 0;
    int end = n;
    int target = n;
    int ans = -1;
    int mid;

    while (start <= end) {
        mid = start + (end - start) / 2;

        if (mid * mid == target) {
            return mid;
        } 
        if (mid * mid > target) {
            end = mid - 1;
        } else {
            ans = mid;
            start = mid + 1;
        }
    }

    return ans;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int ans = sqrt(n);
    cout << "Square root is: " << ans << endl;

    double a=ans;
    int pre;
    cout<<"how many num you want after point"<<endl;
    cin>>pre;
    double step=0.1;
    for(int i=0;i<pre;i++){
        for(double j=a;j*j<=n;j=j+step){
            a=j;
        }
        step=step/10;
    }
    cout<<"ans final is "<<a<<endl;
    return 0;
}
