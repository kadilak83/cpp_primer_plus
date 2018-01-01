#ifndef STACK_H_
#define STACK_H_

namespace STACK {

typedef unsigned long Item;

class Stack
{
private:
    Item * pitems;
    int size;
    int top= 0;
public:
    explicit Stack(int n = 10);
    Stack(const Stack & st);
    ~Stack();
    bool isempty() const;
    bool isfull() const;
    bool push(const Item & item);
    bool pop(Item & item);
    Stack & operator=(const Stack & st);
    void show() const;
    friend std::ostream & operator<<(std::ostream & os, const Stack & st);
};

}
#endif
