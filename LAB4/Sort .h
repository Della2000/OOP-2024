#pragma once
class Sort
{
    int* m_vector;
    int m_count;
    int m_nr_elemente;
    int m_index;

public:
    Sort(int nr_elemente, int max_elemente, int min_elemente);

    Sort(int* estera, int nr_elemente);

    Sort(int count);

    Sort(int count, ...);

    Sort(char* c);

    void InsertSort(bool ascendent = false);
    void QuickSort(bool ascendent = false);
    void BubbleSort(bool ascendent = false);
    void Print();
    int  GetElementsCount();
    int  GetElementFromIndex(int index);
};
