#include<bits/stdc++.h>
using namespace std;
int main(){
	int num, count;
	cin>>num>>count;
	int arr[num];
	for(int i=0;i<num;i++){
		cin>>arr[i];
	}
	int total = pow(2,num)-1;
	for(int k=1;k<=total;++k){
		if(__builtin_popcount(k)==count){
		for(int i=0;i<num;i++){
			if(k&(1<<i)){
				cout<<arr[i]<<" ";
			}
		} 
		cout<<endl;
	}
}
}


