#include <iostream>

using namespace std;

int largest(int first, int second, int third);

intsmallest(int first, int second, int third);

int main()

{

        int number1, number2, number3, largestnumber,smallestnumber;

        cout << "Input the first integer";

        cin >> number1;

        cout << "Input the second integer:";

        cin >> number2;

        cout << "Input the third integer:";

        cin >> number3;

        largestnumber = largest(number1, number2, number3);

        smallestnumber =smallest(number1, number2, number3);

        cout << "The largest number was " << largestnumber;

        cout << " and the smallest " <<smallestnumber << "." << endl;
}


int largest(int first, int second, int third){
        int largestNum;
        if (first>second && first>third) {
                largestNum= first;
        }
        else if(second>first && second>third) {
                largestNum= second;
        }
        else if(third>first && second<third) {
                largestNum= third;
        }
        else{
                cout<<"Error occured in comparision";
        }
        return largestNum;
}

int smallest(int first, int second, int third){
        int smallestNum;
        if (first<second && first<third) {
                smallestNum= first;
        }
        else if(second<first && second<third) {
                smallestNum= second;
        }
        else if(third<first && second>third) {
                smallestNum= third;
        }
        else{
                cout<<"Error occured in comparision";
        }
        return smallestNum;
}
