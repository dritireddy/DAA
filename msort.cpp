#include<iostream>
using namespace std;

void merge(int a[],int l, int m,int h){
	int i=l;
	int b[50];
	int j=m+1;
	int k=l;
	while((i<=m)&&(j<=h)){
		if(a[i]<=a[j]){
			b[k]=a[i];
			i++;
			k++;
		}
		else {
			b[k]=a[j];
			j++;
			k++;
		}
		
	}
	if(i>m){
		for (int x=j;x<=h;x++,k++)
		b[k]=a[x];
	}
	else {
		for (int x=i;x<=m;x++,k++)
		b[k]=a[x];

	}
	
	for (int x=l;x<=h;x++)
		a[x]=b[x];

}

void mergesort(int a[],int l,int h){
	if(l<h){
		int m=(l+h)/2;
		mergesort(a,l,m);
		mergesort(a,m+1,h);
		merge(a,l,m,h);
	}
}
 int main(){
 	int a[100],n;
 	cout<<"enter no of elements"<<endl;
 	cin>>n;
 	cout<<"elements?"<<endl;
 	for(int i=0;i<n;i++)
 	cin>>a[i];
 	mergesort(a,0,n-1);
 	for(int i=0;i<n;i++)
 	cout<<a[i]<<" ";
 	return 0;
 }
