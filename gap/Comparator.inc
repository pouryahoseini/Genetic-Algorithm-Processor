*Look Ahead Carry Based Comparator (A>B ==> 'High')

.subckt	Comparator	Fitness-Resolution-Pin	Fitness-or-Cost-Pin	a0	a1	a2	a3	a4	a5	a6	a7	a8	a9	a10	a11	a12	a13	a14	a15	a16	a17	a18	a19	a20	a21	a22	a23	a24	a25	a26	a27	a28	a29	a30	a31	b0	b1	b2	b3	b4	b5	b6	b7	b8	b9	b10	b11	b12	b13	b14	b15	b16	b17	b18	b19	b20	b21	b22	b23	b24	b25	b26	b27	b28	b29	b30	b31	out	wnn=1u	wpp=3u

***Pre-Processing
x33	A0	A0^	INV
x32	A0^	B0	nor0	NOR

x1	a1	b1	nand1	nor1	Pre-Process
x2	a2	b2	nand2	nor2	Pre-Process
x3	a3	b3	nand3	nor3	Pre-Process
x4	a4	b4	nand4	nor4	Pre-Process
x5	a5	b5	nand5	nor5	Pre-Process
x6	a6	b6	nand6	nor6	Pre-Process
x7	a7	b7	nand7	nor7	Pre-Process
x8	a8	b8	nand8	nor8	Pre-Process
x9	a9	b9	nand9	nor9	Pre-Process
x10	a10	b10	nand10	nor10	Pre-Process
x11	a11	b11	nand11	nor11	Pre-Process
x12	a12	b12	nand12	nor12	Pre-Process
x13	a13	b13	nand13	nor13	Pre-Process
x14	a14	b14	nand14	nor14	Pre-Process
x15	a15	b15	nand15	nor15	Pre-Process
x16	a16	b16	nand16	nor16	Pre-Process
x17	a17	b17	nand17	nor17	Pre-Process
x18	a18	b18	nand18	nor18	Pre-Process
x19	a19	b19	nand19	nor19	Pre-Process
x20	a20	b20	nand20	nor20	Pre-Process
x21	a21	b21	nand21	nor21	Pre-Process
x22	a22	b22	nand22	nor22	Pre-Process
x23	a23	b23	nand23	nor23	Pre-Process
x24	a24	b24	nand24	nor24	Pre-Process
x25	a25	b25	nand25	nor25	Pre-Process
x26	a26	b26	nand26	nor26	Pre-Process
x27	a27	b27	nand27	nor27	Pre-Process
x28	a28	b28	nand28	nor28	Pre-Process
x29	a29	b29	nand29	nor29	Pre-Process
x30	a30	b30	nand30	nor30	Pre-Process
x31	a31	b31	nand31	nor31	Pre-Process


***Main
x34	nand1	nor1	C1	nor0	MUX
x35	nand3	nor3	3a1	3b1	nand2	nor2	MUX-Pair
x36	3a1	3b1	C3	C1	MUX

x37	nand5	nor5	5a1	5b1	nand4	nor4	MUX-Pair
x38	nand7	nor7	7a1	7b1	nand6	nor6	MUX-Pair
x39	7a1	7b1	7a2	7b2	5a1	5b1	MUX-Pair
x40	7a2	7b2	C7	C3	MUX

x41	nand9	nor9	9a1	9b1	nand8	nor8	MUX-Pair
x42	nand11	nor11	11a1	11b1	nand10	nor10	MUX-Pair
x43	11a1	11b1	11a2	11b2	9a1	9b1	MUX-Pair
x44	nand13	nor13	13a1	13b1	nand12	nor12	MUX-Pair
x45	nand15	nor15	15a1	15b1	nand14	nor14	MUX-Pair
x46	15a1	15b1	15a2	15b2	13a1	13b1	MUX-Pair
x47	15a2	15b2	15a3	15b3	11a2	11b2	Static-MUX-Pair
x48	15a3	15b3	C15	C7	MUX

x49	nand17	nor17	17a1	17b1	nand16	nor16	MUX-Pair
x50	nand19	nor19	19a1	19b1	nand18	nor18	MUX-Pair
x51	19a1	19b1	19a2	19b2	17a1	17b1	MUX-Pair
x52	nand21	nor21	21a1	21b1	nand20	nor20	MUX-Pair
x53	nand23	nor23	23a1	23b1	nand22	nor22	MUX-Pair
x54	23a1	23b1	23a2	23b2	21a1	21b1	MUX-Pair
x55	23a2	23b2	23a3	23b3	19a2	19b2	MUX-Pair
x56	nand25	nor25	25a1	25b1	nand24	nor24	MUX-Pair
x57	nand27	nor27	27a1	27b1	nand26	nor26	MUX-Pair
x58	27a1	27b1	27a2	27b2	25a1	25b1	MUX-Pair
x59	nand29	nor29	29a1	29b1	nand28	nor28	MUX-Pair
x60	nand31	nor31	31a1	31b1	nand30	nor30	MUX-Pair
x61	31a1	31b1	31a2	31b2	29a1	29b1	MUX-Pair
x62	31a2	31b2	31a3	31b3	27a2	27b2	Static-MUX-Pair
x63	31a3	31b3	31a4	31b4	23a3	23b3	MUX-Pair
x64	31a4	31b4	C31	C15	MUX

x65	C31	C15	pre-out	Fitness-Resolution-Pin	MUX

x66	Fitness-or-Cost-Pin	Fitness-or-Cost-Pin^	INV
x67	pre-out	Fitness-or-Cost-Pin	Fitness-or-Cost-Pin^	out	XOR2

***************

***2-Input XOR (Pass Transistor Logic)
.subckt	XOR2	in1	in2	in2^	out	wn='wnn'	wp='wpp'	le=0.18u
m1	out	in2	in1	vdd	mp18	w=wp	l=le
m2	in1	in2^	out	0	mn18	w=wn	l=le
m3	out	in1	in2	vdd	mp18	w=wp	l=le
m4	out	in1	in2^	0	mn18	w=wn	l=le
.ends

***MUX-Pair***
.subckt	MUX-Pair	in1	in2	out1	out2	control1	control2
x1	in1	in2	out1	control1	MUX
x2	in1	in2	out2	control2	MUX
.ends

***Pre-Process SubCircuit***
.subckt	Pre-Process	Ai	Bi	NANDi	NORi
x1	Ai	Ai^	INV
x2	Ai^	Bi	nandi	NAND
x3	Ai^	Bi	nori	NOR
.ends

***Inverter***
.subckt	INV	in	out	wn='wnn'	wp='wpp'	le=0.18u
m1	out	in	vdd	vdd	mp18	w=wp	l=le
m2	out	in	0	0	mn18	w=wn	l=le
.ends

***NAND***
.subckt	NAND	in1	in2	out	wn='wnn'	wp='wpp'	le=0.18u
m1	out	in2	vdd	vdd	mp18	w=wp	l=le
m2	out	in1	vdd	vdd	mp18	w=wp	l=le
m3	out	in1	a	0	mn18	w='2*wn'	l=le
m4	a	in2	0	0	mn18	w='2*wn'	l=le
.ends	NAND

***NOR***
.subckt	NOR	in1	in2	out	wn='wnn'	wp='wpp'	le=0.18u
m1	a	in2	vdd	vdd	mp18	w='2*wp'	l=le
m2	out	in1	a	vdd	mp18	w='2*wp'	l=le
m3	out	in1	0	0	mn18	w=wn	l=le
m4	out	in2	0	0	mn18	w=wn	l=le
.ends

***TransmissionGate***
.subckt	TG	in	out	control	control^	wn='wnn'	wp='wpp'	le=0.18u
m1	in	control	out	0	mn18	w=wn	l=le
m2	out	control^	in	vdd	mp18	w=wp	l=le
.ends

***Multiplexer***
.subckt	MUX	in1	in2	out	control
x1	in1	out	control	control^	TG
x2	in2	out	control^	control	TG
x3	control	control^	INV
.ends

***Static Multiplexer***
.subckt	Static-MUX	in1	in2	out	control	wn='wnn'	wp='wpp'	le=0.18u
x1	control	control^	INV

m1	a	control	vdd	vdd	mp18	w='2*wp'	l=le
m2	b	control^	a	vdd	mp18	w='2*wp'	l=le
m3	b	control	c	0	mn18	w='2*wn'	l=le
m4	c	in1	0	0	mn18	w='2*wn'	l=le
m5	a	in1	vdd	vdd	mp18	w='2*wp'	l=le
m6	b	in2	a	vdd	mp18	w='2*wp'	l=le
m7	b	control^	d	0	mn18	w='2*wn'	l=le
m8	d	in2	0	0	mn18	w='2*wn'	l=le

x2	b	out	INV
.ends

***Static MUX-Pair***
.subckt	Static-MUX-Pair	in1	in2	out1	out2	control1	control2
x1	in1	in2	out1	control1	Static-MUX
x2	in1	in2	out2	control2	Static-MUX
.ends

.ends Comparator