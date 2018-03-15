#include "CClockType.h"
#include <iostream>

using namespace std;
int main(){

	CClockType myclock;
	myclock.printTime();

	myclock.setTime(10,9,35);
	myclock.printTime();

	CClockType yourclock;
	yourclock.setTime(10, 9, 36);
	yourclock.printTime();

	CClockType Figueroaclock (12, 0, 0);
	Figueroaclock.printTime();

	CClockType classClocks[10];
	for (int i = 0; i < 10; i++)
		classClocks[i].setTime(9,27,30);

	CClockType * ptrClock = & (classClocks[1]);
	ptrClock = &yourclock;
	ptrClock ->setTime(9, 32, 20);

	ptrClock = classClocks;
	for (int i = 0; i < 10; i++){
		ptrClock->setTime(9,27,30);
		ptrClock++;
	}

	int size = 2;
	ptrClock = new CClockType[size];
	CClockType * tmpClock = ptrClock;
	for (int i = 0; i < size; i++){
		tmpClock->setTime(9,27,30);
		tmpClock++;
	}

	delete [] ptrClock;

	cin.ignore(1124, '\n');
        cin.get();
	return 0;
}
