#include <iostream>
#include"binarysearchtree.cpp"
using namespace std;

int main()
{
    TreeType<int> t1;
    t1.InsertItem(4);
    t1.InsertItem(9);
    t1.InsertItem(2);
    t1.InsertItem(7);
    t1.InsertItem(3);
    t1.InsertItem(11);
    t1.InsertItem(17);
    t1.InsertItem(0);
    t1.InsertItem(5);
    t1.InsertItem(1);

    cout << "Is Tree is Empty ?" << (t1.IsEmpty() ? "\nYes" : "\nNo") << endl;

    cout << "\nEnter the Tree length: " << t1.LengthIs() << endl;

    int item;
    bool found;

    item = 9;
    t1.RetrieveItem(item, found);
    if (found)
        cout << "\nItem " << item << " is found in the tree." << endl;
    else
        cout << "\nItem " << item << " is not found in the tree." << endl;

    item = 13;
    t1.RetrieveItem(item, found);
    if (found)
        cout << "\nItem " << item << " is found in the tree." << endl;
    else
        cout << "\nItem " << item << " is not found in the tree." << endl;
    cout << "\nElements in the tree are (inorder): ";
    t1.ResetTree(IN_ORDER);

    bool finished = false;
    while (!finished)
    {
        t1.GetNextItem(item, IN_ORDER, finished);
        cout << item << " ";
    }
    cout << endl;

    cout << "Elements in the tree (preorder): ";
    t1.ResetTree(PRE_ORDER);
    finished = false;
    while (!finished)
    {
        t1.GetNextItem(item, PRE_ORDER, finished);
        cout << item << " ";
    }
    cout << endl;

    cout << "Elements in the tree (postorder): ";
    t1.ResetTree(POST_ORDER);
    finished = false;
    while (!finished)
    {
        t1.GetNextItem(item, POST_ORDER, finished);
        cout << item << " ";
    }
    cout << endl;

    return 0;
}
