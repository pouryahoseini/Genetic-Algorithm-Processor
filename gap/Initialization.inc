*Initialization Module 

.subckt	Initialization	Initialize	Initialize^	Initialize2	Initialize2^	Post-Initialize	Initialization-Start	Population-Completed	Finalize	Restart-Pin	Initialization-Handshake-Start	Initialization-Handshake-Enable	Replacement-done	Fitness-Estimation-done

*initialize signal generation
x1	Restart-Pin	1	INV	wn=8u	wp=24u
x2	1	2	INV	wn=8u	wp=24u

x3	3	4	INV	wn=2u	wp=6u	le=1.8u
x4	4	5	INV	wn=2u	wp=6u	le=1.8u
x5	5	1	6	6^	AND2	wn=8u	wp=24u

x6	2	3	Restart-Pin	1	6^	D-Latch-R	wn=8u	wp=24u

x7	3	20	INV	wn=8u	wp=24u

x8	20	21	INV	wn=15u	wp=45u

x9	21	22	INV	wn=25u	wp=75u
x10	22	Initialize	INV-m10	wn=6u	wp=18u	*m=10

x11	Initialize	Initialize^	INV	wn=20u	wp=60u

x12	21	Finalize	pre-Post-Initialize	30	NOR3	wn=3u	wp=9u

x13	30	31	INV	wn=7.5u	wp=22.5u
x14	31	32	INV	wn=20u	wp=60u
x15	32	33	INV-m10	wn=5u	wp=15u	*m=10
x16	33	34	INV-m10	wn=12u	wp=36u	*m=10
x17	34	Initialize2	INV-m10	wn=30u	wp=90u	*m=10

x18	Initialize2	Initialize2^	INV-m10	wn=11u	wp=33u	*m=10

*main part
x19	0	400	51	51^	Initialize	Initialize^	DFF-S	wn=3u	wp=9u
x20	400	Initialize^	40	40^	AND2	wn=3u	wp=9u

x23	40	44	INV	wn=9u	wp=27u
x24	44	45	INV-m10	wn=2.7u	wp=8.1u	*m=10
x25	45	46	INV-m10	wn=8.1u	wp=24.3u	*m=10
x26	46	Initialization-Start	INV-m10	wn=24.3u	wp=72.9u	*m=10
x27	Initialization-Start	Initialization-Start^	INV	wn=25u	wp=75u

x28	Population-Completed	Replacement-done	Initialize^	51	51^	AND3	wn=2u	wp=6u

x29	pre-Post-Initialize	52	INV	wn=0.75u	wp=2.25u	le=1.8u
x30	52	53	INV	wn=0.75u	wp=2.25u	le=1.8u

x32	Initialize	53	55	NOR2	wn=3u	wp=9u

x34	51	55	pre-Post-Initialize	C-element	wn=3u	wp=9u

x35	pre-Post-Initialize	60	INV	wn=6u	wp=18u
x36	60	Post-Initialize	INV	wn=15u	wp=45u

*initialization handshake
x37	80	Initialization-Start	70	70^	AND2	wn=15u	wp=45u
x38	Initialization-Start^	Initialization-Handshake-Start	71	NOR2	wn=15u	wp=45u
x39	Initialization-Start^	81	72	NOR2	wn=15u	wp=45u

x40	70	71	Initialization-Handshake-Enable	C-element	wn=15u	wp=45u
x41	Initialization-Handshake-Enable	72	Initialization-Handshake-Start	C-element	wn=15u	wp=45u

x42	Initialization-Start	90	82	82^	AND2	wn=15u	wp=45u
x43	Initialization-Start^	80	83	NOR2	wn=15u	wp=45u
x44	Initialization-Start^	Initialization-Handshake-Enable	84	NOR2	wn=15u	wp=45u

x45	82	83	81	C-element	wn=15u	wp=45u
x46	81	84	80	C-element	wn=15u	wp=45u

x47	Initialization-Start	91	INV	wn=1u	wp=3u	le=1.8u
x48	91	92	INV	wn=1u	wp=3u	le=1.8u
x49	92	Initialization-Start	Initialization-Start^	fireup	XOR2	wn=2u	wp=6u

x50	Fitness-Estimation-done	Replacement-done	93	93^	AND2	wn=2u	wp=6u

x51	93	fireup	90	90^	OR2	wn=6u	wp=18u


************************************************************************************************Components
***2-Input XOR (Pass Transistor Logic)
.subckt	XOR2	in1	in2	in2^	out	wn=1u	wp=3u	le=0.18u
m1	out	in2	in1	vdd	mp18	w=wp	l=le
m2	in1	in2^	out	0	mn18	w=wn	l=le
m3	out	in1	in2	vdd	mp18	w=wp	l=le
m4	out	in1	in2^	0	mn18	w=wn	l=le
.ends

***2-Input OR***
.subckt	OR2	in1	in2	out	out^	wn=1u	wp=3u	le=0.18u
x1	in1	in2	out^	NOR2	wn='wn'	wp='wp'	le='le'
x2	out^	out	INV	wn='wn'	wp='wp'	le='le'
.ends

***2-Input NOR***
.subckt	NOR2	in1	in2	out	wn=1u	wp=3u	le=0.18u
m1	a	in2	vdd	vdd	mp18	w='2*wp'	l=le
m2	out	in1	a	vdd	mp18	w='2*wp'	l=le
m3	out	in1	0	0	mn18	w=wn	l=le
m4	out	in2	0	0	mn18	w=wn	l=le
.ends

***3-Input NOR***
.subckt	NOR3	in1	in2	in3	out	wn=1u	wp=3u	le=0.18u
m1	b	in3	vdd	vdd	mp18	w='3*wp'	l=le
m2	a	in2	b	vdd	mp18	w='3*wp'	l=le
m3	out	in1	a	vdd	mp18	w='3*wp'	l=le
m4	out	in1	0	0	mn18	w=wn	l=le
m5	out	in2	0	0	mn18	w=wn	l=le
m6	out	in3	0	0	mn18	w=wn	l=le
.ends

***2-Input AND***
.subckt	AND2	in1	in2	out	out^	wn=1u	wp=3u	le=0.18u
x1	in1	in2	out^	NAND2	wn='wn'	wp='wp'	le='le'
x2	out^	out	INV	wn='wn'	wp='wp'	le='le'
.ends

***3-Input AND***
.subckt	AND3	in1	in2	in3	out	out^	wn=1u	wp=3u	le=0.18u
x1	in1	in2	in3	out^	NAND3	wn='wn'	wp='wp'	le='le'
x2	out^	out	INV	wn='wn'	wp='wp'	le='le'
.ends

***3-Input NAND***
.subckt	NAND3	in1	in2	in3	out	wn=1u	wp=3u	le=0.18u
m1	out	in2	vdd	vdd	mp18	w=wp	l=le
m2	out	in1	vdd	vdd	mp18	w=wp	l=le
m3	out	in3	vdd	vdd	mp18	w=wp	l=le
m4	out	in1	a	0	mn18	w='3*wn'	l=le
m5	a	in2	b	0	mn18	w='3*wn'	l=le
m6	b	in3	0	0	mn18	w='3*wn'	l=le
.ends


***2-Input NAND***
.subckt	NAND2	in1	in2	out	wn=1u	wp=3u	le=0.18u
m1	out	in1	vdd	vdd	mp18	w=wp	l=le
m2	out	in2	vdd	vdd	mp18	w=wp	l=le
m3	out	in1	a	0	mn18	w='2*wn'	l=le
m4	a	in2	0	0	mn18	w='2*wn'	l=le
.ends

***D Latch with Reset
.subckt	D-Latch-R	in	out	clk	clk^	reset^	wn=1u	wp=3u	le=0.18u
x1	in	a	clk	clk^	TG	wn='wn'	wp='wp'	le='le'
x2	a	reset^	b	NAND2	wn='wn'	wp='wp'	le='le'
x3	b	a	clk^	clk	CK-INV	wn='wn'	wp='wp'	le='le'
x4	b	out	INV	wn='wn'	wp='wp'	le='le'
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


***Inverter
.subckt	INV	in	out	wn=1u	wp=3u	le=0.18u
m1	out	in	vdd	vdd	mp18	w=wp	l=le
m2	out	in	0	0	mn18	w=wn	l=le
.ends

***Muller C-element
.subckt	C-element	in1	in2	out	wn=1u	wp=3u	le=0.18u
m1	a	in1	vdd	vdd	mp18	w='wp'	l=le
m2	out^	in2	a	vdd	mp18	w='wp'	l=le
m3	out^	in2	b	0	mn18	w='wn'	l=le
m4	b	in1	0	0	mn18	w='wn'	l=le
m5	c	in1	vdd	vdd	mp18	w='wp'	l=le
m6	c	in2	vdd	vdd	mp18	w='wp'	l=le
m7	out^	z	c	vdd	mp18	w='wp'	l=le
m8	out^	z	d	0	mn18	w='wn'	l=le
m9	d	in1	0	0	mn18	w='wn'	l=le
m10	d	in2	0	0	mn18	w='wn'	l=le
x1	out^	z	INV	wn='wn'	wp='wp'	le='le'
x2	out^	out	INV	wn='wn'	wp='wp'	le='le'
.ends

***10-Transistor Inverter
.subckt	INV-m10	in	out	wn=1u	wp=3u	le=0.18u
m1	out	in	vdd	vdd	mp18	w=wp	l=le	m=10
m2	out	in	0	0	mn18	w=wn	l=le	m=10
.ends

***D Flip-Flop with Set
.subckt	DFF-S	in	out	clk	clk^	set	set^	wn=1u	wp=3u	le=0.18u
x1	in	a	clk^	clk	TG	wn='wn'	wp='wp'	le='le'
x2	a	set	b	NOR2	wn='wn'	wp='wp'	le='le'
x3	b	a	clk	clk^	CK-INV	wn='wn'	wp='wp'	le='le'
x4	b	c	clk	clk^	TG	wn='wn'	wp='wp'	le='le'
x5	c	set^	d	NAND2	wn='wn'	wp='wp'	le='le'
x6	d	c	clk^	clk	CK-INV	wn='wn'	wp='wp'	le='le'
x7	c	out	INV	wn='wn'	wp='wp'	le='le'
.ends

.ends	Initialization