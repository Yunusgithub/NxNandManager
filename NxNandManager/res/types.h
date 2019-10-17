/*
 * Copyright (c) 2019 eliboa
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __types_h__
#define __types_h__

#define NX_BLOCKSIZE 0x200 // 512 b
#define CLUSTER_SIZE 0x4000 // 16 Kb
#define DEFAULT_BUFF_SIZE 0x400000 // 4 Mb

// NxStorage types
#define INVALID   1000
#define BOOT0	  1001
#define BOOT1	  1002
#define RAWNAND	  1003
#define PARTITION 1005
#define RAWMMC    1006
#define TXNAND    1007
#define PRODINFO  1008
#define PRODINFOF 1009
#define BCPKG21   1010
#define BCPKG22   1011
#define BCPKG23   1012
#define BCPKG24   1013
#define BCPKG25   1014
#define BCPKG26   1015
#define SAFE      1016
#define SYSTEM    1017
#define USER      1018
#define UNKNOWN   1004

#define NO_CRYPTO 0
#define ENCRYPT   1
#define DECRYPT   2
#define MD5_HASH  3
#define COPY      4
#define RESTORE   5
//Errors

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long int u64;
typedef char s8;
typedef unsigned char BYTE;


#endif