#include <stdio.h>  /*printf*/
#include <assert.h> /*assert*/
#include <stdlib.h> /*malloc*/

typedef struct node {
  int data;
  struct node *next;
} node;

void add(node *head, int x){
  /*pre: head points to the first, empty element. The last element's next is NULL
    post: a new node containing x is added to the end of the list*/
  assert(head!=NULL);
  node *p = head;
  while (p->next!=NULL) {
    p = p->next;
  } /*p points to the last element*/
  node *element = (node*) malloc(sizeof(node));
  element->next = NULL;
  element->data = x;
  p->next = element; 
}

int size(node *l){
    // Excercise 3b)
    // Add your code here... 
    assert(l != NULL); // Checks to see if there is a list to check the size of
    int number = 0; // Initialize variables
    node *p = l; // Sets a pointer to a node being equal to the list, this essentially makes a copy of list l, I do this just to make sure that i dont mess with the list itself by accident.
    while (p->next != NULL) // A loop that ascertains that as long as the element that next is pointing to exists, the point at which we check if there is a next element is updated, and we add 1 to its size. The first possible thing that can be checked is the first "element" of the list, therefore it will only count elements, and not the empty list element in the beginning.
    {
      p = p->next;
      number += 1;
    }
    
    
    

    return number; //Returns the size of the list.
}

void printout(node *l) {
  /*Excercise 3d) Implement your changes.. 
    pre: head points to the first, empty element. The last element's next is NULL
    post: the values of the list are printed out*/
    node *p = l->next; // A pointer of type node that points to the next element of the list l.
    while (p!=NULL){ // A loop that checks if what p points to exists, if it does then it enters the loop
      printf("%d, ",p->data); // Prints the data in the given element that is being run through in the loop
      p = p->next; // Updates p, so that it through the next run through the loop, checks the next element in the list
    }
    printf("\n");
}

int largest(node *l){
    /*Excercise 3e) Add your code below.
      pre: head points to the first, empty element. The last element's next is NULL. size(l>0)
      post: returns the largest value of the list*/
      node *p = l->next; // A pointer p that points to the second element of the list
      int large = 0; // Initialize variables for largest number
      while (p != NULL) // A loop that checks if the current element being checked exists, if it does then the loop executes
      {
        if (p->data > large) //Checks if the next number in the list is larger than the current largest number
        {
          large = p->data; //if yes, then the number being checked is the new largest number
        }
        p = p->next; // if not, then it will update p, and check the next number on the list
      }
      
    return large; // Returns the largest number
}

