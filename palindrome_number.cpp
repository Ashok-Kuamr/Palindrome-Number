#include <iostream>
#include <climits>
using namespace std;

int main() {
    int x = 1521;
    int original = x;   //store the value of x in other variable
    int reversed = 0;

    while (x != 0) {
        int ld = x % 10; //ld = last digit
        x /= 10;

        
        if (reversed > INT_MAX / 10 || (reversed == INT_MAX / 10 && ld > 7)) //overflow conditon
            return 0;
        
        if (reversed < INT_MIN / 10 || (reversed == INT_MIN / 10 && ld < -8)) //underflow condition
            return 0;
        

        reversed = reversed * 10 + ld; //reverse
    }

    cout << "Reversed number: " << reversed << endl;

    if (original == reversed)
        cout << "Palindrome: " << original << endl;
    else
        cout << "Not a Palindrome" << endl;

    return 0;
}
