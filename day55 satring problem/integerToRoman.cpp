#include <iostream>
using namespace std;
string IntToRoman(int num)
{
    string roman = "";
    int rem = num % 10;
    num /= 10;
    if (rem == 1)
        roman = "I";
    else if (rem == 2)
        roman = "II";
    else if (rem == 3)
        roman = "III";
    else if (rem == 4)
        roman = "IV";
    else if (rem == 5)
        roman = "V";
    else if (rem == 6)
        roman = "VI";
    else if (rem == 7)
        roman = "VII";
    else if (rem == 8)
        roman = "VIII";
    else if (rem == 9)
        roman = "IX";
    rem = num % 10;
    num /= 10;
    if (rem == 1)
        roman = "X" + roman;
    else if (rem == 2)
        roman = "XX" + roman;
    else if (rem == 3)
        roman = "XXX" + roman;
    else if (rem == 4)
        roman = "XL" + roman;
    else if (rem == 5)
        roman = "L" + roman;
    else if (rem == 6)
        roman = "LX" + roman;
    else if (rem == 7)
        roman = "LXX" + roman;
    else if (rem == 8)
        roman = "LXXX" + roman;
    else if (rem == 9)
        roman = "XC" + roman;

    rem = num % 10;
    num = num / 10;
    if (rem == 1)
        roman = "C" + roman;
    else if (rem == 2)
        roman = "CC" + roman;
    else if (rem == 3)
        roman = "CCC" + roman;
    else if (rem == 4)
        roman = "CD" + roman;
    else if (rem == 5)
        roman = "D" + roman;
    else if (rem == 6)
        roman = "DC" + roman;
    else if (rem == 7)
        roman = "DCC" + roman;
    else if (rem == 8)
        roman = "DCCC" + roman;
    else if (rem == 9)
        roman = "CM" + roman;

    rem = num % 10;
    num = num / 10;
    if (rem == 1)
        roman = "M" + roman;
    else if (rem == 2)
        roman = "MM" + roman;
    else if (rem == 3)
        roman = "MMM" + roman;

    return roman;
}
int main()
{
    int n = 58;
    cout << IntToRoman(n);
}