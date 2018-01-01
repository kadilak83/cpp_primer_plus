#include "atmqueues.h"
#include "queue.h"

ATMQueues::ATMQueues(int _queues_count, int _queue_limit): queue_limit(_queue_limit), queues(_queues_count, Queue(_queue_limit)), items(0)
{
}

bool ATMQueues::is_all_full() const
{
    for(Queue i: queues)
        if(!i.isfull())
            return false;
    return true;
}

bool ATMQueues::is_any_empty() const
{
    for(Queue i: queues)
        if(i.isempty())
            return true;
    return false;
}

bool ATMQueues::enqueue(const Item &item)
{
    int min_queue = 0;
    int min_queue_size = 0;
    bool result = false;
    for (int i=0; i<queues.size(); ++i){
        if(queues[i].isempty())
        {
            result = queues[i].enqueue(item);
            if (result){
                items++;
            }
            return result;
        }
        if(queues[i].queuecount() < min_queue_size)
        {
            min_queue_size = queues[i].queuecount();
            min_queue = i;
        }
    }
    result = queues[min_queue].enqueue(item);
    if (result){
        items++;
    }
    return result;
}

bool ATMQueues::dequeue(int cycle)
{
    for (int i=0; i<queues.size(); ++i)
    {
        if (queues[i].wait_time <= 0 && !queues[i].isempty())
        {
            queues[i].dequeue(cycle);
        }
    }
}

int ATMQueues::queuescount() const
{
    return items;
}

void ATMQueues::next_cycle()
{

}
