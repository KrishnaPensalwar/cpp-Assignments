#include <iostream>
using namespace std;

void knapsack(int weights[], int values[], int n, int W) {
    int dp[n + 1][W + 1];

    for (int i = 0; i <= n; i++) {
        for (int w = 0; w <= W; w++) {
            if (i == 0 || w == 0) {
                dp[i][w] = 0;
            } else if (weights[i - 1] <= w) {
                dp[i][w] = max(values[i - 1] + dp[i - 1][w - weights[i - 1]], dp[i - 1][w]);
            } else {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }


    for(int i=0;i<=n;i++){
        for(int j=0;j<=W;j++){
            cout<<dp[i][j]<<"  ";
        }
        cout<<endl;
    }

    cout<<"Maximum profit :"<<dp[n][W];
}


int main() {
    int n; // Number of items
    cout << "Enter the number of items: ";
    cin >> n;

    int weights[n], values[n]; // Arrays to store weights and values of items

    cout << "Enter the weights of items: ";
    for (int i = 0; i < n; i++) {
        cin >> weights[i];
    }

    cout << "Enter the values of items: ";
    for (int i = 0; i < n; i++) {
        cin >> values[i];
    }

    int W; // Knapsack capacity
    cout << "Enter the knapsack capacity: ";
    cin >> W;

    knapsack(weights, values, n, W);


    return 0;
}


