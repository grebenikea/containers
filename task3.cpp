#include<iostream>
#include<set>

using namespace std;

int main()
{
    set<int> cuts;
    cuts.insert(0);
    multiset<int> maxlength;

    int length, numofcuts;
    cin >> length >> numofcuts;

    int currentcut;
    for(unsigned int i = 0; i < numofcuts; ++i)
    {
        
        cin >> currentcut;
        cuts.insert(currentcut);
        set<int>::iterator it = cuts.begin();
        it++;
        int max_cut = 0, prev_cut = 0;
        while (it != cuts.end())
        {
            int c_cut = *it;
            if ((c_cut - prev_cut) > max_cut)
            {
                max_cut = c_cut - prev_cut;
            }
            it++;
            prev_cut = c_cut;
        }
        max_cut = max((length - *(--cuts.end())), max_cut);
        maxlength.insert(max_cut);
    }

    multiset<int>::iterator it = (--maxlength.end());
    cout << *it << " ";
    while(it != maxlength.begin())
    {
        it--;
        cout << *it << " ";
    }

    return 0;
}