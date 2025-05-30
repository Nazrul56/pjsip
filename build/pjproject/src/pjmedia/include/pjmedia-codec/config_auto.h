/* pjmedia/include/pjmedia-codec/config_auto.h.  Generated from config_auto.h.in by configure.  */
/*
 * Copyright (C) 2008-2009 Teluu Inc. (http://www.teluu.com)
 * Copyright (C) 2003-2008 Benny Prijono <benny@prijono.org>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */
#ifndef __PJMEDIA_CODEC_CONFIG_AUTO_H_
#define __PJMEDIA_CODEC_CONFIG_AUTO_H_

/**
 * @file config_auto.h
 * @brief PJMEDIA-CODEC configuration as set by autoconf script
 */

/*
 * Note:
 *      The configuration in config_site.h overrides any other settings,
 *      including the setting as detected by autoconf. 
 */
 
/* L16 codec */
#ifndef PJMEDIA_HAS_L16_CODEC
/* #undef PJMEDIA_HAS_L16_CODEC */
#endif


/* GSM codec */
#ifndef PJMEDIA_HAS_GSM_CODEC
/* #undef PJMEDIA_HAS_GSM_CODEC */
#endif

/* #undef PJMEDIA_EXTERNAL_GSM_CODEC */
/* #undef PJMEDIA_EXTERNAL_GSM_GSM_H */
/* #undef PJMEDIA_EXTERNAL_GSM_H */

/* Speex codec */
#ifndef PJMEDIA_HAS_SPEEX_CODEC
/* #undef PJMEDIA_HAS_SPEEX_CODEC */
#endif

/* #undef PJMEDIA_EXTERNAL_SPEEX_CODEC */

/* iLBC codec */
#ifndef PJMEDIA_HAS_ILBC_CODEC
/* #undef PJMEDIA_HAS_ILBC_CODEC */
#endif


/* G722 codec */
#ifndef PJMEDIA_HAS_G722_CODEC
/* #undef PJMEDIA_HAS_G722_CODEC */
#endif

/* G7221 codec */
#ifndef PJMEDIA_HAS_G7221_CODEC
/* #undef PJMEDIA_HAS_G7221_CODEC */
#endif

/* OpenCORE AMR-NB codec */
#ifndef PJMEDIA_HAS_OPENCORE_AMRNB_CODEC
#define PJMEDIA_HAS_OPENCORE_AMRNB_CODEC 0
#endif

/* OpenCORE AMR-WB codec */
#ifndef PJMEDIA_HAS_OPENCORE_AMRWB_CODEC
#define PJMEDIA_HAS_OPENCORE_AMRWB_CODEC 0
#endif

/* SILK codec */
#ifndef PJMEDIA_HAS_SILK_CODEC
#define PJMEDIA_HAS_SILK_CODEC 0
#endif

/* OPUS codec */
#ifndef PJMEDIA_HAS_OPUS_CODEC
#define PJMEDIA_HAS_OPUS_CODEC 1
#endif

/* G.729 codec with BCG729 backend */
#ifndef PJMEDIA_HAS_BCG729
#define PJMEDIA_HAS_BCG729 0
#endif

/* Android MediCodec codecs */
#ifndef PJMEDIA_HAS_ANDROID_MEDIACODEC
/* #undef PJMEDIA_HAS_ANDROID_MEDIACODEC */
#endif

/* Lyra codec */
#ifndef PJMEDIA_HAS_LYRA_CODEC
#define PJMEDIA_HAS_LYRA_CODEC 0
#endif

#endif  /* __PJMEDIA_CODEC_CONFIG_AUTO_H_ */


