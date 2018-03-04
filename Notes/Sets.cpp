#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> numbers;

    numbers.insert(30);
    numbers.insert(20);
    numbers.insert(30);
    numbers.insert(10);

    set<int>::iterator it = numbers.begin();

    for (;it != numbers.end(); it++){
        cout << *it <<endl;
    }

    set<int>::iterator itFind = numbers.find(30);

    if (itFind != numbers.end()){
        cout << "Found: "<< *it <<endl;
    }

    if (numbers.count(30)){
        cout << "number found" <<endl;
    }

    return 0;
}
