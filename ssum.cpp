#include<iostream>
using namespace std;
 int main(){
 	int a[100],n,sum=0;
 	float avg;
 	cout<<"enter no of elements"<<endl;
 	cin>>n;
 	cout<<"elements?"<<endl;
 	for(int i=0;i<n;i++)
 	cin>>a[i];
 	for(int i=0;i<n;i++){
 		sum=sum+a[i];	
	 }
 	avg=(float)sum/n;
 	cout<<"sum= "<<sum<<endl<<"avg= "<<avg<<endl;
 	return 0;
 }
