#include <iostream>
#include "MySharedPtr.h"
using namespace std;

int main() {
	MySharedPtr<int> num(new int(10));
	MySharedPtr<int> num2(num);

	num.GetAdress();
	num2.GetAdress();
	cout << num.GetCount() << endl;

}

