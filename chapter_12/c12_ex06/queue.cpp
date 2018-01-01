#include "queue.h"
#include <cstdlib>


// Queue methods
Queue::Queue(int qs) : qsize(qs)
{
    front = rear = NULL;   // or nullptr
    items = 0;
    atm_wait_time = 0;
    customers = 0;
    served = 0;
    sum_line = 0;
    wait_time = 0;
    line_wait = 0;
}

Queue::~Queue()
{
    Node * temp;
    while (front != NULL)
    {
        temp = front;
        front = front->next;
        delete temp;
    }
}

bool Queue::isatmfree() const
{
    return atm_wait_time == 0;
}

bool Queue::isempty() const
{
    return items == 0;
}

bool Queue::isfull() const
{
    return items == qsize;
}

int Queue::queuecount() const
{
    return items;
}

// Add item to queue
bool Queue::enqueue(const Item & item)
{
    if (isfull())
        return false;
    Node * add = new Node; // create node

    // on failure, new throws std::bad_alloc exception
    add->item = item;      // set node pointers
    add->next = NULL;      // or nullptr;
    items++;
    if (front == NULL)     // if queue is empty,
        front = add;       // place item at front
    else
        rear->next = add;  // else place at rear
    rear = add;            // have rear point to new node
    return true;
}

// Place front item into item variable and remove from queue
bool Queue::dequeue(int cycle)
{
    if (front == NULL)
        return false;
    Item & item = front->item;     // set item to first item in queue
    items--;
    Node * temp = front;   // save location of first item
    front = front->next;   // reset front to next item
    delete temp;           // delete former first item
    if (items == 0)
        rear = NULL;

    atm_wait_time = item.ptime();
    wait_time = item.ptime();      // for wait_time minutes
    line_wait += cycle - item.when();
    served++;

    return true;
}

// customer method
// when is the time at which the customer arrives
// the arrival time is set to when and the processing
// time set to a random value in the range 1 - 3
void Customer::set(long when)
{
    processtime = std::rand() % 3 + 1;
    arrive = when;
}
