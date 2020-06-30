#include<bits/stdc++.h>
using namespace std;
int i;
regex first ("\\b[a-z]");
regex capF ("\\b[A-Z]");
regex capA ("[A-Z]");
regex uscore ("_");
regex single ("[a-z]");
regex multiUnd ("__");


bool isJava(string str)
{
    if(regex_search(str,uscore)) return false;
    if(regex_search(str,capF)) return false;
    return true;
}

bool isCpp(string str)
{
    if( regex_search(str,capA) ) return false;
    if(str[0]=='_'||str[str.length()-1]=='_') return false;
    if( regex_search(str,multiUnd)) return false;
    return true;
}
void convertToCpp(string str)
{
    char und = '_';
    for(i=0; i<str.length(); i++)
    {
        if(str[i]<=90)
        {
            str[i] = str[i]+32;
            str.insert(i++,1,und);

        }
    }
    cout<<str<<endl;
}
void convertToJava(string str)
{

    for(i=0; i<str.length(); i++)
    {
        if(str[i]=='_')
        {
            str[i+1]= str[i+1]-32;
            str.erase(i,1);
        }
    }
    cout<<str<<endl;


}


int main()
{
    char a[101];
    string str;
    while(scanf("%s",&a)!=EOF)
    {
        str=a;
        if(isJava(str)) convertToCpp(str);
        else if(isCpp(str)) convertToJava(str);
        else printf("Error!\n");
    }
}
