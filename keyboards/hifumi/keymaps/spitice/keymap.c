/* Copyright 2019 zk-phi
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

#ifdef RGBLIGHT_ENABLE
//Following line allows macro to read current RGB settings
extern rgblight_config_t rgblight_config;
#endif

enum layers {
    BASE,
    LOWER,
    RAISE,
    BASE_1,
    LOWER_1,
    RAISE_1,
    BASE_2,
    LOWER_2,
    RAISE_2,
    BASE_3,
    LOWER_3,
    RAISE_3,
    ADJUST,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE] = LAYOUT(
        MO(LOWER),   KC_UP,       MO(RAISE),
        KC_LEFT,     KC_DOWN,     KC_RIGHT
    ),
    [LOWER] = LAYOUT(
        _______,     _______,     MO(ADJUST),
        _______,     _______,     _______
    ),
    [RAISE] = LAYOUT(
        MO(ADJUST),  _______,     _______,
        _______,     _______,     _______
    ),
    [BASE_1] = LAYOUT(
        MO(LOWER_1), XXXXXXX,     MO(RAISE_1),
        XXXXXXX,     XXXXXXX,     XXXXXXX
    ),
    [LOWER_1] = LAYOUT(
        _______,     _______,     MO(ADJUST),
        _______,     _______,     _______
    ),
    [RAISE_1] = LAYOUT(
        MO(ADJUST),  _______,     _______,
        _______,     _______,     _______
    ),
    [BASE_2] = LAYOUT(
        MO(LOWER_2), XXXXXXX,     MO(RAISE_2),
        XXXXXXX,     XXXXXXX,     XXXXXXX
    ),
    [LOWER_2] = LAYOUT(
        _______,     _______,     MO(ADJUST),
        _______,     _______,     _______
    ),
    [RAISE_2] = LAYOUT(
        MO(ADJUST),  _______,     _______,
        _______,     _______,     _______
    ),
    [BASE_3] = LAYOUT(
        MO(LOWER_3), XXXXXXX,     MO(RAISE_3),
        XXXXXXX,     XXXXXXX,     XXXXXXX
    ),
    [LOWER_3] = LAYOUT(
        _______,     _______,     MO(ADJUST),
        _______,     _______,     _______
    ),
    [RAISE_3] = LAYOUT(
        MO(ADJUST),  _______,     _______,
        _______,     _______,     _______
    ),
    [ADJUST] = LAYOUT(
        _______,     DF(BASE),    _______,
        DF(BASE_1),  DF(BASE_2),  DF(BASE_3)
    ),
};
