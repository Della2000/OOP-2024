#pragma once
class Sort
{
    // add data members
    int* vector;
    int count;
    int nr_elem;

public:
    //create the list that needs to be sorted out of random values within a specific interval(min, max).
    //The constructor will receive 3 parameters(the number of elements in the list, minimum value, maximum value).
    Sort(int nr_elemente, int max_elemente, int min_elemente);

    //create the list that needs to be sorted from an initialization list
    Sort(int* estera, int nr_elemente);

    //create the list that needs to be sorted from an existing
    //vector(the constructor will have two parameters - one being the vector, the other one being the number of elements from the vector)
    Sort(int count);

    //create the list that needs to be sorted using variadic parameters(use va_args for this)
    Sort(int count, ...);

    //create the list that needs to be sorted from a string(e.g. "10,40,100,5,70"->each number is separated 
    //from the rest of the number with a comma).It is assumed that the string is correctly written(no space, only numerical charactersand commas)
    Sort(char* c);

    void InsertSort(bool ascendent = false);
    void QuickSort(bool ascendent = false);
    void BubbleSort(bool ascendent = false);
    void Print();
    int  GetElementsCount();
    int  GetElementFromIndex(int index);
};

