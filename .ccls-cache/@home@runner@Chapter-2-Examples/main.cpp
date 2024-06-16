// Calculating Percentages
//

#include <iostream>
using namespace std;

int main()
{
    double salary = 6000;
    double percent1 = 5, percent2 = 7, percent3 = 10;
    double contribution1, contribution2, contribution3;

    contribution1 = salary * percent1 / 100;
    contribution2 = salary * percent2 / 100;
    contribution3 = salary * percent3 / 100;

    cout << "Amount of contribution at " << percent1 << "% is $" << contribution1 << endl;
    cout << "Amount of contribution at " << percent2 << "% is $" << contribution2 << endl;
    cout << "Amount of contribution at " << percent3 << "% is $" << contribution3 << endl;

    return 0;
}

