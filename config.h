// Copyright 2023 mvaneijgen (@mvaneijgen)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
#define MASTER_RIGHT

#define ENCODERS_PAD_A { D4 }
#define ENCODERS_PAD_B { C6 }
#define DEBOUNCE 5
// Configure the global tapping term (default: 200ms)
#define TAPPING_TERM 200
#define QUICK_TAP_TERM 0

// #define QUICK_TAP_TERM 0
// #define RETRO_TAPPING

// Prevent normal rollover on alphas from accidentally triggering mods.
// #define IGNORE_MOD_TAP_INTERRUPT
// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
// #define TAPPING_FORCE_HOLD
// Apply the modifier on keys that are tapped during a short hold of a modtap
// #define PERMISSIVE_HOLD
// #define HOLD_ON_OTHER_KEY_PRESS
