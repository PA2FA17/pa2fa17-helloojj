
#include "magic_item.h"

MagicItem::MagicItem(string name, double value, string description,
                    unsigned int mana_required) : Item(name, value),
                    description_(description), mana_required_(mana_required) {
}
MagicItem::~MagicItem() {
}

string MagicItem::description() {
  return description_;
}

unsigned int MagicItem::mana_required() {
  return mana_required_;
}

void MagicItem::set_description(string description) {
  description_ = description;
}

void MagicItem::set_mana_required(unsigned int mana_required) {
 mana_required_ = mana_required;
}

string MagicItem::ToString() {
  std::stringstream ss;
  ss.setf(std::ios::fixed|std::ios::showpoint);
  ss.precision(2);
  ss << Item::ToString() << ", " << description_ << ", requires "
     << mana_required_ << " mana";
  return ss.str();
}