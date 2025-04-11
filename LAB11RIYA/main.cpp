#include <iostream>
#include <climits>
#include "quetype.h"

using namespace std;

int minCoins(int coins[], int m, int V)
{
    int* table = new int[V+1];
    table[0] = 0;
    for (int i=1; i<=V; i++)
        table[i] = INT_MAX;
    for (int i=1; i<=V; i++)
    {
        for (int j=0; j<m; j++)
          if (coins[j] <= i)
          {
              int sub_res = table[i-coins[j]];
              if (sub_res != INT_MAX && sub_res + 1 < table[i])
                  table[i] = sub_res + 1;
          }
    }
    int result = table[V];
    delete[] table;
    return (result == INT_MAX)? -1 : result;
}

int main()
{
    int n;
    cout << "Input the number of coin types: ";
    cin >> n;
    int* coins = new int[n];
    cout << "Enter values of the coin: ";
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }
    int amount;
    cout << "Enter the amount of money to make: ";
    cin >> amount;
    cout << "The minimum number of coins needed to money is: " << minCoins(coins, n, amount) << endl;
    delete[] coins;
    return 0;
}
