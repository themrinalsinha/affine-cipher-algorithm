/*
* Author : Mrinal Sinha
* Program : Affine Cipher Decryption algorithm.
*/

#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

//Function to calculate GCD.
int gcd(int x, int y)
{
    if(x % y == 0)
        return y;
    else
        return gcd(y,x%y);
}

main(void)
{
    char str[100], cipher_str[100];
    int a,b,flag = 0,a_inv;
    cout << "\n\nEnter String to Decrypt : "; cin >> str;
    there:
    cout << "Enter value for 'a' : "; cin >> a;

    //Checking if gcd of a and 26 is 1 or not.
    int gcd_val = gcd(a,26);
    cout << "GCD is : " << gcd_val <<"\n";
    if(gcd_val != 1)
        goto there;
    else
    {

        cout << "Enter value for 'b' : "; cin >> b;
        //finding value of 'a' inverse.
        for(int i = 0; i < 26; i++)
        {
            flag = (a * i) % 26;
            if(flag == 1) a_inv = i;
        }
        for(int i = 0; i < strlen(str); i++)
        {
            str[i] = tolower(str[i]);
            int val = str[i] - 97;
            int res = ((a_inv * (val - b)) % 26) + 97;
            if(res < 97) res += 26;
            cipher_str[i] = res;
        }
        cout << "Decrypted String is : " << cipher_str <<"\n\n";
    }
}
