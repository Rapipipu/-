#include <iostream>
using namespace std;
int main(){
	int i, j;
	string star[10] = {"*", " *", "  *", "   *", "    *", "     *", "      *",
					   "       *", "        *", "         *"};
	
	for (i=0; i<10; i++){
		for (j=0; j<10; j++){
			cout << star[i];
		}
		cout << endl;
	}
	return 0;
}
