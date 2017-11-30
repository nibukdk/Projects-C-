#include <iostream>
#include <string>
using namespace std;

class AskAndPrint {
public:

void DoYourThing(string text);
};

void AskAndPrint::DoYourThing(string text){
								char word[50];
								cout<<text;
								cin.get(word,50);
								cout<<"\n"<<word;
}

int main (void)

{

								char charstring[] = "Write the text for printing:";

								AskAndPrint thing;

								thing.DoYourThing(text);

}
