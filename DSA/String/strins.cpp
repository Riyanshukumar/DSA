#include<iostream>
#include<string.h>
using namespace std;

int main(){
    //char str[]={'r','i','y','a','n','s','h','u'};
    //cout << str;
        char s1[] = "riyanshu";
        char s2[] = "riyanshi";

        int ans = strcmp(s1,s2);
        cout << ans << endl;

        if(ans>0)
        cout <<"greater";
        else if(ans==0) 
        cout << "same";
        else 
        cout << "smaller"; 
      cout << endl;
        //strcpy(s1,s2);
        //cout << s1 << endl;
        //strcat(s1,s2);
        //cout << s1 << endl;
        //cout << strlen(s1) << endl;
        //cout << strchr(s1,'a') << endl;
        //cout << strstr       
      //strcpy is used to copy the string from one to another
        //strcat is used to concatenate the string
        //strlen is used to find the length of the string
        //strcmp is used to compare the string
        //strchr is used to find the first occurence of the character in the string
        //str.find is used to find the first occurence of the character in the string
        //str.substr is used to extract the substring from the string
        //str.erase is used to erase the substring from the string
        char str1[] = "Hello";
        char str2[] = "World";

        // strcpy is used to copy the string from one to another
        char str3[10];
        strcpy(str3, str1);
        cout << "strcpy: " << str3 << endl;

        // strcat is used to concatenate the string
        strcat(str1, str2);
        cout << "strcat: " << str1 << endl;

        // strlen is used to find the length of the string
        int len = strlen(str1);
        cout << "strlen: " << len << endl;

        // strcmp is used to compare the string
        int cmp = strcmp(str1, str2);
        cout << "strcmp: " << cmp << endl;

        // strchr is used to find the first occurrence of the character in the string
        char* occ = strchr(str1, 'o');
        cout << "strchr: " << occ << endl;

        // find is used to find the first occurrence of the character in the string
        string str4 = "Hello World";
        size_t pos = str4.find('o');
        cout << "str.find: " << pos << endl;

        // substr is used to extract the substring from the string
        string sub = str4.substr(6, 5);
        cout << "str.substr: " << sub << endl;

        // erase is used to erase the substring from the string
        str4.erase(6, 5);
        cout << "str.erase: " << str4 << endl;
    return 0;
}