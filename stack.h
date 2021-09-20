//
// Created by Administrator on 2021/9/19.
//

#ifndef INC_10_STACK_H
#define INC_10_STACK_H

typedef unsigned long Item;

class Stack
{
private:
    enum {MAX = 10};
    Item items[MAX];
    int top;
public:
    Stack();
    bool isempty() const;
    bool isfull() const;
    bool push( const Item & item);
    bool pop ( Item & item);
};
#endif //INC_10_STACK_H
