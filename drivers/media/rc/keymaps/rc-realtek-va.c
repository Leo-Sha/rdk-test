// SPDX-License-Identifier: GPL-2.0+
// Keytable for realtek_dhc Remote Controller
//
// keymap imported from ir-keymaps.c
//
// Copyright (c) 2020 by Simon Hsu

#include <media/rc-map.h>
#include <linux/module.h>

static struct rc_map_table realtek_va[] = {
	// scancode	keycode OMNI
	{ 0x8018, 0x020F }, 	//KED_POWER
	{ 0x8032, 0x0290 },	//KED_TVPOWER
	{ 0x8005, 0x0260 },	//KED_RED
	{ 0x8009, 0x0261 },	//KEY_GREEN	
	{ 0x8042, 0x0262 },	//KEY_YELLOW 
	{ 0x8043, 0x0263 },	//KEY_BLUE 
	{ 0x804F, 0x0233 },	//KED_REWIND
	{ 0x8055, 0x0230 },	//KED_PLAY
	{ 0x8016, 0x0234 },	//KEY_FASTFORWARD
	{ 0x804E, 0x0213 },	//KEY_PROG1
	{ 0x804A, 0x0214 },	//KEY_PROG2
	{ 0x804D, 0x0221 },	//KED_ARROWUP
	{ 0x8048, 0x0222 },	//KED_ARROWDOWN
	{ 0x800E, 0x0224 },	//KED_ARROWRIGHT
	{ 0x800C, 0x0223 },	//KED_ARROWLEFT
	{ 0x804C, 0x022B },	//KED_SELECT
	{ 0x8057, 0x0251 },	//KEY_BACK
	{ 0x8014, 0x0220 },	//KEY_HOME
	{ 0x8066, 0x0225 },	//KEY_APPSELECT
	{ 0x804B, 0x020B },	//KEY_VOLUMEDOWN
	{ 0x8049, 0x020A },	//KEY_VOLUMEUP
	{ 0x8074, 0x0215 },	//KEY_ASSISTANT
	{ 0x800D, 0x020C },	//KEY_MUTE
	{ 0x8059, 0x020D },	//KEY_CHANNELUP
	{ 0x805F, 0x020E },	//KEY_CHANNELDOWN
	{ 0x8021, 0x0201 },	//KEY_1
	{ 0x8022, 0x0202 },	//KEY_2
	{ 0x8023, 0x0203 },	//KEY_3
	{ 0x8024, 0x0204 },	//KEY_4
	{ 0x8025, 0x0205 },	//KEY_5
	{ 0x8026, 0x0206 },	//KEY_6
	{ 0x8027, 0x0207 },	//KEY_7
	{ 0x8028, 0x0208 },	//KEY_8
	{ 0x8029, 0x0209 },	//KEY_9
	{ 0x8020, 0x0200 },	//KEY_0
	{ 0x805A, 0x0225 },	//KEY_SELECT
	{ 0x8030, 0x0251 },	//KEY_LAST
	{ 0x8058, 0x0216 },	//KEY_CYCLEWINDOWS
	{ 0x8056, 0x0217 },	//KEY_OPTION
	{ 0x8054, 0x0226 },	//KEY_INFO
	{ 0x8017, 0x0230 },	//KEY_STOP
	{ 0x8008, 0x0218 },	//KEY_PREVIOUS
};

static struct rc_map_list realtek_va_map = {
	.map = {
		.scan     = realtek_va,
		.size     = ARRAY_SIZE(realtek_va),
		.rc_proto = RC_PROTO_NEC,
		.name     = RC_MAP_REALTEK_VA,
	}
};

static int __init init_rc_map_realtek_va(void)
{
	return rc_map_register(&realtek_va_map);
}

static void __exit exit_rc_map_realtek_va(void)
{
	rc_map_unregister(&realtek_va_map);
}

module_init(init_rc_map_realtek_va)
module_exit(exit_rc_map_realtek_va)

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Simon Hsu <simon_hsu@realtek.com>");
