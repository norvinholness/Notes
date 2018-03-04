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
/* Accumulator
    vector<int> numbers;
    for (int i = 1; i <=10; i++){
        numbers.push_back(i);
    }

    int sum = 0;
    for(int i = 0; i < numbers.size(); i++){
        sum += numbers[i];
    }
    cout << "The sum is " << sum <<endl;

    // Using the Accumulate Function to replace a for loop
    int sum1 =  accumulate(numbers.begin(), numbers.end(), 0);
    cout << "The sum is " << sum1 <<endl;

    vector<string> words;
    words.push_back("a");
    words.push_back("man");
    words.push_back("a");
    words.push_back("plan");
    words.push_back("a");
    words.push_back("canal");
    words.push_back("panama");

    // Accumulate Algorithm (Starting point, End point, initial value
    string palindrome = accumulate(words.begin(), words.end(), string(""));
    cout << palindrome <<endl;
*/

    // The fill Algorithm

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
