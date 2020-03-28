*5-Bit Decoder for one-point or two-point crossover

.subckt	Decoder_Crossover	in0	1	2	3	4	out0	out1	out2	out3	out4	out5	out6	out7	out8	out9	out10	out11	out12	out13	out14	out15	out16	out17	out18	out19	out20	out21	out22	out23	out24	out25	out26	out27	out28	out29	out30	out31

*Out31
vout31	out31	0	1.8

*Out30
x1	in0	1	2	3	4	out30	NAND5

*Out29
x2	1	2	3	4	out29	NAND4

*Out28
x3	in0	1	a	OR2
x4	a	2	3	4	out28	NAND4

*Out27
x5	2	3	4	out27	NAND3

*Out26
x6	in0	1	b	AND2
x7	b	2	c	OR2
x8	c	3	4	out26	NAND3

*Out25
x9	1	2	d	OR2
x10	d	3	4	out25	NAND3

*Out24
x11	in0	1	2	e	OR3
x12	e	3	4	out24	NAND3

*Out23
x13	3	4	out23	NAND2

*Out22
x14	in0	1	2	f	AND3
x15	f	3	g	OR2
x16	g	4	out22	NAND2

*Out21
x17	1	2	h	AND2
x18	h	3	i	OR2
x19	i	4	out21	NAND2

*Out20
x20	in0	1	j	OR2
x21	j	2	k	AND2
x22	k	3	l	OR2
x23	l	4	out20	NAND2

*Out19
x24	2	3	m	OR2
x25	m	4	out19	NAND2

*Out18
x26	in0	1	n	AND2
x27	n	2	3	o	OR3
x28	o	4	out18	NAND2

*Out17
x29	1	2	3	p	OR3
x30	p	4	out17	NAND2

*Out16
x31	in0	1	2	3	q	OR4
x32	q	4	out16	NAND2

*Out15
x33	4	out15	INV

*Out14
x34	in0	1	2	3	r	AND4
x35	r	4	out14	NOR2

*Out13
x36	1	2	3	s	AND3
x37	s	4	out13	NOR2

*Out12
x38	in0	1	t	OR2
x39	t	2	3	u	AND3
x40	u	4	out12	NOR2

*Out11
x41	2	3	v	AND2
x42	v	4	out11	NOR2

*Out10
x43	in0	1	w	AND2
x44	w	2	x	OR2
x45	x	3	y	AND2
x46	y	4	out10	NOR2

*Out9
x47	1	2	z	OR2
x48	z	3	aa	AND2
x49	aa	4	out9	NOR2

*Out8
x50	in0	1	2	bb	OR3
x51	bb	3	cc	AND2
x52	cc	4	out8	NOR2

*Out7
x53	3	4	out7	NOR2

*Out6
x54	in0	1	2	dd	AND3
x55	dd	3	4	out6	NOR3

*Out5
x56	1	2	ee	AND2
x57	ee	3	4	out5	NOR3

*Out4
x58	in0	1	ff	OR2
x59	ff	2	gg	AND2
x60	gg	3	4	out4	NOR3

*Out3
x61	2	3	4	out3	NOR3

*Out2
x62	in0	1	hh	AND2
x63	hh	2	3	4	out2	NOR4

*Out1
x64	1	2	3	4	out1	NOR4

*Out0
x65	in0	1	2	3	4	out0	NOR5


***2-Input AND***
.subckt	AND2	in1	in2	out
x1	in1	in2	out^	NAND2
x2	out^	out	INV
.ends

***3-Input AND***
.subckt	AND3	in1	in2	in3	out
x1	in1	in2	in3	out^	NAND3
x2	out^	out	INV
.ends

***4-Input AND***
.subckt	AND4	in1	in2	in3	in4	out
x1	in1	in2	in3	in4	out^	NAND4
x2	out^	out	INV
.ends

***2-Input OR***
.subckt	OR2	in1	in2	out
x1	in1	in2	out^	NOR2
x2	out^	out	INV
.ends

***3-Input OR***
.subckt	OR3	in1	in2	in3	out
x1	in1	in2	in3	out^	NOR3
x2	out^	out	INV
.ends

***4-Input OR***
.subckt	OR4	in1	in2	in3	in4	out
x1	in1	in2	in3	in4	out^	NOR4
x2	out^	out	INV
.ends

***2-Input NAND***
.subckt	NAND2	in1	in2	out	wn=1u	wp=3u	le=0.18u
m1	out	in1	vdd	vdd	mp18	w=wp	l=le
m2	out	in2	vdd	vdd	mp18	w=wp	l=le
m3	out	in1	a	0	mn18	w='2*wn'	l=le
m4	a	in2	0	0	mn18	w='2*wn'	l=le
.ends

***3-Input NAND***
.subckt	NAND3	in1	in2	in3	out	wn=1u	wp=3u	le=0.18u
m1	out	in1	vdd	vdd	mp18	w=wp	l=le
m2	out	in2	vdd	vdd	mp18	w=wp	l=le
m3	out	in3	vdd	vdd	mp18	w=wp	l=le
m4	out	in1	a	0	mn18	w='3*wn'	l=le
m5	a	in2	b	0	mn18	w='3*wn'	l=le
m6	b	in3	0	0	mn18	w='3*wn'	l=le
.ends

***4-Input NAND***
.subckt	NAND4	in1	in2	in3	in4	out	wn=1u	wp=3u	le=0.18u
m1	out	in2	vdd	vdd	mp18	w=wp	l=le
m2	out	in1	vdd	vdd	mp18	w=wp	l=le
m3	out	in3	vdd	vdd	mp18	w=wp	l=le
m4	out	in4	vdd	vdd	mp18	w=wp	l=le
m5	out	in1	a	0	mn18	w='4*wn'	l=le
m6	a	in2	b	0	mn18	w='4*wn'	l=le
m7	b	in3	c	0	mn18	w='4*wn'	l=le
m8	c	in4	0	0	mn18	w='4*wn'	l=le
.ends

***5-Input NAND***
.subckt	NAND5	in1	in2	in3	in4	in5	out	wn=1u	wp=3u	le=0.18u
m1	out	in2	vdd	vdd	mp18	w=wp	l=le
m2	out	in1	vdd	vdd	mp18	w=wp	l=le
m3	out	in3	vdd	vdd	mp18	w=wp	l=le
m4	out	in4	vdd	vdd	mp18	w=wp	l=le
m5	out	in5	vdd	vdd	mp18	w=wp	l=le
m6	out	in1	a	0	mn18	w='5*wn'	l=le
m7	a	in2	b	0	mn18	w='5*wn'	l=le
m8	b	in3	c	0	mn18	w='5*wn'	l=le
m9	c	in4	d	0	mn18	w='5*wn'	l=le
m10	d	in5	0	0	mn18	w='5*wn'	l=le
.ends

***NOR***
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

***4-Input NOR***
.subckt	NOR4	in1	in2	in3	in4	out	wn=1u	wp=3u	le=0.18u
m1	c	in4	vdd	vdd	mp18	w='4*wp'	l=le
m2	b	in3	c	vdd	mp18	w='4*wp'	l=le
m3	a	in2	b	vdd	mp18	w='4*wp'	l=le
m4	out	in1	a	vdd	mp18	w='4*wp'	l=le
m5	out	in1	0	0	mn18	w=wn	l=le
m6	out	in2	0	0	mn18	w=wn	l=le
m7	out	in3	0	0	mn18	w=wn	l=le
m8	out	in4	0	0	mn18	w=wn	l=le
.ends

***5-Input NOR***
.subckt	NOR5	in1	in2	in3	in4	in5	out	wn=1u	wp=3u	le=0.18u
m1	d	in5	vdd	vdd	mp18	w='5*wp'	l=le
m2	c	in4	d	vdd	mp18	w='5*wp'	l=le
m3	b	in3	c	vdd	mp18	w='5*wp'	l=le
m4	a	in2	b	vdd	mp18	w='5*wp'	l=le
m5	out	in1	a	vdd	mp18	w='5*wp'	l=le
m6	out	in1	0	0	mn18	w=wn	l=le
m7	out	in2	0	0	mn18	w=wn	l=le
m8	out	in3	0	0	mn18	w=wn	l=le
m9	out	in4	0	0	mn18	w=wn	l=le
m10	out	in5	0	0	mn18	w=wn	l=le
.ends

***Inverter***
.subckt	INV	in	out	wn=1u	wp=3u	le=0.18u
m1	out	in	vdd	vdd	mp18	w=wp	l=le
m2	out	in	0	0	mn18	w=wn	l=le
.ends

.ends	Decoder_Crossover