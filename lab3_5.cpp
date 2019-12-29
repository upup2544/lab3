#include<iostream>
using namespace std;

int main(){
	string text1,text2;
	int n,count=0;
	cout<<"Enter the First text: ";
	cin>>text1;
	cout<<"Enter the Second text: ";
	cin>>text2;
	cout<<"Enter N: ";
	cin>>n;
	while(count<n){
		if(count%2==0){
			cout<<text1<<" ";
		}else{
			cout<<text2<<" ";
		}
		count=count+1;
	}
	return 0;
}