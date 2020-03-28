*Immigration Module 

.subckt	Immigration	Initialize	SPI-In1-Line1	SPI-In1-Line2	SPI-In1-Line3	SPI-In1-Line4	SPI-In1-clk-Pin	SPI-In1-CS-Pin	SPI-In2-Line1	SPI-In2-Line2	SPI-In2-Line3	SPI-In2-Line4	SPI-In2-clk-Pin	SPI-In2-CS-Pin	Immigration1-Receive	Immigration1-done	Immigration2-done	Emmigration-Start^	Migration-Gap-Pin-1	Migration-Gap-Pin-0	Chromosome-Resolution-Pin	Fitness-Resolution-Pin	Second-SPI-Ready-Pin	Handshake-Start	First-Immigrant-Ready-Flag	Second-Immigrant-Ready-Flag	Second-Immigrant-Ready-Flag^	Emmigration-Enable-Flag	Handshake-Done	Iteration-Detector-Stage5	Imm1-0	Imm1-1	Imm1-2	Imm1-3	Imm1-4	Imm1-5	Imm1-6	Imm1-7	Imm1-8	Imm1-9	Imm1-10	Imm1-11	Imm1-12	Imm1-13	Imm1-14	Imm1-15	Imm1-16	Imm1-17	Imm1-18	Imm1-19	Imm1-20	Imm1-21	Imm1-22	Imm1-23	Imm1-24	Imm1-25	Imm1-26	Imm1-27	Imm1-28	Imm1-29	Imm1-30	Imm1-31	Imm1-32	Imm1-33	Imm1-34	Imm1-35	Imm1-36	Imm1-37	Imm1-38	Imm1-39	Imm1-40	Imm1-41	Imm1-42	Imm1-43	Imm1-44	Imm1-45	Imm1-46	Imm1-47	Imm1-48	Imm1-49	Imm1-50	Imm1-51	Imm1-52	Imm1-53	Imm1-54	Imm1-55	Imm1-56	Imm1-57	Imm1-58	Imm1-59	Imm1-60	Imm1-61	Imm1-62	Imm1-63	Imm2-0	Imm2-1	Imm2-2	Imm2-3	Imm2-4	Imm2-5	Imm2-6	Imm2-7	Imm2-8	Imm2-9	Imm2-10	Imm2-11	Imm2-12	Imm2-13	Imm2-14	Imm2-15	Imm2-16	Imm2-17	Imm2-18	Imm2-19	Imm2-20	Imm2-21	Imm2-22	Imm2-23	Imm2-24	Imm2-25	Imm2-26	Imm2-27	Imm2-28	Imm2-29	Imm2-30	Imm2-31	Imm2-32	Imm2-33	Imm2-34	Imm2-35	Imm2-36	Imm2-37	Imm2-38	Imm2-39	Imm2-40	Imm2-41	Imm2-42	Imm2-43	Imm2-44	Imm2-45	Imm2-46	Imm2-47	Imm2-48	Imm2-49	Imm2-50	Imm2-51	Imm2-52	Imm2-53	Imm2-54	Imm2-55	Imm2-56	Imm2-57	Imm2-58	Imm2-59	Imm2-60	Imm2-61	Imm2-62	Imm2-63

***ready flag generation
x1	Migration-Gap-Pin-0	Migration-Gap-Pin-1	dec0	dec1	dec2	Decoder2Bit-3output	wn=2u	wp=6u

x2	Initialize	dec1	1	1^	OR2	wn=4u	wp=12u
x3	Initialize	dec0	2	2^	OR2	wn=4u	wp=12u

x4	Handshake-Done	Handshake-Done^	INV-m10	wn=6u	wp=18u	*m=10
x4967	Handshake-Done^	delayed-Handshake-Done	INV-m10	wn=3u	wp=9u	*m=10
x5	stage0	First-Immigrant-Ready-Flag	delayed-Handshake-Done	Handshake-Done^	2	2^	DFF-R	wn=8u	wp=24u
x6	First-Immigrant-Ready-Flag	stage2	delayed-Handshake-Done	Handshake-Done^	2	2^	DFF-R	wn=8u	wp=24u

x7	stage0	dec2	3	3^	AND2	wn=8u	wp=24u
x8	3	stage2	xstage2	xstage2^	OR2	wn=8u	wp=24u

x9	xstage2	stage3	delayed-Handshake-Done	Handshake-Done^	2	2^	DFF-R	wn=8u	wp=24u
x10	stage3	stage0	delayed-Handshake-Done	Handshake-Done^	1	1^	DFF-S	wn=8u	wp=24u

x11	First-Immigrant-Ready-Flag	Second-SPI-Ready-Pin	Second-Immigrant-Ready-Flag	Second-Immigrant-Ready-Flag^	AND2	wn=1.5u	wp=4.5u

x12	stage0	Iteration-Detector-Stage5	Emmigration-Enable-Flag	Emmigration-Enable-Flag^	AND2	wn=8u	wp=24u

***receive signal generation module 1
x13	Handshake-Start	Handshake-Start^	INV	wn=20u	wp=60u	*for both module1 and module2
x14	Handshake-Start^	Initialize	10	NOR2-m10	wn=2u	wp=6u	*for both module1 and module2	*m=10

x15	10	SPI-In1-CS-Pin	11	11^	AND2	wn=10u	wp=30u
x16	10	11	12	C-element	wn=10u	wp=30u
x17	12	12^	INV	wn=10u	wp=30u

x18	11	12^	Immigration1-Receive	NOR2	wn=10u	wp=30u

***receive signal generation module 2
x19	10	SPI-In2-CS-Pin	21	21^	AND2	wn=10u	wp=30u
x20	10	21	22	C-element	wn=10u	wp=30u
x21	22	22^	INV	wn=10u	wp=30u

x22	21	22^	Immigration2-Receive	NOR2	wn=10u	wp=30u

***done generation
x23	Emmigration-Start^	Immigration1-Receive	Immigration1-done	Immigration1-done^	OR2	wn=10u	wp=30u

x24	Second-SPI-Ready-Pin	Second-SPI-Ready-Pin^	INV	wn=1u	wp=3u
x25	Second-SPI-Ready-Pin^	Emmigration-Start^	Immigration2-Receive	Immigration2-done	Immigration2-done^	OR3	wn=10u	wp=30u

***main module 1
x26	Immigration1-done	Chromosome-Resolution-Pin	30	30^	AND2	wn=2u	wp=8u
x27	Immigration1-done	Fitness-Resolution-Pin	31	31^	AND2	wn=2u	wp=8u

x28	post-a1-0	post-a1-1	post-a1-2	post-a1-3	post-a1-4	post-a1-5	post-a1-6	post-a1-7	post-a1-8	post-a1-9	post-a1-10	post-a1-11	post-a1-12	post-a1-13	post-a1-14	post-a1-15	post-a1-16	post-a1-17	post-a1-18	post-a1-19	post-a1-20	post-a1-21	post-a1-22	post-a1-23	post-a1-24	post-a1-25	post-a1-26	post-a1-27	post-a1-28	post-a1-29	post-a1-30	post-a1-31	post-a1-32	post-a1-33	post-a1-34	post-a1-35	post-a1-36	post-a1-37	post-a1-38	post-a1-39	post-a1-40	post-a1-41	post-a1-42	post-a1-43	post-a1-44	post-a1-45	post-a1-46	post-a1-47	post-a1-48	post-a1-49	post-a1-50	post-a1-51	post-a1-52	post-a1-53	post-a1-54	post-a1-55	post-a1-56	post-a1-57	post-a1-58	post-a1-59	post-a1-60	post-a1-61	post-a1-62	post-a1-63	Imm1-0	Imm1-1	Imm1-2	Imm1-3	Imm1-4	Imm1-5	Imm1-6	Imm1-7	Imm1-8	Imm1-9	Imm1-10	Imm1-11	Imm1-12	Imm1-13	Imm1-14	Imm1-15	Imm1-16	Imm1-17	Imm1-18	Imm1-19	Imm1-20	Imm1-21	Imm1-22	Imm1-23	Imm1-24	Imm1-25	Imm1-26	Imm1-27	Imm1-28	Imm1-29	Imm1-30	Imm1-31	Imm1-32	Imm1-33	Imm1-34	Imm1-35	Imm1-36	Imm1-37	Imm1-38	Imm1-39	Imm1-40	Imm1-41	Imm1-42	Imm1-43	Imm1-44	Imm1-45	Imm1-46	Imm1-47	Imm1-48	Imm1-49	Imm1-50	Imm1-51	Imm1-52	Imm1-53	Imm1-54	Imm1-55	Imm1-56	Imm1-57	Imm1-58	Imm1-59	Imm1-60	Imm1-61	Imm1-62	Imm1-63	Immigration1-done	Immigration1-done^	30	30^	31	31^	DFF-Array-64	wn=0.25u	wp=0.75u

x29	Fitness-Resolution-Pin	Fitness-Resolution-Pin^	INV	wn=20u	wp=60u	*for both module1 and module2

x30	Chromosome-Resolution-Pin	Fitness-Resolution-Pin	Fitness-Resolution-Pin^	40	XNOR2	wn=8u	wp=24u	*for both module1 and module2
x31	40	40^	INV	wn=4u	wp=12u	*for both module1 and module2

x32	Chromosome-Resolution-Pin	Fitness-Resolution-Pin	50	50^	OR2	wn=8u	wp=24u	*for both module1 and module2
x33	Chromosome-Resolution-Pin	Fitness-Resolution-Pin	60	60^	AND2	wn=8u	wp=24u	*for both module1 and module2

x34	a1-48	a1-49	a1-50	a1-51	a1-52	a1-53	a1-54	a1-55	a1-56	a1-57	a1-58	a1-59	a1-60	a1-61	a1-62	a1-63	post-a1-48	post-a1-49	post-a1-50	post-a1-51	post-a1-52	post-a1-53	post-a1-54	post-a1-55	post-a1-56	post-a1-57	post-a1-58	post-a1-59	post-a1-60	post-a1-61	post-a1-62	post-a1-63	Fitness-Resolution-Pin	Fitness-Resolution-Pin^	TG-Array-16	wn=0.25u	wp=0.75u

x35	a1-48	a1-49	a1-50	a1-51	a1-52	a1-53	a1-54	a1-55	a1-56	a1-57	a1-58	a1-59	a1-60	a1-61	a1-62	a1-63	post-a1-32	post-a1-33	post-a1-34	post-a1-35	post-a1-36	post-a1-37	post-a1-38	post-a1-39	post-a1-40	post-a1-41	post-a1-42	post-a1-43	post-a1-44	post-a1-45	post-a1-46	post-a1-47	Fitness-Resolution-Pin^	Fitness-Resolution-Pin	TG-Array-16	wn=0.25u	wp=0.75u

x36	a1-32	a1-33	a1-34	a1-35	a1-36	a1-37	a1-38	a1-39	a1-40	a1-41	a1-42	a1-43	a1-44	a1-45	a1-46	a1-47	post-a1-32	post-a1-33	post-a1-34	post-a1-35	post-a1-36	post-a1-37	post-a1-38	post-a1-39	post-a1-40	post-a1-41	post-a1-42	post-a1-43	post-a1-44	post-a1-45	post-a1-46	post-a1-47	Fitness-Resolution-Pin	Fitness-Resolution-Pin^	TG-Array-16	wn=0.25u	wp=0.75u

x37	a1-32	a1-33	a1-34	a1-35	a1-36	a1-37	a1-38	a1-39	a1-40	a1-41	a1-42	a1-43	a1-44	a1-45	a1-46	a1-47	post-a1-16	post-a1-17	post-a1-18	post-a1-19	post-a1-20	post-a1-21	post-a1-22	post-a1-23	post-a1-24	post-a1-25	post-a1-26	post-a1-27	post-a1-28	post-a1-29	post-a1-30	post-a1-31	Fitness-Resolution-Pin^	Fitness-Resolution-Pin	TG-Array-16	wn=0.25u	wp=0.75u

x38	a1-16	a1-17	a1-18	a1-19	a1-20	a1-21	a1-22	a1-23	a1-24	a1-25	a1-26	a1-27	a1-28	a1-29	a1-30	a1-31	post-a1-16	post-a1-17	post-a1-18	post-a1-19	post-a1-20	post-a1-21	post-a1-22	post-a1-23	post-a1-24	post-a1-25	post-a1-26	post-a1-27	post-a1-28	post-a1-29	post-a1-30	post-a1-31	Fitness-Resolution-Pin	Fitness-Resolution-Pin^	TG-Array-16	wn=0.25u	wp=0.75u

x39	a1-32	a1-33	a1-34	a1-35	a1-36	a1-37	a1-38	a1-39	a1-40	a1-41	a1-42	a1-43	a1-44	a1-45	a1-46	a1-47	post-a1-0	post-a1-1	post-a1-2	post-a1-3	post-a1-4	post-a1-5	post-a1-6	post-a1-7	post-a1-8	post-a1-9	post-a1-10	post-a1-11	post-a1-12	post-a1-13	post-a1-14	post-a1-15	50^	50	TG-Array-16	wn=0.25u	wp=0.75u

x40	a1-16	a1-17	a1-18	a1-19	a1-20	a1-21	a1-22	a1-23	a1-24	a1-25	a1-26	a1-27	a1-28	a1-29	a1-30	a1-31	post-a1-0	post-a1-1	post-a1-2	post-a1-3	post-a1-4	post-a1-5	post-a1-6	post-a1-7	post-a1-8	post-a1-9	post-a1-10	post-a1-11	post-a1-12	post-a1-13	post-a1-14	post-a1-15	40^	40	TG-Array-16	wn=0.25u	wp=0.75u

x41	a1-0	a1-1	a1-2	a1-3	a1-4	a1-5	a1-6	a1-7	a1-8	a1-9	a1-10	a1-11	a1-12	a1-13	a1-14	a1-15	post-a1-0	post-a1-1	post-a1-2	post-a1-3	post-a1-4	post-a1-5	post-a1-6	post-a1-7	post-a1-8	post-a1-9	post-a1-10	post-a1-11	post-a1-12	post-a1-13	post-a1-14	post-a1-15	60	60^	TG-Array-16	wn=0.25u	wp=0.75u

x42	SPI-In1-clk-Pin	SPI-In1-clk-Pin^	INV	wn=16u	wp=48u

x43	SPI-In1-Line1	a1-63	a1-62	a1-61	a1-60	SPI-In1-clk-Pin	SPI-In1-clk-Pin^	Register-Line-4	wn=0.25u	wp=0.75u
x44	SPI-In1-Line2	a1-59	a1-58	a1-57	a1-56	SPI-In1-clk-Pin	SPI-In1-clk-Pin^	Register-Line-4	wn=0.25u	wp=0.75u
x45	SPI-In1-Line3	a1-55	a1-54	a1-53	a1-52	SPI-In1-clk-Pin	SPI-In1-clk-Pin^	Register-Line-4	wn=0.25u	wp=0.75u
x46	SPI-In1-Line4	a1-51	a1-50	a1-49	a1-48	SPI-In1-clk-Pin	SPI-In1-clk-Pin^	Register-Line-4	wn=0.25u	wp=0.75u

x47	a1-60	a1-47	a1-46	a1-45	a1-44	SPI-In1-clk-Pin	SPI-In1-clk-Pin^	Register-Line-4	wn=0.25u	wp=0.75u
x48	a1-56	a1-43	a1-42	a1-41	a1-40	SPI-In1-clk-Pin	SPI-In1-clk-Pin^	Register-Line-4	wn=0.25u	wp=0.75u
x49	a1-52	a1-39	a1-38	a1-37	a1-36	SPI-In1-clk-Pin	SPI-In1-clk-Pin^	Register-Line-4	wn=0.25u	wp=0.75u
x50	a1-48	a1-35	a1-34	a1-33	a1-32	SPI-In1-clk-Pin	SPI-In1-clk-Pin^	Register-Line-4	wn=0.25u	wp=0.75u

x51	a1-44	a1-31	a1-30	a1-29	a1-28	SPI-In1-clk-Pin	SPI-In1-clk-Pin^	Register-Line-4	wn=0.25u	wp=0.75u
x52	a1-40	a1-27	a1-26	a1-25	a1-24	SPI-In1-clk-Pin	SPI-In1-clk-Pin^	Register-Line-4	wn=0.25u	wp=0.75u
x53	a1-36	a1-23	a1-22	a1-21	a1-20	SPI-In1-clk-Pin	SPI-In1-clk-Pin^	Register-Line-4	wn=0.25u	wp=0.75u
x54	a1-32	a1-19	a1-18	a1-17	a1-16	SPI-In1-clk-Pin	SPI-In1-clk-Pin^	Register-Line-4	wn=0.25u	wp=0.75u

x55	a1-28	a1-15	a1-14	a1-13	a1-12	SPI-In1-clk-Pin	SPI-In1-clk-Pin^	Register-Line-4	wn=0.25u	wp=0.75u
x56	a1-24	a1-11	a1-10	a1-9	a1-8	SPI-In1-clk-Pin	SPI-In1-clk-Pin^	Register-Line-4	wn=0.25u	wp=0.75u
x57	a1-20	a1-7	a1-6	a1-5	a1-4	SPI-In1-clk-Pin	SPI-In1-clk-Pin^	Register-Line-4	wn=0.25u	wp=0.75u
x58	a1-16	a1-3	a1-2	a1-1	a1-0	SPI-In1-clk-Pin	SPI-In1-clk-Pin^	Register-Line-4	wn=0.25u	wp=0.75u

*main module 2
x59	Immigration2-done	Chromosome-Resolution-Pin	70	70^	AND2	wn=2u	wp=8u
x60	Immigration2-done	Fitness-Resolution-Pin	71	71^	AND2	wn=2u	wp=8u

x61	post-a2-0	post-a2-1	post-a2-2	post-a2-3	post-a2-4	post-a2-5	post-a2-6	post-a2-7	post-a2-8	post-a2-9	post-a2-10	post-a2-11	post-a2-12	post-a2-13	post-a2-14	post-a2-15	post-a2-16	post-a2-17	post-a2-18	post-a2-19	post-a2-20	post-a2-21	post-a2-22	post-a2-23	post-a2-24	post-a2-25	post-a2-26	post-a2-27	post-a2-28	post-a2-29	post-a2-30	post-a2-31	post-a2-32	post-a2-33	post-a2-34	post-a2-35	post-a2-36	post-a2-37	post-a2-38	post-a2-39	post-a2-40	post-a2-41	post-a2-42	post-a2-43	post-a2-44	post-a2-45	post-a2-46	post-a2-47	post-a2-48	post-a2-49	post-a2-50	post-a2-51	post-a2-52	post-a2-53	post-a2-54	post-a2-55	post-a2-56	post-a2-57	post-a2-58	post-a2-59	post-a2-60	post-a2-61	post-a2-62	post-a2-63	Imm2-0	Imm2-1	Imm2-2	Imm2-3	Imm2-4	Imm2-5	Imm2-6	Imm2-7	Imm2-8	Imm2-9	Imm2-10	Imm2-11	Imm2-12	Imm2-13	Imm2-14	Imm2-15	Imm2-16	Imm2-17	Imm2-18	Imm2-19	Imm2-20	Imm2-21	Imm2-22	Imm2-23	Imm2-24	Imm2-25	Imm2-26	Imm2-27	Imm2-28	Imm2-29	Imm2-30	Imm2-31	Imm2-32	Imm2-33	Imm2-34	Imm2-35	Imm2-36	Imm2-37	Imm2-38	Imm2-39	Imm2-40	Imm2-41	Imm2-42	Imm2-43	Imm2-44	Imm2-45	Imm2-46	Imm2-47	Imm2-48	Imm2-49	Imm2-50	Imm2-51	Imm2-52	Imm2-53	Imm2-54	Imm2-55	Imm2-56	Imm2-57	Imm2-58	Imm2-59	Imm2-60	Imm2-61	Imm2-62	Imm2-63	Immigration2-done	Immigration2-done^	70	70^	71	71^	DFF-Array-64	wn=0.25u	wp=0.75u

x62	a2-48	a2-49	a2-50	a2-51	a2-52	a2-53	a2-54	a2-55	a2-56	a2-57	a2-58	a2-59	a2-60	a2-61	a2-62	a2-63	post-a2-48	post-a2-49	post-a2-50	post-a2-51	post-a2-52	post-a2-53	post-a2-54	post-a2-55	post-a2-56	post-a2-57	post-a2-58	post-a2-59	post-a2-60	post-a2-61	post-a2-62	post-a2-63	Fitness-Resolution-Pin	Fitness-Resolution-Pin^	TG-Array-16	wn=0.25u	wp=0.75u

x63	a2-48	a2-49	a2-50	a2-51	a2-52	a2-53	a2-54	a2-55	a2-56	a2-57	a2-58	a2-59	a2-60	a2-61	a2-62	a2-63	post-a2-32	post-a2-33	post-a2-34	post-a2-35	post-a2-36	post-a2-37	post-a2-38	post-a2-39	post-a2-40	post-a2-41	post-a2-42	post-a2-43	post-a2-44	post-a2-45	post-a2-46	post-a2-47	Fitness-Resolution-Pin^	Fitness-Resolution-Pin	TG-Array-16	wn=0.25u	wp=0.75u

x64	a2-32	a2-33	a2-34	a2-35	a2-36	a2-37	a2-38	a2-39	a2-40	a2-41	a2-42	a2-43	a2-44	a2-45	a2-46	a2-47	post-a2-32	post-a2-33	post-a2-34	post-a2-35	post-a2-36	post-a2-37	post-a2-38	post-a2-39	post-a2-40	post-a2-41	post-a2-42	post-a2-43	post-a2-44	post-a2-45	post-a2-46	post-a2-47	Fitness-Resolution-Pin	Fitness-Resolution-Pin^	TG-Array-16	wn=0.25u	wp=0.75u

x65	a2-32	a2-33	a2-34	a2-35	a2-36	a2-37	a2-38	a2-39	a2-40	a2-41	a2-42	a2-43	a2-44	a2-45	a2-46	a2-47	post-a2-16	post-a2-17	post-a2-18	post-a2-19	post-a2-20	post-a2-21	post-a2-22	post-a2-23	post-a2-24	post-a2-25	post-a2-26	post-a2-27	post-a2-28	post-a2-29	post-a2-30	post-a2-31	Fitness-Resolution-Pin^	Fitness-Resolution-Pin	TG-Array-16	wn=0.25u	wp=0.75u

x66	a2-16	a2-17	a2-18	a2-19	a2-20	a2-21	a2-22	a2-23	a2-24	a2-25	a2-26	a2-27	a2-28	a2-29	a2-30	a2-31	post-a2-16	post-a2-17	post-a2-18	post-a2-19	post-a2-20	post-a2-21	post-a2-22	post-a2-23	post-a2-24	post-a2-25	post-a2-26	post-a2-27	post-a2-28	post-a2-29	post-a2-30	post-a2-31	Fitness-Resolution-Pin	Fitness-Resolution-Pin^	TG-Array-16	wn=0.25u	wp=0.75u

x67	a2-32	a2-33	a2-34	a2-35	a2-36	a2-37	a2-38	a2-39	a2-40	a2-41	a2-42	a2-43	a2-44	a2-45	a2-46	a2-47	post-a2-0	post-a2-1	post-a2-2	post-a2-3	post-a2-4	post-a2-5	post-a2-6	post-a2-7	post-a2-8	post-a2-9	post-a2-10	post-a2-11	post-a2-12	post-a2-13	post-a2-14	post-a2-15	50^	50	TG-Array-16	wn=0.25u	wp=0.75u

x68	a2-16	a2-17	a2-18	a2-19	a2-20	a2-21	a2-22	a2-23	a2-24	a2-25	a2-26	a2-27	a2-28	a2-29	a2-30	a2-31	post-a2-0	post-a2-1	post-a2-2	post-a2-3	post-a2-4	post-a2-5	post-a2-6	post-a2-7	post-a2-8	post-a2-9	post-a2-10	post-a2-11	post-a2-12	post-a2-13	post-a2-14	post-a2-15	40^	40	TG-Array-16	wn=0.25u	wp=0.75u

x69	a2-0	a2-1	a2-2	a2-3	a2-4	a2-5	a2-6	a2-7	a2-8	a2-9	a2-10	a2-11	a2-12	a2-13	a2-14	a2-15	post-a2-0	post-a2-1	post-a2-2	post-a2-3	post-a2-4	post-a2-5	post-a2-6	post-a2-7	post-a2-8	post-a2-9	post-a2-10	post-a2-11	post-a2-12	post-a2-13	post-a2-14	post-a2-15	60	60^	TG-Array-16	wn=0.25u	wp=0.75u

x70	SPI-In2-clk-Pin	SPI-In2-clk-Pin^	INV	wn=16u	wp=48u

x71	SPI-In2-Line1	a2-63	a2-62	a2-61	a2-60	SPI-In2-clk-Pin	SPI-In2-clk-Pin^	Register-Line-4	wn=0.25u	wp=0.75u
x72	SPI-In2-Line2	a2-59	a2-58	a2-57	a2-56	SPI-In2-clk-Pin	SPI-In2-clk-Pin^	Register-Line-4	wn=0.25u	wp=0.75u
x73	SPI-In2-Line3	a2-55	a2-54	a2-53	a2-52	SPI-In2-clk-Pin	SPI-In2-clk-Pin^	Register-Line-4	wn=0.25u	wp=0.75u
x74	SPI-In2-Line4	a2-51	a2-50	a2-49	a2-48	SPI-In2-clk-Pin	SPI-In2-clk-Pin^	Register-Line-4	wn=0.25u	wp=0.75u

x75	a2-60	a2-47	a2-46	a2-45	a2-44	SPI-In2-clk-Pin	SPI-In2-clk-Pin^	Register-Line-4	wn=0.25u	wp=0.75u
x76	a2-56	a2-43	a2-42	a2-41	a2-40	SPI-In2-clk-Pin	SPI-In2-clk-Pin^	Register-Line-4	wn=0.25u	wp=0.75u
x77	a2-52	a2-39	a2-38	a2-37	a2-36	SPI-In2-clk-Pin	SPI-In2-clk-Pin^	Register-Line-4	wn=0.25u	wp=0.75u
x78	a2-48	a2-35	a2-34	a2-33	a2-32	SPI-In2-clk-Pin	SPI-In2-clk-Pin^	Register-Line-4	wn=0.25u	wp=0.75u

x79	a2-44	a2-31	a2-30	a2-29	a2-28	SPI-In2-clk-Pin	SPI-In2-clk-Pin^	Register-Line-4	wn=0.25u	wp=0.75u
x80	a2-40	a2-27	a2-26	a2-25	a2-24	SPI-In2-clk-Pin	SPI-In2-clk-Pin^	Register-Line-4	wn=0.25u	wp=0.75u
x81	a2-36	a2-23	a2-22	a2-21	a2-20	SPI-In2-clk-Pin	SPI-In2-clk-Pin^	Register-Line-4	wn=0.25u	wp=0.75u
x82	a2-32	a2-19	a2-18	a2-17	a2-16	SPI-In2-clk-Pin	SPI-In2-clk-Pin^	Register-Line-4	wn=0.25u	wp=0.75u

x83	a2-28	a2-15	a2-14	a2-13	a2-12	SPI-In2-clk-Pin	SPI-In2-clk-Pin^	Register-Line-4	wn=0.25u	wp=0.75u
x84	a2-24	a2-11	a2-10	a2-9	a2-8	SPI-In2-clk-Pin	SPI-In2-clk-Pin^	Register-Line-4	wn=0.25u	wp=0.75u
x85	a2-20	a2-7	a2-6	a2-5	a2-4	SPI-In2-clk-Pin	SPI-In2-clk-Pin^	Register-Line-4	wn=0.25u	wp=0.75u
x86	a2-16	a2-3	a2-2	a2-1	a2-0	SPI-In2-clk-Pin	SPI-In2-clk-Pin^	Register-Line-4	wn=0.25u	wp=0.75u


************************************************************************************************Arrays

.subckt	Register-Line-4	in	out1	out2	out3	out4	clk	clk^	wn=1u	wp=3u	le=0.18u
x1	in	out1	clk	clk^	Register	wn='wn'	wp='wp'	le='le'
x2	out1	out2	clk	clk^	Register	wn='wn'	wp='wp'	le='le'
x3	out2	out3	clk	clk^	Register	wn='wn'	wp='wp'	le='le'
x4	out3	out4	clk	clk^	Register	wn='wn'	wp='wp'	le='le'
.ends

.subckt	TG-Array-16	in1	in2	in3	in4	in5	in6	in7	in8	in9	in10	in11	in12	in13	in14	in15	in16	out1	out2	out3	out4	out5	out6	out7	out8	out9	out10	out11	out12	out13	out14	out15	out16	clk	clk^	wn=1u	wp=3u	le=0.18u
x1	in1	in2	in3	in4	out1	out2	out3	out4	clk	clk^	TG-Array-4	wn='wn'	wp='wp'	le='le'
x2	in5	in6	in7	in8	out5	out6	out7	out8	clk	clk^	TG-Array-4	wn='wn'	wp='wp'	le='le'
x3	in9	in10	in11	in12	out9	out10	out11	out12	clk	clk^	TG-Array-4	wn='wn'	wp='wp'	le='le'
x4	in13	in14	in15	in16	out13	out14	out15	out16	clk	clk^	TG-Array-4	wn='wn'	wp='wp'	le='le'
.ends

.subckt	TG-Array-4	in1	in2	in3	in4	out1	out2	out3	out4	clk	clk^	wn=1u	wp=3u	le=0.18u
x1	in1	out1	clk	clk^	TG	wn='wn'	wp='wp'	le='le'
x2	in2	out2	clk	clk^	TG	wn='wn'	wp='wp'	le='le'
x3	in3	out3	clk	clk^	TG	wn='wn'	wp='wp'	le='le'
x4	in4	out4	clk	clk^	TG	wn='wn'	wp='wp'	le='le'
.ends

.subckt	DFF-Array-64	in1	in2	in3	in4	in5	in6	in7	in8	in9	in10	in11	in12	in13	in14	in15	in16	in17	in18	in19	in20	in21	in22	in23	in24	in25	in26	in27	in28	in29	in30	in31	in32	in33	in34	in35	in36	in37	in38	in39	in40	in41	in42	in43	in44	in45	in46	in47	in48	in49	in50	in51	in52	in53	in54	in55	in56	in57	in58	in59	in60	in61	in62	in63	in64	out1	out2	out3	out4	out5	out6	out7	out8	out9	out10	out11	out12	out13	out14	out15	out16	out17	out18	out19	out20	out21	out22	out23	out24	out25	out26	out27	out28	out29	out30	out31	out32	out33	out34	out35	out36	out37	out38	out39	out40	out41	out42	out43	out44	out45	out46	out47	out48	out49	out50	out51	out52	out53	out54	out55	out56	out57	out58	out59	out60	out61	out62	out63	out64	clk	clk^	clk-chromosome	clk-chromosome^	clk-fitness	clk-fitness^	wn=1u	wp=3u	le=0.18u
x1	in1	in2	in3	in4	in5	in6	in7	in8	in9	in10	in11	in12	in13	in14	in15	in16	out1	out2	out3	out4	out5	out6	out7	out8	out9	out10	out11	out12	out13	out14	out15	out16	clk	clk^	DFF-Array-16	wn='wn'	wp='wp'	le='le'
x2	in17	in18	in19	in20	in21	in22	in23	in24	in25	in26	in27	in28	in29	in30	in31	in32	out17	out18	out19	out20	out21	out22	out23	out24	out25	out26	out27	out28	out29	out30	out31	out32	clk-chromosome	clk-chromosome^	DFF-Array-16	wn='wn'	wp='wp'	le='le'
x3	in33	in34	in35	in36	in37	in38	in39	in40	in41	in42	in43	in44	in45	in46	in47	in48	out33	out34	out35	out36	out37	out38	out39	out40	out41	out42	out43	out44	out45	out46	out47	out48	clk	clk^	DFF-Array-16	wn='wn'	wp='wp'	le='le'
x4	in49	in50	in51	in52	in53	in54	in55	in56	in57	in58	in59	in60	in61	in62	in63	in64	out49	out50	out51	out52	out53	out54	out55	out56	out57	out58	out59	out60	out61	out62	out63	out64	clk-fitness	clk-fitness^	DFF-Array-16	wn='wn'	wp='wp'	le='le'
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


************************************************************************************************Components

***2-Input XNOR (Pass Transistor Logic)
.subckt	XNOR2	in1	in2	in2^	out	wn=1u	wp=3u	le=0.18u
m1	out	in2^	in1	vdd	mp18	w=wp	l=le
m2	in1	in2	out	0	mn18	w=wn	l=le
m3	out	in1	in2^	vdd	mp18	w=wp	l=le
m4	out	in1	in2	0	mn18	w=wn	l=le
.ends

***2-Bit Decoder without forth output
.subckt	Decoder2Bit-3output	in0	in1	out0	out1	out2	wn=1u	wp=3u	le=0.18u	*in0 & out0 are lsb
x1	in0	in0^	INV	wn='wn'	wp='wp'	le='le'
x2	in1	in1^	INV	wn='wn'	wp='wp'	le='le'

x3	in0	in1	out0	NOR2	wn='wn'	wp='wp'	le='le'
x4	in0^	in1	out1	NOR2	wn='wn'	wp='wp'	le='le'
x5	in0	in1^	out2	NOR2	wn='wn'	wp='wp'	le='le'
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

***Full Register
.subckt	Register	in	out	clk	clk^	wn=1u	wp=3u	le=0.18u
x1	in	a	clk^	clk	TG	wn='wn'	wp='wp'	le='le'
x2	a	b	INV	wn='wn'	wp='wp'	le='le'
x3	b	c	clk	clk^	TG	wn='wn'	wp='wp'	le='le'
x4	c	out	INV	wn='wn'	wp='wp'	le='le'
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

***10-Transistor 2-Input NOR***
.subckt	NOR2-m10	in1	in2	out	wn=1u	wp=3u	le=0.18u
m1	a	in2	vdd	vdd	mp18	w='2*wp'	l=le	m=10
m2	out	in1	a	vdd	mp18	w='2*wp'	l=le	m=10
m3	out	in1	0	0	mn18	w=wn	l=le	m=10
m4	out	in2	0	0	mn18	w=wn	l=le	m=10
.ends

.ends Immigration