/*
 * Amazon FreeRTOS V201908.00
 * Copyright (C) 2019 Amazon.com, Inc. or its affiliates.  All Rights Reserved.
 * Copyright 2020 NXP
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

#ifndef AWS_CLIENT_CREDENTIAL_KEYS_H
#define AWS_CLIENT_CREDENTIAL_KEYS_H

/*
 * @brief PEM-encoded client certificate.
 *
 * @todo If you are running one of the Amazon FreeRTOS demo projects, set this
 * to the certificate that will be used for TLS client authentication.
 *
 * @note Must include the PEM header and footer:
 * "-----BEGIN CERTIFICATE-----\n"\
 * "...base64 data...\n"\
 * "-----END CERTIFICATE-----\n"
 */
#define keyCLIENT_CERTIFICATE_PEM                   "-----BEGIN CERTIFICATE-----\n" \
    "MIIBVDCB+6ADAgECAgkAoJ9fIf9ayYswCgYIKoZIzj0EAwIwHTEbMBkGA1UEAwwS\n"    \
    "bm9ib2R5QG5vd2hlcmUuY29tMB4XDTE4MDMwODIyNDIzNFoXDTE5MDMwODIyNDIz\n"    \
    "NFowHTEbMBkGA1UEAwwSbm9ib2R5QG5vd2hlcmUuY29tMFkwEwYHKoZIzj0CAQYI\n"    \
    "KoZIzj0DAQcDQgAExYJLN8zYGzFieyF4ONxk2BCY8I4fQTpfOJyWSYCqat83xtNE\n"    \
    "KoOxB33FP22MJXn7rj24YILu1uRLrFkH2pcRkKMkMCIwCwYDVR0PBAQDAgeAMBMG\n"    \
    "A1UdJQQMMAoGCCsGAQUFBwMDMAoGCCqGSM49BAMCA0gAMEUCIQDhXUT02TsIlzBe\n"    \
    "Aw9pLCowZ+6dPY1igspplUqZcuDAKQIgN6j5s7x5AudklULRuFyBQBlkVR35IdWs\n"    \
    "zu/xp2COg9g=\n"    \
    "-----END CERTIFICATE-----"

/*
 * @brief PEM-encoded issuer certificate for AWS IoT Just In Time Registration (JITR).
 *
 * @todo If you are using AWS IoT Just in Time Registration (JITR), set this to
 * the issuer (Certificate Authority) certificate of the client certificate above.
 *
 * @note This setting is required by JITR because the issuer is used by the AWS
 * IoT gateway for routing the device's initial request. (The device client
 * certificate must always be sent as well.) For more information about JITR, see:
 *  https://docs.aws.amazon.com/iot/latest/developerguide/jit-provisioning.html,
 *  https://aws.amazon.com/blogs/iot/just-in-time-registration-of-device-certificates-on-aws-iot/.
 *
 * If you're not using JITR, set below to NULL.
 *
 * Must include the PEM header and footer:
 * "-----BEGIN CERTIFICATE-----\n"\
 * "...base64 data...\n"\
 * "-----END CERTIFICATE-----\n"
 */
#define keyJITR_DEVICE_CERTIFICATE_AUTHORITY_PEM    ""

/*
 * @brief PEM-encoded client private key.
 *
 * @todo If you are running one of the Amazon FreeRTOS demo projects, set this
 * to the private key that will be used for TLS client authentication.
 *
 * @note Must include the PEM header and footer:
 * "-----BEGIN RSA PRIVATE KEY-----\n"\
 * "...base64 data...\n"\
 * "-----END RSA PRIVATE KEY-----\n"
 */
#define keyCLIENT_PRIVATE_KEY_PEM                   "-----BEGIN PRIVATE KEY-----\n" \
    "MIGHAgEAMBMGByqGSM49AgEGCCqGSM49AwEHBG0wawIBAQQg8gHhd5ELAooWRQls\n"    \
    "PfpcQREiLrvEb3oLioicMYdUmrmhRANCAATFgks3zNgbMWJ7IXg43GTYEJjwjh9B\n"    \
    "Ol84nJZJgKpq3zfG00Qqg7EHfcU/bYwlefuuPbhggu7W5EusWQfalxGQ\n"    \
    "-----END PRIVATE KEY-----"

#endif /* AWS_CLIENT_CREDENTIAL_KEYS_H */
