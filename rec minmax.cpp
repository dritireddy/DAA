#include <iostream>
using namespace std;

void mm(int a[], int i, int j, int &max,int &min){
        if(i==j){
            max=a[i];
            min=a[i];
        }
        else if(i==j-1){
            if(a[i]<a[j]){
                max=a[j];
                min=a[i];   
            }
            else{
               max=a[i];
                min=a[j]; 
            }
        }
        else
    {
        int mid = (i + j) / 2;
        int max1, min1;
        mm(a, i, mid, max, min);
        mm(a, mid + 1, j, max1, min1);
        if(max<max1)
        max=max1;
        if(min>min1)
        min=min1;

    }
}
int main(){
    int a[5]={2,5,3,7,1};
    int max,min;
    mm(a,0,4,max,min);
    cout<<max<<" "<<min<<endl;
    return 0;
}
