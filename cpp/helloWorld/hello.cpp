#include <iostream>

using namespace std;

int main() {

    int numbers[] = {1, 2, 4, 5, 7};
    for(int i : numbers) { //for each integer 'i' in the array 'numbers
        //do this
        cout << i << endl; //print the number and end line
    }

    return 0;
}