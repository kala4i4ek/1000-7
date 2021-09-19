#include <iostream>
#include <thread>
#include <chrono>
using namespace std;
int main()
{
	int a = 1000;
	while (a > 0)
	{
		std::this_thread::sleep_for(200ms);
		cout <<a<<"-7=" << a << endl;
		a = a - 7;
	}
	return 0;
}
