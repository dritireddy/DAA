#include<iostream>
#include<vector>
using namespace std;
int knap(vector<int> &we, vector<int> &va, int n, int w){
    vector<vector<int > > dp(n+1, vector<int>(w+1,0));
    for(int i=1;i<=n;i++){
        for(int j=0;j<=w;j++){  
            if(we[i-1]>j){
                dp[i][j]=dp[i-1][j];
            }
            else dp[i][j]=max(dp[i-1][j], va[i-1]+dp[i-1][j-we[i-1]]);
        }
    }
    return dp[n][w];
}
int main(){
	int n;
	cout<<"enter n"<<endl;
	cin>>n;
	vector<int> weights(n), values(n);
    cout <<"enter weight"<<endl;
    for (int i=0;i<n;i++) {
		cin >> weights[i];
	}
    cout <<"values?"<<endl;
    for (int i=0;i<n;i++) {
	cin >> values[i];
	}
    int w;
    cout<<"we?"<<endl;
    cin>>w;
    cout << "profit"<<knap(weights,values,n,w) << endl;
 
    return 0;

}
