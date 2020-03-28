*GAP working with the Knapsack fitness function

*Options
.param hsimveriloga="./Knapsack.va"
.param hsimvdd=1.8
.param hsimspeed=3
*.param hsimanalog=1.5

.print V(*)	level=3
.print I(vdd)

.lib	'hm1816m020233v11.lib'	tt

.tran	20p	3500n	UIC	*sweep monte=30

*.option post	*fast	*modmonte=1
*.option runlvl=1
*.option converge=5
*.store	repeat=7200


*Sources
vdd	vdd	0	1.8
.global	vdd

vMaster-Slave-Select-Pin-1	Master-Slave-Select-Pin-1	0	0
vMaster-Slave-Select-Pin-0	Master-Slave-Select-Pin-0	0	0

vChromosome-Resolution-Pin	Chromosome-Resolution-Pin	0	1.8
vFitness-Resolution-Pin	Fitness-Resolution-Pin	0	0

vBest-Found-Emmigration-Pin	Best-Found-Emmigration-Pin	0	0

vNo-Elitism-Pin	No-Elitism-Pin	0	0

vDual-Ram-Pin	Dual-Ram-Pin	0	0

vRestart-Pin	Restart-Pin	0	pulse(0	1.8	0n	50p	50p	1n	21u)
vStop-Pin	Stop-Pin	0	0

vClock-1-Pin	Clock-1-Pin	0	pulse(0	1.8	0n	50p	50p	1.05n	2.2n)
vClock-2-Pin	Clock-2-Pin	0	0	*pulse(0	1.8	0n	50p	50p	0.6n	1.3n)

vPopulation-Size-Pin-0	Population-Size-Pin-0	0	0
vPopulation-Size-Pin-1	Population-Size-Pin-1	0	1.8			*128

vRandom-Immigrants-Gap-Pin-1	Random-Immigrants-Gap-Pin-1	0	1.8
vRandom-Immigrants-Gap-Pin-0	Random-Immigrants-Gap-Pin-0	0	1.8

vMutation-Rate-Pin-0	Mutation-Rate-Pin-0	0	0
vMutation-Rate-Pin-1	Mutation-Rate-Pin-1	0	1.8
vMutation-Rate-Pin-2	Mutation-Rate-Pin-2	0	1.8
vMutation-Rate-Pin-3	Mutation-Rate-Pin-3	0	0
vMutation-Rate-Pin-4	Mutation-Rate-Pin-4	0	0			*7/128
vMutation-Rate-Pin-5	Mutation-Rate-Pin-5	0	0
vMutation-Rate-Pin-6	Mutation-Rate-Pin-6	0	0

vCrossover-Rate-Pin-0	Crossover-Rate-Pin-0	0	1.8
vCrossover-Rate-Pin-1	Crossover-Rate-Pin-1	0	1.8
vCrossover-Rate-Pin-2	Crossover-Rate-Pin-2	0	0			*100/128
vCrossover-Rate-Pin-3	Crossover-Rate-Pin-3	0	0
vCrossover-Rate-Pin-4	Crossover-Rate-Pin-4	0	0
vCrossover-Rate-Pin-5	Crossover-Rate-Pin-5	0	1.8
vCrossover-Rate-Pin-6	Crossover-Rate-Pin-6	0	1.8

vMigration-Gap-Pin-1	Migration-Gap-Pin-1	0	0
vMigration-Gap-Pin-0	Migration-Gap-Pin-0	0	0

vSecond-SPI-Ready-Pin	Second-SPI-Ready-Pin	0	0

vFitness-or-Cost-Pin	Fitness-or-Cost-Pin	0	0

vTournament-Size-Pin-1	Tournament-Size-Pin-1	0	0
vTournament-Size-Pin-0	Tournament-Size-Pin-0	0	1.8			*4

vIteration-Number-Pin-0	Iteration-Number-Pin-0	0	1.8
vIteration-Number-Pin-1	Iteration-Number-Pin-1	0	1.8			*128
vIteration-Number-Pin-2	Iteration-Number-Pin-2	0	0

vUniform-Mutation-Pin	Uniform-Mutation-Pin	0	0	*One-Point Mutation
vOne-Point-Mutation-Pin	One-Point-Mutation-Pin	0	1.8
vUniform-Crossover-Pin	Uniform-Crossover-Pin	0	0	*Two-Point Crossover
vCrossover-Type-Pin-1	Crossover-Type-Pin-1	0	1.8
vCrossover-Type-Pin-0	Crossover-Type-Pin-0	0	1.8

vPipeline-Stages-Pin-3	Pipeline-Stages-Pin-3	0	0
vPipeline-Stages-Pin-2	Pipeline-Stages-Pin-2	0	0
vPipeline-Stages-Pin-1	Pipeline-Stages-Pin-1	0	0
vPipeline-Stages-Pin-0	Pipeline-Stages-Pin-0	0	0

vPRNG-Seed-Select-Pin-0	PRNG-Seed-Select-Pin-0	0	0
vPRNG-Seed-Select-Pin-1	PRNG-Seed-Select-Pin-1	0	0

vCrossover-In-Ack-Pad	Crossover-In-Ack-Pad	0	0
vCrossover-In-Req-Pin	Crossover-In-Req-Pin	0	0
vCrossover-In-Data-Pin	Crossover-In-Data-Pin	0	0
vCrossover-Out-Ack-Pin	Crossover-Out-Ack-Pin	0	0

vSPI-In1-Line1	SPI-In1-Line1	0	0
vSPI-In1-Line2	SPI-In1-Line2	0	0
vSPI-In1-Line3	SPI-In1-Line3	0	0
vSPI-In1-Line4	SPI-In1-Line4	0	0
vSPI-In1-clk-Pin	SPI-In1-clk-Pin	0	0
vSPI-In1-CS-Pin	SPI-In1-CS-Pin	0	0
vSPI-In2-Line1	SPI-In2-Line1	0	0
vSPI-In2-Line2	SPI-In2-Line2	0	0
vSPI-In2-Line3	SPI-In2-Line3	0	0
vSPI-In2-Line4	SPI-In2-Line4	0	0
vSPI-In2-clk-Pin	SPI-In2-clk-Pin	0	0
vSPI-In2-CS-Pin	SPI-In2-CS-Pin	0	0

vData30	Data30	0	0
vData31	Data31	0	0


*Master GAP chip
*names are based on the master chip namings
x1	Master-Slave-Select-Pin-1	Master-Slave-Select-Pin-0	Selection-Req-Pad	Selection-Ack-Pin	Address-Port-1	Address-Port-2	Address-Port-3	Address-Port-4	Address-Port-5	Address-Port-6	Address-Port-7	Address-Port-8	Address-Port-9-Elite-Selected	RNG-Pad-0	RNG-Pad-1	Crossover-Out-Ack-Pin	Crossover-Out-Req-Pad	Crossover-Out-Data-Pad	Crossover-In-Ack-Pad	Crossover-In-Req-Pin	Crossover-In-Data-Pin	Chromosome-Resolution-Pin	Fitness-Resolution-Pin	Best-Found-Emmigration-Pin	No-Elitism-Pin	Dual-Ram-Pin	Data-Ready-Pad	Restart-Pin	Stop-Pin	Clock-1-Pin	Clock-2-Pin	Population-Size-Pin-0	Population-Size-Pin-1	Random-Immigrants-Gap-Pin-1	Random-Immigrants-Gap-Pin-0	Mutation-Rate-Pin-0	Mutation-Rate-Pin-1	Mutation-Rate-Pin-2	Mutation-Rate-Pin-3	Mutation-Rate-Pin-4	Mutation-Rate-Pin-5	Mutation-Rate-Pin-6	Crossover-Rate-Pin-0	Crossover-Rate-Pin-1	Crossover-Rate-Pin-2	Crossover-Rate-Pin-3	Crossover-Rate-Pin-4	Crossover-Rate-Pin-5	Crossover-Rate-Pin-6	Migration-Gap-Pin-1	Migration-Gap-Pin-0	SPI-Out-Line1-Pad	SPI-Out-Line2-Pad	SPI-Out-Line3-Pad	SPI-Out-Line4-Pad	SPI-Out-clk-Pad	SPI-Out-CS-Pad	Second-SPI-Ready-Pin	SPI-In1-Line1	SPI-In1-Line2	SPI-In1-Line3	SPI-In1-Line4	SPI-In1-clk-Pin	SPI-In1-CS-Pin	SPI-In2-Line1	SPI-In2-Line2	SPI-In2-Line3	SPI-In2-Line4	SPI-In2-clk-Pin	SPI-In2-CS-Pin	Fitness-or-Cost-Pin	Tournament-Size-Pin-1	Tournament-Size-Pin-0	Iteration-Number-Pin-0	Iteration-Number-Pin-1	Iteration-Number-Pin-2	Uniform-Mutation-Pin	One-Point-Mutation-Pin	Uniform-Crossover-Pin	Crossover-Type-Pin-1	Crossover-Type-Pin-0	Pipeline-Stages-Pin-3	Pipeline-Stages-Pin-2	Pipeline-Stages-Pin-1	Pipeline-Stages-Pin-0	PRNG-Seed-Select-Pin-0	PRNG-Seed-Select-Pin-1	Fitness-Estimation-Ack-Pin	Fitness-Estimation-Req1-Pad	Fitness-Estimation-Req2-Pad	Fitness-Estimation-Ready1-Pad	Fitness-Estimation-Ready2-Pad	Fitness-Estimation-Discard-Pin	Data0	Data1	Data2	Data3	Data4	Data5	Data6	Data7	Data8	Data9	Data10	Data11	Data12	Data13	Data14	Data15	Data16	Data17	Data18	Data19	Data20	Data21	Data22	Data23	Data24	Data25	Data26	Data27	Data28	Data29	Data30	Data31	GAP

*First fitness evaluation unit
x2	Fitness-Estimation-Req1-Pad	Fitness-Estimation-Ready1-Pad	Ack1	Discard1	DData0	DData1	DData2	DData3	DData4	DData5	DData6	DData7	DData8	DData9	DData10	DData11	DData12	DData13	DData14	DData15	Data16	Data17	Data18	Data19	Data20	Data21	Data22	Data23	Data24	Data25	Data26	Data27	Data28	Data29	Fitness1-0	Fitness1-1	Fitness1-2	Fitness1-3	Fitness1-4	Fitness1-5	Fitness1-6	Fitness1-7	Fitness1-8	Knapsack

*Second fitness evaluation unit
x3	Fitness-Estimation-Req2-Pad	Fitness-Estimation-Ready2-Pad	Ack2	Discard2	DData0	DData1	DData2	DData3	DData4	DData5	DData6	DData7	DData8	DData9	DData10	DData11	DData12	DData13	DData14	DData15	Data16	Data17	Data18	Data19	Data20	Data21	Data22	Data23	Data24	Data25	Data26	Data27	Data28	Data29 Fitness2-0	Fitness2-1	Fitness2-2	Fitness2-3	Fitness2-4	Fitness2-5	Fitness2-6	Fitness2-7	Fitness2-8	Knapsack


******External circuit
x4	Discard1	Discard2	Fitness-Estimation-Discard-Pin^	NOR2-m20	wn=16u	wp=48u	*m=20
x5	Fitness-Estimation-Discard-Pin^	Fitness-Estimation-Discard-Pin	INV-m20	wn=16u	wp=48u	*m=20

x6	Ack1	Ack2	Fitness-Estimation-Ack-Pin^	NOR2-m20	wn=16u	wp=48u	*m=20
x7	Fitness-Estimation-Ack-Pin^	Fitness-Estimation-Ack-Pin	INV-m20	wn=16u	wp=48u	*m=20

x8	Fitness-Estimation-Ready1-Pad	Fitness-Estimation-Ready1-Pad^	INV-m20	wn=16u	wp=48u	*m=20
x9	Fitness-Estimation-Ready2-Pad	Fitness-Estimation-Ready2-Pad^	INV-m20	wn=16u	wp=48u	*m=20

x10	Fitness1-0	Fitness1-1	Fitness1-2	Fitness1-3	Fitness1-4	Fitness1-5	Fitness1-6	Fitness1-7	Fitness1-8	0	0	0	0	0	0	0	DData0	DData1	DData2	DData3	DData4	DData5	DData6	DData7	DData8	DData9	DData10	DData11	DData12	DData13	DData14	DData15	preData0	preData1	preData2	preData3	preData4	preData5	preData6	preData7	preData8	preData9	preData10	preData11	preData12	preData13	preData14	preData15	Fitness-Estimation-Ready1-Pad	Fitness-Estimation-Ready1-Pad^	MUX-Array-16-no-INV	wn=3u	wp=9u	*m=20

x11	Fitness2-0	Fitness2-1	Fitness2-2	Fitness2-3	Fitness2-4	Fitness2-5	Fitness2-6	Fitness2-7	Fitness2-8	0	0	0	0	0	0	0	preData0	preData1	preData2	preData3	preData4	preData5	preData6	preData7	preData8	preData9	preData10	preData11	preData12	preData13	preData14	preData15	Data0	Data1	Data2	Data3	Data4	Data5	Data6	Data7	Data8	Data9	Data10	Data11	Data12	Data13	Data14	Data15	Fitness-Estimation-Ready2-Pad	Fitness-Estimation-Ready2-Pad^	MUX-Array-16-no-INV	wn=3u	wp=9u	*m=20


******Components
***Array of 16 inverter-less multiplexers***
.subckt	MUX-Array-16-no-INV	in1-1	in1-2	in1-3	in1-4	in1-5	in1-6	in1-7	in1-8	in1-9	in1-10	in1-11	in1-12	in1-13	in1-14	in1-15	in1-16	in2-1	in2-2	in2-3	in2-4	in2-5	in2-6	in2-7	in2-8	in2-9	in2-10	in2-11	in2-12	in2-13	in2-14	in2-15	in2-16	out1	out2	out3	out4	out5	out6	out7	out8	out9	out10	out11	out12	out13	out14	out15	out16	control	control^	wn=1u	wp=3u	le=0.18u
x1	in1-1	in1-2	in1-3	in1-4	in2-1	in2-2	in2-3	in2-4	out1	out2	out3	out4	control	control^	MUX-Array-4-no-INV	wn='wn'	wp='wp'	le='le'
x2	in1-5	in1-6	in1-7	in1-8	in2-5	in2-6	in2-7	in2-8	out5	out6	out7	out8	control	control^	MUX-Array-4-no-INV	wn='wn'	wp='wp'	le='le'
x3	in1-9	in1-10	in1-11	in1-12	in2-9	in2-10	in2-11	in2-12	out9	out10	out11	out12	control	control^	MUX-Array-4-no-INV	wn='wn'	wp='wp'	le='le'
x4	in1-13	in1-14	in1-15	in1-16	in2-13	in2-14	in2-15	in2-16	out13	out14	out15	out16	control	control^	MUX-Array-4-no-INV	wn='wn'	wp='wp'	le='le'
.ends

***Array of 4 inverter-less multiplexers***
.subckt	MUX-Array-4-no-INV	in1-1	in1-2	in1-3	in1-4	in2-1	in2-2	in2-3	in2-4	out1	out2	out3	out4	control	control^	wn=1u	wp=3u	le=0.18u
x1	in1-1	in2-1	out1	control	control^	MUX-no-INV	wn='wn'	wp='wp'	le='le'
x2	in1-2	in2-2	out2	control	control^	MUX-no-INV	wn='wn'	wp='wp'	le='le'
x3	in1-3	in2-3	out3	control	control^	MUX-no-INV	wn='wn'	wp='wp'	le='le'
x4	in1-4	in2-4	out4	control	control^	MUX-no-INV	wn='wn'	wp='wp'	le='le'
.ends

***Multiplexer without Inverter***
.subckt	MUX-no-INV	in1	in2	out	control	control^	wn=1u	wp=3u	le=0.18u
x1	in1	out	control	control^	TG-m20	wn='wn'	wp='wp'	le='le'
x2	in2	out	control^	control	TG-m20	wn='wn'	wp='wp'	le='le'
.ends

***20-Transistor Transmission Gate***
.subckt	TG-m20	in	out	control	control^	wn=1u	wp=3u	le=0.18u
m1	in	control^	out	vdd	mp18	w=wp	l=le	m=20
m2	out	control	in	0	mn18	w=wn	l=le	m=20
.ends

***10-Transistor Multiplexer***
.subckt	MUX-m10	in1	in2	out	control	wn=1u	wp=3u	le=0.18u
x1	in1	out	control	control^	TG-m10	wn='wn'	wp='wp'	le='le'
x2	in2	out	control^	control	TG-m10	wn='wn'	wp='wp'	le='le'
x3	control	control^	INV-m10	wn='wn'	wp='wp'	le='le'
.ends

***10-Transistor Transmission Gate***
.subckt	TG-m10	in	out	control	control^	wn=1u	wp=3u	le=0.18u
m1	in	control^	out	vdd	mp18	w=wp	l=le	m=10
m2	out	control	in	0	mn18	w=wn	l=le	m=10
.ends

***10-Transistor Inverter
.subckt	INV-m10	in	out	wn=1u	wp=3u	le=0.18u
m1	out	in	vdd	vdd	mp18	w=wp	l=le	m=10
m2	out	in	0	0	mn18	w=wn	l=le	m=10
.ends

***20-Transistor 2-Input NOR***
.subckt	NOR2-m20	in1	in2	out	wn=1u	wp=3u	le=0.18u
m1	a	in2	vdd	vdd	mp18	w='2*wp'	l=le	m=20
m2	out	in1	a	vdd	mp18	w='2*wp'	l=le	m=20
m3	out	in1	0	0	mn18	w=wn	l=le	m=20
m4	out	in2	0	0	mn18	w=wn	l=le	m=20
.ends

***20-Transistor Inverter
.subckt	INV-m20	in	out	wn=1u	wp=3u	le=0.18u
m1	out	in	vdd	vdd	mp18	w=wp	l=le	m=20
m2	out	in	0	0	mn18	w=wn	l=le	m=20
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

******Include
.include	'./GAP.inc'
.include	'./RAM.inc'

.end