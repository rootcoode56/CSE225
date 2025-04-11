#include <iostream>
#include "pqtype.h"

using namespace std;

int main() {


    PQType<int> priorityQueue(15);


    if (priorityQueue.IsEmpty()) {
        cout << "The Queue is empty.\n\n";
    } else {
        cout << "The Queue is not empty.\n\n";
    }

    cout << "Enter items into the priorityQueue: ";
    int input;

    for (int i = 0; i < 10; ++i) {
        cin >> input;
        priorityQueue.Enqueue(input);
    }


    // Printing if the queue is empty or not
    if (priorityQueue.IsEmpty()) {
        cout << "The Queue is empty.\n\n";
    } else {
        cout << "The Queue is not empty.\n\n";
    }

    int dequeuedValue;
    priorityQueue.Dequeue(dequeuedValue);

    // dequeue and printing the dequeued value
    cout << "Dequeuing the value from the queue: " << dequeuedValue << endl;

    priorityQueue.Dequeue(dequeuedValue);

    // dequeue and printing the dequeued value
    cout << "Dequeuing the value from the queue: " << dequeuedValue << endl;


    int totalBags;
    int numTimes;

    cout << "\n\nEnter an integer number for magical bags candies problem: ";

    int currentVal;

    int maxVal;
    int totalVal = 0;

    PQType<int> bags(5);

    // getting the total bags from the user input
    cin >> totalBags;
    cin >> numTimes;

    // inserting the items to the priority queue
    for (int i = 0; i < totalBags; i += 1) {
        cin >> currentVal;
        bags.Enqueue(currentVal);
    }


    while (numTimes--) {
        bags.Dequeue(maxVal);
        totalVal += maxVal;
        bags.Enqueue(maxVal / 2);
    }

    cout << "\n\nMaximum number of candies that can be eaten is: " << totalVal << endl;


    return 0;

}
