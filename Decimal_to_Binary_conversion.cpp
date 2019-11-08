#include <iostream>
#include <cmath>
using namespace std;
void f(int n){
	if(n==1) cout<<1;
	else{
		
		f(ceil(n/2));
		cout<< n%2;
	}
}
int main() {
	// for integer part to binary
	double n;
	cin>>n;
	f(n);
	double d; int i;
	i=n; //integer part
	d=n-i;//decimal part
	cout<<".";
	// below part is for converting decimal fraction
	while(true){//for finding upto precision k ; run loop k times only
		i=d*2;
		cout<<i;
		d=d*2-i;
		if(d==0) break;
	}
	return 0;
}
