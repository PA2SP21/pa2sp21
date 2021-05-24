/*
 * Name        : queue.h
 * Author      : Luke Sathrum
 * Description : Header file for Queue class.
 */

#ifndef QUEUE_H_
#define QUEUE_H_

#include <iostream>
#include <string>
#include <sstream>
#include "queue_node.h"
using std::string;
using std::stringstream;

class Queue {
 public:
  /*
   * Default Constructor
   * Sets head_ and tail_ to NULL and size_ to 0
   */
  Queue();

  /*
   * Destructor
   * Calls Clear()
   */
  ~Queue();

  /*
   * Adds a string to the end of the queue
   * @param string contents - A string to add to the end of the queue
   */
  void Push(string contents);

  /*
   * Removes the string at the beginning of the queue. If the queue is empty
   * this function does nothing
   */
  void Pop();

  /*
   * Returns the string at the beginning of the queue. If the queue is empty
   * returns "None"
   * @return string - The string at the beginning of the queue or "None" if the
   *                  queue is empty
   */
  string GetFront();

  /*
   * Returns the string at the end of the queue. If the queue is empty returns
   * "None"
   * @return string - The string at the beginning of the queue or "None" if the
   *                  queue is empty
   */
  string GetEnd();

  /*
   * Removes all nodes from the queue
   */
  void Clear();

  /*
   * Accessor for size_
   * @return unsigned int - The size of the queue
   */
  unsigned int size() const {
    return size_;
  }

  /*
   * Creates a string representation of the queue. It should be comma separated
   * starting with the first node in the queue.
   * Example: John Doe, Jane Doe, Billy Bob
   * @return string - A comma separated string of your queue or "Empty" if there
   *                  is nothing in the queue.
   */
  string ToString() const;

 private:
  QueueNode *head_;
  QueueNode *tail_;
  unsigned int size_;
};

#endif /* QUEUE_H_ */
