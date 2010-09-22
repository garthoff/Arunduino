/**
 * SevenSegDispCount.h
 *
 * Define Seven Segment Display Fonts. 
 *
 *
 * Copyright (C) 2010  arunreddy
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */


 #ifndef SevenSegDispCount_h     //To make sure header file is included only once.
 #define SevenSegDispCount_h

 #include <avr/pgmspace.h>


 static prog_uchar SevSegFont[] PROGMEM = {
	  0x00  //	32	20	(space)
	, 0x00  //	33	21	!
	, 0x00  //	34	22	"
	, 0x00  //	35	23	#
	, 0x00  //	36	24	$
	, 0x00  //	37	25	%
	, 0x00  //	38	26	&
	, 0x00  //	39	27	'
	, 0x00  //	40	28	(
	, 0x00  //	41	29	)
	, 0x00  //	42	2A	*
	, 0x00  //	43	2B	+
	, 0x00  //	44	2C	,
	, 0x40  //	45	2D	-
	, 0x00  //	46	2E	.
	, 0x00  //	47	2F	/
	, 0x3F  //	48	30	0
	, 0x05  //	49	31	1
	, 0x5E  //	50	32	2
	, 0x4F  //	51	33	3
	, 0x65  //	52	34	4
	, 0x6B  //	53	35	5
	, 0x7B  //	54	36	6
	, 0x07  //	55	37	7
	, 0x7F  //	56	38	8
	, 0x6F  //	57	39	9
	, 0x00  //	58	3A	:
	, 0x00  //	59	3B	;
	, 0x00  //	60	3C	<
	, 0x00  //	61	3D	=
	, 0x00  //	62	3E	>
	, 0x00  //	63	3F	?
	, 0x00  //	64	40	@
	, 0x77  //	65	41	A
	, 0x00  //	66	42	B
	, 0x3A  //	67	43	C
	, 0x00  //	68	44	D
	, 0x00  //	69	45	E
	, 0x00  //	70	46	F
	, 0x00  //	71	47	G
	, 0x00  //	72	48	H
	, 0x00  //	73	49	I
	, 0x00  //	74	4A	J
	, 0x00  //	75	4B	K
	, 0x38  //	76	4C	L
	, 0x00  //	77	4D	M
	, 0x00  //	78	4E	N
	, 0x3F  //	79	4F	O
	, 0x76  //	80	50	P
	, 0x00  //	81	51	Q
	, 0x00  //	82	52	R
	, 0x00  //	83	53	S
	, 0x00  //	84	54	T
	, 0x00  //	85	55	U
	, 0x00  //	86	56	V
	, 0x00  //	87	57	W
	, 0x00  //	88	58	X
	, 0x00  //	89	59	Y
	, 0x00  //	90	5A	Z
	, 0x00  //	91	5B	[
	, 0x00  //	92	5C      (Back Slash) 
	, 0x00  //	93	5D	]
	, 0x00  //	94	5E	^
	, 0x00  //	95	5F	_
	, 0x00  //	96	60	`
	, 0x00  //	97	61	a
	, 0x00  //	98	62	b
	, 0x00  //	99	63	c
	, 0x00  //	100	64	d
	, 0x00  //	101	65	e
	, 0x00  //	102	66	f
	, 0x00  //	103	67	g
	, 0x00  //	104	68	h
	, 0x00  //	105	69	i
	, 0x00  //	106	6A	j
	, 0x00  //	107	6B	k
	, 0x00  //	108	6C	l
	, 0x00  //	109	6D	m
	, 0x00  //	110	6E	n
	, 0x00  //	111	6F	o
	, 0x00  //	112	70	p
	, 0x00  //	113	71	q
	, 0x00  //	114	72	r
	, 0x00  //	115	73	s
	, 0x00  //	116	74	t
	, 0x00  //	117	75	u
	, 0x00  //	118	76	v
	, 0x00  //	119	77	w
	, 0x00  //	120	78	x
	, 0x00  //	121	79	y
	, 0x00  //	122	7A	z
	, 0x00  //	123	7B	{
	, 0x00  //	124	7C	|
	, 0x00  //	125	7D	}
	, 0x00  //	126	7E	~
      };
 
 #endif
      
