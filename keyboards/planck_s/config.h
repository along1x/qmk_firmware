// Copyright 2022 Andrew Long (@Andrew Long)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once


/* key matrix size */
#define MATRIX_ROWS 10
#define MATRIX_COLS 6

#define MATRIX_ROW_PINS \
    { A3, A4, A5, A6, A7 }
#define MATRIX_COL_PINS \
    { D4, D5, D6, D7, D2, D3 }

#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Use I2C or Serial, not both */
#define USE_SERIAL
// #define USE_I2C
#define SOFT_SERIAL_PIN D11

//#define MASTER_LEFT
#define MASTER_LEFT

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

// Prevent normal rollover on alphas from accidentally triggering mods.
#define IGNORE_MOD_TAP_INTERRUPT
// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define TAPPING_FORCE_HOLD