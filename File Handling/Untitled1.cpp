#include <bits/stdc++.h>
using namespace std;

string duplicate_encoder(string& word){
  string ans;
  unordered_map<char, int> mp;
  for(int i = 0; i  < word.length(); i++) {
    char c = word[i];
    if(word[i] >= 'A' && word[i] <= 'Z') c |= ' ';
    mp[c]++;
  }
  for(int i = 0; i  < word.length(); i++) {
    char c = word[i];
    if(word[i] >= 'A' && word[i] <= 'Z') c |= ' ';
    if(mp[c] > 1) ans.push_back(')');
    else ans.push_back('(');
  }
  return ans;
}
int main() {
	string word = "(( @";
	cout << duplicate_encoder(word);
}

