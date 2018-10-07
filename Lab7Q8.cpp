#include<iostream>
using namespace std;

//Writting function to call
int foo(int n){
	if(n == 0){	
	}
	else
	return (n%10) + foo(n/10);
}
//Writting main function.
int main(){
	int n;
	cout << "enter number of which to sum the digits"<<endl;
	cin >> n;
	int sum= foo(n); //calling the function foo
	cout << "Sum of the didgits is "<<sum<<endl;
	return 0;
}
