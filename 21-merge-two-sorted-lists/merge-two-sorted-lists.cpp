class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        vector<int> arr;

        while(list1 != NULL) {
            arr.push_back(list1->val);
            list1 = list1->next;
        }

        while(list2 != NULL) {
            arr.push_back(list2->val);
            list2 = list2->next;
        }

        sort(arr.begin(), arr.end());

        if(arr.empty())
            return NULL;

        // ListNode* head = new ListNode(arr[0]);
        // ListNode* tail = head;

        // for(int i = 1; i < arr.size(); i++) {

        //     tail->next = new ListNode(arr[i]);

        //     tail = tail->next;
        // }

        // return head;
          ListNode* dummy = new ListNode(0);
        ListNode* tail = dummy;

        for(int x : arr) {
            tail->next = new ListNode(x);
            tail = tail->next;
        }

        return dummy->next;
    }
};