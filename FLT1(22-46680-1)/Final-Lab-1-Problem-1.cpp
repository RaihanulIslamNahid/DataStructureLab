#include <bits/stdc++.h>
using namespace std;

//int queue[10], front = -1, back = -1, size=10;


class Queue
{
    int queue[100], front = -1, back = -1, size=100;

public :
    bool isEmpty()
    {
        if ((front == -1) && (back == -1))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool isFull()
    {
        if ((back+1)%size == front)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
public :
    bool enqueue(int Element)
    {
        if(isFull())
        {
            cout<< "Queue is Full\n";
            return false;
        }
        else if(isEmpty())
        {
            front = back = 0;
            queue[back] = Element;
            cout<< Element <<" Inserted successfully\n";
            return true;
        }
        else
        {
            back++;
            queue[back] = Element;
            cout<< Element <<" Inserted successfully.\n";
            return true;
        }
    }
public :
    bool dequeue()
    {
        if(isEmpty())
        {
            cout << "Queue is empty! Dequeue not possible\n";
            return false;
        }
        else if (front == back)
        {
            front = back = -1;
            cout << "Dequeue function is performed successfully.\n";
            return true;
        }
         else
         {
              front=(front+1)% size;
              cout << "Dequeued function is performed successfully.\n";
              return true;
         }
    }
    int frontElement()
    {
        return queue[front];
    }

    int rearElement()
    {
         return queue[back];
    }
    void showQueue()
    {

        if (isEmpty() )
        {
             cout << "\nThe  Queue is empty\n";
             return;
        }
        else
        {
            cout << "\nQUEUE ELEMENTS: ";
            for(int i = front; i <= back; i++)
            {
               cout << queue[i] << " ";
            }
            cout << endl << endl;
        }
    }

};

int main()
{
    Queue q;

    q.enqueue(6);
    q.enqueue(7);
    q.enqueue(8);
    q.enqueue(9);
    q.enqueue(10);
    q.enqueue(11);
    q.enqueue(12);
    q.enqueue(13);
    q.enqueue(14);
    q.showQueue();
    cout<<"\n Front Element of the Queue: " << q.frontElement() <<endl;
    cout<<"Rear Element of the Queue: " << q.rearElement() <<endl;

    q.dequeue();
    q.dequeue();
    q.dequeue();

    q.showQueue();
    cout<<"\nFront Element of the Queue: " << q.frontElement() <<endl;
    cout<<"Rear Element of the Queue: " << q.rearElement() <<endl;


    q.enqueue(15);
    q.enqueue(16);
    q.enqueue(17);

    q.showQueue();
    cout<<"\nFront Element " << q.frontElement() <<endl;
    cout<<"Rear Element : " << q.rearElement() <<endl;

    return 0;
}

