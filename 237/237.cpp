#include<bits/stdc++.h>
using namespace std;

class ListNode{
    public:
    int val;
    ListNode* next;

    ListNode(){
        val = 0;
        next = nullptr;
    }
    ListNode(int data1, ListNode* next1){
        val = data1;
        next = next1;
    }
    ListNode(int data1){
        val = data1;
        next = nullptr;
    }
};

void deleteNode(ListNode* node){
    ListNode* temp = node->next;
    node->val = temp->val;
    node->next = temp->next;
    delete temp;
}

int main(){
    
    
    return 0;
}