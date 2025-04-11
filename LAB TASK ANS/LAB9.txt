#include <iostream>
#include "quetype.cpp"

using namespace std;

int main() {
   QueType<int> Que1(5);
   if(Que1.IsEmpty())
   {
       cout<<"Queue is Empty."<<endl;
   }
   else
   {
       cout<<"Queue is not Empty."<<endl;
   }

   Que1.Enqueue(5);
   Que1.Enqueue(7);
   Que1.Enqueue(8);
   Que1.Enqueue(2);

   if(Que1.IsEmpty())
   {
       cout<<"Queue is Empty"<<endl;
   }
   else
   {
       cout<<"Queue is not Empty."<<endl;
   }

   if(Que1.IsFull())
   {
        cout<<"Queue is Full"<<endl;
   }
   else
   {
        cout<<"Queue is not Full."<<endl;
   }

   Que1.Enqueue(6);
   int x;
   QueType<int> Que2(5);
   while(!Que1.IsEmpty())
   {
       Que1.Dequeue(x);
       cout<<x<<" ";
       Que2.Enqueue(x);
   }

   while(!Que2.IsEmpty())
   {
       Que2.Dequeue(x);
       Que1.Enqueue(x);
   }
   try
   {
       Que1.Enqueue(8);
   }
   catch(FullQueue)
   {
       cout<<"Queue is Full"<<endl;
   }
   Que1.Dequeue(x);
   Que1.Dequeue(x);
   while(!Que1.IsEmpty())
   {
       Que1.Dequeue(x);
       cout<<x<<" ";
       Que2.Enqueue(x);
   }
   while(!Que2.IsEmpty())
   {
       Que2.Dequeue(x);
       Que1.Enqueue(x);
   }
   Que1.Dequeue(x);
   Que1.Dequeue(x);
   Que1.Dequeue(x);
   if(Que1.IsEmpty())
   {
       cout<<"Queue is Empty"<<endl;
   }
   else
   {
       cout<<"Queue is not Empty"<<endl;
   }
   try
   {
       Que1.Dequeue(x);
   }
   catch(EmptyQueue)
   {
       cout<<"Queue underFlow"<<endl;

   }
    int n;
    cout << "\nEnter an integer n to generate binary values: ";
    cin >> n;

    QueType<string> binaryQueue;
    binaryQueue.Enqueue("1");

    cout << "Binary values from 1 to " << n << ":" << endl;
    for (int i = 0; i < n; ++i) {
        string binary;
        binaryQueue.Dequeue(binary);
        cout << binary << endl;
        binaryQueue.Enqueue(binary + "0");
        binaryQueue.Enqueue(binary + "1");
    }

    return 0;
}
