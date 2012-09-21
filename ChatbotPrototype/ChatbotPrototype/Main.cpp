#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

using namespace std;
public class ResponseNode 
{
public:
	string response;
	int outputCount;

	// class constructor
	ResponseNode(string init) {
		response = init;
		int outputCount = 0;
	}

	ResponseNode() {
		int outputCount = 0;
	}
};

using namespace std;
public class Chatbot
{
private:
	

public:
	// chatbot-related data declarations
	string cbOutput;
	ResponseNode x[5];

	// user-related data declarations
	string uInput;
	string uKeywordsArray[];

	// class constructor
	Chatbot() {
		configureResponses();
	}

	// member functions
	void showChatbotOutput() {
		cout << cbOutput << endl;
	}

	void configureResponses() {
		
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

	Chatbot Alice;
	/*ResponseNode x("sorry");
	ResponseNode assertiveResponses[] = {"I'm not saying another word.", "I'd like to speak with my attorney."};
	Alice.cbOutput = assertiveResponses[0].response;*/
	Alice.showChatbotOutput();


	/*srand((int)time(NULL));
	chatter::outputCB = chatter::greetingsArrayCB[rand() % 5];

	cout<< endl<< endl;

	chatter::showOutputCB();*/

	system ("pause");
	main();

}