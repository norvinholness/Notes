#include <iostream>
#include <exception>

using namespace std;

void mightGoWrong();

void usesMightGoWrong(){
    mightGoWrong();
}

void mightGoWrong() {
    bool error1 =  false;
    bool error2 =  true;

    if (error1){
        //throw 8; // throw an int
        throw "Something went wrong. \n"; // throw a string
    }
    // as soon as you throw, you go out of the mightGoWrong() function.

    if (error2){
        throw string("Something Else went wrong. \n");
    }
}


class CanGoWrong {
public:
    CanGoWrong() {
        char *pMemory = new char[99999999999999999999];
        delete[] pMemory;
    }
};

// Exception Classes
class myException : public exception {
public:
    virtual const char* what() const throw() {
        return "Something bad happened. " ;
    }
};

class Test {
public:
    void goingWrong() {
        throw myException();
    }
};

int main()
{
/*
    try {
        //mightGoWrong();
        usesMightGoWrong();
    }
    catch (int e) { // catch an int
        cerr << "Error Code : " << e << endl;
    }
    catch (char const *e){
        cerr << "Error Message : " << e << endl;
    }

    catch (string &e) {
        cerr << "String Error Message : " << e << endl;
    }
    // output -> : String Error Message : Something Else Went Wrong

*/
    try {
        CanGoWrong wrong;
    }
    catch (bad_alloc &e){
        cout << "Caught Exception : " << e.what() << endl;
    }

    Test test;

    try {
        test.goingWrong();
    }
    catch (myException &e) {
        cout << e.what() <<endl;
    }

    cout << "Still Running" << endl;

    return 0;
}
