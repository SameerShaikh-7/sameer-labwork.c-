#include <iostream>
using namespace std;

class StackBase
{
public:
    virtual void push(int value) = 0;
    virtual void pop() = 0;
    virtual int top() = 0;
    virtual bool isEmpty() = 0;
    virtual bool isFull() = 0;
    virtual void showTop() = 0;
    virtual ~StackBase() {}
};

class IntStack : public StackBase
{
private:
    int arr[5];
    int topIndex;
    int maxSize;

public:
    IntStack()
    {
        maxSize = 5;
        topIndex = -1;
    }

    void push(int value) 
    {
        if (isFull())
        {
            cout << "Stack is full !" << endl;
            return;
        }
        arr[++topIndex] = value;
        cout << "Pushed " << value << " to stack." << endl;
    }

    void pop() 
    {
        if (isEmpty())
        {
            cout << "Stack is empty Can't pop" << endl;
            return;
        }
        cout << "Popped " << arr[topIndex--] << " from stack" << endl;
    }

    int top() 
    {
        if (isEmpty())
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return arr[topIndex];
    }

    bool isEmpty() 
    {
        return topIndex == -1;
    }

    bool isFull() 
    {
        return topIndex == maxSize - 1;
    }

    void showTop() 
    {
        if (isEmpty())
        {
            cout << "Stack is empty" << endl;
        }
        else
        {
            cout << "Top Element is : " << arr[topIndex] << endl;
        }
    }
};