#include<iostream>
using namespace std;

int main(){
	float i=2,ans;
	while(i<70){
		ans=ans+(1/i);
		i=i+1;
	}
	cout<<" x = "<<ans;
	
	return 0;
}