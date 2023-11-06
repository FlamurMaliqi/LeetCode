struct ListNode* add(int val1, struct ListNode* list) {
    struct ListNode* newNode = malloc(sizeof(struct ListNode));
    if (newNode == NULL) {
        return NULL; 
    }

    newNode->val = val1;
    newNode->next = NULL;
    return newNode;
}

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* result = NULL;
    struct ListNode* temp = NULL;
    int carry = 0;

    while (l1 != NULL || l2 != NULL || carry > 0) {
        int sum = 0;

        if (l1 != NULL) {
            sum += l1->val;
            l1 = l1->next;
        }

        if (l2 != NULL) {
            sum += l2->val;
            l2 = l2->next;
        }

        sum += carry;
        carry = sum / 10;
        sum = sum % 10;

        if (result == NULL) {
            result = add(sum, result);
            temp = result;
        } else {
            temp->next = add(sum, temp->next);
            temp = temp->next;
        }
    }

    return result;
}
