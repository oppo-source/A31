/*
 * Copyright (C) 2017 MediaTek Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See http://www.gnu.org/licenses/gpl-2.0.html for more details.
 */
#ifndef _H_MEMORY_LAYOUT_H_
#define _H_MEMORY_LAYOUT_H_

#define LK_KERNEL_32_BASE		(0x40008000)
#define LK_KERNEL_32_MAX_SIZE		(0x7800000)
#define LK_KERNEL_64_BASE		(0x40080000)
#define LK_KERNEL_64_MAX_SIZE		(0x7800000)

#define KERN_RAMCONSOLE_BASE		(0x47C80000)
#define KERN_RAMCONSOLE_MAX_SIZE	(0x10000)
#define KERN_PSTORE_BASE		(0x47C90000)
#define KERN_PSTORE_MAX_SIZE		(0xE0000)
#define KERN_MINIDUMP_BASE		(0x47D70000)
#define KERN_MINIDUMP_MAX_SIZE		(0x10000)

#endif
