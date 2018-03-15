#ifndef TIME_H
#define TIME_H

// CClockType header file : class declaration
class CClockType{
	private:
		int hr, min, sec;

	public :
		//constructor : declare a way to initialize our member variables
		// how to write a constructor (special member function,
		// where the function name is the class name and which syntax is similar to member function but
		// the constructor need no return specifier
		// we can declare diverse constructors
		CClockType();
		CClockType(int hours, int minutes, int seconds);

		//destructor : special member function which can be used to define how to release all members variables
		//only one destructor is allowed without parameters and with ~ leading the function name
		~CClockType();

		void setTime(int hours, int minutes, int seconds); //member function prototype
		void printTime();
		//void getTime(int *hours, int *minutes, int *seconds);
		void incrementTimeBySeconds();
		void incrementTimeByMinutes();
		void incrementTimeByHours();
};

#endif // TIME_H
