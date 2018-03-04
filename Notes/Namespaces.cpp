#include <iostream>

using namespace std;

namespace minMax {
    int min(int num1, int num2){
        if (num1 < num2){
            return num1;
        } else {
            return num2;
        }
    }

     int max(int num1, int num2){
        if (num1 > num2){
            return num1;
        } else {
            return num2;
        }
    }
}

namespace People {
    class Person {
        private:
            string name;
            string sex;
        public:
            Person(string n, string s){
                name=n;
                sex =s;
            }

            void getInfo (){
                cout<< name << ", " << sex<<endl;
            }
    };
}

int main()
{
    using namespace minMax;
    using namespace People;

    int num3 = 10;
    int num4 = 5;

    cout << min(num3, num4)  <<endl;
    cout << max(num3, num4)  <<endl;

    Person you("Jane Doe", "F");
    you.getInfo();

    return 0;
}
