/*
 * Copyright 2017 NXP
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */
#ifndef _IMX_HDMI_H_
#define _IMX_HDMI_H_
void hdmi_fw_load(state_struct *state);
void hdmi_fw_init(state_struct *state, u32 rate);
void hdmi_phy_init(state_struct *state, int vic, int format, int color_depth);
void hdmi_mode_set(state_struct *state, int vic, int format, int color_depth, int max_link);
int hdmi_get_edid_block(void *data, u8 *buf, u32 block, size_t len);
void hdmi_get_hpd_state(state_struct *state, u8 *hpd);

#endif
