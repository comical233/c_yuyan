#include<iostream>
#include<vector>
using namespace std;

vector<int> a;

void quicksort(int left ,int right){
    int title=left;
    int i = left, j = right;
    if(right<left)
        return;
    while(i != j){
        while(a[j]>a[title]&&i<j)
            --j;
        while(a[i]<a[title]&&i<j)
            ++i;
        if(i<j)
            swap(a[i], a[j]);
    }
    swap(a[i], a[title]);
    quicksort(left, i - 1);
    quicksort(i + 1, right);
}

int main(){
    int t;

    while(cin >> t){
        a.push_back(t);
    }   

    quicksort(0, a.size()-1);
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i]<<" ";
    }
}
