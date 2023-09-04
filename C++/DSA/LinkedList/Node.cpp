class Node {
public:
    explicit Node(int); // constructor
    void setData(int); // set data member
    int getData() const; // get data member
    void setNextPtr(Node*); // set pointer to next Node
    Node* getNextPtr() const; // get pointer to next Node
private:
    int data; // data stored in this Node
    Node* nextPtr; // pointer to another object of same type
};
