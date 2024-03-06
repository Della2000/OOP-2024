#include<iostream>
#include "Student.h"


void StudentInfo::setName(const char* S_name)
{
	strcpy_s(this->name, S_name);
}
char* StudentInfo::getName()
{
	return name;
}
void StudentInfo::setMathG(float Z)
{
	if (Z > 0 && Z <= 10) 
		this->mathGrade = Z;

}

float StudentInfo::getMathG()
{
	return mathGrade;
}
void StudentInfo::setEngG(float X)
{
	if(X>0 && X <=10)
		this->engGrade = X;
	
}
float StudentInfo::getEngG()
{
	return engGrade;
}
void StudentInfo::setHistG(float Y)
{
	if (Y > 0 && Y <= 10) {
		this->historyGrade = Y;
	}
}
float StudentInfo::getHistG()
{
	return historyGrade;
}
float StudentInfo::AverageG()
{
	float average = (mathGrade + engGrade + historyGrade) / 3;
	return average;
}