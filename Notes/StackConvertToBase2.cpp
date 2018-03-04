#include <iostream>
#include <string>
using namespace std;


// LIFO
class Stack {
    private:
        int dataStore[100];
        int top;

    public:
        Stack() {
            top = -1;
        }

        void push (int value){
            ++top;
            dataStore[top] = value;
        }

        int pop() {
            int returnVal = dataStore[top];
            --top;
            return returnVal;
        }

        int peek() {
            return dataStore[top];
        }

        int Count() {
            return top +1;
        }

        void Clear() {
            for (int i = 0; i <=top -1; ++i){
                dataStore[i] = 0;
            }
            top = -1;
        }

        bool isEmpty() {
            if (top == -1){
                return true;
            }
            else{
                return false;
            }
        }

        ~Stack(){}
};


void convertToBase2 (int number){
    const int base = 2;
    Stack digits;
    cout <<endl;
    do {
        cout << "Number: " << number <<endl;
        digits.push(number % base );
        number = number / base;
        cout <<" Modula: " << number % base << endl;
        cout <<" Number divide by 2: "  << number << endl;
    } while (number != 0 );
    while (digits.Count() > 0) {
        cout << digits.pop();
    }
}


int main()
{
    int number;
    cout << "Enter a base 10 number: ";
    cin >> number;
    cout << number << " base 10 equals ";
    convertToBase2(number);
    cout << " base 2." <<endl;



    return 0;
}
