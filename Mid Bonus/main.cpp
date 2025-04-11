#include <iostream>
#include "binarysearchtree.cpp"
using namespace std;

int main() {
    // Create a tree object
    TreeType<int> tree;

    // Insert ten items: 4, 9, 2, 7, 3, 11, 17, 0, 5, 1
    int items[] = {4, 9, 2, 7, 3, 11, 17, 0, 5, 1};
    for (int i = 0; i < 10; ++i) {
        tree.InsertItem(items[i]);
    }

    // Print the items in the tree
    cout << "Tree contents in-order: ";
    tree.Print();
    cout << endl;

    // Count the nodes in the tree where countNodes is executed
    int count = tree.LengthIs();
    cout << "Number of nodes in the tree is: " << count << endl;

    return 0;
}
