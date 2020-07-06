/* This is the other part of the second multiple file example.  Note that we
   only need to declare those functions and variables that we actually
   reference in this file.  For example, we do not need to include
   stdio.h in this file, because we are not using any functions from
   stdio.h (printf) in this file.

   In the second example, we are putting our declarations in a header
   file called "calc2.h"
*/
#include "calc2.h"

int res;
void square(int x) {
  res = x * x;
}
