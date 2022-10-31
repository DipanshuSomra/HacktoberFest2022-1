#include<iostream>
#include<stdlib.h>

using namespace std;
class Node
{
    public:
    Node *head;
    Node *next;
    int data;
    
    //contructor of node class for having at least one value
    Node()
    {
        
        this -> head = NULL;
    }
    
    void push(int data){
               
    }
    
    void pop(){
               
   }

    void peek(){
               
   }

    void empty(){
              
   }
};


int main()
{
    Node st();
    st.push(22);
    
    st.push(44);

    st.peek(); 

    st.pop();

    st.peek();

    



    return 0;
}