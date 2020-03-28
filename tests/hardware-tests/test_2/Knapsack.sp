*GAP co-working with Knapsack test chip simulation  

*Options
.param hsimveriloga="RAM.va"
.param hsimveriloga="./Knapsack.va"
.param hsimvdd=1.8
.param hsimspeed=3
.param hsimanalog=1.5

.print V(*)	level=3
.print I(vdd)

.lib	'hm1816m020233v11.lib'	tt

.tran	20p	750n	UIC	*sweep monte=30

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

vBest-Found-Emmigration-Pin	Best-Found-Emmigration-Pin	0	1.8

vNo-Elitism-Pin	No-Elitism-Pin	0	1.8

vDual-Ram-Pin	Dual-Ram-Pin	0	1.8

vRestart-Pin	Restart-Pin	0	pulse(0	1.8	0n	50p	50p	1n	21u)
vStop-Pin	Stop-Pin	0	0

vClock-1-Pin	Clock-1-Pin	0	pulse(0	1.8	0n	50p	50p	1.05n	2.2n)
vClock-2-Pin	Clock-2-Pin	0	pulse(0	1.8	0n	50p	50p	0.6n	1.3n)

vPopulation-Size-Pin-0	Population-Size-Pin-0	0	1.8
vPopulation-Size-Pin-1	Population-Size-Pin-1	0	0			*64

vRandom-Immigrants-Gap-Pin-1	Random-Immigrants-Gap-Pin-1	0	0
vRandom-Immigrants-Gap-Pin-0	Random-Immigrants-Gap-Pin-0	0	0

vMutation-Rate-Pin-0	Mutation-Rate-Pin-0	0	0
vMutation-Rate-Pin-1	Mutation-Rate-Pin-1	0	1.8
vMutation-Rate-Pin-2	Mutation-Rate-Pin-2	0	0
vMutation-Rate-Pin-3	Mutation-Rate-Pin-3	0	0
vMutation-Rate-Pin-4	Mutation-Rate-Pin-4	0	0			*3/128
vMutation-Rate-Pin-5	Mutation-Rate-Pin-5	0	0
vMutation-Rate-Pin-6	Mutation-Rate-Pin-6	0	0

vCrossover-Rate-Pin-0	Crossover-Rate-Pin-0	0	0
vCrossover-Rate-Pin-1	Crossover-Rate-Pin-1	0	0
vCrossover-Rate-Pin-2	Crossover-Rate-Pin-2	0	0			*113/128
vCrossover-Rate-Pin-3	Crossover-Rate-Pin-3	0	0
vCrossover-Rate-Pin-4	Crossover-Rate-Pin-4	0	1.8
vCrossover-Rate-Pin-5	Crossover-Rate-Pin-5	0	1.8
vCrossover-Rate-Pin-6	Crossover-Rate-Pin-6	0	1.8

vMigration-Gap-Pin-1	Migration-Gap-Pin-1	0	1.8			*every two iterations
vMigration-Gap-Pin-0	Migration-Gap-Pin-0	0	0

vSecond-SPI-Ready-Pin	Second-SPI-Ready-Pin	0	0

vFitness-or-Cost-Pin	Fitness-or-Cost-Pin	0	0

vTournament-Size-Pin-1	Tournament-Size-Pin-1	0	0
vTournament-Size-Pin-0	Tournament-Size-Pin-0	0	0			*2

vIteration-Number-Pin-0	Iteration-Number-Pin-0	0	0
vIteration-Number-Pin-1	Iteration-Number-Pin-1	0	0			*16
vIteration-Number-Pin-2	Iteration-Number-Pin-2	0	0

vUniform-Mutation-Pin	Uniform-Mutation-Pin	0	1.8
vOne-Point-Mutation-Pin	One-Point-Mutation-Pin	0	0
vUniform-Crossover-Pin	Uniform-Crossover-Pin	0	1.8
vCrossover-Type-Pin-1	Crossover-Type-Pin-1	0	0
vCrossover-Type-Pin-0	Crossover-Type-Pin-0	0	0

vPipeline-Stages-Pin-3	Pipeline-Stages-Pin-3	0	0
vPipeline-Stages-Pin-2	Pipeline-Stages-Pin-2	0	0
vPipeline-Stages-Pin-1	Pipeline-Stages-Pin-1	0	0
vPipeline-Stages-Pin-0	Pipeline-Stages-Pin-0	0	0

vPRNG-Seed-Select-Pin-0-1	PRNG-Seed-Select-Pin-0-1	0	1.8
vPRNG-Seed-Select-Pin-1-1	PRNG-Seed-Select-Pin-1-1	0	0

vPRNG-Seed-Select-Pin-0-2	PRNG-Seed-Select-Pin-0-2	0	0
vPRNG-Seed-Select-Pin-1-2	PRNG-Seed-Select-Pin-1-2	0	1.8



vCrossover-In-Ack-Pad	Crossover-In-Ack-Pad	0	0
vCrossover-In-Req-Pin	Crossover-In-Req-Pin	0	0
vCrossover-In-Data-Pin	Crossover-In-Data-Pin	0	0
vCrossover-Out-Ack-Pin	Crossover-Out-Ack-Pin	0	0

vSelection-Req-Pad	Selection-Req-Pad	0	0
vSelection-Ack-Pin	Selection-Ack-Pin	0	0

vAddress-Port-1	Address-Port-1	0	0
vAddress-Port-2	Address-Port-2	0	0
vAddress-Port-3	Address-Port-3	0	0
vAddress-Port-4	Address-Port-4	0	0
vAddress-Port-5	Address-Port-5	0	0
vAddress-Port-6	Address-Port-6	0	0
vAddress-Port-7	Address-Port-7	0	0
vAddress-Port-8	Address-Port-8	0	0
vAddress-Port-9-Elite-Selected	Address-Port-9-Elite-Selected	0	0

vSPI-In2-Line1	SPI-In2-Line1	0	0
vSPI-In2-Line2	SPI-In2-Line2	0	0
vSPI-In2-Line3	SPI-In2-Line3	0	0
vSPI-In2-Line4	SPI-In2-Line4	0	0
vSPI-In2-clk-Pin	SPI-In2-clk-Pin	0	0
vSPI-In2-CS-Pin	SPI-In2-CS-Pin	0	0

vData30	Data30	0	0
vData31	Data31	0	0



*Master GAP chips
*names are based on the master chip naming
x1	Master-Slave-Select-Pin-1	Master-Slave-Select-Pin-0	Selection-Req-Pad	Selection-Ack-Pin	Address-Port-1	Address-Port-2	Address-Port-3	Address-Port-4	Address-Port-5	Address-Port-6	Address-Port-7	Address-Port-8	Address-Port-9-Elite-Selected	RNG-Pad-0-1	RNG-Pad-1-1	Crossover-Out-Ack-Pin	Crossover-Out-Req-Pad	Crossover-Out-Data-Pad	Crossover-In-Ack-Pad	Crossover-In-Req-Pin	Crossover-In-Data-Pin	Chromosome-Resolution-Pin	Fitness-Resolution-Pin	Best-Found-Emmigration-Pin	No-Elitism-Pin	Dual-Ram-Pin	Data-Ready-Pad1	Restart-Pin	Stop-Pin	Clock-1-Pin	Clock-2-Pin	Population-Size-Pin-0	Population-Size-Pin-1	Random-Immigrants-Gap-Pin-1	Random-Immigrants-Gap-Pin-0	Mutation-Rate-Pin-0	Mutation-Rate-Pin-1	Mutation-Rate-Pin-2	Mutation-Rate-Pin-3	Mutation-Rate-Pin-4	Mutation-Rate-Pin-5	Mutation-Rate-Pin-6	Crossover-Rate-Pin-0	Crossover-Rate-Pin-1	Crossover-Rate-Pin-2	Crossover-Rate-Pin-3	Crossover-Rate-Pin-4	Crossover-Rate-Pin-5	Crossover-Rate-Pin-6	Migration-Gap-Pin-1	Migration-Gap-Pin-0	SPI-Out-Line1-Pad1	SPI-Out-Line2-Pad1	SPI-Out-Line3-Pad1	SPI-Out-Line4-Pad1	SPI-Out-clk-Pad1	SPI-Out-CS-Pad1	Second-SPI-Ready-Pin	SPI-Out-Line1-Pad2	SPI-Out-Line2-Pad2	SPI-Out-Line3-Pad2	SPI-Out-Line4-Pad2	SPI-Out-clk-Pad2	SPI-Out-CS-Pad2	SPI-In2-Line1	SPI-In2-Line2	SPI-In2-Line3	SPI-In2-Line4	SPI-In2-clk-Pin	SPI-In2-CS-Pin	Fitness-or-Cost-Pin	Tournament-Size-Pin-1	Tournament-Size-Pin-0	Iteration-Number-Pin-0	Iteration-Number-Pin-1	Iteration-Number-Pin-2	Uniform-Mutation-Pin	One-Point-Mutation-Pin	Uniform-Crossover-Pin	Crossover-Type-Pin-1	Crossover-Type-Pin-0	Pipeline-Stages-Pin-3	Pipeline-Stages-Pin-2	Pipeline-Stages-Pin-1	Pipeline-Stages-Pin-0	PRNG-Seed-Select-Pin-0-1	PRNG-Seed-Select-Pin-1-1	Fitness-Estimation-Ack-Pin1	Fitness-Estimation-Req1-Pad1	Fitness-Estimation-Req2-Pad1	Fitness-Estimation-Ready1-Pad1	Fitness-Estimation-Ready2-Pad1	Fitness-Estimation-Discard-Pin1	Data0-1	Data1-1	Data2-1	Data3-1	Data4-1	Data5-1	Data6-1	Data7-1	Data8-1	Data9-1	Data10-1	Data11-1	Data12-1	Data13-1	Data14-1	Data15-1	Data16-1	Data17-1	Data18-1	Data19-1	Data20-1	Data21-1	Data22-1	Data23-1	Data24-1	Data25-1	Data26-1	Data27-1	Data28-1	Data29-1	Data30	Data31	GAP

x2	Master-Slave-Select-Pin-1	Master-Slave-Select-Pin-0	Selection-Req-Pad	Selection-Ack-Pin	Address-Port-1	Address-Port-2	Address-Port-3	Address-Port-4	Address-Port-5	Address-Port-6	Address-Port-7	Address-Port-8	Address-Port-9-Elite-Selected	RNG-Pad-0-2	RNG-Pad-1-2	Crossover-Out-Ack-Pin	Crossover-Out-Req-Pad	Crossover-Out-Data-Pad	Crossover-In-Ack-Pad	Crossover-In-Req-Pin	Crossover-In-Data-Pin	Chromosome-Resolution-Pin	Fitness-Resolution-Pin	Best-Found-Emmigration-Pin	No-Elitism-Pin	Dual-Ram-Pin	Data-Ready-Pad2	Restart-Pin	Stop-Pin	Clock-1-Pin	Clock-2-Pin	Population-Size-Pin-0	Population-Size-Pin-1	Random-Immigrants-Gap-Pin-1	Random-Immigrants-Gap-Pin-0	Mutation-Rate-Pin-0	Mutation-Rate-Pin-1	Mutation-Rate-Pin-2	Mutation-Rate-Pin-3	Mutation-Rate-Pin-4	Mutation-Rate-Pin-5	Mutation-Rate-Pin-6	Crossover-Rate-Pin-0	Crossover-Rate-Pin-1	Crossover-Rate-Pin-2	Crossover-Rate-Pin-3	Crossover-Rate-Pin-4	Crossover-Rate-Pin-5	Crossover-Rate-Pin-6	Migration-Gap-Pin-1	Migration-Gap-Pin-0	SPI-Out-Line1-Pad2	SPI-Out-Line2-Pad2	SPI-Out-Line3-Pad2	SPI-Out-Line4-Pad2	SPI-Out-clk-Pad2	SPI-Out-CS-Pad2	Second-SPI-Ready-Pin	SPI-Out-Line1-Pad1	SPI-Out-Line2-Pad1	SPI-Out-Line3-Pad1	SPI-Out-Line4-Pad1	SPI-Out-clk-Pad1	SPI-Out-CS-Pad1	SPI-In2-Line1	SPI-In2-Line2	SPI-In2-Line3	SPI-In2-Line4	SPI-In2-clk-Pin	SPI-In2-CS-Pin	Fitness-or-Cost-Pin	Tournament-Size-Pin-1	Tournament-Size-Pin-0	Iteration-Number-Pin-0	Iteration-Number-Pin-1	Iteration-Number-Pin-2	Uniform-Mutation-Pin	One-Point-Mutation-Pin	Uniform-Crossover-Pin	Crossover-Type-Pin-1	Crossover-Type-Pin-0	Pipeline-Stages-Pin-3	Pipeline-Stages-Pin-2	Pipeline-Stages-Pin-1	Pipeline-Stages-Pin-0	PRNG-Seed-Select-Pin-0-2	PRNG-Seed-Select-Pin-1-2	Fitness-Estimation-Ack-Pin2	Fitness-Estimation-Req1-Pad2	Fitness-Estimation-Req2-Pad2	Fitness-Estimation-Ready1-Pad2	Fitness-Estimation-Ready2-Pad2	Fitness-Estimation-Discard-Pin2	Data0-2	Data1-2	Data2-2	Data3-2	Data4-2	Data5-2	Data6-2	Data7-2	Data8-2	Data9-2	Data10-2	Data11-2	Data12-2	Data13-2	Data14-2	Data15-2	Data16-2	Data17-2	Data18-2	Data19-2	Data20-2	Data21-2	Data22-2	Data23-2	Data24-2	Data25-2	Data26-2	Data27-2	Data28-2	Data29-2	Data30	Data31	GAP

*Slaves of the first master GAP
*First fitness evaluation unit
x3	Fitness-Estimation-Req1-Pad1	Fitness-Estimation-Ready1-Pad1	Ack1-1	Discard1-1	DData0-1	DData1-1	DData2-1	DData3-1	DData4-1	DData5-1	DData6-1	DData7-1	DData8-1	DData9-1	DData10-1	DData11-1	DData12-1	DData13-1	DData14-1	DData15-1	Data16-1	Data17-1	Data18-1	Data19-1	Data20-1	Data21-1	Data22-1	Data23-1	Data24-1	Data25-1	Data26-1	Data27-1	Data28-1	Data29-1	Fitness1-0-1	Fitness1-1-1	Fitness1-2-1	Fitness1-3-1	Fitness1-4-1	Fitness1-5-1	Fitness1-6-1	Fitness1-7-1	Fitness1-8-1	Knapsack

*Second fitness evaluation unit
x4	Fitness-Estimation-Req2-Pad1	Fitness-Estimation-Ready2-Pad1	Ack2-1	Discard2-1	DData0-1	DData1-1	DData2-1	DData3-1	DData4-1	DData5-1	DData6-1	DData7-1	DData8-1	DData9-1	DData10-1	DData11-1	DData12-1	DData13-1	DData14-1	DData15-1	Data16-1	Data17-1	Data18-1	Data19-1	Data20-1	Data21-1	Data22-1	Data23-1	Data24-1	Data25-1	Data26-1	Data27-1	Data28-1	Data29-1 Fitness2-0-1	Fitness2-1-1	Fitness2-2-1	Fitness2-3-1	Fitness2-4-1	Fitness2-5-1	Fitness2-6-1	Fitness2-7-1	Fitness2-8-1	Knapsack

*Slaves of the second master GAP
*First fitness evaluation unit
x5	Fitness-Estimation-Req1-Pad2	Fitness-Estimation-Ready1-Pad2	Ack1-2	Discard1-2	DData0-2	DData1-2	DData2-2	DData3-2	DData4-2	DData5-2	DData6-2	DData7-2	DData8-2	DData9-2	DData10-2	DData11-2	DData12-2	DData13-2	DData14-2	DData15-2	Data16-2	Data17-2	Data18-2	Data19-2	Data20-2	Data21-2	Data22-2	Data23-2	Data24-2	Data25-2	Data26-2	Data27-2	Data28-2	Data29-2	Fitness1-0-2	Fitness1-1-2	Fitness1-2-2	Fitness1-3-2	Fitness1-4-2	Fitness1-5-2	Fitness1-6-2	Fitness1-7-2	Fitness1-8-2	Knapsack

*Second fitness evaluation unit
x6	Fitness-Estimation-Req2-Pad2	Fitness-Estimation-Ready2-Pad2	Ack2-2	Discard2-2	DData0-2	DData1-2	DData2-2	DData3-2	DData4-2	DData5-2	DData6-2	DData7-2	DData8-2	DData9-2	DData10-2	DData11-2	DData12-2	DData13-2	DData14-2	DData15-2	Data16-2	Data17-2	Data18-2	Data19-2	Data20-2	Data21-2	Data22-2	Data23-2	Data24-2	Data25-2	Data26-2	Data27-2	Data28-2	Data29-2 Fitness2-0-2	Fitness2-1-2	Fitness2-2-2	Fitness2-3-2	Fitness2-4-2	Fitness2-5-2	Fitness2-6-2	Fitness2-7-2	Fitness2-8-2	Knapsack

******External circuit
x7	Discard1-1	Discard2-1	Fitness-Estimation-Discard-Pin1^	NOR2-m20	wn=16u	wp=48u	*m=20
x8	Fitness-Estimation-Discard-Pin1^	Fitness-Estimation-Discard-Pin1	INV-m20	wn=16u	wp=48u	*m=20

x9	Ack1-1	Ack2-1	Fitness-Estimation-Ack-Pin1^	NOR2-m20	wn=16u	wp=48u	*m=20
x10	Fitness-Estimation-Ack-Pin1^	Fitness-Estimation-Ack-Pin1	INV-m20	wn=16u	wp=48u	*m=20

x11	Fitness-Estimation-Ready1-Pad1	Fitness-Estimation-Ready1-Pad1^	INV-m20	wn=16u	wp=48u	*m=20
x12	Fitness-Estimation-Ready2-Pad1	Fitness-Estimation-Ready2-Pad1^	INV-m20	wn=16u	wp=48u	*m=20

x13	Fitness1-0-1	Fitness1-1-1	Fitness1-2-1	Fitness1-3-1	Fitness1-4-1	Fitness1-5-1	Fitness1-6-1	Fitness1-7-1	Fitness1-8-1	0	0	0	0	0	0	0	DData0-1	DData1-1	DData2-1	DData3-1	DData4-1	DData5-1	DData6-1	DData7-1	DData8-1	DData9-1	DData10-1	DData11-1	DData12-1	DData13-1	DData14-1	DData15-1	preData0-1	preData1-1	preData2-1	preData3-1	preData4-1	preData5-1	preData6-1	preData7-1	preData8-1	preData9-1	preData10-1	preData11-1	preData12-1	preData13-1	preData14-1	preData15-1	Fitness-Estimation-Ready1-Pad1	Fitness-Estimation-Ready1-Pad1^	MUX-Array-16-no-INV	wn=3u	wp=9u	*m=20

x14	Fitness2-0-1	Fitness2-1-1	Fitness2-2-1	Fitness2-3-1	Fitness2-4-1	Fitness2-5-1	Fitness2-6-1	Fitness2-7-1	Fitness2-8-1	0	0	0	0	0	0	0	preData0-1	preData1-1	preData2-1	preData3-1	preData4-1	preData5-1	preData6-1	preData7-1	preData8-1	preData9-1	preData10-1	preData11-1	preData12-1	preData13-1	preData14-1	preData15-1	Data0-1	Data1-1	Data2-1	Data3-1	Data4-1	Data5-1	Data6-1	Data7-1	Data8-1	Data9-1	Data10-1	Data11-1	Data12-1	Data13-1	Data14-1	Data15-1	Fitness-Estimation-Ready2-Pad1	Fitness-Estimation-Ready2-Pad1^	MUX-Array-16-no-INV	wn=3u	wp=9u	*m=20



x15	Discard1-2	Discard2-2	Fitness-Estimation-Discard-Pin2^	NOR2-m20	wn=16u	wp=48u	*m=20
x16	Fitness-Estimation-Discard-Pin2^	Fitness-Estimation-Discard-Pin2	INV-m20	wn=16u	wp=48u	*m=20

x17	Ack1-2	Ack2-2	Fitness-Estimation-Ack-Pin2^	NOR2-m20	wn=16u	wp=48u	*m=20
x18	Fitness-Estimation-Ack-Pin2^	Fitness-Estimation-Ack-Pin2	INV-m20	wn=16u	wp=48u	*m=20

x19	Fitness-Estimation-Ready1-Pad2	Fitness-Estimation-Ready1-Pad2^	INV-m20	wn=16u	wp=48u	*m=20
x20	Fitness-Estimation-Ready2-Pad2	Fitness-Estimation-Ready2-Pad2^	INV-m20	wn=16u	wp=48u	*m=20

x21	Fitness1-0-2	Fitness1-1-2	Fitness1-2-2	Fitness1-3-2	Fitness1-4-2	Fitness1-5-2	Fitness1-6-2	Fitness1-7-2	Fitness1-8-2	0	0	0	0	0	0	0	DData0-2	DData1-2	DData2-2	DData3-2	DData4-2	DData5-2	DData6-2	DData7-2	DData8-2	DData9-2	DData10-2	DData11-2	DData12-2	DData13-2	DData14-2	DData15-2	preData0-2	preData1-2	preData2-2	preData3-2	preData4-2	preData5-2	preData6-2	preData7-2	preData8-2	preData9-2	preData10-2	preData11-2	preData12-2	preData13-2	preData14-2	preData15-2	Fitness-Estimation-Ready1-Pad2	Fitness-Estimation-Ready1-Pad2^	MUX-Array-16-no-INV	wn=3u	wp=9u	*m=20

x22	Fitness2-0-2	Fitness2-1-2	Fitness2-2-2	Fitness2-3-2	Fitness2-4-2	Fitness2-5-2	Fitness2-6-2	Fitness2-7-2	Fitness2-8-2	0	0	0	0	0	0	0	preData0-2	preData1-2	preData2-2	preData3-2	preData4-2	preData5-2	preData6-2	preData7-2	preData8-2	preData9-2	preData10-2	preData11-2	preData12-2	preData13-2	preData14-2	preData15-2	Data0-2	Data1-2	Data2-2	Data3-2	Data4-2	Data5-2	Data6-2	Data7-2	Data8-2	Data9-2	Data10-2	Data11-2	Data12-2	Data13-2	Data14-2	Data15-2	Fitness-Estimation-Ready2-Pad2	Fitness-Estimation-Ready2-Pad2^	MUX-Array-16-no-INV	wn=3u	wp=9u	*m=20

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
*.include	'./RAM.inc'

.end