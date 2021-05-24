/*
 * Name        : queue.h
 * Author      : Luke Sathrum
 * Description : Header file for Queue Node class.
 */

#ifndef QUEUE_NODE_H_
#define QUEUE_NODE_H_

#include <cstddef>  // For NULL
#include <string>   // For std::string
using std::string;

class QueueNode {
 public:
  /*
   * Constructor
   * Sets next_node_ to NULL and sets the contents to the provided parameter or
   * the empty string if no argument given.
   * @param string contents - The value to set the node data to. Defaults to the
   *                          empty string
   */
  QueueNode(string contents = "")
      : next_node_(NULL),
        contents_(contents) {
  }
  /*
   * Destructor
   * Does nothing.
   */
  ~QueueNode() {
  }

  /*
   * Accessor for contents_.
   * @return string - The node data.
   */
  string contents() const;

  /*
   * Mutator for contents_.
   * @param int contents - The value to set the node data to.
   */
  void set_contents(const string &contents);

  /*
   * Mutator for next_node_
   * @param QueueNode *next_node - A pointer to another QueueNode
   */
  void set_next_node(QueueNode *next_node);

  /*
   * Accessor for next_node__.
   * @return QueueNode* - A pointer to another QueueNode.
   */
  QueueNode* next_node() const;

 private:
  // A pointer to the next node
  QueueNode *next_node_;
  // The data of the node
  string contents_;
};

#endif /* QUEUE_NODE_H_ */
