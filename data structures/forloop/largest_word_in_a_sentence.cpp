#include <iostream>
#include <string>
using namespace std;
int main()
{
    // largest word  in a sentence

    int n;
    cin >> n;
    cin.ignore();
    char arr[n + 1];
    cin.getline(arr, n);
    cin.ignore();

    int i = 0;
    int currLen = 0, maxLen = 0;
    int st = 0, maxst = 0;
    while (1)
    {
        if (arr[i] == ' ' || arr[i] == '\0')
        {
            if (currLen > maxLen)
            {
                maxLen = currLen;
                maxst = st;
            }
            currLen = 0;
            st = i + 1;
        }

        if (arr[i] == '\0')
        {
            break;
        }
        else

            currLen++;

        i++;
    }
    cout << maxLen;
    for (int i = 0; i < maxLen; i++)
    {
        cout << arr[i + maxst];
    }
}