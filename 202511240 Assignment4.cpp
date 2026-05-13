#include <iostream>
#include <string>
using namespace std;

int main()
{

    string names[5] = {"Sara", "Azza", "Manar", "Anwer", "Fatima"};
    int ages[5] = {22, 40, 18, 35, 28};

    int n = 5;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (names[j] > names[j + 1])
            {
                string tempName = names[j];
                names[j] = names[j + 1];
                names[j + 1] = tempName;

                int tempAge = ages[j];
                ages[j] = ages[j + 1];
                ages[j + 1] = tempAge;
            }
        }
    }

    string key;
    cout << "Enter a name to search: ";
    cin >> key;

    int low = 0;
    int high = n - 1;
    bool found = false;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (names[mid] == key)
        {
            cout << names[mid] << " was found and is aged "
                 << ages[mid] << endl;

            found = true;
            break;
        }
        else if (key < names[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    if (found == false)
    {
        cout << "Not found";
    }

    return 0;
}