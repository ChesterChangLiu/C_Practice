/* This is the other part of the multiple file example.  Note that we
   only need to declare those functions and variables that we actually
   reference in this file.  For example, we do not need to include
   stdio.h in this file, because we are not using any functions from
   stdio.h (printf) in this file.
*/
int res;
void square(int x) {
  res = x * x;
}
