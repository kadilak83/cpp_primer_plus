#ifndef QUEUE_H_
#define QUEUE_H_
// This queue will contain Customer items
class Customer
{
    private:
        long arrive;             // arrival time for customer
        int processtime;         // processing time for customer
    public:
        Customer() { arrive = processtime = 0; }
        void set(long when);
        long when() const { return arrive; }
        int ptime() const { return processtime; }
};

typedef Customer Item;

class Queue
    {
    private:
        // class scope definitions
        // Node is a nested structure definition local to this class
        struct Node { Item item; struct Node * next;};
        enum {Q_SIZE = 10};                 // private class members
        Node * front;                       // pointer to front of Queue
        Node * rear;                        // pointer to rear of Queue
        int items;                          // current number of items in Queue
        const int qsize;                    // maximum number of items in Queue
        int atm_wait_time;                  // time until autoteller is free
        long customers;                     // joined the queue
        long served;                        // served during the simulation
        long sum_line;                      // cumulative line length
        int wait_time;                      // time until autoteller is free
        long line_wait;                     // cumulative time in line
        // preemptive definitions to prevent public copying



    public:
        Queue(int qs = Q_SIZE);             // create queue with a qs limit
        ~Queue();
        bool isatmfree() const;
        bool isempty() const;
        bool isfull() const;
        int queuecount() const;
        bool enqueue(const Item &item);    // add item to end
        bool dequeue(int cycle);          // remove item from front
        Queue & operator=(const Queue & q) { return *this;}
        Queue(const Queue & q) : qsize(0) { }
};
#endif
