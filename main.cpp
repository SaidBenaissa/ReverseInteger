#include <iostream>
using namespace std;
class Solution {
public:
    int reverse(int x) {
        int reversed = 0;
        int pop;

        while(x != 0){
            pop = x % 10;

            x /= 10;

            reversed = (reversed * 10) + pop;

        }
        return reversed;
    }
};

int main() {
    Solution solution;
   cout<<solution.reverse(123)<<endl;
}
