#include<iostream>
using namespace std;
void swap(int &a, int &b){
	int temp=a;
	a=b;
	b=temp;
}
int rev(int arr[],int n,int start, int end)
{
	while(start<end){
		swap(arr[start], arr[end]);
        start++;
        end--;

	}
}
void rotate(int arr[], int n, int k){
	k=k%n;
	rev(arr,n,0,n-1);
	rev(arr,n,0,k-1);
	rev(arr,n,k,n-1);
}
int main(){
	int a[50],n,k;
	cout<<"enter number of elemnts"<<endl;
	cin>>n;
	cout<<"elements?"<<endl;
	for(int i=0;i<n;i++)
	cin>>a[i];
	cout<<"enter position to swap"<<endl;
	cin>>k;
	rotate(a,n,k);
	cout<<"array is:"<<endl;
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
	return 0;
}
