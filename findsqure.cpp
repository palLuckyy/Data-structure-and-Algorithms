#include<iostream>
using namespace std;
int binarysearch(int n) {
    int start = 0;
    int end = n;
    int ans = -1;
     while( start <= end) {
        int mid = start + (end - start)/2;
        long long int squre =  mid*mid;
        if ( squre == n) {
            return mid;

        }
        if ( squre < n) {
            ans = mid;
            start = mid+1;

        }
        else {
            end = mid-1;

        }
     }
     return ans;
}
int main() {
    int number = 27;
    cout << " the squre root of " << number<<" is " <<binarysearch( number)<< endl;

return 0;

}
/*#include <iostream>
using namespace std;

int binarysearch(int n) {
    int start = 0;
    int end = n;
    int ans = -1;

    while (start <= end) {  // Use <= for proper termination condition
        int mid = start + (end - start) / 2;
        long long int square = (long long int)mid * mid;  // Use long long to avoid overflow

        if (square == n) {
            return mid;
        }
        if (square < n) {
            ans = mid;
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return ans;
}

int main() {
    int number = 27;
    cout << "The integer square root of " << number << " is " << binarysearch(number) << endl;

    return 0;
}*/
