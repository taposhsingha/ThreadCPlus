#include<iostream>
#include<thread>
using namespace std;
void task(int x)
{
    for(int i=0; i<x; i++)
    {
        cout <<i<<endl;
    }
}
int main()
{
    //function pointer
    std::thread t1(task,20);
    t1.join();
    //using lambda functions
    auto task2 = [](int y)
    {
        for(int j=0; j<y; j++)
        {
            cout<< j <<endl;
        }
    };
    std::thread t2(task2,10);
    t2.join();
    //functors
    class Task3
    {
    public:
        void operator()(int z)
        {
            for(int k=0; k<z; k++)
            {
                cout<< k << endl;
            }
        }
    };
    std::thread t3((Task3()),10);
    t3.join();
    //Non-static members
    class Task4
    {
    public:
        void run(int f)
        {
            for(int o=0; o<f; o++)
            {
                cout <<o << endl;
            }
        }
    };
    Task4 b;
    std::thread t4(&Task4::run,&b,10);
    t4.join();
    return 0;
}
