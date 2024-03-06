#pragma once
#define _CRT_SECURE_NO_WARNINGS

class StudentInfo
{
	char name[30];
	float mathGrade;
	float engGrade;
	float historyGrade;
public:
	void setName(const char* S_name);
	char* getName();
	void setMathG(float X);
	float getMathG();
	void setEngG(float X);
	float getEngG();
	void setHistG(float X);
	float getHistG();
	float AverageG();
};