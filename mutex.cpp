#include<iostream>
#include<thread>
#include<mutex>
using namespace std;
int a= 0;
std::mutex m;
void addMoney()
{
    m.lock();
    ++a;
    m.unlock();
}
int main(){
    std::thread t1(addMoney);
    std::thread t2(addMoney);
    t1.join();
    t2.join();
    cout << a << endl;
return 0;}
