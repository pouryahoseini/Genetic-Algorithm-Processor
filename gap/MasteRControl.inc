*Master Control Module 

.subckt	Master-Control	Initialize	Initialize^	Initialize2	Initialize2^	Post-Initialize	Replica-Reset	Replica-Reset^	Selection-Start	Selection-done	Replacement-Start	Replacement-done	Crossover&Mutation-Start	Crossover&Mutation-Start^	Crossover&Mutation-done	Fitness-Estimation-Start	Fitness-Estimation-done	Emmigration-Immigration-Start	Emmigration-done	Immigration1-done	Immigration2-done	i0-q0	i0-q0^	X-Handshake-Enable	X-Handshake-Enable^	Handshake-Enable	Handshake-Start	Initialization-Handshake-Start	Initialization-Handshake-Enable	Offspring1-Ready-Flag	Offspring2-Ready-Flag	Chromosome-Resolution-Pin	Handshake-Done	Initialization-Start	Fitness-Estimation-stage2	Stage5	Intermediate-Registers-Enable	Iteration-Number-Pin-0	Iteration-Number-Pin-1	Iteration-Number-Pin-2	GA-Completion	p1-0	p1-1	p1-2	p1-3	p1-4	p1-5	p1-6	p1-7	p1-8	p1-9	p1-10	p1-11	p1-12	p1-13	p1-14	p1-15	p1-16	p1-17	p1-18	p1-19	p1-20	p1-21	p1-22	p1-23	p1-24	p1-25	p1-26	p1-27	p1-28	p1-29	p1-30	p1-31	p2-0	p2-1	p2-2	p2-3	p2-4	p2-5	p2-6	p2-7	p2-8	p2-9	p2-10	p2-11	p2-12	p2-13	p2-14	p2-15	p2-16	p2-17	p2-18	p2-19	p2-20	p2-21	p2-22	p2-23	p2-24	p2-25	p2-26	p2-27	p2-28	p2-29	p2-30	p2-31	Parent1-0	Parent1-1	Parent1-2	Parent1-3	Parent1-4	Parent1-5	Parent1-6	Parent1-7	Parent1-8	Parent1-9	Parent1-10	Parent1-11	Parent1-12	Parent1-13	Parent1-14	Parent1-15	Parent1-16	Parent1-17	Parent1-18	Parent1-19	Parent1-20	Parent1-21	Parent1-22	Parent1-23	Parent1-24	Parent1-25	Parent1-26	Parent1-27	Parent1-28	Parent1-29	Parent1-30	Parent1-31	Parent2-0	Parent2-1	Parent2-2	Parent2-3	Parent2-4	Parent2-5	Parent2-6	Parent2-7	Parent2-8	Parent2-9	Parent2-10	Parent2-11	Parent2-12	Parent2-13	Parent2-14	Parent2-15	Parent2-16	Parent2-17	Parent2-18	Parent2-19	Parent2-20	Parent2-21	Parent2-22	Parent2-23	Parent2-24	Parent2-25	Parent2-26	Parent2-27	Parent2-28	Parent2-29	Parent2-30	Parent2-31	Offspring1-0	Offspring1-1	Offspring1-2	Offspring1-3	Offspring1-4	Offspring1-5	Offspring1-6	Offspring1-7	Offspring1-8	Offspring1-9	Offspring1-10	Offspring1-11	Offspring1-12	Offspring1-13	Offspring1-14	Offspring1-15	Offspring1-16	Offspring1-17	Offspring1-18	Offspring1-19	Offspring1-20	Offspring1-21	Offspring1-22	Offspring1-23	Offspring1-24	Offspring1-25	Offspring1-26	Offspring1-27	Offspring1-28	Offspring1-29	Offspring1-30	Offspring1-31	Offspring2-0	Offspring2-1	Offspring2-2	Offspring2-3	Offspring2-4	Offspring2-5	Offspring2-6	Offspring2-7	Offspring2-8	Offspring2-9	Offspring2-10	Offspring2-11	Offspring2-12	Offspring2-13	Offspring2-14	Offspring2-15	Offspring2-16	Offspring2-17	Offspring2-18	Offspring2-19	Offspring2-20	Offspring2-21	Offspring2-22	Offspring2-23	Offspring2-24	Offspring2-25	Offspring2-26	Offspring2-27	Offspring2-28	Offspring2-29	Offspring2-30	Offspring2-31	dOffspring1-0	dOffspring1-1	dOffspring1-2	dOffspring1-3	dOffspring1-4	dOffspring1-5	dOffspring1-6	dOffspring1-7	dOffspring1-8	dOffspring1-9	dOffspring1-10	dOffspring1-11	dOffspring1-12	dOffspring1-13	dOffspring1-14	dOffspring1-15	dOffspring1-16	dOffspring1-17	dOffspring1-18	dOffspring1-19	dOffspring1-20	dOffspring1-21	dOffspring1-22	dOffspring1-23	dOffspring1-24	dOffspring1-25	dOffspring1-26	dOffspring1-27	dOffspring1-28	dOffspring1-29	dOffspring1-30	dOffspring1-31	dOffspring2-0	dOffspring2-1	dOffspring2-2	dOffspring2-3	dOffspring2-4	dOffspring2-5	dOffspring2-6	dOffspring2-7	dOffspring2-8	dOffspring2-9	dOffspring2-10	dOffspring2-11	dOffspring2-12	dOffspring2-13	dOffspring2-14	dOffspring2-15	dOffspring2-16	dOffspring2-17	dOffspring2-18	dOffspring2-19	dOffspring2-20	dOffspring2-21	dOffspring2-22	dOffspring2-23	dOffspring2-24	dOffspring2-25	dOffspring2-26	dOffspring2-27	dOffspring2-28	dOffspring2-29	dOffspring2-30	dOffspring2-31	1

*iteration detector circuit
x1	stage5^	stage1	clock	clock^	Initialize2	Initialize2^	DFF-S	wn=10u	wp=30u
x2	stage1	stage2	clock	clock^	Initialize2	Initialize2^	DFF-R	wn=10u	wp=30u
x3	stage2	stage3	clock	clock^	Initialize2	Initialize2^	DFF-R	wn=10u	wp=30u
x4	stage3	stage4	clock	clock^	Initialize2	Initialize2^	DFF-R	wn=10u	wp=30u
x5	stage4	stage5	clock	clock^	Initialize2	Initialize2^	DFF-R	wn=10u	wp=30u

x6	stage5	stage5^	INV	wn=20u	wp=60u

x7	Handshake-Start	stage1	Selection-Start	Selection-Start^	AND2	wn=25u	wp=75u
x8	stage1	stage1^	INV	wn=5u	wp=15u
x9	Selection-done	stage1^	1	1^	OR2	wn=5u	wp=15u

x10	Handshake-Start	stage2	Crossover&Mutation-Start	Crossover&Mutation-Start^	AND2	wn=25u	wp=75u
x11	stage2	stage2^	INV	wn=5u	wp=15u
x12	Crossover&Mutation-done	stage2^	2	2^	OR2	wn=5u	wp=15u

x13	Initialization-Start	stage4	10	10^	OR2	wn=10u	wp=30u
x100	stage4	stage4^	INV	wn=10u	wp=30u
x14	10	X-Handshake-Start	Fitness-Estimation-Start	Fitness-Estimation-Start^	AND2	wn=25u	wp=75u
x15	stage4^	Fitness-Estimation-done	3	3^	OR2	wn=5u	wp=15u

x16	Initialization-Start	stage5	11	11^	OR2-m10	wn=2.5u	wp=7.5u	*m=10
x17	Handshake-Start	11	Emmigration-Immigration-Start	Emmigration-Immigration-Start^	AND2	wn=25u	wp=75u
x18	X-Handshake-Start	11	Replacement-Start	Replacement-Start^	AND2	wn=25u	wp=75u
x19	stage5^	Replacement-done	4	4^	OR2	wn=5u	wp=15u
x20	stage5^	Emmigration-done	5	5^	OR2	wn=5u	wp=15u
x21	stage5^	Immigration1-done	6	6^	OR2	wn=5u	wp=15u
x22	stage5^	Immigration2-done	7	7^	OR2	wn=5u	wp=15u

x23	1	2	3	7	20	NAND4	wn=12.5u	wp=37.5u
x24	4	5	6	GA-Completion^	21	NAND4	wn=12.5u	wp=37.5u

x25	20	21	22	NOR2-m10	wn=3u	wp=9u	*m=10

x26	22	23	INV-m10	wn=7.5u	wp=22.5u	*m=10
x27	23	Handshake-Done	INV-m10	wn=18.7u	wp=56.2u	*m=10

x28	last-iteration-detected	stage5^	GA-Completion	GA-Completion^	AND2	wn=12.5u	wp=37.5u

x29	last-iteration-detected	stage5^	30	NOR2	wn=10u	wp=30u

x30	Handshake-Done	Handshake-Done^	INV	wn=15u	wp=45u
x31	30	31	Handshake-Done	Handshake-Done^	Initialize2	Initialize2^	DFF-R	wn=20u	wp=60u

x32	Handshake-Start	Handshake-Start^	INV	wn=10u	wp=30u
x33	Handshake-Done	40	Handshake-Start^	Handshake-Start	Initialize2^	D-Latch-R	wn=10u	wp=30u
x34	40	40^	INV	wn=30u	wp=90u

x35	40^	31	clock	NOR2-m10	wn=8u	wp=24u	*m=10

x36	clock	clock^	INV-m10	wn=4u	wp=12u	*m=10

*iteration detected signal generation
x37	last-iteration-detected	last-iteration-detected^	INV	wn=5u	wp=15u

x38	stage4	stage4^	INV	wn=5u	wp=15u

x39	Handshake-Done	last-iteration-detected^	50	50^	AND2	wn=15u	wp=45u
x40	stage4^	Offspring1-Ready-Flag	Offspring2-Ready-Flag	51	51^	OR3-m10	wn=1.5u	wp=4.5u	*m=10

x41	Offspring2-Ready-Flag	Offspring2-Ready-Flag^	INV	wn=5u	wp=15u
x42	Offspring1-Ready-Flag	Offspring2-Ready-Flag	Offspring2-Ready-Flag^	60	XOR2	wn=10u	wp=30u

x43	60	Fitness-Estimation-stage2	61	61^	AND2	wn=10u	wp=30u
x44	62	63	61	61^	Initialize2	Initialize2^	DFF-R	wn=3u	wp=9u
x45	63	62	INV	wn=3u	wp=9u

x46	63	60	52	NAND2	wn=15u	wp=45u

x47	50	51	52	iteration-detected	iteration-detected^	AND3	wn=15u	wp=45u

*iteration control circuit (iteration counter circuit)
x48	Iteration-Number-Pin-0	Iteration-Number-Pin-1	Iteration-Number-Pin-2	Initialize2	Initialize2^	iteration-detected	iteration-detected^	last-iteration-detected	i0-q0	i0-q0^	Iteration-Control

*handshake
x49	80	Initialize^	70	70^	AND2	wn=15u	wp=45u
x50	pre-handshake-start	Initialize	71	NOR2	wn=15u	wp=45u
x51	Intermediate-Registers-Enable	Initialize	72	NOR2	wn=15u	wp=45u

x52	70	71	pre-handshake-enable	C-element	wn=15u	wp=45u
x53	72	pre-handshake-enable	pre-handshake-start	C-element	wn=15u	wp=45u

x57	Post-Initialize	Handshake-Done	92	92^	OR2	wn=15u	wp=45u

x58	92	Initialize^	81	81^	AND2	wn=15u	wp=45u
x59	80	Initialize	82	NOR2	wn=15u	wp=45u
x60	pre-handshake-enable	Initialize	83	NOR2	wn=15u	wp=45u

x61	81	82	Intermediate-Registers-Enable	C-element	wn=15u	wp=45u
x62	83	Intermediate-Registers-Enable	80	C-element	wn=15u	wp=45u

*XS, XE, and replica reset signal generation
x63	Initialization-Handshake-Start	pre-handshake-start	100	Initialization-Start	MUX	wn=15u	wp=45u

x64	100	101	INV	wn=30u	wp=90u
x65	101	X-Handshake-Start	INV-m10	wn=6u	wp=18u	*m=10

x66	pre-handshake-start	110	INV	wn=30u	wp=90u
x67	110	Handshake-Start	INV-m10	wn=6u	wp=18u	*m=10

x68	100	Initialize2^	120	NAND2	wn=15u	wp=45u

x69	120	121	INV-m10	wn=3.7u	wp=11.1u	*m=10
x70	121	122	INV-m10	wn=9.4u	wp=28.2u	*m=10
x71	122	123	INV-m10	wn=23.5u	wp=70.5u	*m=10
x72	123	Replica-Reset	INV-m20	wn=29.3u	wp=87.9u	*m=20

x73	Replica-Reset	Replica-Reset^	INV-m10	wn=29.3u	wp=87.9u	*m=10

x74	Initialization-Handshake-Enable	pre-handshake-enable	130	Initialization-Start	MUX	wn=15u	wp=45u

x75	130	X-Handshake-Enable^	INV	wn=30u	wp=90u
x76	X-Handshake-Enable^	X-Handshake-Enable	INV-m10	wn=6u	wp=18u	*m=10

x77	pre-handshake-enable	131	INV	wn=30u	wp=90u
x78	131	Handshake-Enable	INV-m10	wn=6u	wp=18u	*m=10

*intermediate registers
x79	Intermediate-Registers-Enable	140	INV	wn=30u	wp=90u
x80	140	141	INV-m10	wn=6u	wp=18u	*m=10

x81	141	Chromosome-Resolution-Pin	142	142^	AND2-m10	wn=5u	wp=15u	*m=10
x82	141	141^	INV	wn=25u	wp=75u

x83	p1-0	p1-1	p1-2	p1-3	p1-4	p1-5	p1-6	p1-7	p1-8	p1-9	p1-10	p1-11	p1-12	p1-13	p1-14	p1-15	p1-16	p1-17	p1-18	p1-19	p1-20	p1-21	p1-22	p1-23	p1-24	p1-25	p1-26	p1-27	p1-28	p1-29	p1-30	p1-31	Parent1-0	Parent1-1	Parent1-2	Parent1-3	Parent1-4	Parent1-5	Parent1-6	Parent1-7	Parent1-8	Parent1-9	Parent1-10	Parent1-11	Parent1-12	Parent1-13	Parent1-14	Parent1-15	Parent1-16	Parent1-17	Parent1-18	Parent1-19	Parent1-20	Parent1-21	Parent1-22	Parent1-23	Parent1-24	Parent1-25	Parent1-26	Parent1-27	Parent1-28	Parent1-29	Parent1-30	Parent1-31	141	141^	142	142^	Latch-Array-32	wn=0.25u	wp=0.75u

x84	p2-0	p2-1	p2-2	p2-3	p2-4	p2-5	p2-6	p2-7	p2-8	p2-9	p2-10	p2-11	p2-12	p2-13	p2-14	p2-15	p2-16	p2-17	p2-18	p2-19	p2-20	p2-21	p2-22	p2-23	p2-24	p2-25	p2-26	p2-27	p2-28	p2-29	p2-30	p2-31	Parent2-0	Parent2-1	Parent2-2	Parent2-3	Parent2-4	Parent2-5	Parent2-6	Parent2-7	Parent2-8	Parent2-9	Parent2-10	Parent2-11	Parent2-12	Parent2-13	Parent2-14	Parent2-15	Parent2-16	Parent2-17	Parent2-18	Parent2-19	Parent2-20	Parent2-21	Parent2-22	Parent2-23	Parent2-24	Parent2-25	Parent2-26	Parent2-27	Parent2-28	Parent2-29	Parent2-30	Parent2-31	141	141^	142	142^	Latch-Array-32	wn=0.25u	wp=0.75u

x85	Offspring1-0	Offspring1-1	Offspring1-2	Offspring1-3	Offspring1-4	Offspring1-5	Offspring1-6	Offspring1-7	Offspring1-8	Offspring1-9	Offspring1-10	Offspring1-11	Offspring1-12	Offspring1-13	Offspring1-14	Offspring1-15	Offspring1-16	Offspring1-17	Offspring1-18	Offspring1-19	Offspring1-20	Offspring1-21	Offspring1-22	Offspring1-23	Offspring1-24	Offspring1-25	Offspring1-26	Offspring1-27	Offspring1-28	Offspring1-29	Offspring1-30	Offspring1-31	m1-0	m1-1	m1-2	m1-3	m1-4	m1-5	m1-6	m1-7	m1-8	m1-9	m1-10	m1-11	m1-12	m1-13	m1-14	m1-15	m1-16	m1-17	m1-18	m1-19	m1-20	m1-21	m1-22	m1-23	m1-24	m1-25	m1-26	m1-27	m1-28	m1-29	m1-30	m1-31	141	141^	142	142^	DFF-Array-32	wn=0.25u	wp=0.75u

x86	Offspring2-0	Offspring2-1	Offspring2-2	Offspring2-3	Offspring2-4	Offspring2-5	Offspring2-6	Offspring2-7	Offspring2-8	Offspring2-9	Offspring2-10	Offspring2-11	Offspring2-12	Offspring2-13	Offspring2-14	Offspring2-15	Offspring2-16	Offspring2-17	Offspring2-18	Offspring2-19	Offspring2-20	Offspring2-21	Offspring2-22	Offspring2-23	Offspring2-24	Offspring2-25	Offspring2-26	Offspring2-27	Offspring2-28	Offspring2-29	Offspring2-30	Offspring2-31	m2-0	m2-1	m2-2	m2-3	m2-4	m2-5	m2-6	m2-7	m2-8	m2-9	m2-10	m2-11	m2-12	m2-13	m2-14	m2-15	m2-16	m2-17	m2-18	m2-19	m2-20	m2-21	m2-22	m2-23	m2-24	m2-25	m2-26	m2-27	m2-28	m2-29	m2-30	m2-31	141	141^	142	142^	DFF-Array-32	wn=0.25u	wp=0.75u

x87	m1-0	m1-1	m1-2	m1-3	m1-4	m1-5	m1-6	m1-7	m1-8	m1-9	m1-10	m1-11	m1-12	m1-13	m1-14	m1-15	m1-16	m1-17	m1-18	m1-19	m1-20	m1-21	m1-22	m1-23	m1-24	m1-25	m1-26	m1-27	m1-28	m1-29	m1-30	m1-31	dOffspring1-0	dOffspring1-1	dOffspring1-2	dOffspring1-3	dOffspring1-4	dOffspring1-5	dOffspring1-6	dOffspring1-7	dOffspring1-8	dOffspring1-9	dOffspring1-10	dOffspring1-11	dOffspring1-12	dOffspring1-13	dOffspring1-14	dOffspring1-15	dOffspring1-16	dOffspring1-17	dOffspring1-18	dOffspring1-19	dOffspring1-20	dOffspring1-21	dOffspring1-22	dOffspring1-23	dOffspring1-24	dOffspring1-25	dOffspring1-26	dOffspring1-27	dOffspring1-28	dOffspring1-29	dOffspring1-30	dOffspring1-31	141	141^	142	142^	DFF-Array-32	wn=0.25u	wp=0.75u

x88	m2-0	m2-1	m2-2	m2-3	m2-4	m2-5	m2-6	m2-7	m2-8	m2-9	m2-10	m2-11	m2-12	m2-13	m2-14	m2-15	m2-16	m2-17	m2-18	m2-19	m2-20	m2-21	m2-22	m2-23	m2-24	m2-25	m2-26	m2-27	m2-28	m2-29	m2-30	m2-31	dOffspring2-0	dOffspring2-1	dOffspring2-2	dOffspring2-3	dOffspring2-4	dOffspring2-5	dOffspring2-6	dOffspring2-7	dOffspring2-8	dOffspring2-9	dOffspring2-10	dOffspring2-11	dOffspring2-12	dOffspring2-13	dOffspring2-14	dOffspring2-15	dOffspring2-16	dOffspring2-17	dOffspring2-18	dOffspring2-19	dOffspring2-20	dOffspring2-21	dOffspring2-22	dOffspring2-23	dOffspring2-24	dOffspring2-25	dOffspring2-26	dOffspring2-27	dOffspring2-28	dOffspring2-29	dOffspring2-30	dOffspring2-31	141	141^	142	142^	DFF-Array-32	wn=0.25u	wp=0.75u


************************************************************************************************Arrays
.subckt	Latch-Array-32	in1	in2	in3	in4	in5	in6	in7	in8	in9	in10	in11	in12	in13	in14	in15	in16	in17	in18	in19	in20	in21	in22	in23	in24	in25	in26	in27	in28	in29	in30	in31	in32	out1	out2	out3	out4	out5	out6	out7	out8	out9	out10	out11	out12	out13	out14	out15	out16	out17	out18	out19	out20	out21	out22	out23	out24	out25	out26	out27	out28	out29	out30	out31	out32	clk	clk^	clk-chromosome	clk-chromosome^	wn=1u	wp=3u	le=0.18u
x1	in1	in2	in3	in4	in5	in6	in7	in8	out1	out2	out3	out4	out5	out6	out7	out8	clk	clk^	Latch-Array-8	wn='wn'	wp='wp'	le='le'
x2	in9	in10	in11	in12	in13	in14	in15	in16	out9	out10	out11	out12	out13	out14	out15	out16	clk	clk^	Latch-Array-8	wn='wn'	wp='wp'	le='le'
x3	in17	in18	in19	in20	in21	in22	in23	in24	out17	out18	out19	out20	out21	out22	out23	out24	clk-chromosome	clk-chromosome^	Latch-Array-8	wn='wn'	wp='wp'	le='le'
x4	in25	in26	in27	in28	in29	in30	in31	in32	out25	out26	out27	out28	out29	out30	out31	out32	clk-chromosome	clk-chromosome^	Latch-Array-8	wn='wn'	wp='wp'	le='le'
.ends

.subckt	Latch-Array-8	in1	in2	in3	in4	in5	in6	in7	in8	out1	out2	out3	out4	out5	out6	out7	out8	clk	clk^	wn=1u	wp=3u	le=0.18u
x1	in1	in2	in3	in4	out1	out2	out3	out4	clk	clk^	Latch-Array-4	wn='wn'	wp='wp'	le='le'
x2	in5	in6	in7	in8	out5	out6	out7	out8	clk	clk^	Latch-Array-4	wn='wn'	wp='wp'	le='le'
.ends

.subckt	Latch-Array-4	in1	in2	in3	in4	out1	out2	out3	out4	clk	clk^	wn=1u	wp=3u	le=0.18u
x1	in1	out1	clk	clk^	D-Latch	wn='wn'	wp='wp'	le='le'
x2	in2	out2	clk	clk^	D-Latch	wn='wn'	wp='wp'	le='le'
x3	in3	out3	clk	clk^	D-Latch	wn='wn'	wp='wp'	le='le'
x4	in4	out4	clk	clk^	D-Latch	wn='wn'	wp='wp'	le='le'
.ends

.subckt	DFF-Array-32	in1	in2	in3	in4	in5	in6	in7	in8	in9	in10	in11	in12	in13	in14	in15	in16	in17	in18	in19	in20	in21	in22	in23	in24	in25	in26	in27	in28	in29	in30	in31	in32	out1	out2	out3	out4	out5	out6	out7	out8	out9	out10	out11	out12	out13	out14	out15	out16	out17	out18	out19	out20	out21	out22	out23	out24	out25	out26	out27	out28	out29	out30	out31	out32	clk	clk^	clk-chromosome	clk-chromosome^	wn=1u	wp=3u	le=0.18u
x1	in1	in2	in3	in4	in5	in6	in7	in8	in9	in10	in11	in12	in13	in14	in15	in16	out1	out2	out3	out4	out5	out6	out7	out8	out9	out10	out11	out12	out13	out14	out15	out16	clk	clk^	DFF-Array-16	wn='wn'	wp='wp'	le='le'
x2	in17	in18	in19	in20	in21	in22	in23	in24	in25	in26	in27	in28	in29	in30	in31	in32	out17	out18	out19	out20	out21	out22	out23	out24	out25	out26	out27	out28	out29	out30	out31	out32	clk-chromosome	clk-chromosome^	DFF-Array-16	wn='wn'	wp='wp'	le='le'
.ends

.subckt	DFF-Array-16	in1	in2	in3	in4	in5	in6	in7	in8	in9	in10	in11	in12	in13	in14	in15	in16	out1	out2	out3	out4	out5	out6	out7	out8	out9	out10	out11	out12	out13	out14	out15	out16	clk	clk^	wn=1u	wp=3u	le=0.18u
x1	in1	in2	in3	in4	out1	out2	out3	out4	clk	clk^	DFF-Array-4	wn='wn'	wp='wp'	le='le'
x2	in5	in6	in7	in8	out5	out6	out7	out8	clk	clk^	DFF-Array-4	wn='wn'	wp='wp'	le='le'
x3	in9	in10	in11	in12	out9	out10	out11	out12	clk	clk^	DFF-Array-4	wn='wn'	wp='wp'	le='le'
x4	in13	in14	in15	in16	out13	out14	out15	out16	clk	clk^	DFF-Array-4	wn='wn'	wp='wp'	le='le'
.ends

.subckt	DFF-Array-4	in1	in2	in3	in4	out1	out2	out3	out4	clk	clk^	wn=1u	wp=3u	le=0.18u
x1	in1	out1	clk	clk^	DFF	wn='wn'	wp='wp'	le='le'
x2	in2	out2	clk	clk^	DFF	wn='wn'	wp='wp'	le='le'
x3	in3	out3	clk	clk^	DFF	wn='wn'	wp='wp'	le='le'
x4	in4	out4	clk	clk^	DFF	wn='wn'	wp='wp'	le='le'
.ends

************************************************************************************************Include
.include	'./Iteration_Control.inc'

************************************************************************************************Components
***Multiplexer***
.subckt	MUX	in1	in2	out	control	wn=1u	wp=3u	le=0.18u
x1	in1	out	control	control^	TG	wn='wn'	wp='wp'	le='le'
x2	in2	out	control^	control	TG	wn='wn'	wp='wp'	le='le'
x3	control	control^	INV	wn='wn'	wp='wp'	le='le'
.ends

***2-Input XOR (Pass Transistor Logic)
.subckt	XOR2	in1	in2	in2^	out	wn=1u	wp=3u	le=0.18u
m1	out	in2	in1	vdd	mp18	w=wp	l=le
m2	in1	in2^	out	0	mn18	w=wn	l=le
m3	out	in1	in2	vdd	mp18	w=wp	l=le
m4	out	in1	in2^	0	mn18	w=wn	l=le
.ends

***3-Bit Decoder
.subckt	Decoder3Bit	in0	in1	in2	out0	out1	out2	out3	out4	out5	out6	out7	wn=1u	wp=3u	le=0.18u	*in0 & out0 are lsb
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

***2-Input OR***
.subckt	OR2	in1	in2	out	out^	wn=1u	wp=3u	le=0.18u
x1	in1	in2	out^	NOR2	wn='wn'	wp='wp'	le='le'
x2	out^	out	INV	wn='wn'	wp='wp'	le='le'
.ends

***3-Input OR***
.subckt	OR3	in1	in2	in3	out	out^	wn=1u	wp=3u	le=0.18u
x1	in1	in2	in3	out^	NOR3	wn='wn'	wp='wp'	le='le'
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

***4-Input AND***
.subckt	AND4	in1	in2	in3	in4	out	out^	wn=1u	wp=3u	le=0.18u
x1	in1	in2	in3	in4	out^	NAND4	wn='wn'	wp='wp'	le='le'
x2	out^	out	INV	wn='wn'	wp='wp'	le='le'
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

***2-Input NAND***
.subckt	NAND2	in1	in2	out	wn=1u	wp=3u	le=0.18u
m1	out	in1	vdd	vdd	mp18	w=wp	l=le
m2	out	in2	vdd	vdd	mp18	w=wp	l=le
m3	out	in1	a	0	mn18	w='2*wn'	l=le
m4	a	in2	0	0	mn18	w='2*wn'	l=le
.ends

***D Flip-Flop
.subckt	DFF	in	out	clk	clk^	wn=1u	wp=3u	le=0.18u
x1	in	a	clk^	clk	TG	wn='wn'	wp='wp'	le='le'
x2	a	b	INV	wn='wn'	wp='wp'	le='le'
x3	b	a	clk	clk^	CK-INV	wn='wn'	wp='wp'	le='le'
x4	b	c	clk	clk^	TG	wn='wn'	wp='wp'	le='le'
x5	c	d	INV	wn='wn'	wp='wp'	le='le'
x6	d	c	clk^	clk	CK-INV	wn='wn'	wp='wp'	le='le'
x7	c	out	INV	wn='wn'	wp='wp'	le='le'
.ends

***D Flip-Flop with Reset
.subckt	DFF-R	in	out	clk	clk^	reset	reset^	wn=1u	wp=3u	le=0.18u
x1	in	a	clk^	clk	TG	wn='wn'	wp='wp'	le='le'
x2	a	reset^	b	NAND2	wn='wn'	wp='wp'	le='le'
x3	b	a	clk	clk^	CK-INV	wn='wn'	wp='wp'	le='le'
x4	b	c	clk	clk^	TG	wn='wn'	wp='wp'	le='le'
x5	c	reset	d	NOR2	wn='wn'	wp='wp'	le='le'
x6	d	c	clk^	clk	CK-INV	wn='wn'	wp='wp'	le='le'
x7	c	out	INV	wn='wn'	wp='wp'	le='le'
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

***D Latch
.subckt	D-Latch	in	out	clk	clk^	wn=1u	wp=3u	le=0.18u
x1	in	a	clk	clk^	TG	wn='wn'	wp='wp'	le='le'
x2	a	b	INV	wn='wn'	wp='wp'	le='le'
x3	b	a	clk^	clk	CK-INV	wn='wn'	wp='wp'	le='le'
x4	b	out	INV	wn='wn'	wp='wp'	le='le'
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

***10-Transistor 2-Input OR***
.subckt	OR2-m10	in1	in2	out	out^	wn=1u	wp=3u	le=0.18u
x1	in1	in2	out^	NOR2-m10	wn='wn'	wp='wp'	le='le'
x2	out^	out	INV-m10	wn='wn'	wp='wp'	le='le'
.ends

***10-Transistor 2-Input NOR***
.subckt	NOR2-m10	in1	in2	out	wn=1u	wp=3u	le=0.18u
m1	a	in2	vdd	vdd	mp18	w='2*wp'	l=le	m=10
m2	out	in1	a	vdd	mp18	w='2*wp'	l=le	m=10
m3	out	in1	0	0	mn18	w=wn	l=le	m=10
m4	out	in2	0	0	mn18	w=wn	l=le	m=10
.ends

***10-Transistor Inverter
.subckt	INV-m10	in	out	wn=1u	wp=3u	le=0.18u
m1	out	in	vdd	vdd	mp18	w=wp	l=le	m=10
m2	out	in	0	0	mn18	w=wn	l=le	m=10
.ends

***10-Transistor 3-Input NOR***
.subckt	NOR3-m10	in1	in2	in3	out	wn=1u	wp=3u	le=0.18u
m1	b	in3	vdd	vdd	mp18	w='3*wp'	l=le	m=10
m2	a	in2	b	vdd	mp18	w='3*wp'	l=le	m=10
m3	out	in1	a	vdd	mp18	w='3*wp'	l=le	m=10
m4	out	in1	0	0	mn18	w=wn	l=le	m=10
m5	out	in2	0	0	mn18	w=wn	l=le	m=10
m6	out	in3	0	0	mn18	w=wn	l=le	m=10
.ends

***10-Transistor 3-Input OR***
.subckt	OR3-m10	in1	in2	in3	out	out^	wn=1u	wp=3u	le=0.18u
x1	in1	in2	in3	out^	NOR3-m10	wn='wn'	wp='wp'	le='le'
x2	out^	out	INV-m10	wn='wn'	wp='wp'	le='le'
.ends

***20-Transistor Inverter
.subckt	INV-m20	in	out	wn=1u	wp=3u	le=0.18u
m1	out	in	vdd	vdd	mp18	w=wp	l=le	m=20
m2	out	in	0	0	mn18	w=wn	l=le	m=20
.ends

***10-Transistor 2-Input AND***
.subckt	AND2-m10	in1	in2	out	out^	wn=1u	wp=3u	le=0.18u
x1	in1	in2	out^	NAND2-m10	wn='wn'	wp='wp'	le='le'
x2	out^	out	INV-m10	wn='wn'	wp='wp'	le='le'
.ends

***10-Transistor 2-Input NAND***
.subckt	NAND2-m10	in1	in2	out	wn=1u	wp=3u	le=0.18u
m1	out	in1	vdd	vdd	mp18	w=wp	l=le	m=10
m2	out	in2	vdd	vdd	mp18	w=wp	l=le	m=10
m3	out	in1	a	0	mn18	w='2*wn'	l=le	m=10
m4	a	in2	0	0	mn18	w='2*wn'	l=le	m=10
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

.ends	Master-Control