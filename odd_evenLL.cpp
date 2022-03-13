ListNode *oddEvenList(ListNode *head)
{
    if (!head)
    {
        return head;
    }
    if (!head->next)
    {
        return head;
    }
    ListNode *odd = head;
    ListNode *res1 = odd;
    ListNode *even = head->next;
    ListNode *temp1 = even;
    head = head->next->next;

    while (head != NULL)
    {

        odd->next = head;
        odd = odd->next;

        if (head->next)
        {
            head = head->next;
        }
        else
        {
            break;
        }

        even->next = head;
        even = even->next;
        if (head->next)
        {
            head = head->next;
        }
        else
        {
            break;
        }
    }
    even->next = NULL;
    odd->next = temp1;
    return res1;
}