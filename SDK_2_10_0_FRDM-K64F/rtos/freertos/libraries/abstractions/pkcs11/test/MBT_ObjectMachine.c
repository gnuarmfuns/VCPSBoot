/*
 * FreeRTOS PKCS #11 V2.2.0
 * Copyright (C) 2019 Amazon.com, Inc. or its affiliates.  All Rights Reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of
 * this software and associated documentation files (the "Software"), to deal in
 * the Software without restriction, including without limitation the rights to
 * use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
 * the Software, and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 * http://aws.amazon.com/freertos
 * http://www.FreeRTOS.org
 */

/*------------------------------------------------------------------------------ */
/* */
/* This code was auto-generated by a tool. */
/* */
/* Changes to this file may cause incorrect behavior and will be */
/* lost if the code is regenerated. */
/* */
/*----------------------------------------------------------------------------- */

#include "iot_test_pkcs11_globals.h"

TEST_GROUP( Full_PKCS11_ModelBased_ObjectMachine );

TEST_SETUP( Full_PKCS11_ModelBased_ObjectMachine )
{
    CK_RV rv = xInitializePKCS11();

    TEST_ASSERT_EQUAL_MESSAGE( CKR_OK, rv, "Failed to initialize PKCS #11 module." );
    rv = xInitializePkcs11Session( &xGlobalSession );
    TEST_ASSERT_EQUAL_MESSAGE( CKR_OK, rv, "Failed to open PKCS #11 session." );

    resetCredentials();
    generateValidSingingKeyPair();
}

TEST_TEAR_DOWN( Full_PKCS11_ModelBased_ObjectMachine )
{
    pxGlobalFunctionList->C_Finalize( NULL_PTR );
}

void runAllObjectTestCases()
{
    pxGlobalFunctionList->C_Finalize( NULL_PTR );
    RUN_TEST_CASE( Full_PKCS11_ModelBased_ObjectMachine, path_0 );
    RUN_TEST_CASE( Full_PKCS11_ModelBased_ObjectMachine, path_1 );
    RUN_TEST_CASE( Full_PKCS11_ModelBased_ObjectMachine, path_2 );
    RUN_TEST_CASE( Full_PKCS11_ModelBased_ObjectMachine, path_3 );
    RUN_TEST_CASE( Full_PKCS11_ModelBased_ObjectMachine, path_4 );
    RUN_TEST_CASE( Full_PKCS11_ModelBased_ObjectMachine, path_5 );
    RUN_TEST_CASE( Full_PKCS11_ModelBased_ObjectMachine, path_6 );
    RUN_TEST_CASE( Full_PKCS11_ModelBased_ObjectMachine, path_7 );
    RUN_TEST_CASE( Full_PKCS11_ModelBased_ObjectMachine, path_8 );
    RUN_TEST_CASE( Full_PKCS11_ModelBased_ObjectMachine, path_9 );
    RUN_TEST_CASE( Full_PKCS11_ModelBased_ObjectMachine, path_10 );
    RUN_TEST_CASE( Full_PKCS11_ModelBased_ObjectMachine, path_11 );
    RUN_TEST_CASE( Full_PKCS11_ModelBased_ObjectMachine, path_12 );
    RUN_TEST_CASE( Full_PKCS11_ModelBased_ObjectMachine, path_13 );
    RUN_TEST_CASE( Full_PKCS11_ModelBased_ObjectMachine, path_14 );
    RUN_TEST_CASE( Full_PKCS11_ModelBased_ObjectMachine, path_15 );
    RUN_TEST_CASE( Full_PKCS11_ModelBased_ObjectMachine, path_16 );
    RUN_TEST_CASE( Full_PKCS11_ModelBased_ObjectMachine, path_17 );
    RUN_TEST_CASE( Full_PKCS11_ModelBased_ObjectMachine, path_18 );
    RUN_TEST_CASE( Full_PKCS11_ModelBased_ObjectMachine, path_19 );
    RUN_TEST_CASE( Full_PKCS11_ModelBased_ObjectMachine, path_20 );
}

TEST_GROUP_RUNNER( Full_PKCS11_ModelBased_ObjectMachine )
{
    xGlobalSlotId = 1;

    CK_RV rv = prvBeforeRunningTests();

    if( rv == CKR_CRYPTOKI_NOT_INITIALIZED )
    {
        rv = CKR_OK;
    }

    TEST_ASSERT_EQUAL_MESSAGE( CKR_OK, rv, "Setup for the PKCS #11 routine failed.  Test module will start in an unknown state." );

    xGlobalMechanismType = CKM_RSA_PKCS;
    runAllObjectTestCases();
    prvAfterRunningTests_Object();
}

TEST( Full_PKCS11_ModelBased_ObjectMachine, path_0 )
{
    C_FindObjectsInit_normal_behavior();
}

TEST( Full_PKCS11_ModelBased_ObjectMachine, path_1 )
{
    C_FindObjectsInit_normal_behavior();
    C_FindObjects_normal_behavior();
}

TEST( Full_PKCS11_ModelBased_ObjectMachine, path_2 )
{
    C_FindObjectsInit_normal_behavior();
    C_FindObjects_normal_behavior();
    C_FindObjectsFinal_normal_behavior();
}

TEST( Full_PKCS11_ModelBased_ObjectMachine, path_3 )
{
    C_FindObjectsInit_normal_behavior();
    C_FindObjects_normal_behavior();
    C_FindObjectsFinal_normal_behavior();
    C_FindObjectsInit_normal_behavior();
    C_FindObjects_normal_behavior();
    C_FindObjectsFinal_normal_behavior();
}

TEST( Full_PKCS11_ModelBased_ObjectMachine, path_4 )
{
    C_FindObjectsInit_normal_behavior();
    C_FindObjectsInit_exceptional_behavior_0();
}

TEST( Full_PKCS11_ModelBased_ObjectMachine, path_5 )
{
    C_FindObjectsInit_exceptional_behavior_1();
}

TEST( Full_PKCS11_ModelBased_ObjectMachine, path_6 )
{
    C_FindObjectsInit_exceptional_behavior_2();
}

TEST( Full_PKCS11_ModelBased_ObjectMachine, path_7 )
{
    C_FindObjects_exceptional_behavior_0();
}

TEST( Full_PKCS11_ModelBased_ObjectMachine, path_8 )
{
    C_FindObjectsInit_normal_behavior();
    C_FindObjects_exceptional_behavior_1();
}

TEST( Full_PKCS11_ModelBased_ObjectMachine, path_9 )
{
    C_FindObjectsInit_normal_behavior();
    C_FindObjects_exceptional_behavior_2();
}

TEST( Full_PKCS11_ModelBased_ObjectMachine, path_10 )
{
    C_FindObjectsFinal_exceptional_behavior_0();
}

TEST( Full_PKCS11_ModelBased_ObjectMachine, path_11 )
{
    C_FindObjectsInit_normal_behavior();
    C_FindObjects_normal_behavior();
    C_FindObjectsFinal_exceptional_behavior_1();
}

TEST( Full_PKCS11_ModelBased_ObjectMachine, path_12 )
{
    C_FindObjectsInit_normal_behavior();
    C_FindObjects_exceptional_behavior_1();
    C_FindObjectsInit_exceptional_behavior_0();
}

TEST( Full_PKCS11_ModelBased_ObjectMachine, path_13 )
{
    C_FindObjectsInit_normal_behavior();
    C_FindObjects_exceptional_behavior_2();
    C_FindObjectsInit_normal_behavior();
}

TEST( Full_PKCS11_ModelBased_ObjectMachine, path_14 )
{
    C_FindObjectsInit_normal_behavior();
    C_FindObjectsFinal_normal_behavior();
}

TEST( Full_PKCS11_ModelBased_ObjectMachine, path_15 )
{
    C_GetAttributeValue_normal_behavior();
}

TEST( Full_PKCS11_ModelBased_ObjectMachine, path_16 )
{
    C_GetAttributeValue_exceptional_behavior_0();
}

TEST( Full_PKCS11_ModelBased_ObjectMachine, path_17 )
{
    C_GetAttributeValue_exceptional_behavior_1();
}

TEST( Full_PKCS11_ModelBased_ObjectMachine, path_18 )
{
    C_GetAttributeValue_exceptional_behavior_2();
}

TEST( Full_PKCS11_ModelBased_ObjectMachine, path_19 )
{
    C_GetAttributeValue_exceptional_behavior_3();
}

TEST( Full_PKCS11_ModelBased_ObjectMachine, path_20 )
{
    C_GetAttributeValue_exceptional_behavior_4();
}
