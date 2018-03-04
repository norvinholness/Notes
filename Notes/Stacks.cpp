#include <iostream>
#include <string>
using namespace std;

// stack of strings
// LIFO
class Stack {
    private:
        string dataStore[100];
        int top;

    public:
        Stack() {
            top = -1;
            cout << "Stack Created" <<endl;
        }

        void push (string value){
            ++top;
            dataStore[top] = value;
        }

        string pop() {
            string returnVal = dataStore[top];
            --top;
            return returnVal;
        }

        string peek() {
            return dataStore[top];
        }

        int Count() {
            return top +1;
        }

        void Clear() {
            for (int i = 0; i <=top -1; ++i){
                dataStore[i] = " ";
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

        ~Stack(){
            cout << "Stack Terminated" <<endl;
        }
};

int main()
{
    Stack *names = new Stack();
    names->push("Matthew");
    names->push("Mark");
    cout << "Count : " << names->Count() <<endl;
    names->peek();
    names->Clear();
    cout << "Count : " << names->Count() <<endl;


    delete names;
    return 0;
}
