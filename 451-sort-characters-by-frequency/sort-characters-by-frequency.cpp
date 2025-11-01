class Solution {
public:
string frequencySort(string s) {
    unordered_map<char, int> freq;
    for (char c : s) freq[c]++;

   
    multimap<int, char, greater<int>> m;

    for (auto &p : freq)
        m.insert({p.second, p.first});

    string result = "";
    for (auto &p : m)
        result.append(p.first, p.second);

    return result;
}
    
};