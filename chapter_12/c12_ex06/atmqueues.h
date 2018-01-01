#ifndef ATMQUEUES_H
#define ATMQUEUES_H
#include <vector>
#include "queue.h"

class ATMQueues
{
private:
    std::vector<Queue>  queues;
    int queue_limit;
    int items;

public:
    ATMQueues(int _queues_count, int _queue_limit);
    bool is_all_full() const;
    bool is_any_empty() const;
    int queuescount() const;
    bool enqueue(const Item &item);
    bool dequeue(int cycle);
    void next_cycle();

};

#endif // ATMQUEUES_H
