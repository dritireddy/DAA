#include <iostream>
using namespace std;
 
int climbStairs(int n) {
    if (n<=2) 
	return n;
    int p2 = 1, p1 = 2;
    for(int i=3;i<=n;i++) {
        int curr=p1+p2;
        p2=p1;
        p1=curr;
    }
    return p1;
}
 
int main() {
    int n;
    cout << "enter n";
    cin >> n;
 
    cout << climbStairs(n) << endl;
 
    return 0;
}

