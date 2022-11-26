/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

/* Select hand configuration */

#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS

#define TAPPING_FORCE_HOLD
#define TAPPING_TERM 100

#undef RGBLED_NUM
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 27
#define RGBLIGHT_LIMIT_VAL 120
#define RGBLIGHT_HUE_STEP 10
#define RGBLIGHT_SAT_STEP 17
#define RGBLIGHT_VAL_STEP 17

// Underglow
/*
#undef RGBLED_NUM
#define RGBLED_NUM 14    // Number of LEDs
#define RGBLIGHT_ANIMATIONS
#define RGBLIGHT_SLEEP
*/

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

//#define ENCODERS_PAD_A { F5 }
//#define ENCODERS_PAD_B { D4 }
//#define ENCODERS_PAD_A_RIGHT { D4 }
//#define ENCODERS_PAD_B_RIGHT { F5 }

// A: Blue wire
// B: Red wire
// C: White wire
#define ENCODERS_PAD_A { D4 }
#define ENCODERS_PAD_B { F5 }
#define ENCODERS_PAD_A_RIGHT { F5 }
#define ENCODERS_PAD_B_RIGHT { D4 }

#ifdef OLED_FONT_H
#   undef OLED_FONT_H
#endif // OLED_FONT_H
#define OLED_FONT_H "keyboards/lily58/keymaps/spitice/glcdfont_spitice.c"
