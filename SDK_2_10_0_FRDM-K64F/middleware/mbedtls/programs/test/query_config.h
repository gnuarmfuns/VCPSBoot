/*
 *  Query Mbed TLS compile time configurations from config.h
 *
 *  Copyright The Mbed TLS Contributors
 *  SPDX-License-Identifier: Apache-2.0
 *
 *  Licensed under the Apache License, Version 2.0 (the "License"); you may
 *  not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 *  WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

#ifndef MBEDTLS_PROGRAMS_TEST_QUERY_CONFIG_H
#define MBEDTLS_PROGRAMS_TEST_QUERY_CONFIG_H

#if !defined(MBEDTLS_CONFIG_FILE)
#include "mbedtls/config.h"
#else
#include MBEDTLS_CONFIG_FILE
#endif

/** Check whether a given configuration symbol is enabled.
 *
 * \param config    The symbol to query (e.g. "MBEDTLS_RSA_C").
 * \return          \c 0 if the symbol was defined at compile time
 *                  (in MBEDTLS_CONFIG_FILE or config.h),
 *                  \c 1 otherwise.
 *
 * \note            This function is defined in `programs/test/query_config.c`
 *                  which is automatically generated by
 *                  `scripts/generate_query_config.pl`.
 */
int query_config( const char *config );

#endif /* MBEDTLS_PROGRAMS_TEST_QUERY_CONFIG_H */
