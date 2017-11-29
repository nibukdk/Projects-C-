#include <iostream>
#include <string>

using namespace std;
int main(){

								int numToCheck;
								cout<<"Input an integer: ";
								cin>>numToCheck;
								int val= numToCheck%2;

								switch(val)
								{
								case 1:
																cout<<"The number "<< numToCheck<<" is odd.\n";
																break;
								case 0:
																cout<<"The number "<< numToCheck<<" is even.\n";
																break;
								default:
																cout<<"System error";


								}

								return 0;
}
