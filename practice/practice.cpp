#include <iostream>
using namespace std;



// Practice code/example (recursive)


struct Node {
    std::string key;
    int value;

    Node* next;

    Node(string key, int v, Node* n = nullptr) :  key(key), value(v), next(n) {}
};

void insert_node_at_tail(Node* new_node, Node* head_node) {
    Node* current_node = head_node; 
    while(current_node->next != nullptr)
    {
        current_node = current_node->next;
    }
    if(current_node->next == nullptr)
    {
        current_node->next = new_node;        
    }
}

int hash_function(Node* new_item)
{
    int key_to_index = std::stoi(new_item->key);

    return key_to_index;
}

void insert_into_hash_table(Node* new_item, int item_key_to_index, int* hashBucket[])
{
    if(hashBucket[item_key_to_index] == NULL)
    {
        hashBucket[item_key_to_index] = new_item;
    }
}

int factorial(int n)
{
    if(n<=1)    
        return 1;

    return n * factorial(n - 1);    
}


//Recursive Fibonacci function
int fibonnaci(int n)
{
    if (n > 1)
    {
        return fibonnaci(n - 1) + fibonnaci(n-2);
    }

    return n;
}

void swap_values(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;

    return;
}


//Recursive Fibonacci function - tail recursion
int tailFibonnaci(int n)
{
    if( n <= 1) return n;
    
    return tailFibonnaci(n - 1) + tailFibonnaci(n-2);    
}

int main() {
    int number = 6;

    cout << "5th Fibonacci number is " << fibonnaci(number) << endl;

    // pointers practice

    // variable a
    int a = 10;

    int n = 5, p = 10;

    //variable a is stored at address address_of_a
    // int* type. This is a pointer. 
    // &a denotes the memory address of variable a. 
    int* address_of_a = &a;

    // value held at address_of_a
    int value_at_address_of_a = *address_of_a;


    cout << "Variable a = " << a << "\n" << "Address of a (int* address_of_a = &a):" << address_of_a << "\n" << "Value at address of a (int value_at_address_of_a = *address_of_a): " << value_at_address_of_a << std::endl; 


    // function practice. We will do a simple swap. n = 5, p = 10. We will swap values of a and b using a function.
    cout << "Initial Values: n = " << n << " p = " << p << std::endl;

    swap_values(&n, &p);

    cout << "Swapped Values: n = " << n << " p = " << p << std::endl;

    string test = "HeadNode";
    int t = 1;
    Node head_node = Node(test, t);
    Node new_node = Node("tailNode", 2);

    insert_node_at_tail(&new_node, &head_node);

    cout << head_node.key << endl << head_node.value << endl;
    cout << head_node.next->key << endl << head_node.next->value << endl;

    return 0;
}

