#ifndef LIST_HXX
#define LIST_HXX

typedef int Item;

class List
{
private:
    Item data;
    List *head, *tail, *next, *prev;
    int count;
public:
    List();

};

#endif // LIST_HXX

