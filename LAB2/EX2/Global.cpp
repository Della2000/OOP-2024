#include "Global.h"

float MathCompare(StudentInfo* std1, StudentInfo* std2) {
	if (std1->getMathG() > std2->getMathG())
		return 1;
	if (std1->getMathG() < std2->getMathG())
		return -1;
	if (std1->getMathG() == std2->getMathG())
		return 0;
}


float EngCompare(StudentInfo* std1, StudentInfo* std2) {
	if (std1->getEngG() > std2->getEngG())
		return 1;
	if (std1->getEngG() < std2->getEngG())
		return -1;
	if (std1->getEngG() == std2->getEngG())
		return 0;
}


float HistCompare(StudentInfo* std1, StudentInfo* std2) {
	if (std1->getHistG() > std2->getHistG())
		return 1;
	if (std1->getHistG() < std2->getHistG())
		return -1;
	if (std1->getHistG() == std2->getHistG())
		return 0;
}


float AvrgCompare(StudentInfo* std1, StudentInfo* std2) {
	if (std1-> AverageG() > std2->AverageG())
		return 1;
	if (std1->AverageG() < std2-> AverageG())
		return -1;
	if (std1-> AverageG() == std2-> AverageG())
		return 0;
}
