#include <iostream>
#include <string>

using namespace std;
int main(){

								int usrInput;
								cout<<"Input an integer:";
								cin>>usrInput;
								int i=1;
								int factorial=1;
								while(i<=usrInput) {
																factorial=factorial*i;
																i++;
								}
								cout<<"The factorial of number "<<usrInput<<" is "<<factorial<<"\n";
								return 0;
}
