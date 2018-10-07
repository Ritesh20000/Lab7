#include <iostream>
using namespace std;
//function to call
int foo(int n){
	
	//condition(add number with prev no.)
	if ( n>1){
	return foo(n-2)+foo(n-1);
}
	
	else
	
	return 1;
}
//main
int main(){
	cout << "enter n to find nth fibbonacci" <<endl;
	int n;
	cin >>n;
	cout << foo(n-1) <<endl;
return 0;
}

