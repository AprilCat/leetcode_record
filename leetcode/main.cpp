#include <iostream>
#include <chrono>
using namespace std;
typedef std::chrono::time_point<std::chrono::high_resolution_clock> timer;
typedef std::chrono::duration<float> duration;

int main()
{
	timer startTime, endTime;
	duration timeDiff;
	startTime = std::chrono::high_resolution_clock::now();
	//TODO:cheke running time
	endTime = std::chrono::high_resolution_clock::now();
	timeDiff = endTime - startTime;
	cout << "This algo running time is " << timeDiff.count() * 1000 << " ms" << endl;
	char c;
	cin >> c;
	return 0;
}
