/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };


*****************************************************************/
class Stack
{
public:
    Node *head;
    int size;

    Stack()
    {
        head = NULL;
        size = 0;
    }

    int getSize()
    {
        return size;
    }

    bool isEmpty()
    {
        return size == 0;
    }

    void push(int data)
    {
        Node *newNode = new Node(data);
        newNode->next = head;
        head = newNode;
        size++;
    }

    void pop()
    {       
        if ( head != NULL)
        {
            size--;
            Node *temp = head;
            head = head->next;
            delete temp;
        }
            
            
    }

    int getTop()
    {
        if (head != NULL)
        {
            return head->data;
        }
        return -1;
    }
};
