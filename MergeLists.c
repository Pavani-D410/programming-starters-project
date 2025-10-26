/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode *new,*temp;
    new=(struct ListNode*)malloc(sizeof(struct ListNode));
    temp=(struct ListNode*)malloc(sizeof(struct ListNode ));
    struct ListNode *l1,*l2;
    l1=list1;
    l2=list2;
    temp=new;
    while(l1!=NULL&&l2!=NULL){
        if(l1->val<l2->val){
            temp->next=l1;
            temp=l1;
            l1=l1->next;
        }
        else{
            temp->next=l2;
            temp=l2;
            l2=l2->next;
        }
    }
    if(l1!=NULL)
    temp->next=l1;
    else
    temp->next=l2;
    return new->next;
}
