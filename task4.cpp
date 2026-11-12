
#include <iostream>
using namespace std;

int main() {

   
    int* numbers = new int[5];
   
    numbers[0] = 10;
    numbers[1] = 20;
    numbers[2] = 30;
    numbers[3] = 40;
    numbers[4] = 50;

    cout << "Dynamic Array Elements:" << endl;

    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << endl;
    }

    delete[] numbers;

    return 0;
}
