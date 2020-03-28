*7-Bit Domino Comparator

*a^ comes from PRNG "out", b is Mutation/Crossover Rate
.subckt	Domino-Comparator	ck-en	a0^	a1^	a2^	a3^	a4^	a5^	a6^	b0	b1	b2	b3	b4	b5	b6	b0^	b1^	b2^	b3^	b4^	b5^	b6^	out	wn=1u	wp=3u	le=0.18u

x1	a0^	b0	b0^	x0^	XOR
x2	a1^	b1	b1^	x1^	XOR
x3	a2^	b2	b2^	x2^	XOR
x4	a3^	b3	b3^	x3^	XOR
x5	a4^	b4	b4^	x4^	XOR
x6	a5^	b5	b5^	x5^	XOR
x7	a6^	b6	b6^	x6^	XOR

x8	out^	out	INV


m1	out^	b6	e6	0	mn18	w=wn	l=le
m2	e6	a6^	f6	0	mn18	w=wn	l=le

m3	out^	b5	e5	0	mn18	w=wn	l=le
m4	e5	a5^	f5	0	mn18	w=wn	l=le

m5	out^	b4	e4	0	mn18	w=wn	l=le
m6	e4	a4^	f4	0	mn18	w=wn	l=le

m7	out^	b3	e3	0	mn18	w=wn	l=le
m8	e3	a3^	f3	0	mn18	w=wn	l=le

m9	out^	b2	e2	0	mn18	w=wn	l=le
m10	e2	a2^	f2	0	mn18	w=wn	l=le

m11	out^	b1	e1	0	mn18	w=wn	l=le
m12	e1	a1^	f1	0	mn18	w=wn	l=le

m13	out^	b0	e0	0	mn18	w=wn	l=le
m14	e0	a0^	f0	0	mn18	w=wn	l=le

m15	out^	x0^	f0	0	mn18	w=wn	l=le
m16	f0	x1^	f1	0	mn18	w=wn	l=le
m17	f1	x2^	f2	0	mn18	w=wn	l=le
m18	f2	x3^	f3	0	mn18	w=wn	l=le
m19	f3	x4^	f4	0	mn18	w=wn	l=le
m20	f4	x5^	f5	0	mn18	w=wn	l=le
m21	f5	x6^	f6	0	mn18	w=wn	l=le
m22	f6	ck-en	0	0	mn18	w='5*wn'	l=le

m23	out^	ck-en	vdd	vdd	mp18	w='0.25*wp'	l=le

m24	1	out	vdd	vdd	mp18	w='0.2*wp'	l=le
m25	out^	0	1	vdd	mp18	w='0.2*wp'	l='5*le'


***XOR (Pass Transistor Logic)
.subckt	XOR	in1	in2	in2^	out	wn=1u	wp=3u	le=0.18u
m1	out	in2	in1	vdd	mp18	w=wp	l=le
m2	in1	in2^	out	0	mn18	w=wn	l=le
m3	out	in1	in2	vdd	mp18	w=wp	l=le
m4	out	in1	in2^	0	mn18	w=wn	l=le
.ends

***Inverter
.subckt	INV	in	out	wn=1u	wp=3u	le=0.18u
m1	out	in	vdd	vdd	mp18	w=wp	l=le
m2	out	in	0	0	mn18	w=wn	l=le
.ends

.ends	Domin-Comparator