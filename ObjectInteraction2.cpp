#include <iostream>
using namespace std;

//Class Calculator
class Calculator
{
public:

int Sum(int first, int second);
};

int Calculator::Sum(int first, int second)
{
        int sum =first + second;
        return sum;
}
//Class Printer

class Printer {
public:
void Print();
};

void Printer::Print(){
        int num1, num2;
        cout<<"Give a first integer: ";
        cin>>num1;
        cout<<"Give a second integer: ";
        cin>>num2;
        //Calling Class Caculator
        Calculator calculation;
        int sum=calculation.Sum(num1,num2);
        cout<<"Sum: "<<sum;
}
int main()
{
        Printer object;
        object.Print();
}
