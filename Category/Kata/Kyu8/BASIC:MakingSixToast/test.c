#include <criterion/criterion.h>

short six_toast(short num);
void tester(short num, short expected);

Test(Sample_Tests, should_pass_3_tests)
{
    tester(  6,  0 );
    tester( 17, 11 );
    tester(  3,  3 );
}

void tester(short num, short expected) {
    short submitted = six_toast(num);
    cr_assert_eq(               submitted,     expected,
        "ERROR\n \nnum = %d\n \nSubmitted: %d\nExpected:  %d\n \n",
                   num,         submitted,     expected
    );
}
