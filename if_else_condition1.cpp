#include <iostream> 
using namespace std; 
int main () { 
int number1, number2; 
char opt;
   cout << "Num 1 = "; 
   cin >> number1; 
   cout <<"\nNum 2 =";
   cin >> number2;
   cout <<"\nOpt = ";
   cin >> opt;
   
   switch(opt){
   	case '+':
   		cout << number1 + number2;
   		break;
   	case '-':
   		cout << number1 - number2;
   		break;
   	default:
   		cout << "my default";
   		break;
   }
   
//   if (number < 0 || number > 100) { 
//	cout << "wrong No"; 
//   } else if(number >= 0 && number < 40){ 
//	cout << "Fail"; 
//   } else if (number >= 40 && number < 59) { 
//	cout << "D Grade"; 
//   } else if (number >= 60 && number < 70) { 
//	cout <<" C Grade"; 
//   } else if (number >= 71 && number < 79) { 
//	cout << "B Grade"; 
//   } else if (number >= 80 && number < 89) { 
//	cout << "A Grade"; 
//   } else if (number >= 90 && number <= 100) { 
//	cout << "A+ Grade"; 
//   } 
}

