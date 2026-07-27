#include<iostream>
using namespace std;

int number(int arr[],int n)
{
	int result=0;
	for(int i=0;i<n;i++){
		result=result^arr[i];
	}
	return result;
}
int main(){
	int a[50],n;
	cout<<"enter number of elemnts"<<endl;
	cin>>n;
	cout<<"elements?"<<endl;
	for(int i=0;i<n;i++)
	cin>>a[i];
	int no=number(a,n);
	cout<<"single number is:"<<no;
	return 0;
}
