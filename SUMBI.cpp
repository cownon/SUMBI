#include<bits/stdc++.h>
using namespace std;

long long binaryToDecimal(long long binarynum)
{
    long long decimalnum = 0, temp = 0, remainder;
    while (binarynum!=0)
    {
        remainder = binarynum % 10;
        binarynum = binarynum / 10;
        decimalnum = decimalnum + remainder*pow(2,temp);
        temp++;
    }
    return decimalnum;
}

int main() {
    long long s, st;

    cin >> s;
    cin >> st;

    long long sum = binaryToDecimal(s) + binaryToDecimal(st);

    long long rem, i = 1, res = 0;
    do
    {
        rem = sum%2;
        res = res + (i*rem);
        sum = sum/2;
        i = i*10;
    } while(sum > 0);
    cout << res;
}
