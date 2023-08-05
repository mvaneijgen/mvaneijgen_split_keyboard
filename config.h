#pragma once
#include "config_common.h"
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x0000
#define DEVICE_VER      0x0001
#define MANUFACTURER    Mitchel van Eijgen
#define PRODUCT         mvaneijgen_split_flat
#define DESCRIPTION     A custom keyboard
/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 6
#define DIODE_DIRECTION COL2ROW
#define MATRIX_ROW_PINS { D7, E6, B4, B5 }
#define MATRIX_COL_PINS { B6, B2, B3, B1, F7, F6 }
#define NUMBER_OF_ENCODERS 2
#define ENCODERS_PAD_A { }
#define ENCODERS_PAD_B { }
#define ENCODERS_PAD_A_RIGHT { D4 }
#define ENCODERS_PAD_B_RIGHT { C6 }
#define UNUSED_PINS
#define USE_SERIAL
#define SOFT_SERIAL_PIN D0 
#define DEBOUNCING_DELAY 5
#define LOCKING_SUPPORT_ENABLE
#define LOCKING_RESYNC_ENABLE
//------------------------------------------------------//
// Custom code by mvaneijgen 
//------------------------------------------------------//
// Configure the global tapping term (default: 200ms)
#define TAPPING_TERM 175
// Prevent normal rollover on alphas from accidentally triggering mods.
#define IGNORE_MOD_TAP_INTERRUPT
// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define TAPPING_FORCE_HOLD
// Apply the modifier on keys that are tapped during a short hold of a modtap
#define PERMISSIVE_HOLD
// END Custom code by mvaneijgen -------------------------------------//

