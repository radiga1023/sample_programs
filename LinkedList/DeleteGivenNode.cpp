void DeleteNode(Node* head, int position)
{
    Node* temp = head;
    Node* prev = NULL;
    int cnt = position;
    while (cnt-- > 1)
    {
        prev = temp;
        temp = temp->link;
    }
    prev->link = temp->link;
    delete temp;
    //delete temp;
}
