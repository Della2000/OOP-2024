#include<iostream>
#include "Student.h"
#include "Global.h"

using namespace std;

int main()
{
    StudentInfo s1;
    s1.setEngG(7.5);
    printf("%d\n", s1.getEngG());
    s1.setHistG(10);
    printf("%d\n", s1.getHistG());
    s1.setName("Della");
    printf("%s",s1.getName());
    return 0;
}
