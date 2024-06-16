// Example 4 - Converting Seconds to Minutes and Seconds
//

#include <iostream>
using namespace std;


int main()
{
    int totalSeconds, minutes, seconds;

    cout << "Enter a number of seconds between 0 and 3600: ";
    cin >> totalSeconds;

    minutes = totalSeconds / 60;
    seconds = totalSeconds % 60;

    cout << minutes << " minutes and " << seconds << " seconds" << endl;

    return 0;
}

