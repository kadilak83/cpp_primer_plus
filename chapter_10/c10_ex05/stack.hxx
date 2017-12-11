#ifndef STACK_HXX
#define STACK_HXX

struct customer {
    char fullname[35];
    double payment;
};

typedef customer Item;

class Stack
{
private:
//    enum {MAX = 10}; // constant specific to class
    int limit;
    Item *items; // holds stack items
    int top; // index for top stack item
public:
    explicit Stack(int size=10);
    ~Stack();
    bool isEmpty() const;
    bool isFull() const;
    // push() returns false if stack already is full, true otherwise
    bool push(const Item & item); // add item to stack
    // pop() returns false if stack already is empty, true otherwise
    bool pop(Item & item); // pop top into item
};
#endif // STACK_HXX

