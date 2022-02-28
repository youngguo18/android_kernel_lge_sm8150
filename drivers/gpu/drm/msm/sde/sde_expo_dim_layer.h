/*
 * A new exposure driver based on SDE dim layer for OLED devices
 *
 * Copyright (C) 2012-2014, The Linux Foundation. All rights reserved.
 * Copyright (C) 2019, Devries <therkduan@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#ifndef SDE_EXPO_DIM_LAYER_H
#define SDE_EXPO_DIM_LAYER_H

#define DIM_THRES_LEVEL 245

enum {
	BRIGHTNESS = 0,
	ALPHA = 1,
	LUT_MAX,
};

static const uint32_t brightness_alpha_lut[][LUT_MAX] = {
/* {brightness, alpha} */
	{0, 0xFF},
	{1, 0xE0},
	{2, 0xD6},
	{3, 0xD5},
	{4, 0xCF},
	{5, 0xCB},
	{6, 0xC9},
	{8, 0xC5},
	{10, 0xC1},
	{15, 0xB6},
	{20, 0xAC},
	{30, 0x9D},
	{45, 0x82},
	{70, 0x6C},
	{100, 0x56},
	{120, 0x47},
	{140, 0x3A},
	{160, 0x2F},
	{180, 0x22},
	{200, 0x16},
	{220, 0x0E},
	{240, 0x06},
	{260, 0x00},
};

uint32_t expo_map_dim_level(uint32_t level, struct dsi_display *display);

#endif /* SDE_EXPO_DIM_LAYER_H */
