#include <iostream>
#include "stack.h"

namespace STACK {

using namespace std;

Stack::Stack(int n): size(n)
{
    pitems = new Item[size];
}

Stack::Stack(const Stack & st): size(st.size), top(st.top)
{
    pitems = new Item[size];
    for(int i=0; i<top; ++i)
    {
        pitems[i] = st.pitems[i];
    }
}

Stack::Stack(Stack && st): size(st.size), top(st.top)
{
    pitems = st.pitems;
    st.pitems = nullptr;
    st.size = 10;
    st.top = 0;
}

bool Stack::isempty() const
{
    return top == 0;
}

bool Stack::isfull() const
{
    return size == top;
}

bool Stack::push(const Item & item)
{
    if (top < size)
    {
        pitems[top++] = item;
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
        item = pitems[--top];
        return true;
    }
    else
    {
        return false;
    }
}

Stack::~Stack()
{
    delete [] pitems;
}

Stack & Stack::operator=(const Stack & st)
{
    if (this != &st)
    {
        delete [] pitems;
        size = st.size;
        top = st.top;
        pitems = new Item[size];
        for(int i=0; i<top; ++i)
        {
            pitems[i] = st.pitems[i];
        }
    }

    return * this;
}

Stack & Stack::operator=(Stack && st)
{
    if (this != &st)
    {
        delete [] pitems;
        pitems = st.pitems;
        size = st.size;
        top = st.top;
        st.pitems = nullptr;
        st.size = 10;
        st.top = 0;
    }

    return * this;
}

std::ostream & operator<<(std::ostream & os, const Stack & st)
{
    for(int i=st.top-1; i>=0; --i)
    {
        os<<st.pitems[i] << ", ";
    }
    return os;
}

}
