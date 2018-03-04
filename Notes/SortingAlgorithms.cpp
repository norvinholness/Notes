#include <iostream>
#include <vector>
#include <algorithm>
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
    const int sizeNumbers = 10;
    int numbers[] = {10,1,9,2,8,3,7,4,6,5};
    // Copy Data from array into vector
    vector<int> nums(numbers, numbers + sizeNumbers);
    display(nums);
    sort(nums.begin(), nums.end());
    display(nums);
    const int sizeWords = 4;
    string words[] = {"How", "Are", "You", "Doing"};
    vector<string> sentence(words, words+sizeWords);
    display(sentence);
    sort(sentence.begin(), sentence.end());
    display(sentence);
    return 0;
}
