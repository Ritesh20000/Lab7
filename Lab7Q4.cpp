#include <iostream>
using namespace std;
//function to call
int foo(int n){
	
	//condition
	if(n == 0 ){
	return 0;
}
	//call function that will keep adding
	
	
	return n+foo(n-1);
}
//main
int main(){
	cout << "enter number upto which to find sum" <<endl;
	int n;
	cin >>n;
	cout << foo(n) <<endl;
return 0;
}

	
