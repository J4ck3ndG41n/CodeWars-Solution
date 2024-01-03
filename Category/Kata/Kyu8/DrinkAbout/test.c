#include <criterion/criterion.h>

char *people_with_age_drink(unsigned age);
void tester(unsigned age, const char *expected);

Test(people_with_age_drink, _1_Toddy_Tests) {
    tester( 13, "drink toddy" );
    tester(  8, "drink toddy" );
    tester(  0, "drink toddy" );
}

Test(people_with_age_drink, _2_Coke_Tests) {
    tester( 17, "drink coke" );
    tester( 15, "drink coke" );
    tester( 14, "drink coke" );
}

Test(people_with_age_drink, _3_Beer_Tests) {
    tester( 20, "drink beer" );
    tester( 19, "drink beer" );
    tester( 18, "drink beer" );
}

Test(people_with_age_drink, _4_Whisky_Tests) {
    tester( 22, "drink whisky" );
    tester( 21, "drink whisky" );
    tester( 52, "drink whisky" );
}

void tester(unsigned age, const char *expected) {
    const char *submitted = people_with_age_drink(age);
    cr_assert_str_eq(                          submitted,         expected,
        "< Incorrect Result >\n \nage = %u\n \nSubmitted: \"%s\"\nExpected:  \"%s\"\n \n",
                                  age,         submitted,         expected 
    );
}
