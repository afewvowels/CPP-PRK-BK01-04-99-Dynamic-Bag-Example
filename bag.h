#ifndef _BAG_H
#define _BAG_H
#include <cstdlib>

using namespace std;

class Bag {
public:
  typedef int value_type;
  typedef size_t size_type;
  static const size_type DEFAULT_CAPACITY = 30;

  Bag(size_type initial_capacity=DEFAULT_CAPACITY);
  Bag(const Bag& source);
  ~Bag();

  void reserve(size_type new_capacity);
  bool erase_one(const value_type& target);
  size_type erase(const value_type& target);
  void insert(const value_type& entry);

  void operator+=(const Bag& addend);
  void operator=(const Bag& source);

  size_type size() const { return used; };
  size_type count(const value_type& target) const;
private:
  value_type *data;
  size_type used;
  size_type capacity;
};

Bag operator+(const Bag& b1, const Bag& b2);

#endif
