/*
 * Smalltalk_Brit.cpp
 *
 *  Created on: Nov 21, 2019
 *      Author: Tim Siltz
 */
#include "./includes/Smalltalk_Brit.h"
#include "./includes/constants.h"

//appropriate phrases
Smalltalk_Brit::Smalltalk_Brit(int iPerson) :
		Smalltalk(BRIT, iPerson) {
	populatePhrases();
}

//destructor should always be virtual
Smalltalk_Brit::~Smalltalk_Brit(void) {
}

//british phrases
void Smalltalk_Brit::populatePhrases() {
	mySmallTalk.push_back(BRIT_1);
	mySmallTalk.push_back(BRIT_2);
	mySmallTalk.push_back(BRIT_3);
	mySmallTalk.push_back(BRIT_4);
	mySmallTalk.push_back(BRIT_5);
	mySmallTalk.push_back(BRIT_6);
	mySmallTalk.push_back(BRIT_7);
}
