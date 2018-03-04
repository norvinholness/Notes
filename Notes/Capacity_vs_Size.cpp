#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <double> numbers(20);

    cout << "Size: " << numbers.size() << endl;

    int Capacity = numbers.capacity();

    cout << "Capacity: " << Capacity << endl;

    for (int i = 0; i < 10000; i++ ){
        if (numbers.capacity() != Capacity){
            Capacity = numbers.capacity();
            cout << "Capacity: " << Capacity << endl;
        }
        numbers.push_back(i);
    }


    return 0;
}
