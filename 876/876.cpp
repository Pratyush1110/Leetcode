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

    ListNode(int x){
        val = x;
        next = nullptr;
    }

    ListNode(int x, ListNode* next1){
        val = x;
        next = next1;
    }
};

ListNode* convertArr2LL(vector<int>& arr){
    ListNode* head = new ListNode(arr[0]);
    ListNode* mover = head;
    for(int i=1; i<arr.size(); i++){
        ListNode* temp = new ListNode(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

void print(ListNode* head){
    ListNode* temp = head;
    while(temp){
        cout << temp->val << " ";
        temp = temp->next;
    }
}

ListNode* middleNode(ListNode* head){
    ListNode* slow = head;
    ListNode* fast = head;
    while(fast!=nullptr && fast->next != nullptr){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

int main(){
    vector<int>arr = {1, 2, 3, 4, 5};
    ListNode* head = convertArr2LL(arr);
    print(head);
    ListNode* mid = middleNode(head);
    print(mid);
    
    return 0;
}