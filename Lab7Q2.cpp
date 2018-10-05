#include <iostream>
using namespace std;
//function to call
int foo(int n){
	
	//condition
	if(n == 0){
	return 0;
}
	//call function
	else 
	cout <<n<<endl;
	return foo(n-1);
}
//main
int main(){
	cout << "enter number upto which to print" <<endl;
	int n;
	cin >>n;
	cout << foo(n) <<endl;
return 0;
}

	
