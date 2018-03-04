#include <iostream>

using namespace std;


// Fibonacci
long fibonacci(int n){
    if((n == 1)||( n == 0)){
        return(n);
    }else {
        return(fibonacci(n-1) + fibonacci(n-2));
    }
}

// Tower of Hanoi
void towerOfHanoi(int n, char init, char fin, char temp){
    if (n == 1){
        cout << "Move Disk 1 from "<<init << " to "<<fin << endl;
        return;
    }
    towerOfHanoi(n-1, init, temp, fin);
    cout << "Move Disk " <<n<< " from " <<init<< " to " <<fin <<endl;
    towerOfHanoi(n-1, temp, init, fin);
}

// Factorial
int factorial(int n){
    if (n <= 1 ){
        return 1;
    } else {
        return n*factorial(n-1);
    }
}

void startFactorial(void){
    int num;
    cout << "\nFind the Factorial of " <<endl;
    cin >> num;
    cout << factorial(num);
}

void startFibonacci (void){
        long fibNum;
        long i = 0;
        cout << "Input the number of terms for Fibonacci Series : " << endl;
        cin  >> fibNum;
        cout << "\nFibonacci Series is as follows\n";

        while(i < fibNum){
            cout<<" "<<fibonacci(i) << ", ";
            i++;
        }
}

void startTowerOfHanoi(void){
    int disk;
    char T1, T2, Aux;
    T1 = 'A';
    T2 = 'B';
    Aux = 'C';
    cout << "Enter Number of Disk " <<endl;
    cin>>disk;

    towerOfHanoi(disk,T1,T2,Aux);
}

int main(void)
{
    int userInput;

    cout << " Welcome to Recursion Games " <<endl;
    cout << " Enter the value for recursion example you want to execute " <<endl;
    cout << " Enter 1 for Fibonacci Series " <<endl;
    cout << " Enter 2 for Factorial " <<endl;
    cout << " Enter 3 for Tower of Hanoi " <<endl;
    cin >> userInput;

    switch (userInput){
        case 1 :
            cout << "Starting Fibonacci Series.. " << endl;
            startFibonacci();
            break;
        case 2:
            cout << "Starting Factorial.. " << endl;
            startFactorial();
            break;
        case 3:
            cout << "Starting Tower of Hanoi.." << endl;
            startTowerOfHanoi();
            break;
        default:
            cout << "Invalid Input.." <<endl;
            break;
        }

    return 0;
}
