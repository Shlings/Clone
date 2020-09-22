/*
 * HWDEP Interface for HD-audio codec
 *
 * Copyright (c) 2007 Takashi Iwai <tiwai@suse.de>
 *
 *  This driver is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This driver is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA
 */

//
// Adapted from hda-verb from alsa-tools:
// https://www.alsa-project.org/main/index.php/Main_Page
//

#ifndef __SOUND_HDA_HWDEP_H
#define __SOUND_HDA_HWDEP_H

#define HDA_HWDEP_VERSION	0x2710 /* Darwin */

/* verb */
#define HDA_REG_NID_SHIFT	20
#define HDA_REG_VERB_SHIFT	8
#define HDA_REG_VAL_SHIFT	0
#define HDA_VERB(nid,verb,param)	((nid)<<20 | (verb)<<8 | (param))

struct hda_verb_ioctl {
	u32 verb;	/* HDA_VERB() */
	u32 res;	/* response */
};

#endif
