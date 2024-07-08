#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<string, int> m;
    m["gfg"] = 20;
    m["ide"] = 30;
    m.insert({"courses", 15});
    m.insert({"ide", 25}); // duplicate keys are not allowed

    for(auto x: m){
        cout << x.first << " " << x.second << endl;
    }
    /*if(m.find("ide") != m.end()){
        cout << "Found" << endl;
    }
    else{
        cout << "Not Found" << endl;
    }*/
     auto it = m.find("ide");
        if(it != m.end()){
            cout << "Found " << it->first << " " << it->second << endl;
        }
        else{
            cout << "Not Found" << endl;
        }

    /*for (auto it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }*/

   if(m.count("ide")){
       cout << "Found" << endl;
    }
    else{
        cout << "Not Found" << endl;
    }

    cout << m.size() << endl;
    m.erase("ide");
    cout << m.size() << endl;
    m.erase(m.begin());
    cout << m.size() << endl;
   
   for(auto x: m){
        cout << x.first << " " << x.second << endl;
    }

    m.erase(m.begin(), m.end());
    cout << m.size() << endl;
    

    return 0;
}