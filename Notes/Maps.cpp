#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string, int> ages;

    ages["Mike"]  = 40;
    ages["Raj"]   = 20;
    ages["Vicky"] = 30;

    ages["Mike"] = 70;

    cout << ages["Raj"] <<endl;

    // searching for a value not in the map will actually add the
    // key to the map and initialize the value to 0
    cout << ages["Sue"] <<endl;

    if(ages.find("Vicky") != ages.end()){
        cout << "Found Vicky" <<endl;
    } else {
        cout << "Key not found" <<endl;
    }

    // can use the pair to store values
    pair<string,int> addToMap ("Peter", 100);
    ages.insert(addToMap);

    for (map<string, int>::iterator it=ages.begin(); it != ages.end(); it++){
        pair<string, int> age = *it;
        cout << age.first << " : " << age.second << endl;
    }
    // simpffy with auto keyword
    //map<string, int>::iterator it=ages.begin() -- > auto it - ages.begin()
    for (map<string, int>::iterator it=ages.begin(); it != ages.end(); it++){
        cout << it->first << " : " << it->second << endl;
    }

    return 0;
}
