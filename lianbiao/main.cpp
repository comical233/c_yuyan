#include <iostream>
#include"_List.h"
using namespace std;


int main()
{   
    
    IsEmpty(L);
    return 0;
}
int IsEmpty(List L){
    return L->Next == NULL;
}