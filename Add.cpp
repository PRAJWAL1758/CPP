#include <iostream>
using namespace std;

int main() {    
    	int divisor, divident ,quotient ,remainder;
	
	cout<<"Enter a divident ";
	cin>>divident;
	cout<<"Enter a divisor ";
	cin>>divisor;
	
	quotient=divident/divisor;
	remainder=divident%quotient;
	
	cout<<"Quotient = "<<quotient;
	cout<<"Remainder = "<<remainder;
}
