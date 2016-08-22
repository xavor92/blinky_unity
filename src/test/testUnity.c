/*
 * testUnity.c
 *
 *  Created on: 22.08.2016
 *      Author: olli
 */

#include "unity.h"

int i;

void setUp(void) {
    i = 17;
}

void tearDown(void) {
    // clean stuff up here
}

void test_function_should_fail(void) {
    TEST_ASSERT_EQUAL(1, 42);
}

void test_function_should_pass(void) {
    TEST_PASS();
}

void test_i_is_17(void) {
	TEST_ASSERT_EQUAL(i, 17);
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_function_should_pass);
    RUN_TEST(test_function_should_fail);
    RUN_TEST(test_i_is_17);
    return UNITY_END();
}
