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
  int ocurrencias[26];
  fill(ocurrencias, ocurrencias + 26, 0);
  for (int i = 0; i < s.size(); i++){
    ocurrencias[s[i] - 'a']++;
  }
  for (int i = 0; i < s.size(); i++){
    ocurrencias[t[i] - 'a']--;
  }

  for(int i = 0; i < 26; i++){
    if(ocurrencias[i] != 0)
      return false;
  }
  return true;
}
int main(){
  cout<<isAnagram("cancion", "cancion")<<"\n";
  cout<<isAnagram("anagram", "nagaram")<<"\n";
  cout<<isAnagram("car", "rat")<<"\n";
  return 0;
}