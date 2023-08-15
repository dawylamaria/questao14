#include <iostream>

/* Q14 */
using namespace std;

int main(int argc, char** argv) {
	
	for (int i = 1; i <= 9; ++i) {
		cout << "Tabuada do " << i << ":" << endl;
		
		for (int j = 1; j <= 10; ++j) {
			cout << i << " x " << j << " = " << (i * j) << endl;
		}
		
		cout << endl;
	}
	
	system("pause");
	return 0;
}







