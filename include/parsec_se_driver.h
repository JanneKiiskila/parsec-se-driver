// Copyright 2020 Contributors to the Parsec project.
// SPDX-License-Identifier: Apache-2.0

#ifndef PARSEC_SE_DRIVER_H
#define PARSEC_SE_DRIVER_H

#include "psa/crypto_se_driver.h"

#define PARSEC_SE_DRIVER_LIFETIME ((psa_key_lifetime_t)0x00000002)
extern psa_drv_se_t PARSEC_SE_DRIVER;

#endif /* PARSEC_SE_DRIVER_H */
