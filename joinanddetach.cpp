#include<iostream>
#include<thread>

using namespace std;

void run(int x)
{
    for(int a=0; a<x; a++)
    {
        cout << a << endl;
    }
}
int main()
{
    std::thread t1(run,10);
    t1.join();
    std::thread t2(run,20);
    t2.detach();
}
