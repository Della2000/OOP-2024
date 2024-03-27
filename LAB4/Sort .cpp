#include "Sort.h"
#include <stdio.h> 
#include <time.h>
#include <stdlib.h>
#include <stdarg.h>
#include <vector>



Sort::Sort(int nr_elemente, int max_elemente, int min_elemente)
{
	this->m_nr_elemente = nr_elemente;
	m_vector = new int[nr_elemente];
	time_t t;
	srand((unsigned)time(&t));
	for (int i = 0; i < nr_elemente; i++) {
		m_vector[i] = min_elemente + rand() % (max_elemente - min_elemente + 1);
	}
}

Sort::Sort(int* estera, int nr_elemente)
{
	m_vector = new int[nr_elemente];
	for (int i = 0; i < nr_elemente; i++) {
		m_vector[i] = estera[i];
	}
}

Sort::Sort(int count) : m_vector(new int[count] { }) {

}


Sort::Sort(int counting, ...)
{
	this->m_count = counting;
	m_vector = new int[counting];
	va_list vl;
	va_start(vl, counting);
	for (int i = 0; i < counting; i++)
	{
		m_vector[i] = va_arg(vl, int);
	}
	va_end(vl);
}

Sort::Sort(char* c)
{
	//parcurgem sirul si facem transformarile in numar
}

void Sort::InsertSort(bool ascendent)
{
	this->m_vector;

	for (ascendent = 1; ascendent < m_nr_elemente; ascendent++) {
		int key = m_vector[ascendent];
		int i = ascendent - 1;

    	while (i >= 0 && m_vector[i] > key) {
			m_vector[i + 1] = m_vector[i];
			i = i - 1;
		}
		m_vector[i + 1] = key;
	}

}

void Sort::QuickSort(bool ascendent)
{
}

void Sort::BubbleSort(bool ascendent)
{ 
	this->m_vector;
	for (int i = 0; i < m_nr_elemente; i++) {
		for ( ascendent = i + 1; ascendent < m_nr_elemente; ascendent++) {
			if (m_vector[i] > m_vector[ascendent]) {
				ascendent = false;
				int temp = m_vector[i];
				m_vector[i] = m_vector[ascendent];
				m_vector[ascendent] = temp;

			}
			else
				ascendent = true;
		}
	}
	
}

void Sort::Print()
{
	this-> m_vector;
	for (int i = 0; i < m_nr_elemente; i++) {
		printf("%d ", m_vector[i]);
	}
}

int Sort::GetElementsCount()
{
	this-> m_vector;
	int count = 0;
	for (int i = 0; i < m_nr_elemente; i++) {
		if (m_vector[i] != '0') {
			count++;
		}
	}
	return count ;
}

int Sort::GetElementFromIndex(int index)
{
	this->m_vector;
	return m_vector[index];
}
