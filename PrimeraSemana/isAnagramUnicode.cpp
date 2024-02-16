// Link problema: https://codeforces.com/problemset/problem/160/A
#include <algorithm>
#include <iostream>
#include <iterator>
#include <map>
#include <unordered_map>
#include <vector>
using namespace std;
typedef int64_t ll;

bool isAnagram(string s, string t) {
    if (s.size() != t.size())
        return false;
    unordered_map<char, int> ocurrencias;
    for (int i = 0; i < s.size(); i++){
        ocurrencias[s[i]]++;
    }
    for (int i = 0; i < s.size(); i++){
        ocurrencias[t[i]]--;
    }

    for (int i = 0; i < s.size(); i++){
        if(ocurrencias[s[i]] != 0)
            return false;
    }
    return true;
}

int main(){
  cout<<isAnagram("canción", "cancián")<<"\n";
  cout<<isAnagram("anagram", "nagaram")<<"\n";
  cout<<isAnagram("car", "rat")<<"\n";
  return 0;
}