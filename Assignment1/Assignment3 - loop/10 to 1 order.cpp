#include <bits/stdc++.h>
using namespace std;

// Recursive function to print from N to 1
void PrintReverseOrder(int N)
{

    for (int i = N; i > 0; i--)
        cout << i << " ";

}

// Driven Code
int main()
{
    int N = 10;

    PrintReverseOrder(N);


}
