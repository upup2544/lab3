#include<iostream>
using namespace std;

int main(){
	float i=6,ans;
	while(i<20){
		ans=ans+(1/i);
		i=i+1;
	}
	cout<<" x = "<<ans;
	
	return 0;
}