/**
 * @file test_activity.c
 * @author Andra Monish (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-05-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "unity.h"
#include "activity.h" 

void setUp()
{
}

void tearDown()
{
}

void test_sumofcharacters(void)
{
    char name[size];
    TEST_ASSERT_EQUAL("monish", "sum:28e"); 
}


void loop()
{

    UNITY_BEGIN();

    RUN_TEST(test_sumofcharacters);

    UNITY_END();
}
