#include<bits/stdc++.h>
using namespace std;

// creating a node: 
class Node
{
    public:
    int coefficient;
    int power;
    Node* next;
};

int main()
{
    
    Node* head;
    Node* one = NULL;
    Node* two = NULL;
    Node* three = NULL;

    // allocating the nodes: 
    one = new Node;
    two = new Node;
    three = new Node;

    // assume quadratic equation as 5x^2 + 3x + 2

    one -> coefficient = 5;
    one -> power = 2;
    two -> coefficient = 3;
    two -> power = 1;
    three -> coefficient = 2;
    three -> power = 0;

    // connecting the nodes: 
    one -> next = two;
    two -> next = three;
    three -> next = NULL;

    int value; // value to be taken from user;

    // taking input from user:
    cout<<"the polynomial is: 5x^2 + 3x + 2\n\n";
    cout<<"enter the value to be evaluated: ";
    cin>>value;

    long long ans = 0; // ans stores the final value we get after putting in value in polynomial


    // finding the answer: 
    head = one;
    while(head != NULL)
    {
        ans += pow(value,head -> power) * head -> coefficient;
        head = head -> next;
    }

    // printing the answer:
    cout<<"the answer comes out to be: "<<ans;

    return 0;
}
