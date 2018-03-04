#include <iostream>
#include <stdexcept>
#include <fstream>

using namespace std;


class DivideByZero
{
    public:
        DivideByZero() {
            cerr<<"Divide by zero exception";
        }

};

double quotient (double numer, double denom){
    if (denom == 0){
        throw DivideByZero();
    }
}

const int divideByZero = 1;

int main()
{
    try {
        int numer = 12;
        int denom = 0;
        if (denom == 0){
            throw divideByZero;
        }
        else {
            cout << numer/denom;
        }

    }
    /*
    catch (int e){
        if (e = divideByZero){
            cerr << "Cant divide by zero" <<endl;
        }
    }
    */
    catch(...){
        cerr << "Exception Called" <<endl;
    }


    // File Exceptions

    ifstream file;
    file.exceptions(ifstream::failbit | ifstream::badbit);

    try {
        file.open("File.txt");
        while (!file.eof()){
            cout << file.get();
        }
    }
    catch (ifstream::failure e){
        cout << e.what() <<endl;
        cout << "Error Opening File "<<endl;
    }


    return 0;
}
