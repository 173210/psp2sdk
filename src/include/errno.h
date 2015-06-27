/*
 * Copyright (C) 2015 PSP2SDK Project
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 */

#ifndef _ERRNO_H_
#define _ERRNO_H_

int *_sceLibcErrnoLoc(void);

#define errno (*_sceLibcErrnoLoc())

#endif