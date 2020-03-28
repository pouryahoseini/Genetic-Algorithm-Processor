*Crossover & Mutation Module 

.subckt	Crossover&Mutation	clk-Main	clk-Main^	Initialize	Initialize^	Replica-Reset	Replica-Reset^	Chromosome-Resolution-Pin	Crossover-Out-Ack-Pin	Crossover-Out-Req-Pin	Crossover-Out-Data-Pin	Crossover-In-Ack-pin	Crossover-In-Req-Pin	Crossover-In-Data-Pin	Crossover&Mutation-Start	Crossover&Mutation-Start^	Crossover&Mutation-done	Master-Slave-Select-Pin-1	Master-Slave-Select-Pin-0	Uniform-Crossover-Pin	Crossover-Type-Pin-1	Crossover-Type-Pin-0	Uniform-Mutation-Pin	One-Point-Mutation-Pin	Fitness-Estimation-Stage2	Parent1-0	Parent1-1	Parent1-2	Parent1-3	Parent1-4	Parent1-5	Parent1-6	Parent1-7	Parent1-8	Parent1-9	Parent1-10	Parent1-11	Parent1-12	Parent1-13	Parent1-14	Parent1-15	Parent1-16	Parent1-17	Parent1-18	Parent1-19	Parent1-20	Parent1-21	Parent1-22	Parent1-23	Parent1-24	Parent1-25	Parent1-26	Parent1-27	Parent1-28	Parent1-29	Parent1-30	Parent1-31	Parent2-0	Parent2-1	Parent2-2	Parent2-3	Parent2-4	Parent2-5	Parent2-6	Parent2-7	Parent2-8	Parent2-9	Parent2-10	Parent2-11	Parent2-12	Parent2-13	Parent2-14	Parent2-15	Parent2-16	Parent2-17	Parent2-18	Parent2-19	Parent2-20	Parent2-21	Parent2-22	Parent2-23	Parent2-24	Parent2-25	Parent2-26	Parent2-27	Parent2-28	Parent2-29	Parent2-30	Parent2-31	Offspring1-0	Offspring1-1	Offspring1-2	Offspring1-3	Offspring1-4	Offspring1-5	Offspring1-6	Offspring1-7	Offspring1-8	Offspring1-9	Offspring1-10	Offspring1-11	Offspring1-12	Offspring1-13	Offspring1-14	Offspring1-15	Offspring1-16	Offspring1-17	Offspring1-18	Offspring1-19	Offspring1-20	Offspring1-21	Offspring1-22	Offspring1-23	Offspring1-24	Offspring1-25	Offspring1-26	Offspring1-27	Offspring1-28	Offspring1-29	Offspring1-30	Offspring1-31	Offspring2-0	Offspring2-1	Offspring2-2	Offspring2-3	Offspring2-4	Offspring2-5	Offspring2-6	Offspring2-7	Offspring2-8	Offspring2-9	Offspring2-10	Offspring2-11	Offspring2-12	Offspring2-13	Offspring2-14	Offspring2-15	Offspring2-16	Offspring2-17	Offspring2-18	Offspring2-19	Offspring2-20	Offspring2-21	Offspring2-22	Offspring2-23	Offspring2-24	Offspring2-25	Offspring2-26	Offspring2-27	Offspring2-28	Offspring2-29	Offspring2-30	Offspring2-31	Crossover-Rate-Pin-0	Crossover-Rate-Pin-1	Crossover-Rate-Pin-2	Crossover-Rate-Pin-3	Crossover-Rate-Pin-4	Crossover-Rate-Pin-5	Crossover-Rate-Pin-6	Mutation-Rate-Pin-0	Mutation-Rate-Pin-1	Mutation-Rate-Pin-2	Mutation-Rate-Pin-3	Mutation-Rate-Pin-4	Mutation-Rate-Pin-5	Mutation-Rate-Pin-6	RNG-Pin-0	RNG-Pin-1	rng232	rng233	rng0	rng1	rng2	rng3	rng4	rng5	rng6	rng7	rng8	rng9	rng10	rng11	rng12	rng13	rng14	rng15	rng16	rng17	rng18	rng19	rng20	rng21	rng22	rng23	rng24	rng25	rng26	rng27	rng28	rng29	rng30	rng31	rng32	rng33	rng34	rng35	rng36	rng37	rng38	rng39	rng40	rng41	rng42	rng43	rng44	rng45	rng46	rng47	rng48	rng49	rng50	rng51	rng52	rng53	rng54	rng55	rng56	rng57	rng58	rng59	rng60	rng61	rng62	rng63	rng64	rng65	rng66	rng67	rng68	rng69	rng70	rng71	rng72	rng73	rng74	rng75	rng76	rng77	rng78	rng79	rng80	rng81	rng82	rng83	rng84	rng85	rng86	rng87	rng88	rng89	rng90	rng91	rng92	rng93	rng94	rng95	rng96	rng97	rng98	rng99	rng100	rng101	rng102	rng103	rng104	rng105	rng106	rng107	rng108	rng109	rng110	rng111	rng112	rng113	rng114	rng115	rng116	rng117	rng118	rng119	rng120	rng121	rng122	rng123	rng124	rng125	rng126	rng127	rng128	rng129	rng130	rng131	rng132	rng133	rng134	rng135	rng136	rng137	rng138	rng139	rng140	rng141	rng142	rng143	rng144	rng145	rng146	rng147	rng148	rng149	rng150	rng151	rng152	rng153	rng154	rng155	rng156	rng157	rng158	rng159	rng160	rng161	rng162	rng163	rng164	rng165	rng166	rng167

x900	clk-Crossover&Mutation	900	INV	wn=11u	wp=33u	le=0.25u
x901	900	delayed-clk-Crossover&Mutation	INV	wn=11u	wp=33u	le=0.25u

*crossover decoders
x1	delayed-clk-Crossover&Mutation	stage1	Uniform-Crossover-Pin^	1	1^	AND3	wn=4u	wp=12u
x2	rng7	rng8	rng9	rng10	rng11	cadd1-0	cadd1-1	cadd1-2	cadd1-3	cadd1-4	1	1^	Latch-Array-5	wn=1u	wp=3u
x3	rng12	rng13	rng14	rng15	rng16	cadd2-0	cadd2-1	cadd2-2	cadd2-3	cadd2-4	1	1^	Latch-Array-5	wn=1u	wp=3u

x4	Chromosome-Resolution-Pin	cadd1-4	post-cadd1-4	NAND2	wn=1u	wp=3u
x5	Chromosome-Resolution-Pin	cadd2-4	post-cadd2-4	NAND2	wn=1u	wp=3u

x6	cadd1-0	cadd1-1	cadd1-2	cadd1-3	post-cadd1-4	cdec1-0	cdec1-1	cdec1-2	cdec1-3	cdec1-4	cdec1-5	cdec1-6	cdec1-7	cdec1-8	cdec1-9	cdec1-10	cdec1-11	cdec1-12	cdec1-13	cdec1-14	cdec1-15	cdec1-16	cdec1-17	cdec1-18	cdec1-19	cdec1-20	cdec1-21	cdec1-22	cdec1-23	cdec1-24	cdec1-25	cdec1-26	cdec1-27	cdec1-28	cdec1-29	cdec1-30	cdec1-31	Decoder_Crossover	wn=0.25u	wp=0.75u
x7	cadd2-0	cadd2-1	cadd2-2	cadd2-3	post-cadd2-4	cdec2-0	cdec2-1	cdec2-2	cdec2-3	cdec2-4	cdec2-5	cdec2-6	cdec2-7	cdec2-8	cdec2-9	cdec2-10	cdec2-11	cdec2-12	cdec2-13	cdec2-14	cdec2-15	cdec2-16	cdec2-17	cdec2-18	cdec2-19	cdec2-20	cdec2-21	cdec2-22	cdec2-23	cdec2-24	cdec2-25	cdec2-26	cdec2-27	cdec2-28	cdec2-29	cdec2-30	cdec2-31	Decoder_Crossover	wn=0.25u	wp=0.75u

*mutation decoders
x8	delayed-clk-Crossover&Mutation	stage3	Uniform-Mutation-Pin^	10	10^	AND3	wn=4u	wp=12u
x9	rng31	rng32	rng33	rng34	rng35	madd1-0	madd1-1	madd1-2	madd1-3	madd1-4	10	10^	Latch-Array-5	wn=1u	wp=3u
x10	rng36	rng37	rng38	rng39	rng40	madd2-0	madd2-1	madd2-2	madd2-3	madd2-4	10	10^	Latch-Array-5	wn=1u	wp=3u

x11	Chromosome-Resolution-Pin	madd1-4	post-madd1-4	post-madd1-4^	AND2	wn=1u	wp=3u
x12	Chromosome-Resolution-Pin	madd2-4	post-madd2-4	post-madd2-4^	AND2	wn=1u	wp=3u

x13	madd1-0	madd1-1	madd1-2	madd1-3	post-madd1-4	mdec1-0	mdec1-1	mdec1-2	mdec1-3	mdec1-4	mdec1-5	mdec1-6	mdec1-7	mdec1-8	mdec1-9	mdec1-10	mdec1-11	mdec1-12	mdec1-13	mdec1-14	mdec1-15	mdec1-16	mdec1-17	mdec1-18	mdec1-19	mdec1-20	mdec1-21	mdec1-22	mdec1-23	mdec1-24	mdec1-25	mdec1-26	mdec1-27	mdec1-28	mdec1-29	mdec1-30	mdec1-31	Decoder5Bit	wn=0.25u	wp=0.75u
x14	madd2-0	madd2-1	madd2-2	madd2-3	post-madd2-4	mdec2-0	mdec2-1	mdec2-2	mdec2-3	mdec2-4	mdec2-5	mdec2-6	mdec2-7	mdec2-8	mdec2-9	mdec2-10	mdec2-11	mdec2-12	mdec2-13	mdec2-14	mdec2-15	mdec2-16	mdec2-17	mdec2-18	mdec2-19	mdec2-20	mdec2-21	mdec2-22	mdec2-23	mdec2-24	mdec2-25	mdec2-26	mdec2-27	mdec2-28	mdec2-29	mdec2-30	mdec2-31	Decoder5Bit	wn=0.25u	wp=0.75u

*crossover common comparator
x15	delayed-clk-Crossover&Mutation	stage1	Uniform-Crossover-Pin^	20	20^	AND3	wn=1u	wp=3u

x16	Crossover-Rate-Pin-0	Crossover-Rate-Pin-1	Crossover-Rate-Pin-2	Crossover-Rate-Pin-3	Crossover-Rate-Pin-4	Crossover-Rate-Pin-5	Crossover-Rate-Pin-6	Crossover-Rate-Pin-0^	Crossover-Rate-Pin-1^	Crossover-Rate-Pin-2^	Crossover-Rate-Pin-3^	Crossover-Rate-Pin-4^	Crossover-Rate-Pin-5^	Crossover-Rate-Pin-6^	INV-Array-7	wn=0.25u	wp=0.75u

x17	20	rng0	rng1	rng2	rng3	rng4	rng5	rng6	Crossover-Rate-Pin-0	Crossover-Rate-Pin-1	Crossover-Rate-Pin-2	Crossover-Rate-Pin-3	Crossover-Rate-Pin-4	Crossover-Rate-Pin-5	Crossover-Rate-Pin-6	Crossover-Rate-Pin-0^	Crossover-Rate-Pin-1^	Crossover-Rate-Pin-2^	Crossover-Rate-Pin-3^	Crossover-Rate-Pin-4^	Crossover-Rate-Pin-5^	Crossover-Rate-Pin-6^	pre-crossover-rate-enable	Domino-Comparator	wn=1u	wp=3u

x18	clk-Crossover&Mutation^	stage1	Uniform-Crossover-Pin^	21	21^	AND3	wn=8u	wp=24u

x19	pre-crossover-rate-enable	crossover-rate-enable	21	21^	DFF	wn=2u	wp=6u

*mutation common comparators
x20	delayed-clk-Crossover&Mutation	stage3	Uniform-Mutation-Pin^	30	30^	AND3	wn=2u	wp=6u

x21	Mutation-Rate-Pin-0	Mutation-Rate-Pin-1	Mutation-Rate-Pin-2	Mutation-Rate-Pin-3	Mutation-Rate-Pin-4	Mutation-Rate-Pin-5	Mutation-Rate-Pin-6	Mutation-Rate-Pin-0^	Mutation-Rate-Pin-1^	Mutation-Rate-Pin-2^	Mutation-Rate-Pin-3^	Mutation-Rate-Pin-4^	Mutation-Rate-Pin-5^	Mutation-Rate-Pin-6^	INV-Array-7	wn=0.5u	wp=1.5u

x22	30	rng17	rng18	rng19	rng20	rng21	rng22	rng23	Mutation-Rate-Pin-0	Mutation-Rate-Pin-1	Mutation-Rate-Pin-2	Mutation-Rate-Pin-3	Mutation-Rate-Pin-4	Mutation-Rate-Pin-5	Mutation-Rate-Pin-6	Mutation-Rate-Pin-0^	Mutation-Rate-Pin-1^	Mutation-Rate-Pin-2^	Mutation-Rate-Pin-3^	Mutation-Rate-Pin-4^	Mutation-Rate-Pin-5^	Mutation-Rate-Pin-6^	pre-mutation-rate-enable1	Domino-Comparator	wn=1u	wp=3u
x23	30	rng24	rng25	rng26	rng27	rng28	rng29	rng30	Mutation-Rate-Pin-0	Mutation-Rate-Pin-1	Mutation-Rate-Pin-2	Mutation-Rate-Pin-3	Mutation-Rate-Pin-4	Mutation-Rate-Pin-5	Mutation-Rate-Pin-6	Mutation-Rate-Pin-0^	Mutation-Rate-Pin-1^	Mutation-Rate-Pin-2^	Mutation-Rate-Pin-3^	Mutation-Rate-Pin-4^	Mutation-Rate-Pin-5^	Mutation-Rate-Pin-6^	pre-mutation-rate-enable2	Domino-Comparator	wn=1u	wp=3u

x24	clk-Crossover&Mutation^	stage3	Uniform-Mutation-Pin^	31	31^	AND3	wn=16u	wp=48u

x25	pre-mutation-rate-enable1	mutation-rate-enable1	31	31^	DFF	wn=2u	wp=6u
x26	pre-mutation-rate-enable2	mutation-rate-enable2	31	31^	DFF	wn=2u	wp=6u

*uniform comparators
x27	stage0	40	clk-Crossover&Mutation^	clk-Crossover&Mutation	Half-Register	wn=14u	wp=42u

x28	stage0	stage1	41	41^	OR2	wn=7u	wp=21u
x29	41	42	clk-Crossover&Mutation^	clk-Crossover&Mutation	Half-Register	wn=7u	wp=21u

x30	Crossover-Rate-Pin-0	Crossover-Rate-Pin-1	Crossover-Rate-Pin-2	Crossover-Rate-Pin-3	Crossover-Rate-Pin-4	Crossover-Rate-Pin-5	Crossover-Rate-Pin-6	Mutation-Rate-Pin-0	Mutation-Rate-Pin-1	Mutation-Rate-Pin-2	Mutation-Rate-Pin-3	Mutation-Rate-Pin-4	Mutation-Rate-Pin-5	Mutation-Rate-Pin-6	ratea0	ratea1	ratea2	ratea3	ratea4	ratea5	ratea6	40	MUX-Array-7	wn=1u	wp=3u
x31	Crossover-Rate-Pin-0	Crossover-Rate-Pin-1	Crossover-Rate-Pin-2	Crossover-Rate-Pin-3	Crossover-Rate-Pin-4	Crossover-Rate-Pin-5	Crossover-Rate-Pin-6	Mutation-Rate-Pin-0	Mutation-Rate-Pin-1	Mutation-Rate-Pin-2	Mutation-Rate-Pin-3	Mutation-Rate-Pin-4	Mutation-Rate-Pin-5	Mutation-Rate-Pin-6	rateb0	rateb1	rateb2	rateb3	rateb4	rateb5	rateb6	42	MUX-Array-7	wn=0.5u	wp=1.5u

x32	ratea0	ratea1	ratea2	ratea3	ratea4	ratea5	ratea6	ratea0^	ratea1^	ratea2^	ratea3^	ratea4^	ratea5^	ratea6^	INV-Array-7	wn=1u	wp=3u
x33	rateb0	rateb1	rateb2	rateb3	rateb4	rateb5	rateb6	rateb0^	rateb1^	rateb2^	rateb3^	rateb4^	rateb5^	rateb6^	INV-Array-7	wn=0.5u	wp=1.5u

x34	Uniform-Crossover-Pin	Uniform-Mutation-Pin	43	NOR2	wn=1u	wp=3u
x35	43	clk-Crossover&Mutation^	44	NOR2	wn=6u	wp=18u

x36	44	rng0	rng1	rng2	rng3	rng4	rng5	rng6	rng7	rng8	rng9	rng10	rng11	rng12	rng13	rng14	rng15	rng16	rng17	rng18	rng19	rng20	rng21	rng22	rng23	rng24	rng25	rng26	rng27	rng28	rng29	rng30	rng31	rng32	rng33	rng34	rng35	rng36	rng37	rng38	rng39	rng40	rng41	rng42	rng43	rng44	rng45	rng46	rng47	rng48	rng49	rng50	rng51	rng52	rng53	rng54	rng55	rng56	rng57	rng58	rng59	rng60	rng61	rng62	rng63	rng64	rng65	rng66	rng67	rng68	rng69	rng70	rng71	rng72	rng73	rng74	rng75	rng76	rng77	rng78	rng79	rng80	rng81	rng82	rng83	rng84	rng85	rng86	rng87	rng88	rng89	rng90	rng91	rng92	rng93	rng94	rng95	rng96	rng97	rng98	rng99	rng100	rng101	rng102	rng103	rng104	rng105	rng106	rng107	rng108	rng109	rng110	rng111	ratea0	ratea1	ratea2	ratea3	ratea4	ratea5	ratea6	ratea0^	ratea1^	ratea2^	ratea3^	ratea4^	ratea5^	ratea6^	uniform0	uniform1	uniform2	uniform3	uniform4	uniform5	uniform6	uniform7	uniform8	uniform9	uniform10	uniform11	uniform12	uniform13	uniform14	uniform15	Domino-Comparator-Array-16	wn=0.25u	wp=0.75u

x37	44	rng112	rng113	rng114	rng115	rng116	rng117	rng118	rng119	rng120	rng121	rng122	rng123	rng124	rng125	rng126	rng127	rng128	rng129	rng130	rng131	rng132	rng133	rng134	rng135	rng136	rng137	rng138	rng139	rng140	rng141	rng142	rng143	rng144	rng145	rng146	rng147	rng148	rng149	rng150	rng151	rng152	rng153	rng154	rng155	rng156	rng157	rng158	rng159	rng160	rng161	rng162	rng163	rng164	rng165	rng166	rng167	rateb0	rateb1	rateb2	rateb3	rateb4	rateb5	rateb6	rateb0^	rateb1^	rateb2^	rateb3^	rateb4^	rateb5^	rateb6^	uniform16	uniform17	uniform18	uniform19	uniform20	uniform21	uniform22	uniform23	Domino-Comparator-Array-8	wn=0.25u	wp=0.75u

*crossover's main part
x38	Crossover-Type-Pin-0	50	Crossover&Mutation-Start	Crossover&Mutation-Start^	DFF	wn=4u	wp=12u
x39	Crossover-Type-Pin-1	51	Crossover&Mutation-Start	Crossover&Mutation-Start^	DFF	wn=4u	wp=12u

x40	50	51	two-point-crossover-enable	two-point-crossover-enable^	AND2	wn=2u	wp=6u
x41	50	51	one-point-crossover-enable	one-point-crossover-enable^	OR2	wn=4u	wp=12u

x42	Uniform-Crossover-Pin	Uniform-Crossover-Pin^	INV	wn=2u	wp=6u

x43	Parent1-0	Parent1-1	Parent1-2	Parent1-3	Parent1-4	Parent1-5	Parent1-6	Parent1-7	Parent1-8	Parent1-9	Parent1-10	Parent1-11	Parent1-12	Parent1-13	Parent1-14	Parent1-15	Parent1-16	Parent1-17	Parent1-18	Parent1-19	Parent1-20	Parent1-21	Parent1-22	Parent1-23	Parent2-0	Parent2-1	Parent2-2	Parent2-3	Parent2-4	Parent2-5	Parent2-6	Parent2-7	Parent2-8	Parent2-9	Parent2-10	Parent2-11	Parent2-12	Parent2-13	Parent2-14	Parent2-15	Parent2-16	Parent2-17	Parent2-18	Parent2-19	Parent2-20	Parent2-21	Parent2-22	Parent2-23	germ1-0	germ1-1	germ1-2	germ1-3	germ1-4	germ1-5	germ1-6	germ1-7	germ1-8	germ1-9	germ1-10	germ1-11	germ1-12	germ1-13	germ1-14	germ1-15	germ1-16	germ1-17	germ1-18	germ1-19	germ1-20	germ1-21	germ1-22	germ1-23	germ2-0	germ2-1	germ2-2	germ2-3	germ2-4	germ2-5	germ2-6	germ2-7	germ2-8	germ2-9	germ2-10	germ2-11	germ2-12	germ2-13	germ2-14	germ2-15	germ2-16	germ2-17	germ2-18	germ2-19	germ2-20	germ2-21	germ2-22	germ2-23	cdec1-0	cdec1-1	cdec1-2	cdec1-3	cdec1-4	cdec1-5	cdec1-6	cdec1-7	cdec1-8	cdec1-9	cdec1-10	cdec1-11	cdec1-12	cdec1-13	cdec1-14	cdec1-15	cdec1-16	cdec1-17	cdec1-18	cdec1-19	cdec1-20	cdec1-21	cdec1-22	cdec1-23	cdec2-0	cdec2-1	cdec2-2	cdec2-3	cdec2-4	cdec2-5	cdec2-6	cdec2-7	cdec2-8	cdec2-9	cdec2-10	cdec2-11	cdec2-12	cdec2-13	cdec2-14	cdec2-15	cdec2-16	cdec2-17	cdec2-18	cdec2-19	cdec2-20	cdec2-21	cdec2-22	cdec2-23	uniform0	uniform1	uniform2	uniform3	uniform4	uniform5	uniform6	uniform7	uniform8	uniform9	uniform10	uniform11	uniform12	uniform13	uniform14	uniform15	uniform16	uniform17	uniform18	uniform19	uniform20	uniform21	uniform22	uniform23	two-point-crossover-enable	one-point-crossover-enable	crossover-rate-enable	Uniform-Crossover-Pin	Uniform-Crossover-Pin^	stage1	clk-Crossover&Mutation^	Crossover-Processing-24	wn=0.25u	wp=0.75u

x44	Parent1-24	Parent1-25	Parent1-26	Parent1-27	Parent1-28	Parent1-29	Parent1-30	Parent1-31	Parent2-24	Parent2-25	Parent2-26	Parent2-27	Parent2-28	Parent2-29	Parent2-30	Parent2-31	germ1-24	germ1-25	germ1-26	germ1-27	germ1-28	germ1-29	germ1-30	germ1-31	germ2-24	germ2-25	germ2-26	germ2-27	germ2-28	germ2-29	germ2-30	germ2-31	cdec1-24	cdec1-25	cdec1-26	cdec1-27	cdec1-28	cdec1-29	cdec1-30	cdec1-31	cdec2-24	cdec2-25	cdec2-26	cdec2-27	cdec2-28	cdec2-29	cdec2-30	cdec2-31	uniform16	uniform17	uniform18	uniform19	uniform20	uniform21	uniform22	uniform23	two-point-crossover-enable	one-point-crossover-enable	crossover-rate-enable	Uniform-Crossover-Pin	Uniform-Crossover-Pin^	stage2	clk-Crossover&Mutation^	Crossover-Processing-8	wn=0.25u	wp=0.75u

*mutation's main part
x45	One-Point-Mutation-Pin	one-point-mutation-enable	Crossover&Mutation-Start	Crossover&Mutation-Start^	DFF	wn=4u	wp=12u

x46	Uniform-Mutation-Pin	Uniform-Mutation-Pin^	INV	wn=2u	wp=6u

x47	germ1-0	germ1-1	germ1-2	germ1-3	germ1-4	germ1-5	germ1-6	germ1-7	germ1-8	germ1-9	germ1-10	germ1-11	germ1-12	germ1-13	germ1-14	germ1-15	Child1-0	Child1-1	Child1-2	Child1-3	Child1-4	Child1-5	Child1-6	Child1-7	Child1-8	Child1-9	Child1-10	Child1-11	Child1-12	Child1-13	Child1-14	Child1-15	mdec1-0	mdec1-1	mdec1-2	mdec1-3	mdec1-4	mdec1-5	mdec1-6	mdec1-7	mdec1-8	mdec1-9	mdec1-10	mdec1-11	mdec1-12	mdec1-13	mdec1-14	mdec1-15	uniform0	uniform1	uniform2	uniform3	uniform4	uniform5	uniform6	uniform7	uniform8	uniform9	uniform10	uniform11	uniform12	uniform13	uniform14	uniform15	one-point-mutation-enable	mutation-rate-enable1	Uniform-Mutation-Pin	Uniform-Mutation-Pin^	stage2	clk-Crossover&Mutation^	Mutation-Processing-16	wn=0.25u	wp=0.75u

x48	germ1-16	germ1-17	germ1-18	germ1-19	germ1-20	germ1-21	germ1-22	germ1-23	germ1-24	germ1-25	germ1-26	germ1-27	germ1-28	germ1-29	germ1-30	germ1-31	Child1-16	Child1-17	Child1-18	Child1-19	Child1-20	Child1-21	Child1-22	Child1-23	Child1-24	Child1-25	Child1-26	Child1-27	Child1-28	Child1-29	Child1-30	Child1-31	mdec1-16	mdec1-17	mdec1-18	mdec1-19	mdec1-20	mdec1-21	mdec1-22	mdec1-23	mdec1-24	mdec1-25	mdec1-26	mdec1-27	mdec1-28	mdec1-29	mdec1-30	mdec1-31	uniform0	uniform1	uniform2	uniform3	uniform4	uniform5	uniform6	uniform7	uniform8	uniform9	uniform10	uniform11	uniform12	uniform13	uniform14	uniform15	one-point-mutation-enable	mutation-rate-enable1	Uniform-Mutation-Pin	Uniform-Mutation-Pin^	x-stage3	clk-Crossover&Mutation^	Mutation-Processing-16	wn=0.25u	wp=0.75u

x49	germ2-0	germ2-1	germ2-2	germ2-3	germ2-4	germ2-5	germ2-6	germ2-7	Child2-0	Child2-1	Child2-2	Child2-3	Child2-4	Child2-5	Child2-6	Child2-7	mdec2-0	mdec2-1	mdec2-2	mdec2-3	mdec2-4	mdec2-5	mdec2-6	mdec2-7	uniform16	uniform17	uniform18	uniform19	uniform20	uniform21	uniform22	uniform23	one-point-mutation-enable	mutation-rate-enable2	Uniform-Mutation-Pin	Uniform-Mutation-Pin^	stage3	clk-Crossover&Mutation^	x-stage3	Mutation-Processing-8	wn=0.25u	wp=0.75u

x50	germ2-8	germ2-9	germ2-10	germ2-11	germ2-12	germ2-13	germ2-14	germ2-15	germ2-16	germ2-17	germ2-18	germ2-19	germ2-20	germ2-21	germ2-22	germ2-23	germ2-24	germ2-25	germ2-26	germ2-27	germ2-28	germ2-29	germ2-30	germ2-31	Child2-8	Child2-9	Child2-10	Child2-11	Child2-12	Child2-13	Child2-14	Child2-15	Child2-16	Child2-17	Child2-18	Child2-19	Child2-20	Child2-21	Child2-22	Child2-23	Child2-24	Child2-25	Child2-26	Child2-27	Child2-28	Child2-29	Child2-30	Child2-31	mdec2-8	mdec2-9	mdec2-10	mdec2-11	mdec2-12	mdec2-13	mdec2-14	mdec2-15	mdec2-16	mdec2-17	mdec2-18	mdec2-19	mdec2-20	mdec2-21	mdec2-22	mdec2-23	mdec2-24	mdec2-25	mdec2-26	mdec2-27	mdec2-28	mdec2-29	mdec2-30	mdec2-31	uniform0	uniform1	uniform2	uniform3	uniform4	uniform5	uniform6	uniform7	uniform8	uniform9	uniform10	uniform11	uniform12	uniform13	uniform14	uniform15	uniform16	uniform17	uniform18	uniform19	uniform20	uniform21	uniform22	uniform23	one-point-mutation-enable	mutation-rate-enable2	Uniform-Mutation-Pin	Uniform-Mutation-Pin^	stage4	clk-Crossover&Mutation^	Mutation-Processing-24	wn=0.25u	wp=0.75u

*offspring exchange
x51	Master-Slave-Select-Pin-1	crossover-in-invert	invert	invert^	AND2	wn=8u	wp=24u

x52	Child2-0	Child2-1	Child2-2	Child2-3	Child2-4	Child2-5	Child2-6	Child2-7	Child2-8	Child2-9	Child2-10	Child2-11	Child2-12	Child2-13	Child2-14	Child2-15	Child2-16	Child2-17	Child2-18	Child2-19	Child2-20	Child2-21	Child2-22	Child2-23	Child2-24	Child2-25	Child2-26	Child2-27	Child2-28	Child2-29	Child2-30	Child2-31	Child1-0	Child1-1	Child1-2	Child1-3	Child1-4	Child1-5	Child1-6	Child1-7	Child1-8	Child1-9	Child1-10	Child1-11	Child1-12	Child1-13	Child1-14	Child1-15	Child1-16	Child1-17	Child1-18	Child1-19	Child1-20	Child1-21	Child1-22	Child1-23	Child1-24	Child1-25	Child1-26	Child1-27	Child1-28	Child1-29	Child1-30	Child1-31	Offspring1-0	Offspring1-1	Offspring1-2	Offspring1-3	Offspring1-4	Offspring1-5	Offspring1-6	Offspring1-7	Offspring1-8	Offspring1-9	Offspring1-10	Offspring1-11	Offspring1-12	Offspring1-13	Offspring1-14	Offspring1-15	Offspring1-16	Offspring1-17	Offspring1-18	Offspring1-19	Offspring1-20	Offspring1-21	Offspring1-22	Offspring1-23	Offspring1-24	Offspring1-25	Offspring1-26	Offspring1-27	Offspring1-28	Offspring1-29	Offspring1-30	Offspring1-31	Offspring2-0	Offspring2-1	Offspring2-2	Offspring2-3	Offspring2-4	Offspring2-5	Offspring2-6	Offspring2-7	Offspring2-8	Offspring2-9	Offspring2-10	Offspring2-11	Offspring2-12	Offspring2-13	Offspring2-14	Offspring2-15	Offspring2-16	Offspring2-17	Offspring2-18	Offspring2-19	Offspring2-20	Offspring2-21	Offspring2-22	Offspring2-23	Offspring2-24	Offspring2-25	Offspring2-26	Offspring2-27	Offspring2-28	Offspring2-29	Offspring2-30	Offspring2-31	invert	invert^	MUX-Pair-Array-32-no-INV	wn=0.25u	wp=0.75u

*sender
x53	50	50^	INV	wn=0.25u	wp=0.75u
x54	51	50	50^	60	XOR2	wn=0.25u	wp=0.75u
x55	60	crossover-rate-enable	61	61^	AND2	wn=0.25u	wp=0.75u
x56	invert	61	61^	62	XOR2	wn=0.25u	wp=0.75u
x57	62	Crossover-Out-Data-Pin	sendout	sendout^	DFF	wn=0.25u	wp=0.75u

x58	sendout	Initialize^	63	63^	AND2	wn=0.25u	wp=0.75u
x59	63	64	Crossover-Out-Req-Pin	C-element	wn=0.25u	wp=0.75u
x60	Initialize^	Crossover-Out-Ack-Pin	65	65^	AND2	wn=0.25u	wp=0.75u
x61	Crossover-Out-Req-Pin	65	66	C-element	wn=0.25u	wp=0.75u
x62	66	Initialize	64	NOR2	wn=0.25u	wp=0.75u

x63	stage2	stage3	stage4	70	70^	OR3	wn=1u	wp=3u
x64	Master-Slave-Select-Pin-0	Master-Slave-Select-Pin-0^	INV	wn=0.5u	wp=1.5u
x65	delayed-received	Master-Slave-Select-Pin-1	Master-Slave-Select-Pin-0^	71	NAND3	wn=0.5u	wp=1.5u
x66	Master-Slave-Select-Pin-1	Master-Slave-Select-Pin-1^	INV	wn=0.5u	wp=1.5u
x67	Master-Slave-Select-Pin-1^	Master-Slave-Select-Pin-0	72	NAND2	wn=0.5u	wp=1.5u
x68	71	72	73	NAND2	wn=0.5u	wp=1.5u
x69	70	73	Uniform-Crossover-Pin^	sendout	sendout^	AND3	wn=1u	wp=3u

*receiver
x70	Crossover-In-Req-Pin	Initialize^	80	80^	AND2-m10	wn=4u	wp=12u	*m=10
x71	80	81	Crossover-In-Ack-Pin	C-element-m10	wn=4u	wp=12u	*m=10
x72	rstage1	Initialize	82	NOR2-m10	wn=4u	wp=12u	*m=10
x73	82	Crossover-In-Ack-Pin	83	C-element-m10	wn=4u	wp=12u	*m=10
x74	83	Initialize	81	NOR2-m10	wn=4u	wp=12u	*m=10

x75	Crossover-In-Ack-Pin	Crossover-In-Ack-Pin^	INV	wn=20u	wp=60u
x76	83	Crossover-In-Ack-Pin	Crossover-In-Ack-Pin^	84	XNOR2-m10	wn=4u	wp=12u	*m=10
x77	84	received	Replica-Reset	Crossover&Mutation-Start^	85	NOR4-m10	wn=4u	wp=12u	*m=10

x78	Crossover-In-Data-Pin	86	Crossover-In-Ack-Pin	Crossover-In-Ack-Pin^	DFF	wn=8u	wp=24u
x79	received	received^	INV	wn=10u	wp=30u
x80	86	crossover-in-invert	received	received^	DFF	wn=8u	wp=24u

x81	85	85^	INV	wn=20u	wp=60u
x82	rstage2	rstage1	85	85^	Replica-Reset	Replica-Reset^	DFF-S-m10	wn=2.5u	wp=7.5u	*m=10
x83	rstage1	rstage2	85	85^	Replica-Reset	Replica-Reset^	DFF-R-m10	wn=2.5u	wp=7.5u	*m=10
x84	rstage2	received	85	85^	Replica-Reset	Replica-Reset^	DFF-R-m10	wn=2.5u	wp=7.5u	*m=10

x646	received	646	INV	wn=6u	wp=18u	le=0.4u
x647	646	delayed-received	INV	wn=6u	wp=18u	le=0.4u

*done generation
x85	stage4	90	clk-Main	clk-Main^	Register	wn=5u	wp=15u
x86	stage4	90	91	91^	AND2	wn=5u	wp=15u

x87	Master-Slave-Select-Pin-1	Master-Slave-Select-Pin-0	92	92^	AND2	wn=0.5u	wp=1.5u
x88	Master-Slave-Select-Pin-0	Master-Slave-Select-Pin-1	Master-Slave-Select-Pin-1^	93	XOR2	wn=0.5u	wp=1.5u

x89	93	Uniform-Crossover-Pin^	send-enable	send-enable^	AND2	wn=0.5u	wp=1.5u
x90	92	Uniform-Crossover-Pin^	receive-enable	receive-enable^	AND2	wn=0.5u	wp=1.5u
x91	send-enable	receive-enable	94	94^	OR2	wn=0.5u	wp=1.5u

x92	Crossover-Out-Ack-Pin	91	95	95^	AND2	wn=5u	wp=15u
x93	delayed-received	91	96	96^	AND2	wn=5u	wp=15u

x94	91	Crossover&Mutation-done	94^	94	TG	wn=5u	wp=15u
x95	95	Crossover&Mutation-done	send-enable	send-enable^	TG	wn=5u	wp=15u
x96	96	Crossover&Mutation-done	receive-enable	receive-enable^	TG	wn=5u	wp=15u

*replica delay
x97	stage0	stage1	clk-Crossover&Mutation	clk-Crossover&Mutation^	Replica-Reset	Replica-Reset^	DFF-R	wn=7u	wp=21u
x98	stage1	stage2	clk-Crossover&Mutation	clk-Crossover&Mutation^	Replica-Reset	Replica-Reset^	DFF-R	wn=7u	wp=21u
x99	stage2	stage3	clk-Crossover&Mutation	clk-Crossover&Mutation^	Replica-Reset	Replica-Reset^	DFF-R	wn=7u	wp=21u
x100	stage3	stage4	clk-Crossover&Mutation	clk-Crossover&Mutation^	Replica-Reset	Replica-Reset^	DFF-R	wn=7u	wp=21u
x101	stage4	stage0	clk-Crossover&Mutation	clk-Crossover&Mutation^	Replica-Reset	Replica-Reset^	DFF-S	wn=7u	wp=21u

*clock gating
x102	stage4	stage4^	INV	wn=3u	wp=9u
x103	stage4^	Crossover&Mutation-Start	100	100^	AND2	wn=10u	wp=30u

x104	100	101	clk-Main	clk-Main^	Register	wn=30u	wp=90u
x105	clk-Main	102	INV	wn=30u	wp=90u
x106	102	103	INV	wn=30u	wp=90u

x107	103	101	clk-Crossover&Mutation	clk-Crossover&Mutation^	AND2-m10	wn=7u	wp=21u	*m=10

*rng out pins
x108	Fitness-Estimation-Stage2	Fitness-Estimation-Stage2^	INV	wn=1u	wp=3u

x109	rng232	RNG-Pin-0	Fitness-Estimation-Stage2	Fitness-Estimation-Stage2^	DFF	wn=0.25u	wp=0.75u
x110	rng233	RNG-Pin-1	Fitness-Estimation-Stage2	Fitness-Estimation-Stage2^	DFF	wn=0.25u	wp=0.75u


**************************Pre Processing

.subckt	Mutation-Processing-24	in1	in2	in3	in4	in5	in6	in7	in8	in9	in10	in11	in12	in13	in14	in15	in16	in17	in18	in19	in20	in21	in22	in23	in24	out1	out2	out3	out4	out5	out6	out7	out8	out9	out10	out11	out12	out13	out14	out15	out16	out17	out18	out19	out20	out21	out22	out23	out24	dec1	dec2	dec3	dec4	dec5	dec6	dec7	dec8	dec9	dec10	dec11	dec12	dec13	dec14	dec15	dec16	dec17	dec18	dec19	dec20	dec21	dec22	dec23	dec24	uniform1	uniform2	uniform3	uniform4	uniform5	uniform6	uniform7	uniform8	uniform9	uniform10	uniform11	uniform12	uniform13	uniform14	uniform15	uniform16	uniform17	uniform18	uniform19	uniform20	uniform21	uniform22	uniform23	uniform24	one-point-mutation-enable	mutation-rate-enable	uniform-mutation-enable	uniform-mutation-enable^	replica-stage	clock	wn=1u	wp=3u	le=0.18u

x1	in1	in2	in3	in4	in5	in6	in7	in8	out1	out2	out3	out4	out5	out6	out7	out8	dec1	dec2	dec3	dec4	dec5	dec6	dec7	dec8	uniform1	uniform2	uniform3	uniform4	uniform5	uniform6	uniform7	uniform8	one-point-mutation-enable	mutation-rate-enable	uniform-mutation-enable	uniform-mutation-enable^	replica-stage	clock	10	Mutation-Processing-8	wn=1u	wp=3u	le=0.18u

x2	in9	in10	in11	in12	in13	in14	in15	in16	out9	out10	out11	out12	out13	out14	out15	out16	dec9	dec10	dec11	dec12	dec13	dec14	dec15	dec16	uniform9	uniform10	uniform11	uniform12	uniform13	uniform14	uniform15	uniform16	one-point-mutation-enable	mutation-rate-enable	uniform-mutation-enable	uniform-mutation-enable^	replica-stage	clock	10	Mutation-Processing-8	wn=1u	wp=3u	le=0.18u

x3	in17	in18	in19	in20	in21	in22	in23	in24	out17	out18	out19	out20	out21	out22	out23	out24	dec17	dec18	dec19	dec20	dec21	dec22	dec23	dec24	uniform17	uniform18	uniform19	uniform20	uniform21	uniform22	uniform23	uniform24	one-point-mutation-enable	mutation-rate-enable	uniform-mutation-enable	uniform-mutation-enable^	replica-stage	clock	10	Mutation-Processing-8	wn=1u	wp=3u	le=0.18u

.ends


.subckt	Mutation-Processing-16	in1	in2	in3	in4	in5	in6	in7	in8	in9	in10	in11	in12	in13	in14	in15	in16	out1	out2	out3	out4	out5	out6	out7	out8	out9	out10	out11	out12	out13	out14	out15	out16	dec1	dec2	dec3	dec4	dec5	dec6	dec7	dec8	dec9	dec10	dec11	dec12	dec13	dec14	dec15	dec16	uniform1	uniform2	uniform3	uniform4	uniform5	uniform6	uniform7	uniform8	uniform9	uniform10	uniform11	uniform12	uniform13	uniform14	uniform15	uniform16	one-point-mutation-enable	mutation-rate-enable	uniform-mutation-enable	uniform-mutation-enable^	replica-stage	clock	wn=1u	wp=3u	le=0.18u

x1	in1	in2	in3	in4	in5	in6	in7	in8	out1	out2	out3	out4	out5	out6	out7	out8	dec1	dec2	dec3	dec4	dec5	dec6	dec7	dec8	uniform1	uniform2	uniform3	uniform4	uniform5	uniform6	uniform7	uniform8	one-point-mutation-enable	mutation-rate-enable	uniform-mutation-enable	uniform-mutation-enable^	replica-stage	clock	10	Mutation-Processing-8	wn=1u	wp=3u	le=0.18u

x2	in9	in10	in11	in12	in13	in14	in15	in16	out9	out10	out11	out12	out13	out14	out15	out16	dec9	dec10	dec11	dec12	dec13	dec14	dec15	dec16	uniform9	uniform10	uniform11	uniform12	uniform13	uniform14	uniform15	uniform16	one-point-mutation-enable	mutation-rate-enable	uniform-mutation-enable	uniform-mutation-enable^	replica-stage	clock	10	Mutation-Processing-8	wn=1u	wp=3u	le=0.18u

.ends


.subckt	Mutation-Processing-8	in1	in2	in3	in4	in5	in6	in7	in8	out1	out2	out3	out4	out5	out6	out7	out8	dec1	dec2	dec3	dec4	dec5	dec6	dec7	dec8	uniform1	uniform2	uniform3	uniform4	uniform5	uniform6	uniform7	uniform8	one-point-mutation-enable	mutation-rate-enable	uniform-mutation-enable	uniform-mutation-enable^	replica-stage	clock	10	wn=1u	wp=3u	le=0.18u

x1	dec1	dec2	dec3	dec4	dec5	dec6	dec7	dec8	one-point-mutation-enable	one-point-mutation-enable	one-point-mutation-enable	one-point-mutation-enable	one-point-mutation-enable	one-point-mutation-enable	one-point-mutation-enable	one-point-mutation-enable	mutation-rate-enable	mutation-rate-enable	mutation-rate-enable	mutation-rate-enable	mutation-rate-enable	mutation-rate-enable	mutation-rate-enable	mutation-rate-enable	1	2	3	4	5	6	7	8	1^	2^	3^	4^	5^	6^	7^	8^	AND3-Array-8	wn='wn'	wp='wp'	le='le'

x2	uniform-mutation-enable	replica-stage	clock	10	10^	AND3	wn='32*wn'	wp='32*wp'	le='le'

x3	uniform1	uniform2	uniform3	uniform4	uniform5	uniform6	uniform7	uniform8	11	12	13	14	15	16	17	18	10	10^	DFF-Array-8	wn='wn'	wp='wp'	le='le'

x4	11	12	13	14	15	16	17	18	1	2	3	4	5	6	7	8	21	22	23	24	25	26	27	28	uniform-mutation-enable	uniform-mutation-enable^	MUX-Array-8-no-INV	wn='wn'	wp='wp'	le='le'

x5	in1	in2	in3	in4	in5	in6	in7	in8	in1^	in2^	in3^	in4^	in5^	in6^	in7^	in8^	INV-Array-8	wn='wn'	wp='wp'	le='le'

x6	21	22	23	24	25	26	27	28	in1	in2	in3	in4	in5	in6	in7	in8	in1^	in2^	in3^	in4^	in5^	in6^	in7^	in8^	out1	out2	out3	out4	out5	out6	out7	out8	XOR2-Array-8	wn='wn'	wp='wp'	le='le'

.ends


.subckt	Crossover-Processing-24	parent1-1	parent1-2	parent1-3	parent1-4	parent1-5	parent1-6	parent1-7	parent1-8	parent1-9	parent1-10	parent1-11	parent1-12	parent1-13	parent1-14	parent1-15	parent1-16	parent1-17	parent1-18	parent1-19	parent1-20	parent1-21	parent1-22	parent1-23	parent1-24	parent2-1	parent2-2	parent2-3	parent2-4	parent2-5	parent2-6	parent2-7	parent2-8	parent2-9	parent2-10	parent2-11	parent2-12	parent2-13	parent2-14	parent2-15	parent2-16	parent2-17	parent2-18	parent2-19	parent2-20	parent2-21	parent2-22	parent2-23	parent2-24	out1-1	out1-2	out1-3	out1-4	out1-5	out1-6	out1-7	out1-8	out1-9	out1-10	out1-11	out1-12	out1-13	out1-14	out1-15	out1-16	out1-17	out1-18	out1-19	out1-20	out1-21	out1-22	out1-23	out1-24	out2-1	out2-2	out2-3	out2-4	out2-5	out2-6	out2-7	out2-8	out2-9	out2-10	out2-11	out2-12	out2-13	out2-14	out2-15	out2-16	out2-17	out2-18	out2-19	out2-20	out2-21	out2-22	out2-23	out2-24	dec1-1	dec1-2	dec1-3	dec1-4	dec1-5	dec1-6	dec1-7	dec1-8	dec1-9	dec1-10	dec1-11	dec1-12	dec1-13	dec1-14	dec1-15	dec1-16	dec1-17	dec1-18	dec1-19	dec1-20	dec1-21	dec1-22	dec1-23	dec1-24	dec2-1	dec2-2	dec2-3	dec2-4	dec2-5	dec2-6	dec2-7	dec2-8	dec2-9	dec2-10	dec2-11	dec2-12	dec2-13	dec2-14	dec2-15	dec2-16	dec2-17	dec2-18	dec2-19	dec2-20	dec2-21	dec2-22	dec2-23	dec2-24	uniform1	uniform2	uniform3	uniform4	uniform5	uniform6	uniform7	uniform8	uniform9	uniform10	uniform11	uniform12	uniform13	uniform14	uniform15	uniform16	uniform17	uniform18	uniform19	uniform20	uniform21	uniform22	uniform23	uniform24	two-point-crossover-enable	one-point-crossover-enable	crossover-rate-enable	uniform-crossover-enable	uniform-crossover-enable^	replica-stage	clock	wn=1u	wp=3u	le=0.18u

x1	parent1-1	parent1-2	parent1-3	parent1-4	parent1-5	parent1-6	parent1-7	parent1-8	parent2-1	parent2-2	parent2-3	parent2-4	parent2-5	parent2-6	parent2-7	parent2-8	out1-1	out1-2	out1-3	out1-4	out1-5	out1-6	out1-7	out1-8	out2-1	out2-2	out2-3	out2-4	out2-5	out2-6	out2-7	out2-8	dec1-1	dec1-2	dec1-3	dec1-4	dec1-5	dec1-6	dec1-7	dec1-8	dec2-1	dec2-2	dec2-3	dec2-4	dec2-5	dec2-6	dec2-7	dec2-8	uniform1	uniform2	uniform3	uniform4	uniform5	uniform6	uniform7	uniform8	two-point-crossover-enable	one-point-crossover-enable	crossover-rate-enable	uniform-crossover-enable	uniform-crossover-enable^	replica-stage	clock	Crossover-Processing-8	wn=1u	wp=3u	le=0.18u

x2	parent1-9	parent1-10	parent1-11	parent1-12	parent1-13	parent1-14	parent1-15	parent1-16	parent2-9	parent2-10	parent2-11	parent2-12	parent2-13	parent2-14	parent2-15	parent2-16	out1-9	out1-10	out1-11	out1-12	out1-13	out1-14	out1-15	out1-16	out2-9	out2-10	out2-11	out2-12	out2-13	out2-14	out2-15	out2-16	dec1-9	dec1-10	dec1-11	dec1-12	dec1-13	dec1-14	dec1-15	dec1-16	dec2-9	dec2-10	dec2-11	dec2-12	dec2-13	dec2-14	dec2-15	dec2-16	uniform9	uniform10	uniform11	uniform12	uniform13	uniform14	uniform15	uniform16	two-point-crossover-enable	one-point-crossover-enable	crossover-rate-enable	uniform-crossover-enable	uniform-crossover-enable^	replica-stage	clock	Crossover-Processing-8	wn=1u	wp=3u	le=0.18u

x3	parent1-17	parent1-18	parent1-19	parent1-20	parent1-21	parent1-22	parent1-23	parent1-24	parent2-17	parent2-18	parent2-19	parent2-20	parent2-21	parent2-22	parent2-23	parent2-24	out1-17	out1-18	out1-19	out1-20	out1-21	out1-22	out1-23	out1-24	out2-17	out2-18	out2-19	out2-20	out2-21	out2-22	out2-23	out2-24	dec1-17	dec1-18	dec1-19	dec1-20	dec1-21	dec1-22	dec1-23	dec1-24	dec2-17	dec2-18	dec2-19	dec2-20	dec2-21	dec2-22	dec2-23	dec2-24	uniform17	uniform18	uniform19	uniform20	uniform21	uniform22	uniform23	uniform24	two-point-crossover-enable	one-point-crossover-enable	crossover-rate-enable	uniform-crossover-enable	uniform-crossover-enable^	replica-stage	clock	Crossover-Processing-8	wn=1u	wp=3u	le=0.18u

.ends


.subckt	Crossover-Processing-8	parent1-1	parent1-2	parent1-3	parent1-4	parent1-5	parent1-6	parent1-7	parent1-8	parent2-1	parent2-2	parent2-3	parent2-4	parent2-5	parent2-6	parent2-7	parent2-8	out1-1	out1-2	out1-3	out1-4	out1-5	out1-6	out1-7	out1-8	out2-1	out2-2	out2-3	out2-4	out2-5	out2-6	out2-7	out2-8	dec1-1	dec1-2	dec1-3	dec1-4	dec1-5	dec1-6	dec1-7	dec1-8	dec2-1	dec2-2	dec2-3	dec2-4	dec2-5	dec2-6	dec2-7	dec2-8	uniform1	uniform2	uniform3	uniform4	uniform5	uniform6	uniform7	uniform8	two-point-crossover-enable	one-point-crossover-enable	crossover-rate-enable	uniform-crossover-enable	uniform-crossover-enable^	replica-stage	clock	wn=1u	wp=3u	le=0.18u

x1	dec2-1	dec2-2	dec2-3	dec2-4	dec2-5	dec2-6	dec2-7	dec2-8	two-point-crossover-enable	two-point-crossover-enable	two-point-crossover-enable	two-point-crossover-enable	two-point-crossover-enable	two-point-crossover-enable	two-point-crossover-enable	two-point-crossover-enable	1	2	3	4	5	6	7	8	1^	2^	3^	4^	5^	6^	7^	8^	AND2-Array-8	wn='wn'	wp='wp'	le='le'

x2	dec1-1	dec1-2	dec1-3	dec1-4	dec1-5	dec1-6	dec1-7	dec1-8	1	2	3	4	5	6	7	8	1^	2^	3^	4^	5^	6^	7^	8^	11	12	13	14	15	16	17	18	XOR2-Array-8	wn='wn'	wp='wp'	le='le'

x3	11	12	13	14	15	16	17	18	one-point-crossover-enable	one-point-crossover-enable	one-point-crossover-enable	one-point-crossover-enable	one-point-crossover-enable	one-point-crossover-enable	one-point-crossover-enable	one-point-crossover-enable	crossover-rate-enable	crossover-rate-enable	crossover-rate-enable	crossover-rate-enable	crossover-rate-enable	crossover-rate-enable	crossover-rate-enable	crossover-rate-enable	21	22	23	24	25	26	27	28	21^	22^	23^	24^	25^	26^	27^	28^	AND3-Array-8	wn='wn'	wp='wp'	le='le'

x4	uniform-crossover-enable	replica-stage	clock	30	30^	AND3	wn='32*wn'	wp='32*wp'	le='le'

x5	uniform1	uniform2	uniform3	uniform4	uniform5	uniform6	uniform7	uniform8	31	32	33	34	35	36	37	38	30	30^	DFF-Array-8	wn='wn'	wp='wp'	le='le'

x6	31	32	33	34	35	36	37	38	21	22	23	24	25	26	27	28	41	42	43	44	45	46	47	48	uniform-crossover-enable	uniform-crossover-enable^	MUX-Array-8-no-INV	wn='wn'	wp='wp'	le='le'

x7	parent1-1	parent1-2	parent1-3	parent1-4	parent1-5	parent1-6	parent1-7	parent1-8	parent2-1	parent2-2	parent2-3	parent2-4	parent2-5	parent2-6	parent2-7	parent2-8	out2-1	out2-2	out2-3	out2-4	out2-5	out2-6	out2-7	out2-8	out1-1	out1-2	out1-3	out1-4	out1-5	out1-6	out1-7	out1-8	41	42	43	44	45	46	47	48	MUX-Pair-Array-8	wn='wn'	wp='wp'	le='le'

.ends

*************************************************************************************************Arrays
.subckt	Domino-Comparator-Array-16	clock-enable	rng0	rng1	rng2	rng3	rng4	rng5	rng6	rng7	rng8	rng9	rng10	rng11	rng12	rng13	rng14	rng15	rng16	rng17	rng18	rng19	rng20	rng21	rng22	rng23	rng24	rng25	rng26	rng27	rng28	rng29	rng30	rng31	rng32	rng33	rng34	rng35	rng36	rng37	rng38	rng39	rng40	rng41	rng42	rng43	rng44	rng45	rng46	rng47	rng48	rng49	rng50	rng51	rng52	rng53	rng54	rng55	rng56	rng57	rng58	rng59	rng60	rng61	rng62	rng63	rng64	rng65	rng66	rng67	rng68	rng69	rng70	rng71	rng72	rng73	rng74	rng75	rng76	rng77	rng78	rng79	rng80	rng81	rng82	rng83	rng84	rng85	rng86	rng87	rng88	rng89	rng90	rng91	rng92	rng93	rng94	rng95	rng96	rng97	rng98	rng99	rng100	rng101	rng102	rng103	rng104	rng105	rng106	rng107	rng108	rng109	rng110	rng111	rate0	rate1	rate2	rate3	rate4	rate5	rate6	rate^0	rate^1	rate^2	rate^3	rate^4	rate^5	rate^6	out0	out1	out2	out3	out4	out5	out6	out7	out8	out9	out10	out11	out12	out13	out14	out15	wn=1u	wp=3u	le=0.18u
x1	clock-enable	rng0	rng1	rng2	rng3	rng4	rng5	rng6	rng7	rng8	rng9	rng10	rng11	rng12	rng13	rng14	rng15	rng16	rng17	rng18	rng19	rng20	rng21	rng22	rng23	rng24	rng25	rng26	rng27	rng28	rng29	rng30	rng31	rng32	rng33	rng34	rng35	rng36	rng37	rng38	rng39	rng40	rng41	rng42	rng43	rng44	rng45	rng46	rng47	rng48	rng49	rng50	rng51	rng52	rng53	rng54	rng55	rate0	rate1	rate2	rate3	rate4	rate5	rate6	rate^0	rate^1	rate^2	rate^3	rate^4	rate^5	rate^6	out0	out1	out2	out3	out4	out5	out6	out7	Domino-Comparator-Array-8	wn='wn'	wp='wp'	le='le'
x2	clock-enable	rng56	rng57	rng58	rng59	rng60	rng61	rng62	rng63	rng64	rng65	rng66	rng67	rng68	rng69	rng70	rng71	rng72	rng73	rng74	rng75	rng76	rng77	rng78	rng79	rng80	rng81	rng82	rng83	rng84	rng85	rng86	rng87	rng88	rng89	rng90	rng91	rng92	rng93	rng94	rng95	rng96	rng97	rng98	rng99	rng100	rng101	rng102	rng103	rng104	rng105	rng106	rng107	rng108	rng109	rng110	rng111	rate0	rate1	rate2	rate3	rate4	rate5	rate6	rate^0	rate^1	rate^2	rate^3	rate^4	rate^5	rate^6	out8	out9	out10	out11	out12	out13	out14	out15	Domino-Comparator-Array-8	wn='wn'	wp='wp'	le='le'
.ends

.subckt	Domino-Comparator-Array-8	clock-enable	rng0	rng1	rng2	rng3	rng4	rng5	rng6	rng7	rng8	rng9	rng10	rng11	rng12	rng13	rng14	rng15	rng16	rng17	rng18	rng19	rng20	rng21	rng22	rng23	rng24	rng25	rng26	rng27	rng28	rng29	rng30	rng31	rng32	rng33	rng34	rng35	rng36	rng37	rng38	rng39	rng40	rng41	rng42	rng43	rng44	rng45	rng46	rng47	rng48	rng49	rng50	rng51	rng52	rng53	rng54	rng55	rate0	rate1	rate2	rate3	rate4	rate5	rate6	rate^0	rate^1	rate^2	rate^3	rate^4	rate^5	rate^6	out0	out1	out2	out3	out4	out5	out6	out7	wn=1u	wp=3u	le=0.18u
x1	clock-enable	rng0	rng1	rng2	rng3	rng4	rng5	rng6	rate0	rate1	rate2	rate3	rate4	rate5	rate6	rate^0	rate^1	rate^2	rate^3	rate^4	rate^5	rate^6	out0	Domino-Comparator	wn='wn'	wp='wp'	le='le'
x2	clock-enable	rng7	rng8	rng9	rng10	rng11	rng12	rng13	rate0	rate1	rate2	rate3	rate4	rate5	rate6	rate^0	rate^1	rate^2	rate^3	rate^4	rate^5	rate^6	out1	Domino-Comparator	wn='wn'	wp='wp'	le='le'
x3	clock-enable	rng14	rng15	rng16	rng17	rng18	rng19	rng20	rate0	rate1	rate2	rate3	rate4	rate5	rate6	rate^0	rate^1	rate^2	rate^3	rate^4	rate^5	rate^6	out2	Domino-Comparator	wn='wn'	wp='wp'	le='le'
x4	clock-enable	rng21	rng22	rng23	rng24	rng25	rng26	rng27	rate0	rate1	rate2	rate3	rate4	rate5	rate6	rate^0	rate^1	rate^2	rate^3	rate^4	rate^5	rate^6	out3	Domino-Comparator	wn='wn'	wp='wp'	le='le'
x5	clock-enable	rng28	rng29	rng30	rng31	rng32	rng33	rng34	rate0	rate1	rate2	rate3	rate4	rate5	rate6	rate^0	rate^1	rate^2	rate^3	rate^4	rate^5	rate^6	out4	Domino-Comparator	wn='wn'	wp='wp'	le='le'
x6	clock-enable	rng35	rng36	rng37	rng38	rng39	rng40	rng41	rate0	rate1	rate2	rate3	rate4	rate5	rate6	rate^0	rate^1	rate^2	rate^3	rate^4	rate^5	rate^6	out5	Domino-Comparator	wn='wn'	wp='wp'	le='le'
x7	clock-enable	rng42	rng43	rng44	rng45	rng46	rng47	rng48	rate0	rate1	rate2	rate3	rate4	rate5	rate6	rate^0	rate^1	rate^2	rate^3	rate^4	rate^5	rate^6	out6	Domino-Comparator	wn='wn'	wp='wp'	le='le'
x8	clock-enable	rng49	rng50	rng51	rng52	rng53	rng54	rng55	rate0	rate1	rate2	rate3	rate4	rate5	rate6	rate^0	rate^1	rate^2	rate^3	rate^4	rate^5	rate^6	out7	Domino-Comparator	wn='wn'	wp='wp'	le='le'
.ends

.subckt	Latch-Array-5	in1	in2	in3	in4	in5	out1	out2	out3	out4	out5	clk	clk^	wn=1u	wp=3u	le=0.18u
x1	in1	out1	clk	clk^	D-Latch	wn='wn'	wp='wp'	le='le'
x2	in2	out2	clk	clk^	D-Latch	wn='wn'	wp='wp'	le='le'
x3	in3	out3	clk	clk^	D-Latch	wn='wn'	wp='wp'	le='le'
x4	in4	out4	clk	clk^	D-Latch	wn='wn'	wp='wp'	le='le'
x5	in5	out5	clk	clk^	D-Latch	wn='wn'	wp='wp'	le='le'
.ends

.subckt	DFF-Array-8	in1	in2	in3	in4	in5	in6	in7	in8	out1	out2	out3	out4	out5	out6	out7	out8	clk	clk^	wn=1u	wp=3u	le=0.18u
x1	in1	in2	in3	in4	out1	out2	out3	out4	clk	clk^	DFF-Array-4	wn='wn'	wp='wp'	le='le'
x2	in5	in6	in7	in8	out5	out6	out7	out8	clk	clk^	DFF-Array-4	wn='wn'	wp='wp'	le='le'
.ends

.subckt	DFF-Array-4	in1	in2	in3	in4	out1	out2	out3	out4	clk	clk^	wn=1u	wp=3u	le=0.18u
x1	in1	out1	clk	clk^	DFF	wn='wn'	wp='wp'	le='le'
x2	in2	out2	clk	clk^	DFF	wn='wn'	wp='wp'	le='le'
x3	in3	out3	clk	clk^	DFF	wn='wn'	wp='wp'	le='le'
x4	in4	out4	clk	clk^	DFF	wn='wn'	wp='wp'	le='le'
.ends

.subckt	MUX-Pair-Array-8	in1-1	in1-2	in1-3	in1-4	in1-5	in1-6	in1-7	in1-8	in2-1	in2-2	in2-3	in2-4	in2-5	in2-6	in2-7	in2-8	out1-1	out1-2	out1-3	out1-4	out1-5	out1-6	out1-7	out1-8	out2-1	out2-2	out2-3	out2-4	out2-5	out2-6	out2-7	out2-8	control1	control2	control3	control4	control5	control6	control7	control8	wn=1u	wp=3u	le=0.18u
x1	in1-1	in1-2	in1-3	in1-4	in2-1	in2-2	in2-3	in2-4	out1-1	out1-2	out1-3	out1-4	out2-1	out2-2	out2-3	out2-4	control1	control2	control3	control4	MUX-Pair-Array-4	wn='wn'	wp='wp'	le='le'
x2	in1-5	in1-6	in1-7	in1-8	in2-5	in2-6	in2-7	in2-8	out1-5	out1-6	out1-7	out1-8	out2-5	out2-6	out2-7	out2-8	control5	control6	control7	control8	MUX-Pair-Array-4	wn='wn'	wp='wp'	le='le'
.ends

.subckt	MUX-Pair-Array-4	in1-1	in1-2	in1-3	in1-4	in2-1	in2-2	in2-3	in2-4	out1-1	out1-2	out1-3	out1-4	out2-1	out2-2	out2-3	out2-4	control1	control2	control3	control4	wn=1u	wp=3u	le=0.18u
x1	in1-1	in2-1	out1-1	out2-1	control1	MUX-Pair	wn='wn'	wp='wp'	le='le'
x2	in1-2	in2-2	out1-2	out2-2	control2	MUX-Pair	wn='wn'	wp='wp'	le='le'
x3	in1-3	in2-3	out1-3	out2-3	control3	MUX-Pair	wn='wn'	wp='wp'	le='le'
x4	in1-4	in2-4	out1-4	out2-4	control4	MUX-Pair	wn='wn'	wp='wp'	le='le'
.ends

.subckt	XOR2-Array-8	in1-1	in1-2	in1-3	in1-4	in1-5	in1-6	in1-7	in1-8	in2-1	in2-2	in2-3	in2-4	in2-5	in2-6	in2-7	in2-8	in2^-1	in2^-2	in2^-3	in2^-4	in2^-5	in2^-6	in2^-7	in2^-8	out1	out2	out3	out4	out5	out6	out7	out8	wn=1u	wp=3u	le=0.18u
x1	in1-1	in2-1	in2^-1	out1	XOR2	wn='wn'	wp='wp'	le='le'
x2	in1-2	in2-2	in2^-2	out2	XOR2	wn='wn'	wp='wp'	le='le'
x3	in1-3	in2-3	in2^-3	out3	XOR2	wn='wn'	wp='wp'	le='le'
x4	in1-4	in2-4	in2^-4	out4	XOR2	wn='wn'	wp='wp'	le='le'
x5	in1-5	in2-5	in2^-5	out5	XOR2	wn='wn'	wp='wp'	le='le'
x6	in1-6	in2-6	in2^-6	out6	XOR2	wn='wn'	wp='wp'	le='le'
x7	in1-7	in2-7	in2^-7	out7	XOR2	wn='wn'	wp='wp'	le='le'
x8	in1-8	in2-8	in2^-8	out8	XOR2	wn='wn'	wp='wp'	le='le'
.ends

.subckt	AND3-Array-8	in1-1	in1-2	in1-3	in1-4	in1-5	in1-6	in1-7	in1-8	in2-1	in2-2	in2-3	in2-4	in2-5	in2-6	in2-7	in2-8	in3-1	in3-2	in3-3	in3-4	in3-5	in3-6	in3-7	in3-8	out1	out2	out3	out4	out5	out6	out7	out8	out^1	out^2	out^3	out^4	out^5	out^6	out^7	out^8	wn=1u	wp=3u	le=0.18u
x1	in1-1	in2-1	in3-1	out1	out^1	AND3	wn='wn'	wp='wp'	le='le'
x2	in1-2	in2-2	in3-2	out2	out^2	AND3	wn='wn'	wp='wp'	le='le'
x3	in1-3	in2-3	in3-3	out3	out^3	AND3	wn='wn'	wp='wp'	le='le'
x4	in1-4	in2-4	in3-4	out4	out^4	AND3	wn='wn'	wp='wp'	le='le'
x5	in1-5	in2-5	in3-5	out5	out^5	AND3	wn='wn'	wp='wp'	le='le'
x6	in1-6	in2-6	in3-6	out6	out^6	AND3	wn='wn'	wp='wp'	le='le'
x7	in1-7	in2-7	in3-7	out7	out^7	AND3	wn='wn'	wp='wp'	le='le'
x8	in1-8	in2-8	in3-8	out8	out^8	AND3	wn='wn'	wp='wp'	le='le'
.ends

.subckt	AND2-Array-8	in1-1	in1-2	in1-3	in1-4	in1-5	in1-6	in1-7	in1-8	in2-1	in2-2	in2-3	in2-4	in2-5	in2-6	in2-7	in2-8	out1	out2	out3	out4	out5	out6	out7	out8	out^1	out^2	out^3	out^4	out^5	out^6	out^7	out^8	wn=1u	wp=3u	le=0.18u
x1	in1-1	in2-1	out1	out^1	AND2	wn='wn'	wp='wp'	le='le'
x2	in1-2	in2-2	out2	out^2	AND2	wn='wn'	wp='wp'	le='le'
x3	in1-3	in2-3	out3	out^3	AND2	wn='wn'	wp='wp'	le='le'
x4	in1-4	in2-4	out4	out^4	AND2	wn='wn'	wp='wp'	le='le'
x5	in1-5	in2-5	out5	out^5	AND2	wn='wn'	wp='wp'	le='le'
x6	in1-6	in2-6	out6	out^6	AND2	wn='wn'	wp='wp'	le='le'
x7	in1-7	in2-7	out7	out^7	AND2	wn='wn'	wp='wp'	le='le'
x8	in1-8	in2-8	out8	out^8	AND2	wn='wn'	wp='wp'	le='le'
.ends

.subckt	MUX-Array-8-no-INV	in1-1	in1-2	in1-3	in1-4	in1-5	in1-6	in1-7	in1-8	in2-1	in2-2	in2-3	in2-4	in2-5	in2-6	in2-7	in2-8	out1	out2	out3	out4	out5	out6	out7	out8	control	control^	wn=1u	wp=3u	le=0.18u
x1	in1-1	in1-2	in1-3	in1-4	in2-1	in2-2	in2-3	in2-4	out1	out2	out3	out4	control	control^	MUX-Array-4-no-INV	wn='wn'	wp='wp'	le='le'
x2	in1-5	in1-6	in1-7	in1-8	in2-5	in2-6	in2-7	in2-8	out5	out6	out7	out8	control	control^	MUX-Array-4-no-INV	wn='wn'	wp='wp'	le='le'
.ends

.subckt	MUX-Array-4-no-INV	in1-1	in1-2	in1-3	in1-4	in2-1	in2-2	in2-3	in2-4	out1	out2	out3	out4	control	control^	wn=1u	wp=3u	le=0.18u
x1	in1-1	in2-1	out1	control	control^	MUX-no-INV	wn='wn'	wp='wp'	le='le'
x2	in1-2	in2-2	out2	control	control^	MUX-no-INV	wn='wn'	wp='wp'	le='le'
x3	in1-3	in2-3	out3	control	control^	MUX-no-INV	wn='wn'	wp='wp'	le='le'
x4	in1-4	in2-4	out4	control	control^	MUX-no-INV	wn='wn'	wp='wp'	le='le'
.ends

.subckt	MUX-Pair-Array-32-no-INV	in1-1	in1-2	in1-3	in1-4	in1-5	in1-6	in1-7	in1-8	in1-9	in1-10	in1-11	in1-12	in1-13	in1-14	in1-15	in1-16	in1-17	in1-18	in1-19	in1-20	in1-21	in1-22	in1-23	in1-24	in1-25	in1-26	in1-27	in1-28	in1-29	in1-30	in1-31	in1-32	in2-1	in2-2	in2-3	in2-4	in2-5	in2-6	in2-7	in2-8	in2-9	in2-10	in2-11	in2-12	in2-13	in2-14	in2-15	in2-16	in2-17	in2-18	in2-19	in2-20	in2-21	in2-22	in2-23	in2-24	in2-25	in2-26	in2-27	in2-28	in2-29	in2-30	in2-31	in2-32	out1-1	out1-2	out1-3	out1-4	out1-5	out1-6	out1-7	out1-8	out1-9	out1-10	out1-11	out1-12	out1-13	out1-14	out1-15	out1-16	out1-17	out1-18	out1-19	out1-20	out1-21	out1-22	out1-23	out1-24	out1-25	out1-26	out1-27	out1-28	out1-29	out1-30	out1-31	out1-32	out2-1	out2-2	out2-3	out2-4	out2-5	out2-6	out2-7	out2-8	out2-9	out2-10	out2-11	out2-12	out2-13	out2-14	out2-15	out2-16	out2-17	out2-18	out2-19	out2-20	out2-21	out2-22	out2-23	out2-24	out2-25	out2-26	out2-27	out2-28	out2-29	out2-30	out2-31	out2-32	control	control^	wn=1u	wp=3u	le=0.18u
x1	in1-1	in1-2	in1-3	in1-4	in1-5	in1-6	in1-7	in1-8	in1-9	in1-10	in1-11	in1-12	in1-13	in1-14	in1-15	in1-16	in2-1	in2-2	in2-3	in2-4	in2-5	in2-6	in2-7	in2-8	in2-9	in2-10	in2-11	in2-12	in2-13	in2-14	in2-15	in2-16	out1-1	out1-2	out1-3	out1-4	out1-5	out1-6	out1-7	out1-8	out1-9	out1-10	out1-11	out1-12	out1-13	out1-14	out1-15	out1-16	out2-1	out2-2	out2-3	out2-4	out2-5	out2-6	out2-7	out2-8	out2-9	out2-10	out2-11	out2-12	out2-13	out2-14	out2-15	out2-16	control	control^	MUX-Pair-Array-16-no-INV	wn='wn'	wp='wp'	le='le'
x2	in1-17	in1-18	in1-19	in1-20	in1-21	in1-22	in1-23	in1-24	in1-25	in1-26	in1-27	in1-28	in1-29	in1-30	in1-31	in1-32	in2-17	in2-18	in2-19	in2-20	in2-21	in2-22	in2-23	in2-24	in2-25	in2-26	in2-27	in2-28	in2-29	in2-30	in2-31	in2-32	out1-17	out1-18	out1-19	out1-20	out1-21	out1-22	out1-23	out1-24	out1-25	out1-26	out1-27	out1-28	out1-29	out1-30	out1-31	out1-32	out2-17	out2-18	out2-19	out2-20	out2-21	out2-22	out2-23	out2-24	out2-25	out2-26	out2-27	out2-28	out2-29	out2-30	out2-31	out2-32	control	control^	MUX-Pair-Array-16-no-INV	wn='wn'	wp='wp'	le='le'
.ends

.subckt	MUX-Pair-Array-16-no-INV	in1-1	in1-2	in1-3	in1-4	in1-5	in1-6	in1-7	in1-8	in1-9	in1-10	in1-11	in1-12	in1-13	in1-14	in1-15	in1-16	in2-1	in2-2	in2-3	in2-4	in2-5	in2-6	in2-7	in2-8	in2-9	in2-10	in2-11	in2-12	in2-13	in2-14	in2-15	in2-16	out1-1	out1-2	out1-3	out1-4	out1-5	out1-6	out1-7	out1-8	out1-9	out1-10	out1-11	out1-12	out1-13	out1-14	out1-15	out1-16	out2-1	out2-2	out2-3	out2-4	out2-5	out2-6	out2-7	out2-8	out2-9	out2-10	out2-11	out2-12	out2-13	out2-14	out2-15	out2-16	control	control^	wn=1u	wp=3u	le=0.18u
x1	in1-1	in1-2	in1-3	in1-4	in2-1	in2-2	in2-3	in2-4	out1-1	out1-2	out1-3	out1-4	out2-1	out2-2	out2-3	out2-4	control	control^	MUX-Pair-Array-4-no-INV	wn='wn'	wp='wp'	le='le'
x2	in1-5	in1-6	in1-7	in1-8	in2-5	in2-6	in2-7	in2-8	out1-5	out1-6	out1-7	out1-8	out2-5	out2-6	out2-7	out2-8	control	control^	MUX-Pair-Array-4-no-INV	wn='wn'	wp='wp'	le='le'
x3	in1-9	in1-10	in1-11	in1-12	in2-9	in2-10	in2-11	in2-12	out1-9	out1-10	out1-11	out1-12	out2-9	out2-10	out2-11	out2-12	control	control^	MUX-Pair-Array-4-no-INV	wn='wn'	wp='wp'	le='le'
x4	in1-13	in1-14	in1-15	in1-16	in2-13	in2-14	in2-15	in2-16	out1-13	out1-14	out1-15	out1-16	out2-13	out2-14	out2-15	out2-16	control	control^	MUX-Pair-Array-4-no-INV	wn='wn'	wp='wp'	le='le'
.ends

.subckt	MUX-Pair-Array-4-no-INV	in1-1	in1-2	in1-3	in1-4	in2-1	in2-2	in2-3	in2-4	out1-1	out1-2	out1-3	out1-4	out2-1	out2-2	out2-3	out2-4	control	control^	wn=1u	wp=3u	le=0.18u
x1	in1-1	in2-1	out1-1	out2-1	control	control^	MUX-Pair-no-INV	wn='wn'	wp='wp'	le='le'
x2	in1-2	in2-2	out1-2	out2-2	control	control^	MUX-Pair-no-INV	wn='wn'	wp='wp'	le='le'
x3	in1-3	in2-3	out1-3	out2-3	control	control^	MUX-Pair-no-INV	wn='wn'	wp='wp'	le='le'
x4	in1-4	in2-4	out1-4	out2-4	control	control^	MUX-Pair-no-INV	wn='wn'	wp='wp'	le='le'
.ends

.subckt	MUX-Array-7	in1-1	in1-2	in1-3	in1-4	in1-5	in1-6	in1-7	in2-1	in2-2	in2-3	in2-4	in2-5	in2-6	in2-7	out1	out2	out3	out4	out5	out6	out7	control	wn=1u	wp=3u	le=0.18u
x1	in1-1	in2-1	out1	control	MUX	wn='wn'	wp='wp'	le='le'
x2	in1-2	in2-2	out2	control	MUX	wn='wn'	wp='wp'	le='le'
x3	in1-3	in2-3	out3	control	MUX	wn='wn'	wp='wp'	le='le'
x4	in1-4	in2-4	out4	control	MUX	wn='wn'	wp='wp'	le='le'
x5	in1-5	in2-5	out5	control	MUX	wn='wn'	wp='wp'	le='le'
x6	in1-6	in2-6	out6	control	MUX	wn='wn'	wp='wp'	le='le'
x7	in1-7	in2-7	out7	control	MUX	wn='wn'	wp='wp'	le='le'
.ends

.subckt	INV-Array-8	in1	in2	in3	in4	in5	in6	in7	in8	out1	out2	out3	out4	out5	out6	out7	out8	wn=1u	wp=3u	le=0.18u
x1	in1	out1	INV	wn='wn'	wp='wp'	le='le'
x2	in2	out2	INV	wn='wn'	wp='wp'	le='le'
x3	in3	out3	INV	wn='wn'	wp='wp'	le='le'
x4	in4	out4	INV	wn='wn'	wp='wp'	le='le'
x5	in5	out5	INV	wn='wn'	wp='wp'	le='le'
x6	in6	out6	INV	wn='wn'	wp='wp'	le='le'
x7	in7	out7	INV	wn='wn'	wp='wp'	le='le'
x8	in8	out8	INV	wn='wn'	wp='wp'	le='le'
.ends

.subckt	INV-Array-7	in1	in2	in3	in4	in5	in6	in7	out1	out2	out3	out4	out5	out6	out7	wn=1u	wp=3u	le=0.18u
x1	in1	out1	INV	wn='wn'	wp='wp'	le='le'
x2	in2	out2	INV	wn='wn'	wp='wp'	le='le'
x3	in3	out3	INV	wn='wn'	wp='wp'	le='le'
x4	in4	out4	INV	wn='wn'	wp='wp'	le='le'
x5	in5	out5	INV	wn='wn'	wp='wp'	le='le'
x6	in6	out6	INV	wn='wn'	wp='wp'	le='le'
x7	in7	out7	INV	wn='wn'	wp='wp'	le='le'
.ends

*************************************************************************************************Include
.include	'./Decoder_Crossover.inc'
.include	'./Domino-Comparator.inc'

************************************************************************************************Components
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

***Full Register
.subckt	Register	in	out	clk	clk^	wn=1u	wp=3u	le=0.18u
x1	in	a	clk^	clk	TG	wn='wn'	wp='wp'	le='le'
x2	a	b	INV	wn='wn'	wp='wp'	le='le'
x3	b	c	clk	clk^	TG	wn='wn'	wp='wp'	le='le'
x4	c	out	INV	wn='wn'	wp='wp'	le='le'
.ends

***Half Register
.subckt	Half-Register	in	out	clk	clk^	wn=1u	wp=3u	le=0.18u
x1	in	a	clk	clk^	TG	wn='wn'	wp='wp'	le='le'
x2	a	b	INV	wn='wn'	wp='wp'	le='le'
x3	b	out	INV	wn='wn'	wp='wp'	le='le'
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

***4-Input AND***
.subckt	AND4	in1	in2	in3	in4	out	out^	wn=1u	wp=3u	le=0.18u
x1	in1	in2	in3	in4	out^	NAND4	wn='wn'	wp='wp'	le='le'
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

***2-Input XOR (Pass Transistor Logic)
.subckt	XOR2	in1	in2	in2^	out	wn=1u	wp=3u	le=0.18u
m1	out	in2	in1	vdd	mp18	w=wp	l=le
m2	in1	in2^	out	0	mn18	w=wn	l=le
m3	out	in1	in2	vdd	mp18	w=wp	l=le
m4	out	in1	in2^	0	mn18	w=wn	l=le
.ends

***2-Input XNOR (Pass Transistor Logic)
.subckt	XNOR2	in1	in2	in2^	out	wn=1u	wp=3u	le=0.18u
m1	out	in2^	in1	vdd	mp18	w=wp	l=le
m2	in1	in2	out	0	mn18	w=wn	l=le
m3	out	in1	in2^	vdd	mp18	w=wp	l=le
m4	out	in1	in2	0	mn18	w=wn	l=le
.ends

***Multiplexer without Inverter***
.subckt	MUX-no-INV	in1	in2	out	control	control^	wn=1u	wp=3u	le=0.18u
x1	in1	out	control	control^	TG	wn='wn'	wp='wp'	le='le'
x2	in2	out	control^	control	TG	wn='wn'	wp='wp'	le='le'
.ends

***Multiplexer***
.subckt	MUX	in1	in2	out	control	wn=1u	wp=3u	le=0.18u
x1	in1	out	control	control^	TG	wn='wn'	wp='wp'	le='le'
x2	in2	out	control^	control	TG	wn='wn'	wp='wp'	le='le'
x3	control	control^	INV	wn='wn'	wp='wp'	le='le'
.ends

***MUX-Pair with no inverter***
.subckt	MUX-Pair-no-INV	in1	in2	out1	out2	control	control^	wn=1u	wp=3u	le=0.18u
x1	in1	in2	out1	control	control^	MUX-no-INV	wn='wn'	wp='wp'	le='le'
x2	in2	in1	out2	control	control^	MUX-no-INV	wn='wn'	wp='wp'	le='le'
.ends

***MUX-Pair***
.subckt	MUX-Pair	in1	in2	out1	out2	control	wn=1u	wp=3u	le=0.18u
x1	in1	in2	out1	control	MUX	wn='wn'	wp='wp'	le='le'
x2	in2	in1	out2	control	MUX	wn='wn'	wp='wp'	le='le'
.ends

***5-Bit Decoder
.subckt	Decoder5Bit	in0	in1	in2	in3	in4	out0	out1	out2	out3	out4	out5	out6	out7	out8	out9	out10	out11	out12	out13	out14	out15	out16	out17	out18	out19	out20	out21	out22	out23	out24	out25	out26	out27	out28	out29	out30	out31	wn=1u	wp=3u	le=0.18u	*in0 & out0 are lsb
x1	in0	in0^	INV	wn='wn'	wp='wp'	le='le'
x2	in1	in1^	INV	wn='wn'	wp='wp'	le='le'
x3	in2	in2^	INV	wn='wn'	wp='wp'	le='le'
x4	in3	in3^	INV	wn='wn'	wp='wp'	le='le'
x5	in4	in4^	INV	wn='wn'	wp='wp'	le='le'

x6	in0	in1	in2	in3	in4	out0	NOR5	wn='wn'	wp='wp'	le='le'
x7	in0^	in1	in2	in3	in4	out1	NOR5	wn='wn'	wp='wp'	le='le'
x8	in0	in1^	in2	in3	in4	out2	NOR5	wn='wn'	wp='wp'	le='le'
x9	in0^	in1^	in2	in3	in4	out3	NOR5	wn='wn'	wp='wp'	le='le'
x10	in0	in1	in2^	in3	in4	out4	NOR5	wn='wn'	wp='wp'	le='le'
x11	in0^	in1	in2^	in3	in4	out5	NOR5	wn='wn'	wp='wp'	le='le'
x12	in0	in1^	in2^	in3	in4	out6	NOR5	wn='wn'	wp='wp'	le='le'
x13	in0^	in1^	in2^	in3	in4	out7	NOR5	wn='wn'	wp='wp'	le='le'
x14	in0	in1	in2	in3^	in4	out8	NOR5	wn='wn'	wp='wp'	le='le'
x15	in0^	in1	in2	in3^	in4	out9	NOR5	wn='wn'	wp='wp'	le='le'
x16	in0	in1^	in2	in3^	in4	out10	NOR5	wn='wn'	wp='wp'	le='le'
x17	in0^	in1^	in2	in3^	in4	out11	NOR5	wn='wn'	wp='wp'	le='le'
x18	in0	in1	in2^	in3^	in4	out12	NOR5	wn='wn'	wp='wp'	le='le'
x19	in0^	in1	in2^	in3^	in4	out13	NOR5	wn='wn'	wp='wp'	le='le'
x20	in0	in1^	in2^	in3^	in4	out14	NOR5	wn='wn'	wp='wp'	le='le'
x21	in0^	in1^	in2^	in3^	in4	out15	NOR5	wn='wn'	wp='wp'	le='le'
x22	in0	in1	in2	in3	in4^	out16	NOR5	wn='wn'	wp='wp'	le='le'
x23	in0^	in1	in2	in3	in4^	out17	NOR5	wn='wn'	wp='wp'	le='le'
x24	in0	in1^	in2	in3	in4^	out18	NOR5	wn='wn'	wp='wp'	le='le'
x25	in0^	in1^	in2	in3	in4^	out19	NOR5	wn='wn'	wp='wp'	le='le'
x26	in0	in1	in2^	in3	in4^	out20	NOR5	wn='wn'	wp='wp'	le='le'
x27	in0^	in1	in2^	in3	in4^	out21	NOR5	wn='wn'	wp='wp'	le='le'
x28	in0	in1^	in2^	in3	in4^	out22	NOR5	wn='wn'	wp='wp'	le='le'
x29	in0^	in1^	in2^	in3	in4^	out23	NOR5	wn='wn'	wp='wp'	le='le'
x30	in0	in1	in2	in3^	in4^	out24	NOR5	wn='wn'	wp='wp'	le='le'
x31	in0^	in1	in2	in3^	in4^	out25	NOR5	wn='wn'	wp='wp'	le='le'
x32	in0	in1^	in2	in3^	in4^	out26	NOR5	wn='wn'	wp='wp'	le='le'
x33	in0^	in1^	in2	in3^	in4^	out27	NOR5	wn='wn'	wp='wp'	le='le'
x34	in0	in1	in2^	in3^	in4^	out28	NOR5	wn='wn'	wp='wp'	le='le'
x35	in0^	in1	in2^	in3^	in4^	out29	NOR5	wn='wn'	wp='wp'	le='le'
x36	in0	in1^	in2^	in3^	in4^	out30	NOR5	wn='wn'	wp='wp'	le='le'
x37	in0^	in1^	in2^	in3^	in4^	out31	NOR5	wn='wn'	wp='wp'	le='le'
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

***10-Transistor 2-Input NOR***
.subckt	NOR2-m10	in1	in2	out	wn=1u	wp=3u	le=0.18u
m1	a	in2	vdd	vdd	mp18	w='2*wp'	l=le	m=10
m2	out	in1	a	vdd	mp18	w='2*wp'	l=le	m=10
m3	out	in1	0	0	mn18	w=wn	l=le	m=10
m4	out	in2	0	0	mn18	w=wn	l=le	m=10
.ends

***10-Transistor Muller C-element
.subckt	C-element-m10	in1	in2	out	wn=1u	wp=3u	le=0.18u
m1	a	in1	vdd	vdd	mp18	w='wp'	l=le	m=10
m2	out^	in2	a	vdd	mp18	w='wp'	l=le	m=10
m3	out^	in2	b	0	mn18	w='wn'	l=le	m=10
m4	b	in1	0	0	mn18	w='wn'	l=le	m=10
m5	c	in1	vdd	vdd	mp18	w='wp'	l=le	m=10
m6	c	in2	vdd	vdd	mp18	w='wp'	l=le	m=10
m7	out^	z	c	vdd	mp18	w='wp'	l=le	m=10
m8	out^	z	d	0	mn18	w='wn'	l=le	m=10
m9	d	in1	0	0	mn18	w='wn'	l=le	m=10
m10	d	in2	0	0	mn18	w='wn'	l=le	m=10
x1	out^	z	INV-m10	wn='wn'	wp='wp'	le='le'
x2	out^	out	INV-m10	wn='wn'	wp='wp'	le='le'
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

***10-Transistor 2-Input XNOR (Pass Transistor Logic)
.subckt	XNOR2-m10	in1	in2	in2^	out	wn=1u	wp=3u	le=0.18u
m1	out	in2^	in1	vdd	mp18	w=wp	l=le	m=10
m2	in1	in2	out	0	mn18	w=wn	l=le	m=10
m3	out	in1	in2^	vdd	mp18	w=wp	l=le	m=10
m4	out	in1	in2	0	mn18	w=wn	l=le	m=10
.ends

***Clocked Inverter
.subckt	CK-INV-m10	in	out	ck	ck^	wn=1u	wp=3u	le=0.18u
m1	a	in	vdd	vdd	mp18	w=wp	l=le	m=10
m2	out	ck^	a	vdd	mp18	w=wp	l=le	m=10
m3	out	ck	b	0	mn18	w=wn	l=le	m=10
m4	b	in	0	0	mn18	w=wn	l=le	m=10
.ends

***10-Transistor Transmission Gate***
.subckt	TG-m10	in	out	control	control^	wn=1u	wp=3u	le=0.18u
m1	in	control^	out	vdd	mp18	w=wp	l=le	m=10
m2	out	control	in	0	mn18	w=wn	l=le	m=10
.ends

***10-Transistor D Flip-Flop with Reset
.subckt	DFF-R-m10	in	out	clk	clk^	reset	reset^	wn=1u	wp=3u	le=0.18u
x1	in	a	clk^	clk	TG-m10	wn='wn'	wp='wp'	le='le'
x2	a	reset^	b	NAND2-m10	wn='wn'	wp='wp'	le='le'
x3	b	a	clk	clk^	CK-INV-m10	wn='wn'	wp='wp'	le='le'
x4	b	c	clk	clk^	TG-m10	wn='wn'	wp='wp'	le='le'
x5	c	reset	d	NOR2-m10	wn='wn'	wp='wp'	le='le'
x6	d	c	clk^	clk	CK-INV-m10	wn='wn'	wp='wp'	le='le'
x7	c	out	INV-m10	wn='wn'	wp='wp'	le='le'
.ends

***10-Transistor D Flip-Flop with Set
.subckt	DFF-S-m10	in	out	clk	clk^	set	set^	wn=1u	wp=3u	le=0.18u
x1	in	a	clk^	clk	TG-m10	wn='wn'	wp='wp'	le='le'
x2	a	set	b	NOR2-m10	wn='wn'	wp='wp'	le='le'
x3	b	a	clk	clk^	CK-INV-m10	wn='wn'	wp='wp'	le='le'
x4	b	c	clk	clk^	TG-m10	wn='wn'	wp='wp'	le='le'
x5	c	set^	d	NAND2-m10	wn='wn'	wp='wp'	le='le'
x6	d	c	clk^	clk	CK-INV-m10	wn='wn'	wp='wp'	le='le'
x7	c	out	INV-m10	wn='wn'	wp='wp'	le='le'
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

***10-Transistor 4-Input NOR***
.subckt	NOR4-m10	in1	in2	in3	in4	out	wn=1u	wp=3u	le=0.18u
m1	c	in4	vdd	vdd	mp18	w='4*wp'	l=le	m=10
m2	b	in3	c	vdd	mp18	w='4*wp'	l=le	m=10
m3	a	in2	b	vdd	mp18	w='4*wp'	l=le	m=10
m4	out	in1	a	vdd	mp18	w='4*wp'	l=le	m=10
m5	out	in1	0	0	mn18	w=wn	l=le	m=10
m6	out	in2	0	0	mn18	w=wn	l=le	m=10
m7	out	in3	0	0	mn18	w=wn	l=le	m=10
m8	out	in4	0	0	mn18	w=wn	l=le	m=10
.ends

.ends Crossover&Mutation