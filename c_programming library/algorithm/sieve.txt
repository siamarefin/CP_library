#include <bits/stdc++.h>
using namespace std;
bitset<100000> bs;
vector<int> prime;
void s(long long upper_bound)
{
    bs.set();
    bs[0] = bs[1] = 0;
    prime.push_back(2);
    for (long long i = 2; i <= upper_bound + 1; i++)
    {
        if (bs[i] == true)
        {
            for (long long j = i * i; j <= upper_bound + 1; j += i)
            {
                bs[j] = 0;
            }
            prime.push_back(i);
        }
    }
    <!--  for (int i = 1; i < 100000; i++)
         cout << prime[i] << endl; -->
}
int main()
{
    s(100000);
}




1. https://codeforces.com/contest/1787/problem/B
2. https://codeforces.com/problemset/problem/1826/C
