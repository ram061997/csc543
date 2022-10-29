#include<iostream>
#include<array>
using namespace std;

int main(){
	int length;
	int arr[110];
	cout<<"Enter number of elements in the array";
	cin>>length;
	for (int k=0;k<length;k++){
		cin>>arr[k];
	}
	int target;
	cout<<"Enter target";
	cin>>target;
	int output[]={};
	for (int i=0;i<(length-1);i++){
		for (int j=i+1;j<length;j++){
			if((arr[i]+arr[j])==target){
				cout<<i;
				cout<<j;
				cout<<endl;
				
			}
		}
	}
}