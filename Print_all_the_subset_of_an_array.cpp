#include<bits/stdc++.h>
using namespace std;
int main(){
	int num;
	cin>>num;
	int arr[num];
	for(int i=0;i<num;i++){
		cin>>arr[i];
	}
//	int total = 1<<num;
	int total = pow(2,num)-1;
	for(int k=1;k<=total;++k){
		for(int i=0;i<num;i++){
			if(k&(1<<i)){
				cout<<arr[i]<<" ";
			}
		} 
		cout<<endl;
	}
}
