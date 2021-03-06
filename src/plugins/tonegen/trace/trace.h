/*************************************************************************
This file is part of ngfd / tone-generator

Copyright (C) 2010 Nokia Corporation.
              2015 Jolla Ltd.

This library is free software; you can redistribute
it and/or modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation
version 2.1 of the License.

This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public
License along with this library; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301
USA.
*************************************************************************/

#ifndef __NOTIF_TRACE_H__
#define __NOTIF_TRACE_H__

#include <stdio.h>

#ifdef ENABLE_TRACE
#define TRACE(f, args...) printf("TRACE: " f "\n", ##args)
#else
#define TRACE(f, args...) do {} while (0)
#endif

#endif /* __NOTIF_TRACE_H__ */
