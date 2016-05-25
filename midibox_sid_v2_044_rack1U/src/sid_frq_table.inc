; $Id: sid_frq_table.inc 44 2008-01-30 21:39:30Z tk $
;
; MIDIbox SID
; Frequency Table (refer to the SID spec)
;
; ==========================================================================
;
;  Copyright 1998-2007 Thorsten Klose (tk@midibox.org)
;  Licensed for personal non-commercial use only.
;  All other rights reserved.
; 
; ==========================================================================

SID_FRQ_TABLE
	dw	0x0028,0x002b,0x002d,0x0030,0x0033,0x0036,0x0039,0x003d,0x0040,0x0044,0x0048,0x004c
	dw	0x0051,0x0056,0x005b,0x0060,0x0066,0x006c,0x0073,0x007a,0x0081

	dw	0x0089,0x0091,0x0099,0x00a3,0x00ac,0x00b7,0x00c1,0x00cd,0x00d9,0x00e6,0x00f4,0x0102 ; c-2
	dw	0x0112,0x0122,0x0133,0x0146,0x0159,0x016e,0x0183,0x019b,0x01b3,0x01cd,0x01e8,0x0205 ; c-1
	dw	0x0224,0x0245,0x0267,0x028c,0x02b3,0x02da,0x0307,0x0336,0x0366,0x039a,0x03d1,0x040b ; c-0
	dw	0x0449,0x048a,0x04cf,0x0518,0x0566,0x05b8,0x060f,0x066c,0x06cd,0x0735,0x07a3,0x0817 ; C-1
	dw	0x0892,0x0915,0x099f,0x0A31,0x0Acd,0x0B71,0x0C1f,0x0Cd8,0x0D9b,0x0E6a,0x0F46,0x102e ; C-2
	dw	0x1125,0x122a,0x133e,0x1463,0x159a,0x16e3,0x183f,0x19b0,0x1B37,0x1Cd5,0x1E8c,0x205d ; C-3
	dw	0x224a,0x2454,0x267d,0x28c7,0x2B34,0x2Dc6,0x307e,0x3361,0x366f,0x39ab,0x3D19,0x40bc ; C-4
	dw	0x4495,0x48a8,0x4Cfc,0x518f,0x5668,0x5B8c,0x60fe,0x66c2,0x6Cde,0x7357,0x7A34,0x8177 ; C-5
	dw	0x892a,0x9153,0x99f6,0xA31e,0xACd1,0xB718,0xC1fc,0xCD85,0xD9bc,0xE6af,0xF467	    ; C-6
