#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

template<typename T>
void display (vector<T> v){
    for (int i = 0; i < v.size(); ++i){
        cout << v[i] << " ";
    }
    cout << endl;
}


int main()
{
	
	vector<int> numbers;
    for (int i = 1; i <= 10; ++i){
        numbers.push_back(i);
    }

    display(numbers);

    // Fill the numbers vector with all zeros
    fill(numbers.begin(), numbers.end(), 0);
    display(numbers);

    vector<string> names;
    names.push_back("Matthew");
    names.push_back("Mark");
    names.push_back("Luke");
    names.push_back("John");
    display(names);

    // Fill the names vector with empty string
    fill(names.begin(), names.end(), string (""));
    display(names);

    // The Replace Algorithm
    // Replace all 0's with 10's
    replace(numbers.begin(), numbers.end(), 0, 10);
    display(numbers);


    vector<string> words;
    words.push_back("Genesis");
    words.push_back("Exodus");
    words.push_back("Deuteronomy");
    words.push_back("Samuel");
    display(words);
    replace(words.begin(), words.end(), string("Genesis"), string("Acts"));
    display(words);

    return 0;
}
