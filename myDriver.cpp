// Krystle Dao Week 9 Web Lab

#include <iostream>
#include "ArrayQueue.hpp"

using namespace std;

int main() {
    cout << "Integer list " << endl;
    ArrayQueue<int> i(5);

    i.enqueue(1);
    i.enqueue(2);
    i.enqueue(3);

    cout << "Original list front: " << i.front() << endl;
    cout << "Original list back: " << i.back() << endl;

    ArrayQueue<int> iCopy(i);

    cout << "Copy list front: " << iCopy.front() << endl;
    cout << "Copy list back: " << iCopy.back() << endl;

    i.dequeue();
    i.dequeue();

    cout << "Original list front after dequeue: " << i.front() << endl;
    cout << "Original list back after dequeue: " << i.back() << endl;

    i.clear(); 

    try {    
        cout << "Original list front after clear: " << i.front() << endl;
        cout << "Original list back after clear: " << i.back() << endl;
    }
    catch (string e) {
        cout << e << endl;
    }
    
    cout << endl << "Char list" << endl;
    ArrayQueue<char> c(5);

    c.enqueue('A');
    c.enqueue('B');
    c.enqueue('C');

    cout << "Original list front: " << c.front() << endl;
    cout << "Original list back: " << c.back() << endl;

    ArrayQueue<char> cCopy(c);

    cout << "Copy list front: " << cCopy.front() << endl;
    cout << "Copy list back: " << cCopy.back() << endl;

    c.dequeue();
    c.dequeue();

    cout << "Original list front after dequeue: " << c.front() << endl;
    cout << "Original list back after dequeue: " << c.back() << endl;

    c.clear(); 

    try {    
        cout << "Original list front after clear: " << c.front() << endl;
        cout << "Original list back after clear: " << c.back() << endl;
    }
    catch (string e) {
        cout << e << endl;
    }

    cout << endl << "Double list" << endl;
    ArrayQueue<double> d(5);

    d.enqueue(12.1);
    d.enqueue(135.7);
    d.enqueue(196.47);

    cout << "Original list front: " << d.front() << endl;
    cout << "Original list back: " << d.back() << endl;

    ArrayQueue<double> dCopy(d);

    cout << "Copy list front: " << dCopy.front() << endl;
    cout << "Copy list back: " << dCopy.back() << endl;

    d.dequeue();
    d.dequeue();

    cout << "Original list front after dequeue: " << d.front() << endl;
    cout << "Original list back after dequeue: " << d.back() << endl;

    d.clear(); 

    try {    
        cout << "Original list front after clear: " << d.front() << endl;
        cout << "Original list back after clear: " << d.back() << endl;
    }
    catch (string e) {
        cout << e << endl;
    }

    return 0;
}