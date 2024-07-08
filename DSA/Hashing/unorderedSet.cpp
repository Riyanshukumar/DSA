#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_set<int> s;
    s.insert(10);
    s.insert(5);
    s.insert(15);
    s.insert(20);
    s.insert(15); // duplicate elements are not allowed

  /*  for (auto x : s)
    {
        cout << x << " ";
    }*/

   for (auto it = s.begin(); it != s.end(); it++)
   {
         cout << *it << " ";
         cout << endl;
    }
           cout << s.size() << endl;
           // s.clear();
           // cout << s.size() << " ";

       /* if(s.find(15) == s.end())
            cout << "Not Found";
        else
            cout << "Found " << *s.find(15) << endl;
    */

      /*if(s.count(15))
        cout << "Found";
      else
        cout << "Not Found";
    */
     /*s.erase(15);
     cout << s.size() << endl;
     auto it = s.find(10);
        s.erase(it);
     cout << s.size() << endl;*/

     s.erase(s.begin(), s.find(15)); // erase all elements from beginning to 15
        cout << s.size() << endl;

     s.erase(s.begin(), s.end()); // erase all elements
        cout << s.size() << endl;

    return 0;
}