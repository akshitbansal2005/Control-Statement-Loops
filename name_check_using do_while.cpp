#include <iostream>
using namespace std;
int main() {
    string name;
	do {
        cout << "Enter the Name: ";
        cin >> name;
        if (name != "SIT") {
            cout << name << endl;
        }
    } 
    while (name != "SIT");
}
/*Output:
Enter the Name: Hello
Hello
Enter the Name: SIT
*/
