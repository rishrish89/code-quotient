#include <bits/stdc++.h>
using namespace std;
int reverseDigits(int num)
{
    static int rev_num = 0;
    static int base_pos = 1;
    if (num > 0) {
        reverseDigits(num / 10);
        rev_num += (num % 10) * base_pos;
        base_pos *= 10;
    }
    return rev_num;
}
// Driver Code
int main()
{
    int num;
    cin>>num;
    cout << reverseDigits(num);
    return 0;
}
