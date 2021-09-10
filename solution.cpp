#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'diagonalDifference' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY arr as parameter.
 */

int main() {
    int d1=0,d2=0,n,diff=0;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    for (int i=0;i<n;i++)
    {
        d1=d1+arr[i][i];
        d2=d2+arr[i][n-i-1];
    }
    diff= abs(d1-d2);
    cout<<diff;
}

