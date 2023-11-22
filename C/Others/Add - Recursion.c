#include <assert.h>
#include <stdio.h>

int add_recursive(int x, int y) {
  assert(y >= 0); // precondition check.
  if (y == 0) {
 
    return x;
  } else {

    int result = add_recursive(x, y - 1);

    return result + 1;
  }
}

int main(void){
  assert(add_recursive(5, 6) == 11);
  assert(add_recursive(5, 0) == 5);
  assert(add_recursive(0, 7) == 7);
  return 0;
}
