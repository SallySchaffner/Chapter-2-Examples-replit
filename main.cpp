// Example 4 - Converting Seconds to Minutes and Seconds
//

#include <iostream>
using namespace std;


int main()
{
    int totalSeconds, minutes, seconds;

    totalSeconds = 356;

    minutes = totalSeconds / 60;
    seconds = totalSeconds % 60;

    cout << minutes << " minutes and " << seconds << " seconds" << endl;

    return 0;
}

