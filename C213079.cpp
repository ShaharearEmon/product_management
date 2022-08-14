#include <bits/stdc++.h>
using namespace std;

bool prime_check(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{

    int arr[101];
    ifstream input("input.txt");
    ofstream output("output.txt");
    int i = 1;

    while (input >> arr[i])
    {

        if (prime_check(arr[i]))
        {
            output << "The number " << arr[i] << " is prime" << endl;
            continue;
        }
        else
        {
            output << "The number " << arr[i] << " is composite" << endl;
            continue;
        }
        i++;
    }
}