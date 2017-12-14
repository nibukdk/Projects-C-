#include <iostream>
#include <string>

using namespace std;
int main(){

								int operationMode;
								int num1, num2;
								int add,sub,div,prod,remain;
								//Print Info
								cout<<"Choose desired calculation:\n";
								cout<<"1: subtraction\n";
								cout<<"2: addition\n";
								cout<<"3: multiplication\n";
								cout<<"4: division\n";
								cout<<"5: Remainder\n";

								//Ask for operation mode
								cout<<"Choose a calculation:";
								cin>>operationMode;

								//Input num1
								cout<<"Input first number:";
								cin>>num1;

								//Input num1
								cout<<"Input second number:";
							cin>>num2;

								//Calculation:
								add=num1+num2;
								sub=num1-num2;
								prod=num1*num2;
								div=num1/num2;
								remain=num1%num2;

								//Switching Operation and Display by user Choice
								switch(operationMode)
								{
								case 1:
																cout<<num1<<"-"<<num2<<" = "<<sub<<"\n";
																break;
								case 2:
																cout<<num1<<"+"<<num2<<" = "<<add<<"\n";
																break;
								case 3:
																cout<<num1<<"*"<<num2<<" = "<<prod<<"\n";
																break;
								case 4:
																cout<<num1<<"/"<<num2<<" = "<<div<<"\n";
																break;
								case 5:
																cout<<num1<<"%"<<num2<<" = "<<remain<<"\n";
																break;
								default:
																cout<<"Error encountered!\n";


								}

								return 0;
}
