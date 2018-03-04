#include <iostream>
#include <string>

using namespace std;

int find (string word, char lookedFor){
    for (int i = 0; i < word.length(); ++i){
        if (word[i] == lookedFor){
            return i;
        }
    }
}

string replace(string word, char oldChar, char newChar){
    int pos = find(word, oldChar);
    word = word.substr(0,pos) + newChar + word.substr(pos +1);
    return word;

}

int main()
{
    string s1 = "a needle in a haystack";
    string word = "needle";
    int pos = s1.find(word);
    string s2 = s1.substr(pos, word.length());
    cout << s2 << endl;
    string s3 = s1.substr(pos+word.length()+1);
    cout << s3 <<endl;
    s1.replace(pos,word.length(), "pin");
    cout << s1 <<endl;

    string word2 = "hello";
    cout << find(word,'e');

    return 0;
}
