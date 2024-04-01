// Learning-Linked-List.cpp 

#include <iostream>
#include "RawNode.h"
using namespace std;

void experiment01();
void experiment02();

int main()
{
    //experiment01();
    experiment02();


    cout << "\nAll done!\n";
}
// ----------------------------------------------------
void experiment02() {

    RawNode<int> n1(17);
    cout << "n1  " << n1 << endl;

    RawNode<int> n2(27);
    cout << "n2  " << n2 << endl;

    RawNode<int> n3(27);
    cout << "n3  " << n3 << endl;


}



// -------------------------------------------------------
void experiment01()
{
    int n = 17;  //STACK allocated
    cout << "n " << n << endl;

    cout << "&n:  " << &n << endl;

    int* p = &n;
    cout << "p  " <<  p << endl;

    cout << "*p " << *p << endl;

    int* p2 = new int();
    *p2 = 117;

    cout << "p2   " << p2 << endl; 
    cout << "*p2  " << *p2 << endl;

    delete p2;
}