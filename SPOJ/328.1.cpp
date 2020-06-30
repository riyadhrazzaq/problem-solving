#include<bits/stdc++.h>
using namespace std;
string findSum(string str1, string str2)
{

    if (str1.length() > str2.length())
        swap(str1, str2);

    string str = "";


    int n1 = str1.length(), n2 = str2.length();
    int diff = n2 - n1;


    int carry = 0;


    for (int i=n1-1; i>=0; i--)
    {

        int sum = ((str1[i]-'0') +
                   (str2[i+diff]-'0') +
                   carry);
        str.push_back(sum%10 + '0');
        carry = sum/10;
    }


    for (int i=n2-n1-1; i>=0; i--)
    {
        int sum = ((str2[i]-'0')+carry);
        str.push_back(sum%10 + '0');
        carry = sum/10;
    }
    if (carry)
        str.push_back(carry+'0');
    reverse(str.begin(), str.end());

    return str;
}

bool isSmaller(string str1, string str2)
{
    // Calculate lengths of both string
    int n1 = str1.length(), n2 = str2.length();

    if (n1 < n2)
        return true;
    if (n2 > n1)
        return false;

    for (int i=0; i<n1; i++)
    {
        if (str1[i] < str2[i])
            return true;
        else if (str1[i] > str2[i])
            return false;
    }
    return false;
}

// Function for finding difference of larger numbers
string findDiff(string str1, string str2)
{
    // Before proceeding further, make sure str1
    // is not smaller
    if (isSmaller(str1, str2))
        swap(str1, str2);

    // Take an empty string for storing result
    string str = "";

    // Calculate lengths of both string
    int n1 = str1.length(), n2 = str2.length();
    int diff = n1 - n2;

    // Initially take carry zero
    int carry = 0;

    // Traverse from end of both strings
    for (int i=n2-1; i>=0; i--)
    {
        // Do school mathematics, compute difference of
        // current digits and carry
        int sub = ((str1[i+diff]-'0') -
                   (str2[i]-'0') -
                   carry);
        if (sub < 0)
        {
            sub = sub+10;
            carry = 1;
        }
        else
            carry = 0;

        str.push_back(sub + '0');
    }
    for (int i=n1-n2-1; i>=0; i--)
    {
        if (str1[i]=='0' && carry)
        {
            str.push_back('9');
            continue;
        }
        int sub = ((str1[i]-'0') - carry);
        if (i>0 || sub>0) // remove preceding 0's
            str.push_back(sub+'0');
        carry = 0;

    }
    reverse(str.begin(), str.end());

    return str;
}

int main()
{
    char temp[101];
    while(scanf("%s",temp)!=EOF)
    {
        if(!strcmp(temp,"1")) printf("1\n");
        else
        {
            string n(temp);
            string two="2";
            cout<<findSum(n,findDiff(two,n))<<endl;
        }

    }
}
