#include<iostream>
using namespace std;

//Program to convert Decimal to Binary
//		by Aniruddha

void binary(int num)
{
    int rem;

    if (num <= 1)
    {
        cout << num;
        return;
    }

    rem = num % 2;
    binary(num / 2);
    cout << rem;
}

int main()

{
    int dec, bin;
    cout << "Enter the number : ";
    cin >> dec;

    if (dec < 0)
        cout << dec << " is not a positive integer." << endl;

    else
    {
        cout << "The binary form of " << dec << " is ";
        binary(dec);
        cout << endl;
    }
    return 0;
}

/*Sample Output
Enter the number : 25
The binary form of 25 is 11001
*/
