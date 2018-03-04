#include <iostream>

using namespace std;


class Node {
public:
    string data;
    Node *next;

    Node(string aData, Node *aNext){
            data= aData;
            next = aNext;
        }

    string getData(){
        return data;
    }

    Node *Next(){
        return next;
    }

    void setNext(Node *aNext){
        next = aNext;
    }
};


class LList {
public:
    Node *head;

    LList() {
        head = NULL;
    }

    void Append (string data){
        Node *newNode = new Node(data, NULL);
        Node *tmp = head;

        if (tmp != NULL){
            while (tmp->Next() != NULL){
                tmp = tmp->Next();
            }
            tmp->setNext(newNode);
        }
        else {

            head = newNode;
        }
    }


    void Delete (string data){
        Node *tmp = head;

        // Check if there are nodes in the List
        if (tmp == NULL){
            return;
        }

        // Check if at the end of the list
        if (tmp->Next() == NULL){
            delete tmp;
            head = NULL;
        }
        else{

            Node *prev;
            do {

                if (tmp->getData() == data){
                    break;
                }
                prev = tmp;
                tmp = tmp->Next();
            } while(tmp != NULL);
        prev->setNext(tmp->Next());
        delete tmp;
        }

    }

    void print () {
        Node *tmp = head;
        if (tmp == NULL){
            cout << "Empty List "<<endl;
            return;
        }
        if (tmp->Next() == NULL){

            cout << tmp->getData();
            cout << " --> ";
            cout << "NULL" <<endl;
        }
        else {

            do {
                cout << tmp->getData();
                cout << " --> ";
                tmp = tmp->Next();
            }while (tmp != NULL);

            cout << "NULL" <<endl;
        }
    }
};


int main()
{

    LList names;
    names.Append("A");
    names.print();
    names.Append("B");
    names.print();
    names.Append("C");
    names.print();
    names.Append("D");
    names.print();

    return 0;
}
