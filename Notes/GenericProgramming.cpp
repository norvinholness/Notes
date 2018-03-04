#include <iostream>
#include <string>
#include <vector>
using namespace std;


// Generic Programming
template <typename T>
void display (T arr[], int size){
    for (int i = 0; i <size; ++i){
        cout << arr[i] << " ";
    }
    cout <<endl;
}

template <typename T>
T max( T &arg1, T &arg2){
    if (arg1 > arg2){
        return arg1;
    }
    else{
        return arg2;
    }
}

// Comparing data of different types
// Negative is that the return type could get truncated if
// comparing double to int.
template<typename T, typename U>
T max (T &arg1, U &arg2){
    return(arg1 > arg2) ? arg1 : arg2;
}

//Providing template for comparing two data types
template<class T, class U>
class classMap {
private:
    vector<T> keys;
    vector<U> values;
public:
    void insert(T Key, U Value){
        keys.push_back(Key);
        values.push_back(Value);
    }
    void get(int n){
        cout << keys[n] << " : " << values[n];
    }

};

// Generic Stack
template <typename T >
class Stack {
    private:
        T top;
        T datastore[100];
    public:
        Stack(){
            top = -1;
        }

        ~Stack() {}

        T pop()
        {
          if (top >= 0 ){
            T val = datastore[top];
            datastore[top] = 0;
            top--;
            return val;
          } else {
            cout << "Empty Stack" <<endl;
          }
        }

        void push (T num){
            top++;
            datastore[top]= num;
        }

        T peek() {
            return datastore[top];
        }

        bool isEmpty() {
            if (top == -1){
                return true;
            }
            else {
                return false;
            }
        }

};

template<typename T, typename U>
bool isEqual(T &arg1, U &arg2){
    if (arg1 == arg2){
        return true;
    }
    else{
        return false;
    }
}


// Template Specialization
template<>
class Stack<string> {
    private:
        int top;
        string datastore[100];
    public:
        Stack(){
            top = -1;
        }

        ~Stack() {}

         string pop()
        {
          if (top >= 0 ){
            string val = datastore[top];
            datastore[top] = "";
            top--;
            return val;
          } else {
            cout << "Empty Stack" <<endl;
          }
        }

        void push (string val){
            top++;
            datastore[top]= val;
        }

        string peek() {
            return datastore[top];
        }

        bool isEmpty() {
            if (top == -1){
                return true;
            }
            else {
                return false;
            }
        }

};


int main()
{

    const int size = 4;
    int numbers[size];
    for (int i = 0; i < size; i++){
        numbers[i] = i;
    }

    display(numbers, size);

    string names[] = {"Matthew", "Mark", "Luke", "John"};
    display(names,size);

    int a = 12;
    int b = 24;
    cout << max(a,b)<<endl;

    double x = 2.25;
    double y = 1.15;
    cout << max(x,y)<<endl;

    string w1 = "apple";
    string w2 = "orange";
    cout << max(w1,w2)<<endl;

    Stack<string> names;
    /*Stack<int> numbers;
    numbers.push(10);
    numbers.push(25);
    cout << numbers.peek() <<endl;
    numbers.pop();
    cout << numbers.isEmpty() <<endl;
    numbers.pop();
    cout << numbers.isEmpty() <<endl;
    numbers.pop();*/

    return 0;
}
