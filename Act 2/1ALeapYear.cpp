#include <iostream>
using namespace std;

class Year {
public:
    int value;
    bool is_leap_year() {
        if ((value % 4 == 0 && value % 100 != 0) || (value % 400 == 0))
            return true;
        return false;
    }
};

int main() {
    Year year;
    cout << "Enter a year: ";
    cin >> year.value;

    if (year.is_leap_year())
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
