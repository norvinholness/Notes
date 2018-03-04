#include <iostream>

using namespace std;

class Queue {
private:
        string dataStore[100];
        int backOfQueue;
        const static int frontOfQueue = 0;
        void shift (){
            for(int i = frontOfQueue; i <= backOfQueue; ++i){
                dataStore[i] = dataStore[i+1];
            }
            --backOfQueue;
        }
public:
    Queue(){
        backOfQueue = -1;
    }
    void in (string value){
        ++backOfQueue;
        dataStore[backOfQueue] = value;
    }

    string out (void){
        string returnValue = dataStore[frontOfQueue];
        shift();
        return returnValue;
    }

    void show() {
        for (int i = frontOfQueue; i <= backOfQueue; ++i){
            cout << dataStore[i] << " ";
        }
        cout << endl;
    }

    int count() {
        int cnt = 0;
        for (int i = 0; i <= backOfQueue; ++i){
            ++cnt;
        }
        return cnt;
    }
    string front() {
        return dataStore[frontOfQueue];
    }

    string back() {
        return dataStore[backOfQueue];
    }

    bool isEmpty(){
        if (backOfQueue == -1){
            return true;
        }
        else {
            return false;
        }
    }

    void clear() {
        for (int i = frontOfQueue; i <= backOfQueue; ++i){
            dataStore[i] = " ";
        }
    }

};


int main()
{
    Queue letters;
    letters.in("A");
    letters.in("B");
    letters.in("C");
    letters.show();
    letters.out();
    letters.show();
    letters.in("D");
    letters.show();
    letters.out();
    letters.show();
    letters.clear();
    letters.show();

    return 0;
}
