#include "sl_node.h"


SLNode::SLNode()
    : next_node_(NULL),
    contents_(0) {
}

SLNode::SLNode(int content)
    : contents_(content) {
}
SLNode::~SLNode() {
}
void SLNode::set_contents(int content) {
    contents_ = content;
}
int SLNode::contents() const {
    return contents_;
}
void SLNode::set_next_node(SLNode* next_node) {
    next_node_ = next_node;
}
SLNode* SLNode::next_node() const {
  return next_node_;
}
