/*
 * include/linux/input/scroff_volctr.h
 *
 * Copyright (c) 2015, jollaman999 <admin@jollaman999.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#ifndef _LINUX_SCROFF_VOLCTR_H
#define _LINUX_SCROFF_VOLCTR_H

extern int sovc_switch;
extern int sovc_tmp_onoff;
extern bool sovc_force_off;
extern bool sovc_mic_detected;
extern bool track_changed;
extern bool sovc_scr_suspended;

extern void sovc_press_power_key_trigger(int delay);

#endif	/* _LINUX_SCROFF_VOLCTR_H */