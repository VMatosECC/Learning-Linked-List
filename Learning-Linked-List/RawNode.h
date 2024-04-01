#pragma once
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

template <class T>
class RawNode
{
public:
    //By default data members and functions are PUBLIC
    T           data;
    RawNode<T>* next;

    RawNode(T data) {
        this->data = data;
        this->next = nullptr;
    }

    string toString() {
        stringstream sout;
        sout << this << " Node [ next: " << next << ", Data: " << data << "]";
        return sout.str();
    }


    friend ostream& operator<< (ostream& sout, RawNode<T> n) {
        sout << n.toString() << endl;
        return sout;
    }

};


