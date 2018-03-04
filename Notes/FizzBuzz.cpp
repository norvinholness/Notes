#include <iostream>

using namespace std;

int main()
{

/* Fizz Buzz Problem Statement
 * Write a short program that prints each number from 1 to 100 on a new line.
 * For each multiple of 3, print "Fizz" instead of the number.
 * For each multiple of 5, print "Buzz" instead of the number.
 * For numbers which are multiples of both 3 and 5, print "FizzBuzz" instead of the number.
 */
    for (int i = 1; i < 101; i++){
            if ((i % 5 == 0) && (i % 3 == 0)){
                cout << "FizzBuzz: "<<i<<endl;
            }
            else if (i % 3 == 0) {
                cout << "Fizz: " <<i<<endl;
            }
            else if (i % 5 == 0 ){
                cout << "Buzz: " <<i<<endl;
            }
        }

    return 0;
}
