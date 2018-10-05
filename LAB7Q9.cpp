#include <iostream>
using namespace std;
//function to call
int foo(int n){
	
	//condition
	if ( n>1){
	return n*foo(n-1);
}
	//call function that will keep multiplying
	else
	
	return 1;
}
//main
int main(){
	cout << "enter number upto which to find factorial" <<endl;
	int n;
	cin >>n;
	cout << foo(n) <<endl;
return 0;
}

	
