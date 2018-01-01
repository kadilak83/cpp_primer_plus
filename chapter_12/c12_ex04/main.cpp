//As the private members suggest, this class uses a dynamically allocated array to hold
//the stack items. Rewrite the methods to fit this new representation and write a
//program that demonstrates all the methods, including the copy constructor and
//assignment operator.

#include <iostream>
#include <cstdlib>
#include "stack.h"

//using namespace std;

int main()
{
    using std::cout;
    using std::endl;
    using STACK::Stack;
    using STACK::Item;
    Stack st_1 = Stack();
    Stack st_2 = Stack(20);

    cout << "New empty stacks" << endl;
    cout << "stack_1: " << st_1 << endl;
    cout << "stack_2: " << st_2 << endl;

    st_1.push(2);
    st_1.push(3);
    st_1.push(4);
    st_1.push(5);
    st_1.push(6);

    st_2.push(12);
    st_2.push(13);
    st_2.push(14);
    st_2.push(15);
    st_2.push(16);
    st_2.push(22);
    st_2.push(23);
    st_2.push(24);
    st_2.push(25);
    st_2.push(26);
    st_2.push(32);
    st_2.push(33);
    st_2.push(34);
    st_2.push(35);
    st_2.push(36);

    cout << "Push on stacks" << endl;
    cout << "stack_1: " << st_1 << endl;
    cout << "stack_2: " << st_2 << endl;

    Item st_item;
    st_2.pop(st_item);
    cout << "stack_2 pop: " << st_item << endl;
    st_2.pop(st_item);
    cout << "stack_2 pop: " << st_item << endl;
    st_2.pop(st_item);
    cout << "stack_2 pop: " << st_item << endl;
    cout << "stack_2: " << st_2 << endl;

    cout << "New stack_3 - copy constructor with stack_1" << endl;
    Stack st_3 = Stack(st_1);
    cout << "stack_3: " << st_3 << endl;
    st_3.pop(st_item);
    cout << "stack_3 pop: " << st_item << endl;
    cout << "Push on stack_3" << endl;
    st_3.push(123);
    cout << "stack_3: " << st_3 << endl;
    cout << "stack_1: " << st_1 << endl;

    st_3 = st_2;
    cout << "stack_2 assigned to stack_3" << endl;
    cout << "stack_3: " << st_3 << endl;
    st_3.pop(st_item);
    cout << "stack_3 pop: " << st_item << endl;
    cout << "Push on stack_3" << endl;
    st_3.push(123);
    cout << "stack_3: " << st_3 << endl;
    cout << "stack_2: " << st_2 << endl;

    return EXIT_SUCCESS;
}

