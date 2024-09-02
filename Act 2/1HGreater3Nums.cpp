#include <iostream>
using namespace std;

class Numbers {
public:
    int a, b, c;

    void find_greatest() {
        int greatest = a;
        if (b > greatest)
            greatest = b;
        if (c > greatest)
            greatest = c;
        cout << "The greatest of " << a << ", " << b << ", and " << c << " is " << greatest << endl;
    }
};

int main() {
    Numbers nums;
    cout << "Enter three numbers: ";
    cin >> nums.a >> nums.b >> nums.c;
    nums.find_greatest();
    return 0;
}
