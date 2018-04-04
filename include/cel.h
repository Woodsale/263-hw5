#ifndef __H_CELEBRITY__
#define __H_CELEBRITY__

#include <string>

class Cel{
	public:
		Cel(){};
		Cel(int meet, int meetBefore);	
		//accessors
		std::string getName();
		int getMeet();
		std::string getKnownFor();
		int getMeetBefore();
		
		//Mutator
		void setName(std::string make);
		void setMeet(int meet);
		void setKnownFor(std::string knownFor);
		void setMeetBefore(int meetBefore);
		
	private:
		std::string name;
		int meet;
		std::string knownFor;
		int meetBefore;
};

#endif
