#include"util.h"
#include"logic.h"

int main() {
	int vector[DEFUALT_SIZE];
	int length;
	string msg;
	do {
		cout << "input number of marks:";
		cin >> length;
	} while ( length > DEFUALT_SIZE);

	cout << "input student marks:";
	for (int i = 0; i < length; i++)
	{
		cin >> vector[i];
	}
	int negative = 0;
	int positiv = 0;
	for (int i = length - 1; i >= 0; i--) {
		if (vector[i]>0) {
			positiv += vector[i];
		}
		else {
			negative += vector[i];
		}
	}

	print(positiv,negative);

	return 0;
}
