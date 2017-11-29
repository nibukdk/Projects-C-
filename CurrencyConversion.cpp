#include <iostream>
#include <string>

using namespace std;
int main(){

								float exRate= 0.727802;
								float givenAmount;

								cout <<"How much dollars do you want to exchange:";
								cin>>givenAmount;
								float afterExchange= givenAmount*exRate;

								cout<<"Amount in euros: "<<afterExchange<<"\n";
								return 0;
}
