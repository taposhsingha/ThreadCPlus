#include<iostream>
#include<thread>
using namespace std;

unsigned long long int a=0,b=0;
void firstTask()
{
    for(int i=0; i<1000000000; i++)
    {
        a=a+i;
    }
    cout<< a << endl;
}
void secondTask()
{
    for(int j=11; j<200000000; j++)
    {
        b=b+j;
    }
    cout<< b << endl;
}

int main()
{
    std::thread t1(firstTask);
    std::thread t2(secondTask);
    t1.join();
    t2.join();
    return 0;
}
