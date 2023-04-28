// Copyright 2023 hanachi-ap (@hanachi-ap)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define DEBOUNCE 10
#define DYNAMIC_KEYMAP_LAYER_COUNT  11
#define RGBLIGHT_LAYERS_OVERRIDE_RGB_OFF

#define RGB_DI_PIN GP25
#define RGBLED_NUM 23
#define RGBLIGHT_LAYERS
#define RGBLIGHT_MAX_LAYERS  16
#define RGBLIGHT_HUE_STEP 16
#define RGBLIGHT_SAT_STEP 16
#define RGBLIGHT_VAL_STEP 16
#define RGBLIGHT_LIMIT_VAL 200 /* The maximum brightness level */
#define RGBLIGHT_SLEEP  /* If defined, the RGB lighting will be switched off when the host goes to sleep */
#define RGBLIGHT_EFFECT_BREATHING
#define RGBLIGHT_EFFECT_RAINBOW_MOOD
#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#define RGBLIGHT_EFFECT_SNAKE
#define RGBLIGHT_EFFECT_KNIGHT
#define RGBLIGHT_EFFECT_CHRISTMAS
#define RGBLIGHT_EFFECT_STATIC_GRADIENT
#define RGBLIGHT_EFFECT_RGB_TEST

#define TAP_CODE_DELAY 100 // MOD_TAPの無限リピート謎現象回避
