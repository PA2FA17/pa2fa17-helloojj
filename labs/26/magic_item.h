
#ifndef MAGIC_ITEM_H
#define MAGIC_ITEM_H

#include "item.h"

class MagicItem : public Item {

 public:
  MagicItem(string name = "magicitem", double value = 0,
            string description = "no description",
            unsigned int mana_required = 0);
  virtual ~MagicItem();
  
  string description();
  unsigned int mana_required();
  
  void set_description(string description);
  void set_mana_required(unsigned int mana_required);
  string ToString();
  
 private:
  string description_;
  unsigned int mana_required_;
};

#endif
