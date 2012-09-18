#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

using namespace std;
public class Chatbot
{
public:
	// chatbot-related data declarations
	string cbOutput;

	// user-related data declarations
	string uInput;
	string uKeywordsArray[];



	// member functions
	void showChatbotOutput() {
		cout << "Chatbot says hi" << endl;
	}

};

namespace chatter {
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

	Chatbot Alpha;
	Alpha.showChatbotOutput();


	/*srand((int)time(NULL));
	chatter::outputCB = chatter::greetingsArrayCB[rand() % 5];

	cout<< endl<< endl;

	chatter::showOutputCB();*/
	system ("pause");
	main();

}