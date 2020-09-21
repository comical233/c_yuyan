#include<iostream>
#include<vector>
using namespace std;
typedef int Elementtype;

vector<Elementtype> insertion_sort(vector<Elementtype> a){
    Elementtype temp;
    int j;
    for (int i = 1; i < a.size(); i++)
    {
        temp = a[i];
        for (j = i; temp < a[j-1] && j > 0;j--)
            a[j] = a[j - 1];
        a[j] = temp;
    }
    return a;
}

int main(){
    Elementtype s;
    vector<Elementtype> a,b;
    while(cin>>s){
        a.push_back(s);
    }
    b = insertion_sort(a);
    for (int i = 0; i < b.size();i++){
        cout << b[i]<<" ";
    }
    return 0;
}

