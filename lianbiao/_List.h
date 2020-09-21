#ifndef _List

struct Node;
typedef struct Node *PtrToNode;
typedef PtrToNode List;
typedef PtrToNode Position;

List MakeEmpty(List L);
int IsEmpty(List L);

#endif


struct Node{
    int  Element;
    Position Next;
}