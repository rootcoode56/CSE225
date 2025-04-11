#include <iostream>

using namespace std;

int main() {
    int m, n;
    cout << "Enter the number of elements S1: ";
    cin >> m;
    int* seq1 = new int[m];
    cout << "Enter the elements in ascending order: ";
    for (int i = 0; i < m; ++i) {
        cin >> seq1[i];
    }

    cout << "Enter the number of elements S2: ";
    cin >> n;
    int* seq2 = new int[n];
    cout << "Enter the elements in ascending order: ";
    for (int i = 0; i < n; ++i) {
        cin >> seq2[i];
    }

    // Combine the sequences
    int* combinedSeq = new int[m + n];
    int i = 0, j = 0, k = 0;
    while (i < m && j < n) {
        if (seq1[i] < seq2[j]) {
            combinedSeq[k++] = seq1[i++];
        } else {
            combinedSeq[k++] = seq2[j++];
        }
    }
    while (i < m) {
        combinedSeq[k++] = seq1[i++];
    }
    while (j < n) {
        combinedSeq[k++] = seq2[j++];
    }

    // Output the combined sequence
    cout << "Final result in ascending order:\n";
    for (int idx = 0; idx < k; ++idx) {
        cout << combinedSeq[idx] << " ";
    }
    cout << endl;

    // Deallocate memory
    delete[] seq1;
    delete[] seq2;
    delete[] combinedSeq;

    return 0;
}
