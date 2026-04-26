template <typename T>
class Queue
{
private:
    int rear;
    int front;
    int capacity;
    int noOfElements;
    T *data;
    void reSize(int newSize);

public:
    Queue()
    {
        rear = front = noOfElements = capacity = 0;
        data = nullptr;
    };
    ~Queue();
    void enQueue(T val);
    T deQueue();
    T getElementAtFront();
    bool isEmpty();
    bool isFull();
    int getNoOfElements();
    int getcapacity();
};
