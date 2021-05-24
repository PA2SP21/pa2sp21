#include "queue_node.h"

void QueueNode::set_contents(const string &contents) {
  contents_ = contents;
}

string QueueNode::contents() const {
  return contents_;
}

void QueueNode::set_next_node(QueueNode *next_node) {
  next_node_ = next_node;
}

QueueNode* QueueNode::next_node() const {
  return next_node_;
}
