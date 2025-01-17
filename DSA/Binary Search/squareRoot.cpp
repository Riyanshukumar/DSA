#include<iostream>
using namespace std;

/*int sqRoot(int x){
    int i = 1;
    while (i*i <= x)
    {
        i++;
    }
    return i-1;
    
}*/
int sqRoot(int x){
    int low = 1, high = x, ans = -1;
    while (low <= high)
    {
        int mid = (low + high)/2;
        int mSq = mid*mid;
        if (mSq == x)
        {
            return mid;
        }
        else if (mSq > x)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
            ans = mid;
        }
    }
    return ans;
}

int main(){
    int a;
    cin>>a;

    cout << sqRoot(a) << endl;

    return 0;
}