#include<iostream>
#include<thread>
#include<chrono>
#include<algorithm>
using namespace std;
using namespace std::chrono;

unsigned long long int a=0,b=0;
void firstTask()
{
    for(int i=0; i<100000000; i++)
    {
        a=a+i;
    }
    cout<< a << endl;
}
void secondTask()
{
    for(int j=11; j<20000000; j++)
    {
        b=b+j;
    }
    cout<< b << endl;
}

int main()
{
    auto start = high_resolution_clock::now();
    std::thread t1(firstTask);
    std::thread t2(secondTask);
    t1.join();
    t2.join();
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << duration.count()/1000000<<endl;
    return 0;
}
