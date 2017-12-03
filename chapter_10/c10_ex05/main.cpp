//Consider the following structure declaration:
//struct customer {
//char fullname[35];
//double payment;
//};
//Write a program that adds and removes customer structures from a stack, repre-
//sented by a Stack class declaration. Each time a customer is removed, his or her
//payment should be added to a running total, and the running total should be
//reported. Note: You should be able to use the Stack class unaltered; just change the
//typedef declaration so that Item is type customer instead of unsigned long .
#include <iostream>
#include <cstdlib>
#include "stack.hxx"

using namespace std;

int main()
{
    Stack stack = Stack();
    cout << "Empty stack: " << stack.isEmpty() << endl;
    if(!stack.isFull()){
        customer customer_01 = {"John Smith", 25};
        stack.push(customer_01);
        customer customer_02 = {"Jane Sun", 209};
        stack.push(customer_02);
    }

    customer new_customer;
    stack.pop(new_customer);
    cout << new_customer.fullname << ", " << new_customer.payment << endl;
    stack.pop(new_customer);
    cout << new_customer.fullname << ", " << new_customer.payment << endl;
    return EXIT_SUCCESS;
}

