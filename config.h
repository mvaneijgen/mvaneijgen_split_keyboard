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
#define HOLD_ON_OTHER_KEY_PRESS