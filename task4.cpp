#include<iostream>
#include<map>

using namespace std;

int main()
{
    int count = 0;
    cin >> count;

    map<int, int> pairs;
    for(unsigned int i = 0; i < count; ++i)
    {
        int el;
        cin >> el;
        if (pairs.find(el) == pairs.end())
        {
            pairs[el] = 1;
        }
        else
        {
            pairs[el] += 1;
        }
    }

    for (auto it = pairs.begin(); it != (--pairs.end()); ++it)
    {
        cout << it->first << " ";
    }
    cout << (--pairs.end())->first << endl;

    for (auto it = pairs.begin(); it != (--pairs.end()); ++it)
    {
        cout << it->second << " ";
    }
    cout << (--pairs.end())->second << endl;
    return 0;
}