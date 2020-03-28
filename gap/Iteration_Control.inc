*Iteration Control Sub-module

.subckt	Iteration-Control	iteration-pin0	iteration-pin1	iteration-pin2	initialize-signal	initialize-signal^	iteration-detected-signal	iteration-detected-signal^	last-iteration-detected-signal	i0	i0^	

x3	i0^	i0	iteration-detected-signal	iteration-detected-signal^	initialize-signal	initialize-signal^	DFF-S
x4	i0	i0^	INV	wn=15u	wp=45u

x5	i0^	i0	initialize-signal	initialize-signal^	i1^	i1	Ripple-Counter-Cell
x6	i1^	i1	initialize-signal	initialize-signal^	i2^	i2	Ripple-Counter-Cell
x7	i2^	i2	initialize-signal	initialize-signal^	i3^	i3	Ripple-Counter-Cell
x8	i3^	i3	initialize-signal	initialize-signal^	i4^	i4	Ripple-Counter-Cell
x9	i4^	i4	initialize-signal	initialize-signal^	i5^	i5	Ripple-Counter-Cell
x10	i5^	i5	initialize-signal	initialize-signal^	i6^	i6	Ripple-Counter-Cell
x11	i6^	i6	initialize-signal	initialize-signal^	i7^	i7	Ripple-Counter-Cell
x12	i7^	i7	initialize-signal	initialize-signal^	i8^	i8	Ripple-Counter-Cell
x13	i8^	i8	initialize-signal	initialize-signal^	i9^	i9	Ripple-Counter-Cell
x14	i9^	i9	initialize-signal	initialize-signal^	i10^	i10	Ripple-Counter-Cell
x15	i10^	i10	initialize-signal	initialize-signal^	i11^	i11	Ripple-Counter-Cell

x16	iteration-pin0	iteration-pin1	iteration-pin2	dec0	dec1	dec2	dec3	dec4	dec5	dec6	dec7	Decoder3Bit

x17	dec0	i4	pre-detect0	NAND2
x18	dec1	i5	pre-detect1	NAND2
x19	dec2	i6	pre-detect2	NAND2
x20	dec3	i7	pre-detect3	NAND2
x21	dec4	i8	pre-detect4	NAND2
x22	dec5	i9	pre-detect5	NAND2
x23	dec6	i10	pre-detect6	NAND2
x24	dec7	i11	pre-detect7	NAND2

x25	pre-detect0	pre-detect1	pre-detect2	pre-detect3	detect0^	NAND4
x26	pre-detect4	pre-detect5	pre-detect6	pre-detect7	detect1^	NAND4

x27	detect0^	detect0	INV
x28	detect1^	detect1	INV

x29	detect0	detect1	last-iteration-detected-signal	NAND2


***Ripple Counter Cell (DFF and INV pair) Except the first Cell which requires Set Signal
.subckt	Ripple-Counter-Cell	clk	clk^	reset	reset^	out	out^
x1	out	out^	clk	clk^	reset	reset^	DFF-R
x2	out^	out	INV
.ends

***3-Bit Decoder
.subckt	Decoder3Bit	in0	in1	in2	out0	out1	out2	out3	out4	out5	out6	out7	wn=2u	wp=6u	le=0.18u	*in0 & out0 are lsb
x1	in0	in0^	INV	wn='wn'	wp='wp'	le='le'
x2	in1	in1^	INV	wn='wn'	wp='wp'	le='le'
x3	in2	in2^	INV	wn='wn'	wp='wp'	le='le'

x4	in0	in1	in2	out0	NOR3	wn='wn'	wp='wp'	le='le'
x5	in0^	in1	in2	out1	NOR3	wn='wn'	wp='wp'	le='le'
x6	in0	in1^	in2	out2	NOR3	wn='wn'	wp='wp'	le='le'
x7	in0^	in1^	in2	out3	NOR3	wn='wn'	wp='wp'	le='le'
x8	in0	in1	in2^	out4	NOR3	wn='wn'	wp='wp'	le='le'
x9	in0^	in1	in2^	out5	NOR3	wn='wn'	wp='wp'	le='le'
x10	in0	in1^	in2^	out6	NOR3	wn='wn'	wp='wp'	le='le'
x11	in0^	in1^	in2^	out7	NOR3	wn='wn'	wp='wp'	le='le'
.ends

***D Flip-Flop with Set
.subckt	DFF-S	in	out	clk	clk^	set	set^	wn=15u	wp=45u	le=0.18u
x1	in	a	clk^	clk	TG	wn='wn'	wp='wp'	le='le'
x2	a	set	b	NOR2	wn='wn'	wp='wp'	le='le'
x3	b	a	clk	clk^	CK-INV	wn='wn'	wp='wp'	le='le'
x4	b	c	clk	clk^	TG	wn='wn'	wp='wp'	le='le'
x5	c	set^	d	NAND2	wn='wn'	wp='wp'	le='le'
x6	d	c	clk^	clk	CK-INV	wn='wn'	wp='wp'	le='le'
x7	c	out	INV	wn='wn'	wp='wp'	le='le'
.ends

***D Flip-Flop with Reset
.subckt	DFF-R	in	out	clk	clk^	reset	reset^	wn=2u	wp=6u	le=0.18u
x1	in	a	clk^	clk	TG	wn='wn'	wp='wp'	le='le'
x2	a	reset^	b	NAND2	wn='wn'	wp='wp'	le='le'
x3	b	a	clk	clk^	CK-INV	wn='wn'	wp='wp'	le='le'
x4	b	c	clk	clk^	TG	wn='wn'	wp='wp'	le='le'
x5	c	reset	d	NOR2	wn='wn'	wp='wp'	le='le'
x6	d	c	clk^	clk	CK-INV	wn='wn'	wp='wp'	le='le'
x7	c	out	INV	wn='wn'	wp='wp'	le='le'
.ends

***2-Input NOR***
.subckt	NOR2	in1	in2	out	wn=1u	wp=3u	le=0.18u
m1	a	in2	vdd	vdd	mp18	w='2*wp'	l=le
m2	out	in1	a	vdd	mp18	w='2*wp'	l=le
m3	out	in1	0	0	mn18	w=wn	l=le
m4	out	in2	0	0	mn18	w=wn	l=le
.ends

***3-Input NAND***
.subckt	NOR3	in1	in2	in3	out	wn=1u	wp=3u	le=0.18u
m1	b	in3	vdd	vdd	mp18	w='3*wp'	l=le
m2	a	in2	b	vdd	mp18	w='3*wp'	l=le
m3	out	in1	a	vdd	mp18	w='3*wp'	l=le
m4	out	in1	0	0	mn18	w=wn	l=le
m5	out	in2	0	0	mn18	w=wn	l=le
m6	out	in3	0	0	mn18	w=wn	l=le
.ends

***2-Input NAND***
.subckt	NAND2	in1	in2	out	wn=2u	wp=6u	le=0.18u
m1	out	in1	vdd	vdd	mp18	w=wp	l=le
m2	out	in2	vdd	vdd	mp18	w=wp	l=le
m3	out	in1	a	0	mn18	w='2*wn'	l=le
m4	a	in2	0	0	mn18	w='2*wn'	l=le
.ends

***4-Input NAND***
.subckt	NAND4	in1	in2	in3	in4	out	wn=2u	wp=6u	le=0.18u
m1	out	in2	vdd	vdd	mp18	w=wp	l=le
m2	out	in1	vdd	vdd	mp18	w=wp	l=le
m3	out	in3	vdd	vdd	mp18	w=wp	l=le
m4	out	in4	vdd	vdd	mp18	w=wp	l=le
m5	out	in1	a	0	mn18	w='4*wn'	l=le
m6	a	in2	b	0	mn18	w='4*wn'	l=le
m7	b	in3	c	0	mn18	w='4*wn'	l=le
m8	c	in4	0	0	mn18	w='4*wn'	l=le
.ends

***Transmission Gate***
.subckt	TG	in	out	control	control^	wn=1u	wp=3u	le=0.18u
m1	in	control^	out	vdd	mp18	w=wp	l=le
m2	out	control	in	0	mn18	w=wn	l=le
.ends

***Clocked Inverter
.subckt	CK-INV	in	out	ck	ck^	wn=1u	wp=3u	le=0.18u
m1	a	in	vdd	vdd	mp18	w=wp	l=le
m2	out	ck^	a	vdd	mp18	w=wp	l=le
m3	out	ck	b	0	mn18	w=wn	l=le
m4	b	in	0	0	mn18	w=wn	l=le
.ends

***Inverter***
.subckt	INV	in	out	wn=2u	wp=6u	le=0.18u
m1	out	in	vdd	vdd	mp18	w=wp	l=le
m2	out	in	0	0	mn18	w=wn	l=le
.ends

.ends	Iteration-Control