#include <iostream>

using namespace std;


/*
An abstract class is a class that is designed to be specifically
used as a base class. An abstract class contains at least one pure
virtual function. You declare a pure virtual function by using a
pure specifier ( = 0 ) in the declaration of a virtual member
function in the class declaration.

have to implement all f(x) defined in the base class to be Abstract pure virtual.
*/
class Shape {
    virtual void setX (int xcor) = 0;
    virtual void setY (int ycor) = 0;
    virtual int getX () const = 0;
    virtual int getY () const = 0;
    virtual void draw() const = 0;

};

class Circle : public Shape {
    private:
        int x, y, radius;
    public:
        Circle(int xcor, int ycor, int r){
            x = xcor;
            y = ycor;
            radius = r;
        }

        virtual void setX (int xcor) {
            x = xcor;
        }
        virtual void setY (int ycor) {
            y = ycor;
        }
        void setRadiu (int r){
            radius = r;
        }
        virtual int getX () const {
            return x;
        }
        virtual int getY () const {
            return y;
        }

        int getRadius () {
            return radius;
        }

        virtual void draw () const{
            cout << "Drawing Circle at "<< getX() << ", " <<getY() << " at radius " << getRadius() <<endl;
        }
};

int main()
{

    return 0;
}
