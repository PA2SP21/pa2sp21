#include "queue.h"

void Queue::Clear() {
  QueueNode *iterator = head_;
  while (iterator != NULL) {
    head_ = head_->next_node();
    delete iterator;
    iterator = head_;
  }
  tail_ = NULL;
  size_ = 0;
}
