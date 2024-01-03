#include <criterion/criterion.h>

int makeNegative(int);

Test(make_negative, should_handle_positive_test, .description = "Example positive number") 
{
  int actual = makeNegative(42);
  int expected = -42;
  cr_assert_eq(actual, expected, "Incorrect answer for n=42: expected %d, but got %d", expected, actual);
}
