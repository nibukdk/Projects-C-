#include <iostream>
#include <string>

using namespace std;
int main(){
/*
   Program calculates the test grade average.
   Finish inputting with a negative number.
   Input grade (4-10) 3
   Input grade (4-10) 5
   Input grade (4-10) 7
   Input grade (4-10) 9
   Input grade (4-10) 11
   Input grade (4-10) -2
   You inputted 3 grades.
   Grade average: 7
 */

								cout<<"Program calculates the test grade average.\n";
								cout<<"Finish inputting with a negative number.\n";
								float usrInput;
								float newTotal=0.0;

								int i=0.0;

								do {
																cout<<"Input grade (4-10) ";
																cin>>usrInput;

																if(usrInput<0) {
																								break;
																}
																else if(usrInput>=4 && usrInput<=10) {
																								newTotal=usrInput+newTotal;
																								i=i+1;
																								continue;
																}
																else{
																								continue;
																}


								}
								while(usrInput>0.0);
								float count=i;
								//cout<<newTotal;

								float average=newTotal/count;
								cout<<"You inputted "<< count<<" grades.\n";
								cout<<"Grade average: "<<average<<"\n";
								return 0;
}
