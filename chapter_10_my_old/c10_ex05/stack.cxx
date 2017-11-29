#include "stack.hxx"
Stack::Stack(int size)
// create an empty stack
{
    items = new Item[size];
    limit = size;
    top = 0;
}

bool Stack::isEmpty() const
{
    return top == 0;
}

bool Stack::isFull() const
{
    return top == limit;
}

bool Stack::push(const Item & item)
{
    if (top < limit)
    {
        items[top++] = item;
        return true;
    }
    else
    {
        return false;
    }
}

bool Stack::pop(Item & item)
{
    if (top > 0)
    {
        item = items[--top];
        return true;
    }
    else
    {
        return false;
    }
}
