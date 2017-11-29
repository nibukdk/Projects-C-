#include <iostream>
#include <string>

using namespace std;
int main(){

								int num1, num2;
								int sum,diff,product,remainder;
								cout<<"Input first integer:";
								cin>>num1;
								cout<<"Input second integer:";
								cin>>num2;
								sum=num1+num2;
								diff=num1-num2;
								product=num1*num2;
								remainder=num1%num2;

								cout<<num1<<"+"<<num2<<" = "<<sum<<"\n";
								cout<<num1<<"-"<<num2<<" = "<<diff<<"\n";
								cout<<num1<<"*"<<num2<<" = "<<product<<"\n";
								cout<<"Remainder: "<<remainder<<"\n";

								return 0;
}
