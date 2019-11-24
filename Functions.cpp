/*
 * Functions.cpp
 *
 *  Created on: Nov 21, 2017
 *      Author: Tim Siltz
 */
#include <iostream>
#include <memory>

#include "./includes/Functions.h"
#include "./includes/Smalltalk_American.h"
#include "./includes/ST_American_DonutEnthusiest.h"
#include "./includes/Smalltalk_Brit.h"
#include "./includes/Watch.h"
#include "./includes/constants.h"

//vector with appropriate numbers of Smalltalk_Brit, Smalltalk_American and ST_American_DonutEnthusiest
//objects using unique pointers. Since we are using c++11 returning this vector by value is fine since the
//compiler will move the vector on return rather than recreate it (this means there is no copy penalty)
std::vector<std::unique_ptr<Smalltalk>> getPeople(int numBrit, int numAmerican,
		int numbAmericanDonutEnthusiest, int numWatches) {

	//vector to hold SmallTalk unique pointers
	std::vector<std::unique_ptr<Smalltalk>> myVector;

	//add brits to vector
	for (int i = 0; i < numBrit; ++i) {
		myVector.push_back(std::unique_ptr<Smalltalk>(new Smalltalk_Brit(i)));
	}

	//add americans to vector
	for (int i = 0; i < numAmerican; ++i) {
		myVector.push_back(
				std::unique_ptr<Smalltalk>(new Smalltalk_American(i)));
	}

	//add american donut enthusiest to vector
	for (int i = 0; i < numbAmericanDonutEnthusiest; ++i) {
		myVector.push_back(
				std::unique_ptr<Smalltalk>(new ST_American_DonutEnthusiest(i)));
	}

	//create some watches (as long as number watches <= numb people)
	//then give the watches away to first NUM_WATCHES people in the vector
	//when you are finished using the vector you return from this function
	if (numWatches <= myVector.size()) {
		for (int i = 0; i < numWatches; i++) {
			std::unique_ptr<Watch> someWatches(new Watch);
			myVector[i]->giveWatch(someWatches);
		}
	}

	if (numWatches > myVector.size()) {
		for (int i = 0; i < myVector.size(); i++) {
			std::unique_ptr<Watch> someWatches(new Watch);
			myVector[i]->giveWatch(someWatches);
		}
	}

	//return vector
	return myVector;
}
