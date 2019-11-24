/*
 * Smalltalk_American.cpp
 *
 *  Created on: Nov 21, 2019
 *      Author: Tim Siltz
 */
#include "./includes/Smalltalk_American.h"
#include "./includes/constants.h"

//appropriate phrases
//base class calls to set Nationality
Smalltalk_American::Smalltalk_American(int iPerson) :
		Smalltalk(AMERICAN, iPerson) {
	populatePhrases();
}

Smalltalk_American::Smalltalk_American(std::string myNationality, int iPerson) :
		Smalltalk(myNationality, iPerson) {
}

//destructor should always be virtual
Smalltalk_American::~Smalltalk_American(void) {
}

//american phrases
void Smalltalk_American::populatePhrases() {
	mySmallTalk.push_back(AMERICAN_PHRASE_1);
	mySmallTalk.push_back(AMERICAN_PHRASE_2);
	mySmallTalk.push_back(AMERICAN_PHRASE_3);
	mySmallTalk.push_back(AMERICAN_PHRASE_4);
	mySmallTalk.push_back(AMERICAN_PHRASE_5);
}
