#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>
#include <deque>

using namespace std;

int main()
{
    int CD_size, size;
    cin >> CD_size;

    vector<int> CD_demand(CD_size);
    for (int i = 0; i < CD_size; i++)
    {
        cin >> CD_demand[i];
    }

    cin >> size;

    int notFoundCount = 0;
    unordered_map<int, int> CDIndex;
    deque<int> rack;

    for (int i = 0; i < CD_size; i++)
    {
        int demandedCD = CD_demand[i];

        if (CDIndex.find(demandedCD) != CDIndex.end())
        {
            // CD is already on the rack, update its index in the deque
            int index = CDIndex[demandedCD];
            rack.erase(rack.begin() + index);
        }
        else if (rack.size() >= size)
        {
            // Rack is full, remove the oldest CD
            int oldestCD = rack.back();
            rack.pop_back();
            CDIndex.erase(oldestCD);
            notFoundCount++;
        }

        // Add the demanded CD to the rack
        rack.push_front(demandedCD);
        CDIndex[demandedCD] = 0; // Add to the front, so index is 0
    }

    cout << notFoundCount << endl;

    return 0;
}
