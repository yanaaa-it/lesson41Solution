#include<iostream>
#define DEFUALT_SIZE 20
using namespace std;
int main() {
	int array[DEFUALT_SIZE];
	int length;
	do {
		cout << "input number";
		cin >> length;
	} while (length <= 0 && length > DEFUALT_SIZE);
	for (int i = 0; i < length; i++)
	{
		cin>>array[i] ;
	}
	double avg = 0;
	for (int index = 0; index < length; index++)
	{
		avg += array[index];
	}

	cout << "avarage mark is" << avg / length << endl;

	return 0;

}