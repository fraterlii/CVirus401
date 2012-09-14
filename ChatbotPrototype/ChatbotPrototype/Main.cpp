#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

namespace ChatBot {
	#include <string>
	using namespace std;

	string outputCB;
	string greetingsArrayCB[4] = {"WHERE WERE THE OTHER DRUGS GOING?!", "SWEAR TO ME!", "DO I LOOK LIKE A COP?!", "WHERE ARE THEY?!"};
	
	// Displays the std::string value of ChatBot variable 'outputCB'
	void showOutputCB(){
		cout<< outputCB << endl;
	}
}

using namespace std;

void main(){
	srand((int)time(NULL));
	ChatBot::outputCB = ChatBot::greetingsArrayCB[rand() % 5];

	cout<< endl<< endl;

	ChatBot::showOutputCB();
	system ("pause");
	main();

}