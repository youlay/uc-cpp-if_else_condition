#include <iostream>
using namespace std;

int main(){
	int x,y;
	char opt;

	cout <<"Input x = ";
	cin >> x;
	cout <<"\nInput y = ";
	cin >>y;
	cout <<"\nInput Opt = ";
	cin >>opt;
	
	if(opt == '+'){
		cout << x + y;
	} else if(opt == '-'){
		cout <<"\n"<< x - y;
	}else{
		cout << "Can not calculate";
	}
	
	return 0;
}
