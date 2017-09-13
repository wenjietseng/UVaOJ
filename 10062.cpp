#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int compare(pair<char, int> a, pair<char, int> b)
{
    if (a.second < b.second) return 1;
    if (a.second > b.second) return 0;
    return (a.first > b.first);
}

int main()
{
    int freq[256];
    vector<pair<char, int> > order;   

    char string[1024];
    for (int T = 0; ; T++)
    {
        order.clear();
        if (!gets(string)) break;
        if (T > 0) printf("\n");

        // read the freqency of each ASCII character
        for (int i = 0; i < 256; i++) freq[i] = 0;
        for (int i = 0; string[i] != '\0'; i++) freq[string[i]]++;

        // if freq[i] != 0, put pair i, freq[i] into order
        for (int i = 0; i < 256; i++)
            if (freq[i] != 0) order.push_back(make_pair(i, freq[i]));

        // use compare to sort vector, print each pair in ascending order
        sort(order.begin(), order.end(), compare);
        for (int i = 0; i < order.size(); i++)
            printf("%d %d\n", order[i].first, order[i].second);
    }
    return 0;
}
