#include<iostream>
#include<string>
#include<cctype>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

map<string,int> cnt;
vector<string> words;

//将单词s进行“标准化”
string repr(const string& s) {
  string ans = s;
  for (int i; i < ans.size();++i){
    ans[i] = tolower(ans[i]);
  }
  sort(ans.begin(), ans.end());
  return ans;
}

int main() {
  string s;
  while(cin>>s){
    words.push_back(s);
    string ans;
    ans = repr(s);
    if(!cnt.count(ans))
      cnt[ans] = 0;
    cnt[ans]++;
  }
  vector<string> aa;
  for (int i = 0; i < words.size(); i++)
  {
    if(cnt[repr(words[i])]==1)
      aa.push_back(words[i]);
  }
  sort(aa.begin(), aa.end());
  for (int i = 0; i < aa.size(); i++)
  {
    cout << aa[i] << endl;
  }
    return 0;
}