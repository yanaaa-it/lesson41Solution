#include<iostream>
using namespace std;
int main() {
	const int MARK_COUNT = 3;
	int array[MARK_COUNT];
	for (int i = 0; i < MARK_COUNT; i++)
	{
		cin>>array[i] ;
	}
	double avg = 0;
	for (int index = 0; index < MARK_COUNT; index++)
	{
		avg += array[index];
	}

	cout << "avarage mark is" << avg / 3 << endl;

	return 0;

}