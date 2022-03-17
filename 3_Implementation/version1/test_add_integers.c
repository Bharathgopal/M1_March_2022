#include "unity.h"

extern void manual_test_add_integers();

void setUp(void)
{
}

void tearDown(void)
{
}

void automated_test_add_integers()
{
    TEST_ASSERT_EQUAL(0, add_integers(0, 0));
    TEST_ASSERT_EQUAL(30, add_integers(10, 20));
    TEST_ASSERT_EQUAL(-10, add_integers(-10, -20));
}

void automated_test_add_overflow()
{
    TEST_ASSERT_EQUAL(0, add_integers(INT_MAX, 10));
}

void automated_test_add_underflow()
{
    TEST_ASSERT_EQUAL(0, add_integers(INT_MIN, -1));
}

int main(void)
{
    manual_test_add_integers();

    UnityBegin(NULL);

    RUN_TEST(test_add_integers);

    return (UnityEnd());
}
