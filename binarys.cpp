#include <iostream>
using namespace std;

int bin(int a[], int x, int l, int h){
	if(l>h)
	return -1;
	else{
		int mid=(l+h)/2;
		if(x==a[mid])
		return mid+1;
		
		else if(x<a[mid]){
			bin(a,x,l,mid-1);
		}
		else bin(a,x,mid+1,h);
	}
	
}
int main(){
    int a[5]={2,5,3,7,1};
    cout<<bin(a,3,0,4);
    return 0;
}
