#include "cel.h"
#include <string>

Cel::Cel();

Cel::Cel(int meet, int meetBefore){//std::string name
	//this->name = name;
	this->meet = meet;
	//this->knownFor = knowFor;
	this->meetBefore = meetBefore;
}
		
//accessors
std::string Cel::getName(){
	return this->name;
}
int Cel::getMeet(){
	return this->meet;
}
std::string Cel::getKnownFor(){
	return this->knownFor;
}
int Cel::getMeetBefore(){
	return this->meetBefore;
}
	
//Mutator
void Cel::setName(std::string name){
	this->name = name;
}
void Cel::setMeet(int meet){
	this->meet = meet;
}
void Cel::setKnownFor(std::string knownFor){
	this->knownFor = knownFor;
}
void Cel::setMeetBefore(int meetBefore){
	this->meetBefore = meetBefore;
}

