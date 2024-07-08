#include<iostream>
#include<algorithm>
using namespace std;

struct point
{
    int x , y;
};
bool myComp(point p1, point p2){
    return (p1.x > p2.x);
   //return (p1.y < p2.y);
}


int main(){

point arr[]= {{14,25},{6,5},{11,78}};
sort(arr,arr+3, myComp);
for(auto i: arr){
    cout << i.x << " "<< i.y << endl;
}
    
 return 0;     
}

//stable sort : bubble sort, insertion sort, merge sort
//unstable sort  : selection sort, quick sort,  heap sort
