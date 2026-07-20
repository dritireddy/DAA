#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter number"<<endl;
	cin>>n;
	while(n>0){
		n=n>>1;
	}
	if (n==0)
	cout<<"div by 2"<<endl;
	else cout<<"not";
	return 0;
}
