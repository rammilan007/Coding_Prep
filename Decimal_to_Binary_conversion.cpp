// Decimal to binary using Recursion

#include <iostream>
#include <cmath>
using namespace std;

void decimalToBinary(int n){
	if(n==1) cout<<1;
	else{
		
		DecimalToBinary(ceil(n/2));
		cout<< n%2;
	}
}
int main() {
	// your code goes here
	int n;
	cin>>n;
	f(n);
	return 0;
}
Chat conversation end
Type a message...
