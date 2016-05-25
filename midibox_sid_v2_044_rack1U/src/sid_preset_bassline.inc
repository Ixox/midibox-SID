; $Id: sid_preset_bassline.inc 869 2009-12-08 21:52:43Z tk $
;
; MIDIbox SID
; Bassline Patch Preset
; (included from sid_patch.inc for runtime re-initialisation)
;
; ==========================================================================
;
;  Copyright 1998-2007 Thorsten Klose (tk@midibox.org)
;  Licensed for personal non-commercial use only.
;  All other rights reserved.
; 
; ==========================================================================

	db      'B','a','s','s','l','i','n','e',' ','P','a','t','c','h',' ',' '

	;;      ENGINE  HWFLAGS  OPT1  OPT2  Swtch -     -     -
	db	0x01,   0x00,    0x00, 0x00, 0x00, 0x00, 0x00, 0x00

	;;      PAR1  PAR2  INIT  MIN   MAX     PAR1  PAR2  INIT  MIN   MAX
	db	0x61, 0x00, 0x08, 0x00, 0xff,   0x65, 0x00, 0xff, 0x00, 0xff	; Knob1/2
	db	0x69, 0x00, 0x60, 0x00, 0xff,   0x6d, 0x00, 0x30, 0x00, 0xff	; Knob3/4
	db	0x71, 0x00, 0x20, 0x00, 0xff,   0x00, 0x00, 0x80, 0x00, 0xff	; Knob5/Vel
	db	0x51, 0x00, 0x80, 0x00, 0xff,   0x00, 0x00, 0x80, 0x00, 0xff	; PB/Aftertouch

	;;	EXT Parameters 1-8 - 16 bit values (low/high), normaly used as AOUT offset
	db	0x00, 0x80	; AOUT#1
	db	0x00, 0x80	; AOUT#2
	db	0x00, 0x80	; AOUT#3
	db	0x00, 0x80	; AOUT#4
	db	0x00, 0x80	; AOUT#5
	db	0x00, 0x80	; AOUT#6
	db	0x00, 0x80	; AOUT#7
	db	0x00, 0x80	; AOUT#8


	;;	FLAGS  res   VOL  res
	db	0x00,  0x00, 0x7f, 0x00

	;;	C/M    CutOff      Res.  -     -
	db	0x17,  0x08, 0x00, 0xf0, 0x00, 0x00	; Filter1
	db	0x17,  0x08, 0x00, 0xf0, 0x00, 0x00	; Filter2


	;; Voice #1
	;;	Flgs  Wave   AD    SR   PW_L  PW_H  Acc   Delay Trns  Fine  PRng  Port. ArpM  A.S/D A.G/R Res2
	db	0x01, 0x04, 0x00, 0xc0, 0x00, 0x09, 0x10, 0x00, 0x28, 0x80, 0x02, 0x28, 0x00, 0x5f, 0x05, 0x00
	;;	Flgs2 ----  ----  ----  L1Md  L1DP  L1Rt  L1Dl  L1Ph  L1DPW L1DF  L2Md  L2DP  L2Rt  L2Dl  L2Ph
	db	0x07, 0x00, 0x00, 0x00, 0x03, 0x80, 0x06, 0x00, 0x00, 0x80, 0x80, 0x03, 0x80, 0x16, 0x00, 0x00
	;;	L2DPW L2DF  EMod  EDPi  EDPW  EDFl  EAtt  EDec  ESus  ERel  ECur  SSpd  SNum  Len.  Asgn  res
	db	0x80, 0x80, 0x00, 0x80, 0x80, 0xa0, 0x04, 0x38, 0x20, 0x10, 0x80, 0x03, 0x00, 0x0f, 0x00, 0x00
	;;	EDcA
	db	0x28, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	;;	Wav2  PW2L  PW2H  OTr2  SNte2 res.  res.  res.  Wav3  PW3L  PW3H  OTr3  SNte3 res.  res.  res.  
	db	0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00

	;; Voice #2
	;;	Flgs  Wave   AD    SR   PW_L  PW_H  Acc   Delay Trns  Fine  PRng  Port. ArpM  A.S/D A.G/R Res2
	db	0x01, 0x02, 0x00, 0xc0, 0x00, 0x09, 0x10, 0x00, 0x28, 0x80, 0x02, 0x28, 0x00, 0x5f, 0x05, 0x00
	;;	Flgs2 ----  ----  ----  L1Md  L1DP  L1Rt  L1Dl  L1Ph  L1DPW L1DF  L2Md  L2DP  L2Rt  L2Dl  L2Ph
	db	0x07, 0x00, 0x00, 0x00, 0x03, 0x80, 0x06, 0x00, 0x00, 0x80, 0x80, 0x03, 0x80, 0x16, 0x00, 0x00
	;;	L2DPW L2DF  EMod  EDPi  EDPW  EDFl  EAtt  EDec  ESus  ERel  ECur  SSpd  SNum  Len.  Asgn  res
	db	0x80, 0x80, 0x00, 0x80, 0x80, 0xa0, 0x04, 0x38, 0x20, 0x10, 0x80, 0x03, 0x08, 0x0f, 0x00, 0x00
	;;	EDcA
	db	0x28, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	db	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00


	;; Sequencer
	db	0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80	; Notes Sequence #1
	db	0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80	; Notes Sequence #2
	db	0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80	; Notes Sequence #3
	db	0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80	; Notes Sequence #4
	db	0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80	; Notes Sequence #5
	db	0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80	; Notes Sequence #6
	db	0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80	; Notes Sequence #7
	db	0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80	; Notes Sequence #8

	db	0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40	; Par Sequence #1
	db	0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40	; Par Sequence #2
	db	0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40	; Par Sequence #3
	db	0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40	; Par Sequence #4
	db	0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40	; Par Sequence #5
	db	0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40	; Par Sequence #6
	db	0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40	; Par Sequence #7
	db	0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40	; Par Sequence #8