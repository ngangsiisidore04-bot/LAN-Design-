#include<iostream>
using namespace std;
void diamond(int n){
	int i,j,k;
	for(i=1; i<=n; i++){
		for(j=1; j<=n-i; j++){
			cout<<" ";
		}
		for(k=1; k<=2*i-1; k++){
			cout<<"*";
		}
		cout<<endl;
	}
	for (i=n-1; i>=1; i--){
		for(j=1; j<=n-i; j++){
			cout<<" ";
		}
		for(k=1; k<=2*i-1; k++){
			cout<<"*";
		}
		cout<<endl;
	}
}
int main(){
	int size;
	cout<<"Enter size: ";
	cin>>size;
	diamond(size);
	return 0;
}