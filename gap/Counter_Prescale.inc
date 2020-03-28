*Syncronous Counter with prescaling technique

.subckt	Prescaling-Counter	clk	clk^	reset	reset^	q0	q1	q2	q3	q4	q5	q6	q7	wnn=3u	wpp=9u
x1	invout	q0	clk	clk^	reset	reset^	DFF-R
x2	q0	invout	INV

x3	q0	invout	q1	clk	clk^	reset	reset^	Counter-Cell
x4	q0	q1	andout1	andout1^	AND2

x5	andout1	andout1^	q2	clk	clk^	reset	reset^	Counter-Cell
x6	q2	andout1	andout2	andout2^	AND2
x7	andout2	andout2^	q3	clk	clk^	reset	reset^	Counter-Cell
x8	q2	q3	andout3	andout3^	AND2

x9	andout1	andout3	andout4	andout4^	AND2
x10	andout4	andout4^	q4	clk	clk^	reset	reset^	Counter-Cell
x11	andout3	andout1	q4	andout5	andout5^	AND3
x12	andout5	andout5^	q5	clk	clk^	reset	reset^	Counter-Cell
x13	andout3	q4	q5	andout6	andout6^	AND3

x14	andout1	andout6	andout7	andout7^	AND2
x15	andout7	andout7^	q6	clk	clk^	reset	reset^	Counter-Cell
x16	andout1	andout6	q6	andout8	andout8^	AND3
x17	andout8	andout8^	q7	clk	clk^	reset	reset^	Counter-Cell


***Counter Cell***
.subckt	Counter-Cell	xorin	xorin^	q	clk	clk^	reset	reset^
x1	xorout	q	clk	clk^	reset	reset^	DFF-R
x2	q	xorin	xorin^	xorout	XOR
.ends

***2-Input And***
.subckt	AND2	in1	in2	out	out^
x1	in1	in2	out^	NAND2
x2	out^	out	INV
.ends

***3-Input And***
.subckt	AND3	in1	in2	in3	out	out^
x1	in1	in2	in3	out^	NAND3
x2	out^	out	INV
.ends

***XOR (Dynamic = Pass Transistor Logic)***
.subckt	XOR	in1	in2	in2^	out	wn='wnn'	wp='wpp'	le=0.18u
m1	out	in2	in1	vdd	mp18	w=wp	l=le
m2	in1	in2^	out	0	mn18	w=wn	l=le
m3	out	in1	in2	vdd	mp18	w=wp	l=le
m4	out	in1	in2^	0	mn18	w=wn	l=le
.ends

***2-Input NAND***
.subckt	NAND2	in1	in2	out	wn='wnn'	wp='wpp'	le=0.18u
m1	out	in1	vdd	vdd	mp18	w=wp	l=le
m2	out	in2	vdd	vdd	mp18	w=wp	l=le
m3	out	in1	a	0	mn18	w='2*wn'	l=le
m4	a	in2	0	0	mn18	w='2*wn'	l=le
.ends

***3-Input NAND***
.subckt	NAND3	in1	in2	in3	out	wn='wnn'	wp='wpp'	le=0.18u
m1	out	in1	vdd	vdd	mp18	w=wp	l=le
m2	out	in2	vdd	vdd	mp18	w=wp	l=le
m3	out	in3	vdd	vdd	mp18	w=wp	l=le
m4	out	in1	a	0	mn18	w='3*wn'	l=le
m5	a	in2	b	0	mn18	w='3*wn'	l=le
m6	b	in3	0	0	mn18	w='3*wn'	l=le
.ends

***4-Input NAND***
.subckt	NAND4	in1	in2	in3	in4	out	wn='wnn'	wp='wpp'	le=0.18u
m1	out	in2	vdd	vdd	mp18	w=wp	l=le
m2	out	in1	vdd	vdd	mp18	w=wp	l=le
m3	out	in3	vdd	vdd	mp18	w=wp	l=le
m4	out	in4	vdd	vdd	mp18	w=wp	l=le
m5	out	in1	a	0	mn18	w='4*wn'	l=le
m6	a	in2	b	0	mn18	w='4*wn'	l=le
m7	b	in3	c	0	mn18	w='4*wn'	l=le
m8	c	in4	0	0	mn18	w='4*wn'	l=le
.ends

***Inverter***
.subckt	INV	in	out	wn='wnn'	wp='wpp'	le=0.18u
m1	out	in	vdd	vdd	mp18	w=wp	l=le
m2	out	in	0	0	mn18	w=wn	l=le
.ends

***Clocked Inverter
.subckt	CK-INV	in	out	ck	ck^	wn='wnn'	wp='wpp'	le=0.18u
m1	a	in	vdd	vdd	mp18	w=wp	l=le
m2	out	ck^	a	vdd	mp18	w=wp	l=le
m3	out	ck	b	0	mn18	w=wn	l=le
m4	b	in	0	0	mn18	w=wn	l=le
.ends

***Transmission Gate***
.subckt	TG	in	out	control	control^	wn='wnn'	wp='wpp'	le=0.18u
m1	in	control^	out	vdd	mp18	w=wp	l=le
m2	out	control	in	0	mn18	w=wn	l=le
.ends

***2-Input NOR***
.subckt	NOR	in1	in2	out	wn='wnn'	wp='wpp'	le=0.18u
m1	a	in2	vdd	vdd	mp18	w='2*wp'	l=le
m2	out	in1	a	vdd	mp18	w='2*wp'	l=le
m3	out	in1	0	0	mn18	w=wn	l=le
m4	out	in2	0	0	mn18	w=wn	l=le
.ends

***D Flip-Flop with Reset
.subckt	DFF-R	in	out	clk	clk^	reset	reset^
x1	in	a	clk^	clk	TG
x2	a	reset^	b	NAND2	wn='wnn'	wp='wpp'	le=0.18u
x3	b	a	clk	clk^	CK-INV
x4	b	c	clk	clk^	TG
x5	c	reset	d	NOR
x6	d	c	clk^	clk	CK-INV
x7	c	out	INV	wn='wnn'	wp='wpp'	le=0.18u
.ends

.ends	Parallel-Counter