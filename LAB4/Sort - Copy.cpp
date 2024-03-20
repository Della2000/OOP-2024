#include "Sort.h"
#include <stdio.h> 
#include <time.h>
#include <stdlib.h>
#include <stdarg.h>



Sort::Sort(int nr_elemente, int max_elemente, int min_elemente)
{
	this->nr_elem = nr_elemente;
	vector = new int[nr_elemente];
	time_t t;
	srand((unsigned)time(&t));
	for (int i = 0; i < nr_elemente; i++) {
		vector[i] = min_elemente + rand() % (max_elemente - min_elemente + 1);
	}
}

Sort::Sort(int* estera, int nr_elemente)
{
	vector = new int[nr_elemente];
	for (int i = 0; i < nr_elemente; i++) {
		vector[i] = estera[i];
	}
}

Sort::Sort(int count) : vector(new int[count] { }) {

}


Sort::Sort(int counting, ...)
{
	this->count = counting;
	vector = new int[counting];
	va_list vl;
	va_start(vl, counting);
	for (int i = 0; i < counting; i++)
	{
		vector[i] = va_arg(vl, int);
	}
	va_end(vl);
}

Sort::Sort(char* c)
{
	printf("....\n");
	//parcurgem sirul si facem transformarile in numar
}

void Sort::InsertSort(bool ascendent)
{


}

void Sort::QuickSort(bool ascendent)
{
}

void Sort::BubbleSort(bool ascendent)
{
	
}

void Sort::Print()
{
}

int Sort::GetElementsCount()
{
	return 0;
}

int Sort::GetElementFromIndex(int index)
{
	return 0;
}
