class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {

        priority_queue<int, vector<int>, greater<int>> q;

        for(int i = 0; i < lists.size(); i++) {
            ListNode* temp = lists[i];

            while(temp != NULL) {
                q.push(temp->val);
                temp = temp->next;
            }
        }

        ListNode* head = new ListNode(0);
        ListNode* temp = head;

        while(!q.empty()) {
            temp->next = new ListNode(q.top());
            q.pop();
            temp = temp->next;
        }

        return head->next;
    }
};
