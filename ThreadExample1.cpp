#include<iostream>
#include<thread>
using namespace std;

unsigned long long int a=0,b=0;
void firstTask()
{
    for(int i=0; i<1000000; i++)
    {
        a=a+i;
    }
    cout<< a << endl;
}
void secondTask()
{
    for(int j=11; j<2000000; j++)
    {
        b=b+j;
    }
    cout<< b << endl;
}

int main()
{
    firstTask();
    secondTask();
    return 0;
}
