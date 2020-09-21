#include<iostream>
#include<vector>

using namespace std;
int n;

vector<int> box;
vector<bool> book;
void dfs(int step){
    if(step==n){
        for (int i = 0; i != box.size();i++){
            cout << box[i];
        }
        cout << endl;
    }
    for (int i = 1; i <= book.size();i++){
        if(book[i-1]==1){
            box[step]= i;
            book[i-1] = 0;
            dfs(step + 1);
            book[i-1] = 1;
        }
    }
}
int main(){
    cin >> n;
    for (int i = 0; i < n;i++){
        book.push_back(1);
        box.push_back(0);
    }
    dfs(0);
    return 0;
}