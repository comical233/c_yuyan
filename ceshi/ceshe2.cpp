
#include<iostream>
#include<string>


using namespace std;

int call_count(){
    static int cot=0;
    return ++cot;
}
int main(){
    for (int i = 0; i < 10;++i){
        cout << call_count() << endl;
    }
}