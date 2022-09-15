#include <cstddef>
#include <stdexcept>
#include "ulliststr.h"

ULListStr::ULListStr()
{
  head_ = NULL;
  tail_ = NULL;
  size_ = 0;
}

ULListStr::~ULListStr()
{
  clear();
}

bool ULListStr::empty() const
{
  return size_ == 0;
}

size_t ULListStr::size() const
{
  return size_;
}

// WRITE YOUR CODE HERE

void ULListStr::push_back(const std::string& val)
{
  if (empty()) //empty list
  {
     Item* node = new Item(); //creat new node
      node -> first = 0; // first index of node is one before
      node -> last = 1; // last index of node is last index
      head_ = node;
      tail_ = node;
      //tail_ -> val[tail_ -> first] = val;
      //node -> last++;
      node -> val[0] = val; //val at val[]
  }
  else if (tail_ -> last == ARRSIZE)
  {
    Item* node = new Item();
    node -> first = 0;
    node -> last = 1;
    node -> val[0] = val;
    tail_ -> next = node;
    node -> prev = tail_;
    tail_ = node;
    tail_ -> next = NULL;
    
    //node -> next = tail_;
    //tail_ -> next = node;    node -> prev = tail_;
  
    //tail_ -> val[0]= val;
  }
    //int indexIAmAssigning = head_ -> first - 1;
    //head_ -> val[indexIAmAssigning] = val;
    //head_ -> first = ;
    //head_ -> last = 
else
{
  tail_ -> val[tail_ -> last] = val;
  tail_ -> last++;
}
size_++;
    
} 


void ULListStr::pop_back()
{
if (tail_ == NULL)// first and last pointers
  {
    return;
  }
  else if (size_ == 1)
  {
   delete tail_;
    head_ = NULL;
    tail_ = NULL;
  }
  else if (tail_->last == 1)
  {
    //Item* node = tail_;
    tail_ = tail_ -> prev;
    delete tail_ -> next;
    tail_ -> next = NULL;
    
    //tail_ -> prev = NULL;
  }
  else
  {
    tail_ -> last--;
    
  }
size_--;
}

void ULListStr::push_front(const std::string& val)
{
  if (empty())
    {
     Item* node = new Item();
      node -> val[9] = val;
      node -> first = ARRSIZE-1;
      node -> last = ARRSIZE;
      head_ = node;
      tail_ = node;
      node -> next = NULL;
      node -> prev = NULL;
      //node -> val[node->last-node->first] = val;
      //node -> val[head_->first] = val;
      //node -> last++;
    }
  else if (head_ -> first == 0)
  {
    Item* node = new Item();
    node -> val[9] = val;
    node -> next = head_;
    head_ -> prev = node;
    head_ = node;
    node -> first = ARRSIZE - 1;
    node -> last = ARRSIZE;
    head_ -> val[node -> first]= val;
  }
    //int indexIAmAssigning = head_ -> first - 1;
    //head_ -> val[indexIAmAssigning] = val;
    //head_ -> first = ;
    //head_ -> last = 
else
{
  head_ -> val[head_ -> first - 1] = val;
  head_ -> first--;
}
size_++;



    
}

void ULListStr::pop_front()
{
  if (head_ == NULL)// first and last pointers
  {
    return;
  }
  else if (head_ == tail_ && size_ == 1)
  {
    head_ = NULL;
    delete tail_;
    tail_ = NULL;
    
  }
  else if (head_->last - head_->first == 1)
  {
    Item* node = head_;
    head_ = head_ -> next;
    delete node;  
    head_ -> prev = NULL;
  }
  else
  {
    head_ -> first++;
  }
size_--;
}

std::string const & ULListStr::back() const
{
  return tail_ -> val[tail_ -> last-1];
}

std::string const & ULListStr::front() const
{
  return head_ -> val[head_->first];

}

std::string* ULListStr::getValAtLoc(size_t loc) const
{
  
  Item* node = head_;
  if (loc >= size_)
  {
    return NULL;
  }
  while (node->last - node->first <= loc)
  {
    loc -= node->last - node->first;
    node = node -> next;

    //move the pointer forward
    //subtract from loc
  }

return &node -> val[node->first+loc];
}

void ULListStr::set(size_t loc, const std::string& val)
{
  std::string* ptr = getValAtLoc(loc);
  if(ptr == NULL){
    throw std::invalid_argument("Bad location");
  }
  *ptr = val;
}

std::string& ULListStr::get(size_t loc)
{
  std::string* ptr = getValAtLoc(loc);
  if(ptr == NULL){
    throw std::invalid_argument("Bad location");
  }
  return *ptr;
}

std::string const & ULListStr::get(size_t loc) const
{
  std::string* ptr = getValAtLoc(loc);
  if(ptr == NULL){
    throw std::invalid_argument("Bad location");
  }
  return *ptr;
}

void ULListStr::clear()
{
  while(head_ != NULL){
    Item *temp = head_->next;
    delete head_;
    head_ = temp;
  }
  tail_ = NULL;
  size_ = 0;
}
