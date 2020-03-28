*Finalization Module 

.subckt	Finalization	clk-Main	clk-Main^	clk-Main-2	clk-Main-2^	Clock-1-Pin	Clock-2-Pin	Initialize	Initialize^	Finalize	GA-Completion	Stop-Pin	Data-Ready-Pin	Fitness-Estimation-stage2	Fitness-Estimation-xstage1	bf0	bf1	bf2	bf3	bf4	bf5	bf6	bf7	bf8	bf9	bf10	bf11	bf12	bf13	bf14	bf15	bf16	bf17	bf18	bf19	bf20	bf21	bf22	bf23	bf24	bf25	bf26	bf27	bf28	bf29	bf30	bf31	bus0	bus1	bus2	bus3	bus4	bus5	bus6	bus7	bus8	bus9	bus10	bus11	bus12	bus13	bus14	bus15	bus16	bus17	bus18	bus19	bus20	bus21	bus22	bus23	bus24	bus25	bus26	bus27	bus28	bus29	bus30	bus31

*main part
x1	Stop-Pin	Initialize	1	RS-FF	wn=15u	wp=45u
x100	GA-Completion	Initialize	500	RS-FF	wn=15u	wp=45u

x2	1	500	finalize^	NOR2-m10	wn=4u	wp=12u	*m=10
x3	finalize^	Finalize	INV	wn=3u	wp=9u

*sending result out
x4	finalize^	Fitness-Estimation-stage2	Fitness-Estimation-xstage1	10	NOR3	wn=5u	wp=15u

x5	10	11	INV	wn=8u	wp=24u
x6	11	12	INV	wn=20u	wp=60u
x7	12	13	INV-m10	wn=5u	wp=15u	*m=10
x8	13	14	INV-m10	wn=12.5u	wp=37.5u	*m=10
x9	14	15	INV-m10	wn=32u	wp=96u	*m=10
x10	15	16	INV-m50	wn=16u	wp=48u	*m=50
x11	16	17	INV-m100	wn=20u	wp=60u	*m=100
x12	17	18	INV-m150	wn=33u	wp=100u	*m=150

x13	bf0	bf1	bf2	bf3	bf4	bf5	bf6	bf7	bf8	bf9	bf10	bf11	bf12	bf13	bf14	bf15	bf16	bf17	bf18	bf19	bf20	bf21	bf22	bf23	bf24	bf25	bf26	bf27	bf28	bf29	bf30	bf31	o1-0	o1-1	o1-2	o1-3	o1-4	o1-5	o1-6	o1-7	o1-8	o1-9	o1-10	o1-11	o1-12	o1-13	o1-14	o1-15	o1-16	o1-17	o1-18	o1-19	o1-20	o1-21	o1-22	o1-23	o1-24	o1-25	o1-26	o1-27	o1-28	o1-29	o1-30	o1-31	INV-Array-32	wn=0.6u	wp=1.8u

x14	o1-0	o1-1	o1-2	o1-3	o1-4	o1-5	o1-6	o1-7	o1-8	o1-9	o1-10	o1-11	o1-12	o1-13	o1-14	o1-15	o1-16	o1-17	o1-18	o1-19	o1-20	o1-21	o1-22	o1-23	o1-24	o1-25	o1-26	o1-27	o1-28	o1-29	o1-30	o1-31	o2-0	o2-1	o2-2	o2-3	o2-4	o2-5	o2-6	o2-7	o2-8	o2-9	o2-10	o2-11	o2-12	o2-13	o2-14	o2-15	o2-16	o2-17	o2-18	o2-19	o2-20	o2-21	o2-22	o2-23	o2-24	o2-25	o2-26	o2-27	o2-28	o2-29	o2-30	o2-31	INV-Array-32	wn=1.5u	wp=4.5u

x15	o2-0	o2-1	o2-2	o2-3	o2-4	o2-5	o2-6	o2-7	o2-8	o2-9	o2-10	o2-11	o2-12	o2-13	o2-14	o2-15	o2-16	o2-17	o2-18	o2-19	o2-20	o2-21	o2-22	o2-23	o2-24	o2-25	o2-26	o2-27	o2-28	o2-29	o2-30	o2-31	o3-0	o3-1	o3-2	o3-3	o3-4	o3-5	o3-6	o3-7	o3-8	o3-9	o3-10	o3-11	o3-12	o3-13	o3-14	o3-15	o3-16	o3-17	o3-18	o3-19	o3-20	o3-21	o3-22	o3-23	o3-24	o3-25	o3-26	o3-27	o3-28	o3-29	o3-30	o3-31	INV-Array-32	wn=4u	wp=12u

x16	o3-0	o3-1	o3-2	o3-3	o3-4	o3-5	o3-6	o3-7	o3-8	o3-9	o3-10	o3-11	o3-12	o3-13	o3-14	o3-15	o3-16	o3-17	o3-18	o3-19	o3-20	o3-21	o3-22	o3-23	o3-24	o3-25	o3-26	o3-27	o3-28	o3-29	o3-30	o3-31	o4-0	o4-1	o4-2	o4-3	o4-4	o4-5	o4-6	o4-7	o4-8	o4-9	o4-10	o4-11	o4-12	o4-13	o4-14	o4-15	o4-16	o4-17	o4-18	o4-19	o4-20	o4-21	o4-22	o4-23	o4-24	o4-25	o4-26	o4-27	o4-28	o4-29	o4-30	o4-31	INV-Array-32	wn=10u	wp=30u

x17	o4-0	o4-1	o4-2	o4-3	o4-4	o4-5	o4-6	o4-7	o4-8	o4-9	o4-10	o4-11	o4-12	o4-13	o4-14	o4-15	o4-16	o4-17	o4-18	o4-19	o4-20	o4-21	o4-22	o4-23	o4-24	o4-25	o4-26	o4-27	o4-28	o4-29	o4-30	o4-31	o5-0	o5-1	o5-2	o5-3	o5-4	o5-5	o5-6	o5-7	o5-8	o5-9	o5-10	o5-11	o5-12	o5-13	o5-14	o5-15	o5-16	o5-17	o5-18	o5-19	o5-20	o5-21	o5-22	o5-23	o5-24	o5-25	o5-26	o5-27	o5-28	o5-29	o5-30	o5-31	INV-Array-32	wn=25u	wp=75u

x18	o5-0	o5-1	o5-2	o5-3	o5-4	o5-5	o5-6	o5-7	o5-8	o5-9	o5-10	o5-11	o5-12	o5-13	o5-14	o5-15	o5-16	o5-17	o5-18	o5-19	o5-20	o5-21	o5-22	o5-23	o5-24	o5-25	o5-26	o5-27	o5-28	o5-29	o5-30	o5-31	o6-0	o6-1	o6-2	o6-3	o6-4	o6-5	o6-6	o6-7	o6-8	o6-9	o6-10	o6-11	o6-12	o6-13	o6-14	o6-15	o6-16	o6-17	o6-18	o6-19	o6-20	o6-21	o6-22	o6-23	o6-24	o6-25	o6-26	o6-27	o6-28	o6-29	o6-30	o6-31	INV-Array-32-m10	wn=6u	wp=18u	*m=10

x19	o6-0	o6-1	o6-2	o6-3	o6-4	o6-5	o6-6	o6-7	o6-8	o6-9	o6-10	o6-11	o6-12	o6-13	o6-14	o6-15	o6-16	o6-17	o6-18	o6-19	o6-20	o6-21	o6-22	o6-23	o6-24	o6-25	o6-26	o6-27	o6-28	o6-29	o6-30	o6-31	o7-0	o7-1	o7-2	o7-3	o7-4	o7-5	o7-6	o7-7	o7-8	o7-9	o7-10	o7-11	o7-12	o7-13	o7-14	o7-15	o7-16	o7-17	o7-18	o7-19	o7-20	o7-21	o7-22	o7-23	o7-24	o7-25	o7-26	o7-27	o7-28	o7-29	o7-30	o7-31	INV-Array-32-m10	wn=15u	wp=45u	*m=10

x20	o7-0	o7-1	o7-2	o7-3	o7-4	o7-5	o7-6	o7-7	o7-8	o7-9	o7-10	o7-11	o7-12	o7-13	o7-14	o7-15	o7-16	o7-17	o7-18	o7-19	o7-20	o7-21	o7-22	o7-23	o7-24	o7-25	o7-26	o7-27	o7-28	o7-29	o7-30	o7-31	o8-0	o8-1	o8-2	o8-3	o8-4	o8-5	o8-6	o8-7	o8-8	o8-9	o8-10	o8-11	o8-12	o8-13	o8-14	o8-15	o8-16	o8-17	o8-18	o8-19	o8-20	o8-21	o8-22	o8-23	o8-24	o8-25	o8-26	o8-27	o8-28	o8-29	o8-30	o8-31	INV-Array-32-m20	wn=19u	wp=57u	*m=20

x21	o8-0	o8-1	o8-2	o8-3	o8-4	o8-5	o8-6	o8-7	o8-8	o8-9	o8-10	o8-11	o8-12	o8-13	o8-14	o8-15	o8-16	o8-17	o8-18	o8-19	o8-20	o8-21	o8-22	o8-23	o8-24	o8-25	o8-26	o8-27	o8-28	o8-29	o8-30	o8-31	bus0	bus1	bus2	bus3	bus4	bus5	bus6	bus7	bus8	bus9	bus10	bus11	bus12	bus13	bus14	bus15	bus16	bus17	bus18	bus19	bus20	bus21	bus22	bus23	bus24	bus25	bus26	bus27	bus28	bus29	bus30	bus31	18	Pad-Switch-Array-32-m20	wn=19u	wp=57u	*m=20

x22	18	19	INV	wn=0.25u	wp=0.75u
x23	19	Data-Ready-Pin	INV	wn=0.25u	wp=0.75u

*clock gating
x24	finalize^	Clock-1-Pin	Initialize^	20	NAND3	wn=15u	wp=45u

x25	20	21	INV-m10	wn=3.75u	wp=11.25u	*m=10
x26	21	22	INV-m10	wn=9.3u	wp=27.9u	*m=10
x27	22	clk-Main	INV-m10	wn=23.4u	wp=70.3u	*m=10

x28	clk-Main	clk-Main^	INV-m10	wn=10u	wp=30u	*m=10

x29	finalize^	Clock-2-Pin	Initialize^	30	NAND3	wn=15u	wp=45u

x30	30	clk-Main-2	INV-m10	wn=4u	wp=12u	*m=10

x31	clk-Main-2	clk-Main-2^	INV	wn=15u	wp=45u


************************************************************************************************Arrays
.subckt	INV-Array-32	in1	in2	in3	in4	in5	in6	in7	in8	in9	in10	in11	in12	in13	in14	in15	in16	in17	in18	in19	in20	in21	in22	in23	in24	in25	in26	in27	in28	in29	in30	in31	in32	out1	out2	out3	out4	out5	out6	out7	out8	out9	out10	out11	out12	out13	out14	out15	out16	out17	out18	out19	out20	out21	out22	out23	out24	out25	out26	out27	out28	out29	out30	out31	out32	wn=1u	wp=3u	le=0.18u
x1	in1	in2	in3	in4	out1	out2	out3	out4	INV-Array-4	wn='wn'	wp='wp'	le='le'
x2	in5	in6	in7	in8	out5	out6	out7	out8	INV-Array-4	wn='wn'	wp='wp'	le='le'
x3	in9	in10	in11	in12	out9	out10	out11	out12	INV-Array-4	wn='wn'	wp='wp'	le='le'
x4	in13	in14	in15	in16	out13	out14	out15	out16	INV-Array-4	wn='wn'	wp='wp'	le='le'
x5	in17	in18	in19	in20	out17	out18	out19	out20	INV-Array-4	wn='wn'	wp='wp'	le='le'
x6	in21	in22	in23	in24	out21	out22	out23	out24	INV-Array-4	wn='wn'	wp='wp'	le='le'
x7	in25	in26	in27	in28	out25	out26	out27	out28	INV-Array-4	wn='wn'	wp='wp'	le='le'
x8	in29	in30	in31	in32	out29	out30	out31	out32	INV-Array-4	wn='wn'	wp='wp'	le='le'
.ends

.subckt	INV-Array-4	in1	in2	in3	in4	out1	out2	out3	out4	wn=1u	wp=3u	le=0.18u
x1	in1	out1	INV	wn='wn'	wp='wp'	le='le'
x2	in2	out2	INV	wn='wn'	wp='wp'	le='le'
x3	in3	out3	INV	wn='wn'	wp='wp'	le='le'
x4	in4	out4	INV	wn='wn'	wp='wp'	le='le'
.ends

.subckt	INV-Array-32-m10	in1	in2	in3	in4	in5	in6	in7	in8	in9	in10	in11	in12	in13	in14	in15	in16	in17	in18	in19	in20	in21	in22	in23	in24	in25	in26	in27	in28	in29	in30	in31	in32	out1	out2	out3	out4	out5	out6	out7	out8	out9	out10	out11	out12	out13	out14	out15	out16	out17	out18	out19	out20	out21	out22	out23	out24	out25	out26	out27	out28	out29	out30	out31	out32	wn=1u	wp=3u	le=0.18u
x1	in1	in2	in3	in4	out1	out2	out3	out4	INV-Array-4-m10	wn='wn'	wp='wp'	le='le'
x2	in5	in6	in7	in8	out5	out6	out7	out8	INV-Array-4-m10	wn='wn'	wp='wp'	le='le'
x3	in9	in10	in11	in12	out9	out10	out11	out12	INV-Array-4-m10	wn='wn'	wp='wp'	le='le'
x4	in13	in14	in15	in16	out13	out14	out15	out16	INV-Array-4-m10	wn='wn'	wp='wp'	le='le'
x5	in17	in18	in19	in20	out17	out18	out19	out20	INV-Array-4-m10	wn='wn'	wp='wp'	le='le'
x6	in21	in22	in23	in24	out21	out22	out23	out24	INV-Array-4-m10	wn='wn'	wp='wp'	le='le'
x7	in25	in26	in27	in28	out25	out26	out27	out28	INV-Array-4-m10	wn='wn'	wp='wp'	le='le'
x8	in29	in30	in31	in32	out29	out30	out31	out32	INV-Array-4-m10	wn='wn'	wp='wp'	le='le'
.ends

.subckt	INV-Array-4-m10	in1	in2	in3	in4	out1	out2	out3	out4	wn=1u	wp=3u	le=0.18u
x1	in1	out1	INV-m10	wn='wn'	wp='wp'	le='le'
x2	in2	out2	INV-m10	wn='wn'	wp='wp'	le='le'
x3	in3	out3	INV-m10	wn='wn'	wp='wp'	le='le'
x4	in4	out4	INV-m10	wn='wn'	wp='wp'	le='le'
.ends

.subckt	INV-Array-32-m20	in1	in2	in3	in4	in5	in6	in7	in8	in9	in10	in11	in12	in13	in14	in15	in16	in17	in18	in19	in20	in21	in22	in23	in24	in25	in26	in27	in28	in29	in30	in31	in32	out1	out2	out3	out4	out5	out6	out7	out8	out9	out10	out11	out12	out13	out14	out15	out16	out17	out18	out19	out20	out21	out22	out23	out24	out25	out26	out27	out28	out29	out30	out31	out32	wn=1u	wp=3u	le=0.18u
x1	in1	in2	in3	in4	out1	out2	out3	out4	INV-Array-4-m20	wn='wn'	wp='wp'	le='le'
x2	in5	in6	in7	in8	out5	out6	out7	out8	INV-Array-4-m20	wn='wn'	wp='wp'	le='le'
x3	in9	in10	in11	in12	out9	out10	out11	out12	INV-Array-4-m20	wn='wn'	wp='wp'	le='le'
x4	in13	in14	in15	in16	out13	out14	out15	out16	INV-Array-4-m20	wn='wn'	wp='wp'	le='le'
x5	in17	in18	in19	in20	out17	out18	out19	out20	INV-Array-4-m20	wn='wn'	wp='wp'	le='le'
x6	in21	in22	in23	in24	out21	out22	out23	out24	INV-Array-4-m20	wn='wn'	wp='wp'	le='le'
x7	in25	in26	in27	in28	out25	out26	out27	out28	INV-Array-4-m20	wn='wn'	wp='wp'	le='le'
x8	in29	in30	in31	in32	out29	out30	out31	out32	INV-Array-4-m20	wn='wn'	wp='wp'	le='le'
.ends

.subckt	INV-Array-4-m20	in1	in2	in3	in4	out1	out2	out3	out4	wn=1u	wp=3u	le=0.18u
x1	in1	out1	INV-m20	wn='wn'	wp='wp'	le='le'
x2	in2	out2	INV-m20	wn='wn'	wp='wp'	le='le'
x3	in3	out3	INV-m20	wn='wn'	wp='wp'	le='le'
x4	in4	out4	INV-m20	wn='wn'	wp='wp'	le='le'
.ends

.subckt	Pad-Switch-Array-32-m20	in1	in2	in3	in4	in5	in6	in7	in8	in9	in10	in11	in12	in13	in14	in15	in16	in17	in18	in19	in20	in21	in22	in23	in24	in25	in26	in27	in28	in29	in30	in31	in32	out1	out2	out3	out4	out5	out6	out7	out8	out9	out10	out11	out12	out13	out14	out15	out16	out17	out18	out19	out20	out21	out22	out23	out24	out25	out26	out27	out28	out29	out30	out31	out32	control	wn=1u	wp=3u	le=0.18u
x1	in1	in2	in3	in4	out1	out2	out3	out4	control	Pad-Switch-Array-4-m20	wn='wn'	wp='wp'	le='le'
x2	in5	in6	in7	in8	out5	out6	out7	out8	control	Pad-Switch-Array-4-m20	wn='wn'	wp='wp'	le='le'
x3	in9	in10	in11	in12	out9	out10	out11	out12	control	Pad-Switch-Array-4-m20	wn='wn'	wp='wp'	le='le'
x4	in13	in14	in15	in16	out13	out14	out15	out16	control	Pad-Switch-Array-4-m20	wn='wn'	wp='wp'	le='le'
x5	in17	in18	in19	in20	out17	out18	out19	out20	control	Pad-Switch-Array-4-m20	wn='wn'	wp='wp'	le='le'
x6	in21	in22	in23	in24	out21	out22	out23	out24	control	Pad-Switch-Array-4-m20	wn='wn'	wp='wp'	le='le'
x7	in25	in26	in27	in28	out25	out26	out27	out28	control	Pad-Switch-Array-4-m20	wn='wn'	wp='wp'	le='le'
x8	in29	in30	in31	in32	out29	out30	out31	out32	control	Pad-Switch-Array-4-m20	wn='wn'	wp='wp'	le='le'
.ends

.subckt	Pad-Switch-Array-4-m20	in1	in2	in3	in4	out1	out2	out3	out4	control	wn=1u	wp=3u	le=0.18u
x1	in1	out1	control	Pad-Switch-m20	wn='wn'	wp='wp'	le='le'
x2	in2	out2	control	Pad-Switch-m20	wn='wn'	wp='wp'	le='le'
x3	in3	out3	control	Pad-Switch-m20	wn='wn'	wp='wp'	le='le'
x4	in4	out4	control	Pad-Switch-m20	wn='wn'	wp='wp'	le='le'
.ends

************************************************************************************************Components
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

***150-Transistor Inverter
.subckt	INV-m150	in	out	wn=1u	wp=3u	le=0.18u
m1	out	in	vdd	vdd	mp18	w=wp	l=le	m=150
m2	out	in	0	0	mn18	w=wn	l=le	m=150
.ends

***100-Transistor Inverter
.subckt	INV-m100	in	out	wn=1u	wp=3u	le=0.18u
m1	out	in	vdd	vdd	mp18	w=wp	l=le	m=100
m2	out	in	0	0	mn18	w=wn	l=le	m=100
.ends

***50-Transistor Inverter
.subckt	INV-m50	in	out	wn=1u	wp=3u	le=0.18u
m1	out	in	vdd	vdd	mp18	w=wp	l=le	m=50
m2	out	in	0	0	mn18	w=wn	l=le	m=50
.ends

***20-Transistor Inverter
.subckt	INV-m20	in	out	wn=1u	wp=3u	le=0.18u
m1	out	in	vdd	vdd	mp18	w=wp	l=le	m=20
m2	out	in	0	0	mn18	w=wn	l=le	m=20
.ends

***10-Transistor Inverter
.subckt	INV-m10	in	out	wn=1u	wp=3u	le=0.18u
m1	out	in	vdd	vdd	mp18	w=wp	l=le	m=10
m2	out	in	0	0	mn18	w=wn	l=le	m=10
.ends

***20-Transistor Pad Switch
.subckt	Pad-Switch-m20	in	out	enable	wn=1u	wp=3u	le=0.18u
x1	in	enable	1	NAND2-m20	wn='(3*wn)/10'	wp='(3*wp)/10'	le='le'
x2	enable	enable^	INV-m20	wn='wn/10'	wp='wp/10'	le='le'
x3	in	enable^	2	NOR2-m20	wn='wn/10'	wp='wp/10'	le='le'
m1	out	1	vdd	vdd	mp18	w='wp'	l='le'	m=20
m2	out	2	0	0	mn18	w='wn'	l='le'	m=20
.ends

***Inverter
.subckt	INV	in	out	wn=1u	wp=3u	le=0.18u
m1	out	in	vdd	vdd	mp18	w=wp	l=le
m2	out	in	0	0	mn18	w=wn	l=le
.ends

***2-Input NAND***
.subckt	NAND2	in1	in2	out	wn=1u	wp=3u	le=0.18u
m1	out	in1	vdd	vdd	mp18	w=wp	l=le
m2	out	in2	vdd	vdd	mp18	w=wp	l=le
m3	out	in1	a	0	mn18	w='2*wn'	l=le
m4	a	in2	0	0	mn18	w='2*wn'	l=le
.ends

***20-Transistor 2-Input NOR***
.subckt	NOR2-m20	in1	in2	out	wn=1u	wp=3u	le=0.18u
m1	a	in2	vdd	vdd	mp18	w='2*wp'	l=le	m=20
m2	out	in1	a	vdd	mp18	w='2*wp'	l=le	m=20
m3	out	in1	0	0	mn18	w=wn	l=le	m=20
m4	out	in2	0	0	mn18	w=wn	l=le	m=20
.ends

***20-Transistor 2-Input NAND***
.subckt	NAND2-m20	in1	in2	out	wn=1u	wp=3u	le=0.18u
m1	out	in1	vdd	vdd	mp18	w=wp	l=le	m=20
m2	out	in2	vdd	vdd	mp18	w=wp	l=le	m=20
m3	out	in1	a	0	mn18	w='2*wn'	l=le	m=20
m4	a	in2	0	0	mn18	w='2*wn'	l=le	m=20
.ends

***10-Transistor 2-Input NOR***
.subckt	NOR2-m10	in1	in2	out	wn=1u	wp=3u	le=0.18u
m1	a	in2	vdd	vdd	mp18	w='2*wp'	l=le	m=10
m2	out	in1	a	vdd	mp18	w='2*wp'	l=le	m=10
m3	out	in1	0	0	mn18	w=wn	l=le	m=10
m4	out	in2	0	0	mn18	w=wn	l=le	m=10
.ends

***RS Flip-Flop***
.subckt	RS-FF	set	reset	out	wn=1u	wp=3u	le=0.18u
x1	set	out	1	NOR2	wn='wn'	wp='wp'	le='le'
x2	reset	1	out	NOR2	wn='wn'	wp='wp'	le='le'
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

.ends	Finalization