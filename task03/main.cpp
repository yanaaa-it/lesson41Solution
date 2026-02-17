#include"util.h"
#include"logic.h"

int main() {
	int vector[DEFUALT_SIZE];
	int length;
	string msg;
	do {
		cout << "input number of marks:";
		cin >> length;
	} while (length <= 0 && length > DEFUALT_SIZE);

	cout << "input student marks:";
	for (int i = 0; i < length; i++)
	{
		cin >> vector[i];
	}
    for (int i = length - 1; i >= 0; i--) {
       msg+= to_string(vector[i]) + " ";
    }

	print(msg);

    return 0;
}
