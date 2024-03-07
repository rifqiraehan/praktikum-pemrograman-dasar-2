#include <iostream>
#include <ctime>
using namespace std;

// function to generate and return random numbers.
int *getRandom()
{
    static int r[10];
    // set the seed
    srand((unsigned)time(NULL));
    for (int i = 0; i < 10; ++i)
    {
        r[i] = rand();
        cout << r[i] << endl;
    }
    return r;
}

// main function to call above defined function.
int main()
{
    // a pointer to an int.
    int *p;
    p = getRandom();
    for (int i = 0; i < 10; i++)
    {
        cout << "*(p + " << i << ") : ";
        cout << *(p + i) << endl;
    }
    return 0;
}

/**
 * Output:
 * 3571
 * 22029
 * 10175
 * 13466
 * 18530
 * 23920
 * 28360
 * 17449
 * 30456
 * 6182
 * *(p + 0) : 3571
 * *(p + 1) : 22029
 * *(p + 2) : 10175
 * *(p + 3) : 13466
 * *(p + 4) : 18530
 * *(p + 5) : 23920
 * *(p + 6) : 28360
 * *(p + 7) : 17449
 * *(p + 8) : 30456
 * *(p + 9) : 6182
*/