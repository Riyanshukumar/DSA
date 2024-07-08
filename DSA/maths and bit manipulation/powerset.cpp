#include<iostream>
using namespace std;

void PowerSet(string str){
    int n = str.length();
    int pow = (1<<n) ;

    for (int i = 0; i < pow; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i & (1<<j))
              cout << str[j];
        }
        cout << endl ;
        
    }
    
}

int main (){
   string str;
   cin >> str;

   PowerSet(str);
   return 0;

}