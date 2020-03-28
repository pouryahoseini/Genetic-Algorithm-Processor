*Fitness Estimation and Random Immigrants Modules

.subckt	Fitness-Estimation_Random-Immigrants	Initialize	Initialize^	Replica-Reset	Replica-Reset^	Fitness-Estimation-Start	Fitness-Estimation-done	Fitness-Estimation-Ack-Pin	Fitness-Estimation-Req1-Pin	Fitness-Estimation-Req2-Pin	Fitness-Estimation-Ready1-Pin	Fitness-Estimation-Ready2-Pin	Fitness-Estimation-Discard-Pin	Chromosome-Resolution-Pin	Fitness-Resolution-Pin	Initialization-Start	Handshake-Done	Fitness-Estimation-stage2	Fitness-Estimation-xstage1	Random-Immigrants-Gap-Pin-1	Random-Immigrants-Gap-Pin-0	Offspring1-Ready-Flag	Offspring2-Ready-Flag	X-Handshake-Enable	Pipeline-Stages-Pin-3	Pipeline-Stages-Pin-2	Pipeline-Stages-Pin-1	Pipeline-Stages-Pin-0	bus0	bus1	bus2	bus3	bus4	bus5	bus6	bus7	bus8	bus9	bus10	bus11	bus12	bus13	bus14	bus15	bus16	bus17	bus18	bus19	bus20	bus21	bus22	bus23	bus24	bus25	bus26	bus27	bus28	bus29	bus30	bus31	Off1-0	Off1-1	Off1-2	Off1-3	Off1-4	Off1-5	Off1-6	Off1-7	Off1-8	Off1-9	Off1-10	Off1-11	Off1-12	Off1-13	Off1-14	Off1-15	Off1-16	Off1-17	Off1-18	Off1-19	Off1-20	Off1-21	Off1-22	Off1-23	Off1-24	Off1-25	Off1-26	Off1-27	Off1-28	Off1-29	Off1-30	Off1-31	Off1-32	Off1-33	Off1-34	Off1-35	Off1-36	Off1-37	Off1-38	Off1-39	Off1-40	Off1-41	Off1-42	Off1-43	Off1-44	Off1-45	Off1-46	Off1-47	Off1-48	Off1-49	Off1-50	Off1-51	Off1-52	Off1-53	Off1-54	Off1-55	Off1-56	Off1-57	Off1-58	Off1-59	Off1-60	Off1-61	Off1-62	Off1-63	Off2-0	Off2-1	Off2-2	Off2-3	Off2-4	Off2-5	Off2-6	Off2-7	Off2-8	Off2-9	Off2-10	Off2-11	Off2-12	Off2-13	Off2-14	Off2-15	Off2-16	Off2-17	Off2-18	Off2-19	Off2-20	Off2-21	Off2-22	Off2-23	Off2-24	Off2-25	Off2-26	Off2-27	Off2-28	Off2-29	Off2-30	Off2-31	Off2-32	Off2-33	Off2-34	Off2-35	Off2-36	Off2-37	Off2-38	Off2-39	Off2-40	Off2-41	Off2-42	Off2-43	Off2-44	Off2-45	Off2-46	Off2-47	Off2-48	Off2-49	Off2-50	Off2-51	Off2-52	Off2-53	Off2-54	Off2-55	Off2-56	Off2-57	Off2-58	Off2-59	Off2-60	Off2-61	Off2-62	Off2-63	dOffspring1-0	dOffspring1-1	dOffspring1-2	dOffspring1-3	dOffspring1-4	dOffspring1-5	dOffspring1-6	dOffspring1-7	dOffspring1-8	dOffspring1-9	dOffspring1-10	dOffspring1-11	dOffspring1-12	dOffspring1-13	dOffspring1-14	dOffspring1-15	dOffspring1-16	dOffspring1-17	dOffspring1-18	dOffspring1-19	dOffspring1-20	dOffspring1-21	dOffspring1-22	dOffspring1-23	dOffspring1-24	dOffspring1-25	dOffspring1-26	dOffspring1-27	dOffspring1-28	dOffspring1-29	dOffspring1-30	dOffspring1-31	dOffspring2-0	dOffspring2-1	dOffspring2-2	dOffspring2-3	dOffspring2-4	dOffspring2-5	dOffspring2-6	dOffspring2-7	dOffspring2-8	dOffspring2-9	dOffspring2-10	dOffspring2-11	dOffspring2-12	dOffspring2-13	dOffspring2-14	dOffspring2-15	dOffspring2-16	dOffspring2-17	dOffspring2-18	dOffspring2-19	dOffspring2-20	dOffspring2-21	dOffspring2-22	dOffspring2-23	dOffspring2-24	dOffspring2-25	dOffspring2-26	dOffspring2-27	dOffspring2-28	dOffspring2-29	dOffspring2-30	dOffspring2-31	rng41	rng42	rng43	rng44	rng45	rng46	rng47	rng48	rng49	rng50	rng51	rng52	rng53	rng54	rng55	rng56	rng57	rng58	rng59	rng60	rng61	rng62	rng63	rng64	rng65	rng66	rng67	rng68	rng69	rng70	rng71	rng72	rng168	rng169	rng170	rng171	rng172	rng173	rng174	rng175	rng176	rng177	rng178	rng179	rng180	rng181	rng182	rng183	rng184	rng185	rng186	rng187	rng188	rng189	rng190	rng191	rng192	rng193	rng194	rng195	rng196	rng197	rng198	rng199

*random immigrants ready flag generation
x1	Random-Immigrants-Gap-Pin-0	Random-Immigrants-Gap-Pin-1	gap0	gap1	gap2	Decoder2Bit-3output	wn=8u	wp=24u

x2	Initialize	gap1	1	1^	OR2	wn=8u	wp=24u
x3	Initialize	gap0	2	2^	OR2	wn=8u	wp=24u
x4	Handshake-Done	Handshake-Done^	INV-m10	wn=6u	wp=18u	*m=10

x5	random-immigrants-enable	3	Handshake-Done	Handshake-Done^	2	2^	DFF-R	wn=8u	wp=24u
x6	3	4	Handshake-Done	Handshake-Done^	2	2^	DFF-R	wn=8u	wp=24u

x7	random-immigrants-enable	gap2	5	5^	AND2	wn=8u	wp=24u
x8	4	5	6	6^	OR2	wn=8u	wp=24u

x9	6	7	Handshake-Done	Handshake-Done^	2	2^	DFF-R	wn=8u	wp=24u
x10	7	random-immigrants-enable	Handshake-Done	Handshake-Done^	1	1^	DFF-S	wn=8u	wp=24u

*pipeline stages
x11	X-Handshake-Enable	Initialization-Start	10	10^	AND2	wn=16u	wp=48u
x12	10	Chromosome-Resolution-Pin	11	11^	AND2	wn=8u	wp=24u

x13	rng41	rng42	rng43	rng44	rng45	rng46	rng47	rng48	rng49	rng50	rng51	rng52	rng53	rng54	rng55	rng56	rng57	rng58	rng59	rng60	rng61	rng62	rng63	rng64	rng65	rng66	rng67	rng68	rng69	rng70	rng71	rng72	a0	a1	a2	a3	a4	a5	a6	a7	a8	a9	a10	a11	a12	a13	a14	a15	a16	a17	a18	a19	a20	a21	a22	a23	a24	a25	a26	a27	a28	a29	a30	a31	10	10^	11	11^	Latch-Array-32	wn=0.25u	wp=0.75u

x14	a0	a1	a2	a3	a4	a5	a6	a7	a8	a9	a10	a11	a12	a13	a14	a15	a16	a17	a18	a19	a20	a21	a22	a23	a24	a25	a26	a27	a28	a29	a30	a31	dOffspring1-0	dOffspring1-1	dOffspring1-2	dOffspring1-3	dOffspring1-4	dOffspring1-5	dOffspring1-6	dOffspring1-7	dOffspring1-8	dOffspring1-9	dOffspring1-10	dOffspring1-11	dOffspring1-12	dOffspring1-13	dOffspring1-14	dOffspring1-15	dOffspring1-16	dOffspring1-17	dOffspring1-18	dOffspring1-19	dOffspring1-20	dOffspring1-21	dOffspring1-22	dOffspring1-23	dOffspring1-24	dOffspring1-25	dOffspring1-26	dOffspring1-27	dOffspring1-28	dOffspring1-29	dOffspring1-30	dOffspring1-31	b0	b1	b2	b3	b4	b5	b6	b7	b8	b9	b10	b11	b12	b13	b14	b15	b16	b17	b18	b19	b20	b21	b22	b23	b24	b25	b26	b27	b28	b29	b30	b31	Initialization-Start	MUX-Array-32	wn=0.25u	wp=0.75u

x15	Initialization-Start	random-immigrants-enable	12	12^	OR2-m10	wn=3.2u	wp=9.6u	*m=10

x16	12	X-Handshake-Enable	13	13^	AND2	wn=16u	wp=48u
x17	13	Chromosome-Resolution-Pin	14	14^	AND2	wn=8u	wp=24u

x18	rng168	rng169	rng170	rng171	rng172	rng173	rng174	rng175	rng176	rng177	rng178	rng179	rng180	rng181	rng182	rng183	rng184	rng185	rng186	rng187	rng188	rng189	rng190	rng191	rng192	rng193	rng194	rng195	rng196	rng197	rng198	rng199	c0	c1	c2	c3	c4	c5	c6	c7	c8	c9	c10	c11	c12	c13	c14	c15	c16	c17	c18	c19	c20	c21	c22	c23	c24	c25	c26	c27	c28	c29	c30	c31	13	13^	14	14^	Latch-Array-32	wn=0.25u	wp=0.75u

x19	c0	c1	c2	c3	c4	c5	c6	c7	c8	c9	c10	c11	c12	c13	c14	c15	c16	c17	c18	c19	c20	c21	c22	c23	c24	c25	c26	c27	c28	c29	c30	c31	dOffspring2-0	dOffspring2-1	dOffspring2-2	dOffspring2-3	dOffspring2-4	dOffspring2-5	dOffspring2-6	dOffspring2-7	dOffspring2-8	dOffspring2-9	dOffspring2-10	dOffspring2-11	dOffspring2-12	dOffspring2-13	dOffspring2-14	dOffspring2-15	dOffspring2-16	dOffspring2-17	dOffspring2-18	dOffspring2-19	dOffspring2-20	dOffspring2-21	dOffspring2-22	dOffspring2-23	dOffspring2-24	dOffspring2-25	dOffspring2-26	dOffspring2-27	dOffspring2-28	dOffspring2-29	dOffspring2-30	dOffspring2-31	d0	d1	d2	d3	d4	d5	d6	d7	d8	d9	d10	d11	d12	d13	d14	d15	d16	d17	d18	d19	d20	d21	d22	d23	d24	d25	d26	d27	d28	d29	d30	d31	12	12^	MUX-Array-32-no-INV	wn=0.25u	wp=0.75u

x20	stage3	Chromosome-Resolution-Pin	20	20^	AND2-m10	wn=6.4u	wp=19.2u	*m=10
x21	stage3	stage3^	INV	wn=32u	wp=96u

x22	b0	b1	b2	b3	b4	b5	b6	b7	b8	b9	b10	b11	b12	b13	b14	b15	b16	b17	b18	b19	b20	b21	b22	b23	b24	b25	b26	b27	b28	b29	b30	b31	b1-0	b1-1	b1-2	b1-3	b1-4	b1-5	b1-6	b1-7	b1-8	b1-9	b1-10	b1-11	b1-12	b1-13	b1-14	b1-15	b1-16	b1-17	b1-18	b1-19	b1-20	b1-21	b1-22	b1-23	b1-24	b1-25	b1-26	b1-27	b1-28	b1-29	b1-30	b1-31	b2-0	b2-1	b2-2	b2-3	b2-4	b2-5	b2-6	b2-7	b2-8	b2-9	b2-10	b2-11	b2-12	b2-13	b2-14	b2-15	b2-16	b2-17	b2-18	b2-19	b2-20	b2-21	b2-22	b2-23	b2-24	b2-25	b2-26	b2-27	b2-28	b2-29	b2-30	b2-31	b3-0	b3-1	b3-2	b3-3	b3-4	b3-5	b3-6	b3-7	b3-8	b3-9	b3-10	b3-11	b3-12	b3-13	b3-14	b3-15	b3-16	b3-17	b3-18	b3-19	b3-20	b3-21	b3-22	b3-23	b3-24	b3-25	b3-26	b3-27	b3-28	b3-29	b3-30	b3-31	b4-0	b4-1	b4-2	b4-3	b4-4	b4-5	b4-6	b4-7	b4-8	b4-9	b4-10	b4-11	b4-12	b4-13	b4-14	b4-15	b4-16	b4-17	b4-18	b4-19	b4-20	b4-21	b4-22	b4-23	b4-24	b4-25	b4-26	b4-27	b4-28	b4-29	b4-30	b4-31	b5-0	b5-1	b5-2	b5-3	b5-4	b5-5	b5-6	b5-7	b5-8	b5-9	b5-10	b5-11	b5-12	b5-13	b5-14	b5-15	b5-16	b5-17	b5-18	b5-19	b5-20	b5-21	b5-22	b5-23	b5-24	b5-25	b5-26	b5-27	b5-28	b5-29	b5-30	b5-31	b6-0	b6-1	b6-2	b6-3	b6-4	b6-5	b6-6	b6-7	b6-8	b6-9	b6-10	b6-11	b6-12	b6-13	b6-14	b6-15	b6-16	b6-17	b6-18	b6-19	b6-20	b6-21	b6-22	b6-23	b6-24	b6-25	b6-26	b6-27	b6-28	b6-29	b6-30	b6-31	b7-0	b7-1	b7-2	b7-3	b7-4	b7-5	b7-6	b7-7	b7-8	b7-9	b7-10	b7-11	b7-12	b7-13	b7-14	b7-15	b7-16	b7-17	b7-18	b7-19	b7-20	b7-21	b7-22	b7-23	b7-24	b7-25	b7-26	b7-27	b7-28	b7-29	b7-30	b7-31	b8-0	b8-1	b8-2	b8-3	b8-4	b8-5	b8-6	b8-7	b8-8	b8-9	b8-10	b8-11	b8-12	b8-13	b8-14	b8-15	b8-16	b8-17	b8-18	b8-19	b8-20	b8-21	b8-22	b8-23	b8-24	b8-25	b8-26	b8-27	b8-28	b8-29	b8-30	b8-31	b9-0	b9-1	b9-2	b9-3	b9-4	b9-5	b9-6	b9-7	b9-8	b9-9	b9-10	b9-11	b9-12	b9-13	b9-14	b9-15	b9-16	b9-17	b9-18	b9-19	b9-20	b9-21	b9-22	b9-23	b9-24	b9-25	b9-26	b9-27	b9-28	b9-29	b9-30	b9-31	b10-0	b10-1	b10-2	b10-3	b10-4	b10-5	b10-6	b10-7	b10-8	b10-9	b10-10	b10-11	b10-12	b10-13	b10-14	b10-15	b10-16	b10-17	b10-18	b10-19	b10-20	b10-21	b10-22	b10-23	b10-24	b10-25	b10-26	b10-27	b10-28	b10-29	b10-30	b10-31	b11-0	b11-1	b11-2	b11-3	b11-4	b11-5	b11-6	b11-7	b11-8	b11-9	b11-10	b11-11	b11-12	b11-13	b11-14	b11-15	b11-16	b11-17	b11-18	b11-19	b11-20	b11-21	b11-22	b11-23	b11-24	b11-25	b11-26	b11-27	b11-28	b11-29	b11-30	b11-31	b12-0	b12-1	b12-2	b12-3	b12-4	b12-5	b12-6	b12-7	b12-8	b12-9	b12-10	b12-11	b12-12	b12-13	b12-14	b12-15	b12-16	b12-17	b12-18	b12-19	b12-20	b12-21	b12-22	b12-23	b12-24	b12-25	b12-26	b12-27	b12-28	b12-29	b12-30	b12-31	b13-0	b13-1	b13-2	b13-3	b13-4	b13-5	b13-6	b13-7	b13-8	b13-9	b13-10	b13-11	b13-12	b13-13	b13-14	b13-15	b13-16	b13-17	b13-18	b13-19	b13-20	b13-21	b13-22	b13-23	b13-24	b13-25	b13-26	b13-27	b13-28	b13-29	b13-30	b13-31	b14-0	b14-1	b14-2	b14-3	b14-4	b14-5	b14-6	b14-7	b14-8	b14-9	b14-10	b14-11	b14-12	b14-13	b14-14	b14-15	b14-16	b14-17	b14-18	b14-19	b14-20	b14-21	b14-22	b14-23	b14-24	b14-25	b14-26	b14-27	b14-28	b14-29	b14-30	b14-31	b15-0	b15-1	b15-2	b15-3	b15-4	b15-5	b15-6	b15-7	b15-8	b15-9	b15-10	b15-11	b15-12	b15-13	b15-14	b15-15	b15-16	b15-17	b15-18	b15-19	b15-20	b15-21	b15-22	b15-23	b15-24	b15-25	b15-26	b15-27	b15-28	b15-29	b15-30	b15-31	b16-0	b16-1	b16-2	b16-3	b16-4	b16-5	b16-6	b16-7	b16-8	b16-9	b16-10	b16-11	b16-12	b16-13	b16-14	b16-15	b16-16	b16-17	b16-18	b16-19	b16-20	b16-21	b16-22	b16-23	b16-24	b16-25	b16-26	b16-27	b16-28	b16-29	b16-30	b16-31	stage3	stage3^	20	20^	DFF-Stack	wn=0.25u	wp=0.75u

x23	b1-0	b2-0	b3-0	b4-0	b5-0	b6-0	b7-0	b8-0	b9-0	b10-0	b11-0	b12-0	b13-0	b14-0	b15-0	b16-0	b1-1	b2-1	b3-1	b4-1	b5-1	b6-1	b7-1	b8-1	b9-1	b11-1	b11-1	b12-1	b13-1	b14-1	b15-1	b16-1	b1-2	b2-2	b3-2	b4-2	b5-2	b6-2	b7-2	b8-2	b9-2	b12-2	b11-2	b12-2	b13-2	b14-2	b15-2	b16-2	b1-3	b2-3	b3-3	b4-3	b5-3	b6-3	b7-3	b8-3	b9-3	b13-3	b11-3	b12-3	b13-3	b14-3	b15-3	b16-3	b1-4	b2-4	b3-4	b4-4	b5-4	b6-4	b7-4	b8-4	b9-4	b14-4	b11-4	b12-4	b13-4	b14-4	b15-4	b16-4	b1-5	b2-5	b3-5	b4-5	b5-5	b6-5	b7-5	b8-5	b9-5	b15-5	b11-5	b12-5	b13-5	b14-5	b15-5	b16-5	b1-6	b2-6	b3-6	b4-6	b5-6	b6-6	b7-6	b8-6	b9-6	b16-6	b11-6	b12-6	b13-6	b14-6	b15-6	b16-6	b1-7	b2-7	b3-7	b4-7	b5-7	b6-7	b7-7	b8-7	b9-7	b17-7	b11-7	b12-7	b13-7	b14-7	b15-7	b16-7	b1-8	b2-8	b3-8	b4-8	b5-8	b6-8	b7-8	b8-8	b9-8	b18-8	b11-8	b12-8	b13-8	b14-8	b15-8	b16-8	b1-9	b2-9	b3-9	b4-9	b5-9	b6-9	b7-9	b8-9	b9-9	b19-9	b11-9	b12-9	b13-9	b14-9	b15-9	b16-9	b1-10	b2-10	b3-10	b4-10	b5-10	b6-10	b7-10	b8-10	b9-10	b110-10	b11-10	b12-10	b13-10	b14-10	b15-10	b16-10	b1-11	b2-11	b3-11	b4-11	b5-11	b6-11	b7-11	b8-11	b9-11	b111-11	b11-11	b12-11	b13-11	b14-11	b15-11	b16-11	b1-12	b2-12	b3-12	b4-12	b5-12	b6-12	b7-12	b8-12	b9-12	b112-12	b11-12	b12-12	b13-12	b14-12	b15-12	b16-12	b1-13	b2-13	b3-13	b4-13	b5-13	b6-13	b7-13	b8-13	b9-13	b113-13	b11-13	b12-13	b13-13	b14-13	b15-13	b16-13	b1-14	b2-14	b3-14	b4-14	b5-14	b6-14	b7-14	b8-14	b9-14	b114-14	b11-14	b12-14	b13-14	b14-14	b15-14	b16-14	b1-15	b2-15	b3-15	b4-15	b5-15	b6-15	b7-15	b8-15	b9-15	b115-15	b11-15	b12-15	b13-15	b14-15	b15-15	b16-15	b1-16	b2-16	b3-16	b4-16	b5-16	b6-16	b7-16	b8-16	b9-16	b116-16	b11-16	b12-16	b13-16	b14-16	b15-16	b16-16	b1-17	b2-17	b3-17	b4-17	b5-17	b6-17	b7-17	b8-17	b9-17	b117-17	b11-17	b12-17	b13-17	b14-17	b15-17	b16-17	b1-18	b2-18	b3-18	b4-18	b5-18	b6-18	b7-18	b8-18	b9-18	b118-18	b11-18	b12-18	b13-18	b14-18	b15-18	b16-18	b1-19	b2-19	b3-19	b4-19	b5-19	b6-19	b7-19	b8-19	b9-19	b119-19	b11-19	b12-19	b13-19	b14-19	b15-19	b16-19	b1-20	b2-20	b3-20	b4-20	b5-20	b6-20	b7-20	b8-20	b9-20	b120-20	b11-20	b12-20	b13-20	b14-20	b15-20	b16-20	b1-21	b2-21	b3-21	b4-21	b5-21	b6-21	b7-21	b8-21	b9-21	b121-21	b11-21	b12-21	b13-21	b14-21	b15-21	b16-21	b1-22	b2-22	b3-22	b4-22	b5-22	b6-22	b7-22	b8-22	b9-22	b122-22	b11-22	b12-22	b13-22	b14-22	b15-22	b16-22	b1-23	b2-23	b3-23	b4-23	b5-23	b6-23	b7-23	b8-23	b9-23	b123-23	b11-23	b12-23	b13-23	b14-23	b15-23	b16-23	b1-24	b2-24	b3-24	b4-24	b5-24	b6-24	b7-24	b8-24	b9-24	b124-24	b11-24	b12-24	b13-24	b14-24	b15-24	b16-24	b1-25	b2-25	b3-25	b4-25	b5-25	b6-25	b7-25	b8-25	b9-25	b125-25	b11-25	b12-25	b13-25	b14-25	b15-25	b16-25	b1-26	b2-26	b3-26	b4-26	b5-26	b6-26	b7-26	b8-26	b9-26	b126-26	b11-26	b12-26	b13-26	b14-26	b15-26	b16-26	b1-27	b2-27	b3-27	b4-27	b5-27	b6-27	b7-27	b8-27	b9-27	b127-27	b11-27	b12-27	b13-27	b14-27	b15-27	b16-27	b1-28	b2-28	b3-28	b4-28	b5-28	b6-28	b7-28	b8-28	b9-28	b128-28	b11-28	b12-28	b13-28	b14-28	b15-28	b16-28	b1-29	b2-29	b3-29	b4-29	b5-29	b6-29	b7-29	b8-29	b9-29	b129-29	b11-29	b12-29	b13-29	b14-29	b15-29	b16-29	b1-30	b2-30	b3-30	b4-30	b5-30	b6-30	b7-30	b8-30	b9-30	b130-30	b11-30	b12-30	b13-30	b14-30	b15-30	b16-30	b1-31	b2-31	b3-31	b4-31	b5-31	b6-31	b7-31	b8-31	b9-31	b131-31	b11-31	b12-31	b13-31	b14-31	b15-31	b16-31	Off1-0	Off1-1	Off1-2	Off1-3	Off1-4	Off1-5	Off1-6	Off1-7	Off1-8	Off1-9	Off1-10	Off1-11	Off1-12	Off1-13	Off1-14	Off1-15	Off1-16	Off1-17	Off1-18	Off1-19	Off1-20	Off1-21	Off1-22	Off1-23	Off1-24	Off1-25	Off1-26	Off1-27	Off1-28	Off1-29	Off1-30	Off1-31	dec0	dec1	dec2	dec3	dec4	dec5	dec6	dec7	dec8	dec9	dec10	dec11	dec12	dec13	dec14	dec15	dec0^	dec1^	dec2^	dec3^	dec4^	dec5^	dec6^	dec7^	dec8^	dec9^	dec10^	dec11^	dec12^	dec13^	dec14^	dec15^	MUX-16-Array-32	wn=0.25u	wp=0.75u

x24	stage4	Chromosome-Resolution-Pin	21	21^	AND2-m10	wn=6.4u	wp=19.2u	*m=10
x25	stage4	stage4^	INV	wn=32u	wp=96u

x26	d0	d1	d2	d3	d4	d5	d6	d7	d8	d9	d10	d11	d12	d13	d14	d15	d16	d17	d18	d19	d20	d21	d22	d23	d24	d25	d26	d27	d28	d29	d30	d31	d1-0	d1-1	d1-2	d1-3	d1-4	d1-5	d1-6	d1-7	d1-8	d1-9	d1-10	d1-11	d1-12	d1-13	d1-14	d1-15	d1-16	d1-17	d1-18	d1-19	d1-20	d1-21	d1-22	d1-23	d1-24	d1-25	d1-26	d1-27	d1-28	d1-29	d1-30	d1-31	d2-0	d2-1	d2-2	d2-3	d2-4	d2-5	d2-6	d2-7	d2-8	d2-9	d2-10	d2-11	d2-12	d2-13	d2-14	d2-15	d2-16	d2-17	d2-18	d2-19	d2-20	d2-21	d2-22	d2-23	d2-24	d2-25	d2-26	d2-27	d2-28	d2-29	d2-30	d2-31	d3-0	d3-1	d3-2	d3-3	d3-4	d3-5	d3-6	d3-7	d3-8	d3-9	d3-10	d3-11	d3-12	d3-13	d3-14	d3-15	d3-16	d3-17	d3-18	d3-19	d3-20	d3-21	d3-22	d3-23	d3-24	d3-25	d3-26	d3-27	d3-28	d3-29	d3-30	d3-31	d4-0	d4-1	d4-2	d4-3	d4-4	d4-5	d4-6	d4-7	d4-8	d4-9	d4-10	d4-11	d4-12	d4-13	d4-14	d4-15	d4-16	d4-17	d4-18	d4-19	d4-20	d4-21	d4-22	d4-23	d4-24	d4-25	d4-26	d4-27	d4-28	d4-29	d4-30	d4-31	d5-0	d5-1	d5-2	d5-3	d5-4	d5-5	d5-6	d5-7	d5-8	d5-9	d5-10	d5-11	d5-12	d5-13	d5-14	d5-15	d5-16	d5-17	d5-18	d5-19	d5-20	d5-21	d5-22	d5-23	d5-24	d5-25	d5-26	d5-27	d5-28	d5-29	d5-30	d5-31	d6-0	d6-1	d6-2	d6-3	d6-4	d6-5	d6-6	d6-7	d6-8	d6-9	d6-10	d6-11	d6-12	d6-13	d6-14	d6-15	d6-16	d6-17	d6-18	d6-19	d6-20	d6-21	d6-22	d6-23	d6-24	d6-25	d6-26	d6-27	d6-28	d6-29	d6-30	d6-31	d7-0	d7-1	d7-2	d7-3	d7-4	d7-5	d7-6	d7-7	d7-8	d7-9	d7-10	d7-11	d7-12	d7-13	d7-14	d7-15	d7-16	d7-17	d7-18	d7-19	d7-20	d7-21	d7-22	d7-23	d7-24	d7-25	d7-26	d7-27	d7-28	d7-29	d7-30	d7-31	d8-0	d8-1	d8-2	d8-3	d8-4	d8-5	d8-6	d8-7	d8-8	d8-9	d8-10	d8-11	d8-12	d8-13	d8-14	d8-15	d8-16	d8-17	d8-18	d8-19	d8-20	d8-21	d8-22	d8-23	d8-24	d8-25	d8-26	d8-27	d8-28	d8-29	d8-30	d8-31	d9-0	d9-1	d9-2	d9-3	d9-4	d9-5	d9-6	d9-7	d9-8	d9-9	d9-10	d9-11	d9-12	d9-13	d9-14	d9-15	d9-16	d9-17	d9-18	d9-19	d9-20	d9-21	d9-22	d9-23	d9-24	d9-25	d9-26	d9-27	d9-28	d9-29	d9-30	d9-31	d10-0	d10-1	d10-2	d10-3	d10-4	d10-5	d10-6	d10-7	d10-8	d10-9	d10-10	d10-11	d10-12	d10-13	d10-14	d10-15	d10-16	d10-17	d10-18	d10-19	d10-20	d10-21	d10-22	d10-23	d10-24	d10-25	d10-26	d10-27	d10-28	d10-29	d10-30	d10-31	d11-0	d11-1	d11-2	d11-3	d11-4	d11-5	d11-6	d11-7	d11-8	d11-9	d11-10	d11-11	d11-12	d11-13	d11-14	d11-15	d11-16	d11-17	d11-18	d11-19	d11-20	d11-21	d11-22	d11-23	d11-24	d11-25	d11-26	d11-27	d11-28	d11-29	d11-30	d11-31	d12-0	d12-1	d12-2	d12-3	d12-4	d12-5	d12-6	d12-7	d12-8	d12-9	d12-10	d12-11	d12-12	d12-13	d12-14	d12-15	d12-16	d12-17	d12-18	d12-19	d12-20	d12-21	d12-22	d12-23	d12-24	d12-25	d12-26	d12-27	d12-28	d12-29	d12-30	d12-31	d13-0	d13-1	d13-2	d13-3	d13-4	d13-5	d13-6	d13-7	d13-8	d13-9	d13-10	d13-11	d13-12	d13-13	d13-14	d13-15	d13-16	d13-17	d13-18	d13-19	d13-20	d13-21	d13-22	d13-23	d13-24	d13-25	d13-26	d13-27	d13-28	d13-29	d13-30	d13-31	d14-0	d14-1	d14-2	d14-3	d14-4	d14-5	d14-6	d14-7	d14-8	d14-9	d14-10	d14-11	d14-12	d14-13	d14-14	d14-15	d14-16	d14-17	d14-18	d14-19	d14-20	d14-21	d14-22	d14-23	d14-24	d14-25	d14-26	d14-27	d14-28	d14-29	d14-30	d14-31	d15-0	d15-1	d15-2	d15-3	d15-4	d15-5	d15-6	d15-7	d15-8	d15-9	d15-10	d15-11	d15-12	d15-13	d15-14	d15-15	d15-16	d15-17	d15-18	d15-19	d15-20	d15-21	d15-22	d15-23	d15-24	d15-25	d15-26	d15-27	d15-28	d15-29	d15-30	d15-31	d16-0	d16-1	d16-2	d16-3	d16-4	d16-5	d16-6	d16-7	d16-8	d16-9	d16-10	d16-11	d16-12	d16-13	d16-14	d16-15	d16-16	d16-17	d16-18	d16-19	d16-20	d16-21	d16-22	d16-23	d16-24	d16-25	d16-26	d16-27	d16-28	d16-29	d16-30	d16-31	stage4	stage4^	21	21^	DFF-Stack	wn=0.25u	wp=0.75u


x27	d1-0	d2-0	d3-0	d4-0	d5-0	d6-0	d7-0	d8-0	d9-0	d10-0	d11-0	d12-0	d13-0	d14-0	d15-0	d16-0	d1-1	d2-1	d3-1	d4-1	d5-1	d6-1	d7-1	d8-1	d9-1	d11-1	d11-1	d12-1	d13-1	d14-1	d15-1	d16-1	d1-2	d2-2	d3-2	d4-2	d5-2	d6-2	d7-2	d8-2	d9-2	d12-2	d11-2	d12-2	d13-2	d14-2	d15-2	d16-2	d1-3	d2-3	d3-3	d4-3	d5-3	d6-3	d7-3	d8-3	d9-3	d13-3	d11-3	d12-3	d13-3	d14-3	d15-3	d16-3	d1-4	d2-4	d3-4	d4-4	d5-4	d6-4	d7-4	d8-4	d9-4	d14-4	d11-4	d12-4	d13-4	d14-4	d15-4	d16-4	d1-5	d2-5	d3-5	d4-5	d5-5	d6-5	d7-5	d8-5	d9-5	d15-5	d11-5	d12-5	d13-5	d14-5	d15-5	d16-5	d1-6	d2-6	d3-6	d4-6	d5-6	d6-6	d7-6	d8-6	d9-6	d16-6	d11-6	d12-6	d13-6	d14-6	d15-6	d16-6	d1-7	d2-7	d3-7	d4-7	d5-7	d6-7	d7-7	d8-7	d9-7	d17-7	d11-7	d12-7	d13-7	d14-7	d15-7	d16-7	d1-8	d2-8	d3-8	d4-8	d5-8	d6-8	d7-8	d8-8	d9-8	d18-8	d11-8	d12-8	d13-8	d14-8	d15-8	d16-8	d1-9	d2-9	d3-9	d4-9	d5-9	d6-9	d7-9	d8-9	d9-9	d19-9	d11-9	d12-9	d13-9	d14-9	d15-9	d16-9	d1-10	d2-10	d3-10	d4-10	d5-10	d6-10	d7-10	d8-10	d9-10	d110-10	d11-10	d12-10	d13-10	d14-10	d15-10	d16-10	d1-11	d2-11	d3-11	d4-11	d5-11	d6-11	d7-11	d8-11	d9-11	d111-11	d11-11	d12-11	d13-11	d14-11	d15-11	d16-11	d1-12	d2-12	d3-12	d4-12	d5-12	d6-12	d7-12	d8-12	d9-12	d112-12	d11-12	d12-12	d13-12	d14-12	d15-12	d16-12	d1-13	d2-13	d3-13	d4-13	d5-13	d6-13	d7-13	d8-13	d9-13	d113-13	d11-13	d12-13	d13-13	d14-13	d15-13	d16-13	d1-14	d2-14	d3-14	d4-14	d5-14	d6-14	d7-14	d8-14	d9-14	d114-14	d11-14	d12-14	d13-14	d14-14	d15-14	d16-14	d1-15	d2-15	d3-15	d4-15	d5-15	d6-15	d7-15	d8-15	d9-15	d115-15	d11-15	d12-15	d13-15	d14-15	d15-15	d16-15	d1-16	d2-16	d3-16	d4-16	d5-16	d6-16	d7-16	d8-16	d9-16	d116-16	d11-16	d12-16	d13-16	d14-16	d15-16	d16-16	d1-17	d2-17	d3-17	d4-17	d5-17	d6-17	d7-17	d8-17	d9-17	d117-17	d11-17	d12-17	d13-17	d14-17	d15-17	d16-17	d1-18	d2-18	d3-18	d4-18	d5-18	d6-18	d7-18	d8-18	d9-18	d118-18	d11-18	d12-18	d13-18	d14-18	d15-18	d16-18	d1-19	d2-19	d3-19	d4-19	d5-19	d6-19	d7-19	d8-19	d9-19	d119-19	d11-19	d12-19	d13-19	d14-19	d15-19	d16-19	d1-20	d2-20	d3-20	d4-20	d5-20	d6-20	d7-20	d8-20	d9-20	d120-20	d11-20	d12-20	d13-20	d14-20	d15-20	d16-20	d1-21	d2-21	d3-21	d4-21	d5-21	d6-21	d7-21	d8-21	d9-21	d121-21	d11-21	d12-21	d13-21	d14-21	d15-21	d16-21	d1-22	d2-22	d3-22	d4-22	d5-22	d6-22	d7-22	d8-22	d9-22	d122-22	d11-22	d12-22	d13-22	d14-22	d15-22	d16-22	d1-23	d2-23	d3-23	d4-23	d5-23	d6-23	d7-23	d8-23	d9-23	d123-23	d11-23	d12-23	d13-23	d14-23	d15-23	d16-23	d1-24	d2-24	d3-24	d4-24	d5-24	d6-24	d7-24	d8-24	d9-24	d124-24	d11-24	d12-24	d13-24	d14-24	d15-24	d16-24	d1-25	d2-25	d3-25	d4-25	d5-25	d6-25	d7-25	d8-25	d9-25	d125-25	d11-25	d12-25	d13-25	d14-25	d15-25	d16-25	d1-26	d2-26	d3-26	d4-26	d5-26	d6-26	d7-26	d8-26	d9-26	d126-26	d11-26	d12-26	d13-26	d14-26	d15-26	d16-26	d1-27	d2-27	d3-27	d4-27	d5-27	d6-27	d7-27	d8-27	d9-27	d127-27	d11-27	d12-27	d13-27	d14-27	d15-27	d16-27	d1-28	d2-28	d3-28	d4-28	d5-28	d6-28	d7-28	d8-28	d9-28	d128-28	d11-28	d12-28	d13-28	d14-28	d15-28	d16-28	d1-29	d2-29	d3-29	d4-29	d5-29	d6-29	d7-29	d8-29	d9-29	d129-29	d11-29	d12-29	d13-29	d14-29	d15-29	d16-29	d1-30	d2-30	d3-30	d4-30	d5-30	d6-30	d7-30	d8-30	d9-30	d130-30	d11-30	d12-30	d13-30	d14-30	d15-30	d16-30	d1-31	d2-31	d3-31	d4-31	d5-31	d6-31	d7-31	d8-31	d9-31	d131-31	d11-31	d12-31	d13-31	d14-31	d15-31	d16-31	Off2-0	Off2-1	Off2-2	Off2-3	Off2-4	Off2-5	Off2-6	Off2-7	Off2-8	Off2-9	Off2-10	Off2-11	Off2-12	Off2-13	Off2-14	Off2-15	Off2-16	Off2-17	Off2-18	Off2-19	Off2-20	Off2-21	Off2-22	Off2-23	Off2-24	Off2-25	Off2-26	Off2-27	Off2-28	Off2-29	Off2-30	Off2-31	dec0	dec1	dec2	dec3	dec4	dec5	dec6	dec7	dec8	dec9	dec10	dec11	dec12	dec13	dec14	dec15	dec0^	dec1^	dec2^	dec3^	dec4^	dec5^	dec6^	dec7^	dec8^	dec9^	dec10^	dec11^	dec12^	dec13^	dec14^	dec15^	MUX-16-Array-32	wn=0.25u	wp=0.75u

x28	Pipeline-Stages-Pin-0	Pipeline-Stages-Pin-1	Pipeline-Stages-Pin-2	Pipeline-Stages-Pin-3	dec0	dec1	dec2	dec3	dec4	dec5	dec6	dec7	dec8	dec9	dec10	dec11	dec12	dec13	dec14	dec15	Decoder4Bit	wn=2u	wp=6u

x29	dec0	dec1	dec2	dec3	dec4	dec5	dec6	dec7	dec0^	dec1^	dec2^	dec3^	dec4^	dec5^	dec6^	dec7^	INV-Array-8	wn=1u	wp=3u
x30	dec8	dec9	dec10	dec11	dec12	dec13	dec14	dec15	dec8^	dec9^	dec10^	dec11^	dec12^	dec13^	dec14^	dec15^	INV-Array-8	wn=1u	wp=3u

*send and receive
x31	b0	b1	b2	b3	b4	b5	b6	b7	b8	b9	b10	b11	b12	b13	b14	b15	b16	b17	b18	b19	b20	b21	b22	b23	b24	b25	b26	b27	b28	b29	b30	b31	i1-0	i1-1	i1-2	i1-3	i1-4	i1-5	i1-6	i1-7	i1-8	i1-9	i1-10	i1-11	i1-12	i1-13	i1-14	i1-15	i1-16	i1-17	i1-18	i1-19	i1-20	i1-21	i1-22	i1-23	i1-24	i1-25	i1-26	i1-27	i1-28	i1-29	i1-30	i1-31	INV-Array-32	wn=0.6u	wp=1.8u

x32	i1-0	i1-1	i1-2	i1-3	i1-4	i1-5	i1-6	i1-7	i1-8	i1-9	i1-10	i1-11	i1-12	i1-13	i1-14	i1-15	i1-16	i1-17	i1-18	i1-19	i1-20	i1-21	i1-22	i1-23	i1-24	i1-25	i1-26	i1-27	i1-28	i1-29	i1-30	i1-31	i2-0	i2-1	i2-2	i2-3	i2-4	i2-5	i2-6	i2-7	i2-8	i2-9	i2-10	i2-11	i2-12	i2-13	i2-14	i2-15	i2-16	i2-17	i2-18	i2-19	i2-20	i2-21	i2-22	i2-23	i2-24	i2-25	i2-26	i2-27	i2-28	i2-29	i2-30	i2-31	INV-Array-32	wn=1.5u	wp=4.5u

x33	i2-0	i2-1	i2-2	i2-3	i2-4	i2-5	i2-6	i2-7	i2-8	i2-9	i2-10	i2-11	i2-12	i2-13	i2-14	i2-15	i2-16	i2-17	i2-18	i2-19	i2-20	i2-21	i2-22	i2-23	i2-24	i2-25	i2-26	i2-27	i2-28	i2-29	i2-30	i2-31	i3-0	i3-1	i3-2	i3-3	i3-4	i3-5	i3-6	i3-7	i3-8	i3-9	i3-10	i3-11	i3-12	i3-13	i3-14	i3-15	i3-16	i3-17	i3-18	i3-19	i3-20	i3-21	i3-22	i3-23	i3-24	i3-25	i3-26	i3-27	i3-28	i3-29	i3-30	i3-31	INV-Array-32	wn=4u	wp=12u

x34	i3-0	i3-1	i3-2	i3-3	i3-4	i3-5	i3-6	i3-7	i3-8	i3-9	i3-10	i3-11	i3-12	i3-13	i3-14	i3-15	i3-16	i3-17	i3-18	i3-19	i3-20	i3-21	i3-22	i3-23	i3-24	i3-25	i3-26	i3-27	i3-28	i3-29	i3-30	i3-31	i4-0	i4-1	i4-2	i4-3	i4-4	i4-5	i4-6	i4-7	i4-8	i4-9	i4-10	i4-11	i4-12	i4-13	i4-14	i4-15	i4-16	i4-17	i4-18	i4-19	i4-20	i4-21	i4-22	i4-23	i4-24	i4-25	i4-26	i4-27	i4-28	i4-29	i4-30	i4-31	INV-Array-32	wn=10u	wp=30u

x35	i4-0	i4-1	i4-2	i4-3	i4-4	i4-5	i4-6	i4-7	i4-8	i4-9	i4-10	i4-11	i4-12	i4-13	i4-14	i4-15	i4-16	i4-17	i4-18	i4-19	i4-20	i4-21	i4-22	i4-23	i4-24	i4-25	i4-26	i4-27	i4-28	i4-29	i4-30	i4-31	i5-0	i5-1	i5-2	i5-3	i5-4	i5-5	i5-6	i5-7	i5-8	i5-9	i5-10	i5-11	i5-12	i5-13	i5-14	i5-15	i5-16	i5-17	i5-18	i5-19	i5-20	i5-21	i5-22	i5-23	i5-24	i5-25	i5-26	i5-27	i5-28	i5-29	i5-30	i5-31	INV-Array-32	wn=25u	wp=75u

x36	i5-0	i5-1	i5-2	i5-3	i5-4	i5-5	i5-6	i5-7	i5-8	i5-9	i5-10	i5-11	i5-12	i5-13	i5-14	i5-15	i5-16	i5-17	i5-18	i5-19	i5-20	i5-21	i5-22	i5-23	i5-24	i5-25	i5-26	i5-27	i5-28	i5-29	i5-30	i5-31	i6-0	i6-1	i6-2	i6-3	i6-4	i6-5	i6-6	i6-7	i6-8	i6-9	i6-10	i6-11	i6-12	i6-13	i6-14	i6-15	i6-16	i6-17	i6-18	i6-19	i6-20	i6-21	i6-22	i6-23	i6-24	i6-25	i6-26	i6-27	i6-28	i6-29	i6-30	i6-31	INV-Array-32-m10	wn=6u	wp=18u	*m=10

x37	i6-0	i6-1	i6-2	i6-3	i6-4	i6-5	i6-6	i6-7	i6-8	i6-9	i6-10	i6-11	i6-12	i6-13	i6-14	i6-15	i6-16	i6-17	i6-18	i6-19	i6-20	i6-21	i6-22	i6-23	i6-24	i6-25	i6-26	i6-27	i6-28	i6-29	i6-30	i6-31	i7-0	i7-1	i7-2	i7-3	i7-4	i7-5	i7-6	i7-7	i7-8	i7-9	i7-10	i7-11	i7-12	i7-13	i7-14	i7-15	i7-16	i7-17	i7-18	i7-19	i7-20	i7-21	i7-22	i7-23	i7-24	i7-25	i7-26	i7-27	i7-28	i7-29	i7-30	i7-31	INV-Array-32-m10	wn=15u	wp=45u	*m=10

x38	i7-0	i7-1	i7-2	i7-3	i7-4	i7-5	i7-6	i7-7	i7-8	i7-9	i7-10	i7-11	i7-12	i7-13	i7-14	i7-15	i7-16	i7-17	i7-18	i7-19	i7-20	i7-21	i7-22	i7-23	i7-24	i7-25	i7-26	i7-27	i7-28	i7-29	i7-30	i7-31	i8-0	i8-1	i8-2	i8-3	i8-4	i8-5	i8-6	i8-7	i8-8	i8-9	i8-10	i8-11	i8-12	i8-13	i8-14	i8-15	i8-16	i8-17	i8-18	i8-19	i8-20	i8-21	i8-22	i8-23	i8-24	i8-25	i8-26	i8-27	i8-28	i8-29	i8-30	i8-31	INV-Array-32-m20	wn=19u	wp=57u	*m=20

x39	d0	d1	d2	d3	d4	d5	d6	d7	d8	d9	d10	d11	d12	d13	d14	d15	d16	d17	d18	d19	d20	d21	d22	d23	d24	d25	d26	d27	d28	d29	d30	d31	ii1-0	ii1-1	ii1-2	ii1-3	ii1-4	ii1-5	ii1-6	ii1-7	ii1-8	ii1-9	ii1-10	ii1-11	ii1-12	ii1-13	ii1-14	ii1-15	ii1-16	ii1-17	ii1-18	ii1-19	ii1-20	ii1-21	ii1-22	ii1-23	ii1-24	ii1-25	ii1-26	ii1-27	ii1-28	ii1-29	ii1-30	ii1-31	INV-Array-32	wn=0.6u	wp=1.8u

x40	ii1-0	ii1-1	ii1-2	ii1-3	ii1-4	ii1-5	ii1-6	ii1-7	ii1-8	ii1-9	ii1-10	ii1-11	ii1-12	ii1-13	ii1-14	ii1-15	ii1-16	ii1-17	ii1-18	ii1-19	ii1-20	ii1-21	ii1-22	ii1-23	ii1-24	ii1-25	ii1-26	ii1-27	ii1-28	ii1-29	ii1-30	ii1-31	ii2-0	ii2-1	ii2-2	ii2-3	ii2-4	ii2-5	ii2-6	ii2-7	ii2-8	ii2-9	ii2-10	ii2-11	ii2-12	ii2-13	ii2-14	ii2-15	ii2-16	ii2-17	ii2-18	ii2-19	ii2-20	ii2-21	ii2-22	ii2-23	ii2-24	ii2-25	ii2-26	ii2-27	ii2-28	ii2-29	ii2-30	ii2-31	INV-Array-32	wn=1.5u	wp=4.5u

x41	ii2-0	ii2-1	ii2-2	ii2-3	ii2-4	ii2-5	ii2-6	ii2-7	ii2-8	ii2-9	ii2-10	ii2-11	ii2-12	ii2-13	ii2-14	ii2-15	ii2-16	ii2-17	ii2-18	ii2-19	ii2-20	ii2-21	ii2-22	ii2-23	ii2-24	ii2-25	ii2-26	ii2-27	ii2-28	ii2-29	ii2-30	ii2-31	ii3-0	ii3-1	ii3-2	ii3-3	ii3-4	ii3-5	ii3-6	ii3-7	ii3-8	ii3-9	ii3-10	ii3-11	ii3-12	ii3-13	ii3-14	ii3-15	ii3-16	ii3-17	ii3-18	ii3-19	ii3-20	ii3-21	ii3-22	ii3-23	ii3-24	ii3-25	ii3-26	ii3-27	ii3-28	ii3-29	ii3-30	ii3-31	INV-Array-32	wn=4u	wp=12u

x42	ii3-0	ii3-1	ii3-2	ii3-3	ii3-4	ii3-5	ii3-6	ii3-7	ii3-8	ii3-9	ii3-10	ii3-11	ii3-12	ii3-13	ii3-14	ii3-15	ii3-16	ii3-17	ii3-18	ii3-19	ii3-20	ii3-21	ii3-22	ii3-23	ii3-24	ii3-25	ii3-26	ii3-27	ii3-28	ii3-29	ii3-30	ii3-31	ii4-0	ii4-1	ii4-2	ii4-3	ii4-4	ii4-5	ii4-6	ii4-7	ii4-8	ii4-9	ii4-10	ii4-11	ii4-12	ii4-13	ii4-14	ii4-15	ii4-16	ii4-17	ii4-18	ii4-19	ii4-20	ii4-21	ii4-22	ii4-23	ii4-24	ii4-25	ii4-26	ii4-27	ii4-28	ii4-29	ii4-30	ii4-31	INV-Array-32	wn=10u	wp=30u

x43	ii4-0	ii4-1	ii4-2	ii4-3	ii4-4	ii4-5	ii4-6	ii4-7	ii4-8	ii4-9	ii4-10	ii4-11	ii4-12	ii4-13	ii4-14	ii4-15	ii4-16	ii4-17	ii4-18	ii4-19	ii4-20	ii4-21	ii4-22	ii4-23	ii4-24	ii4-25	ii4-26	ii4-27	ii4-28	ii4-29	ii4-30	ii4-31	ii5-0	ii5-1	ii5-2	ii5-3	ii5-4	ii5-5	ii5-6	ii5-7	ii5-8	ii5-9	ii5-10	ii5-11	ii5-12	ii5-13	ii5-14	ii5-15	ii5-16	ii5-17	ii5-18	ii5-19	ii5-20	ii5-21	ii5-22	ii5-23	ii5-24	ii5-25	ii5-26	ii5-27	ii5-28	ii5-29	ii5-30	ii5-31	INV-Array-32	wn=25u	wp=75u

x44	ii5-0	ii5-1	ii5-2	ii5-3	ii5-4	ii5-5	ii5-6	ii5-7	ii5-8	ii5-9	ii5-10	ii5-11	ii5-12	ii5-13	ii5-14	ii5-15	ii5-16	ii5-17	ii5-18	ii5-19	ii5-20	ii5-21	ii5-22	ii5-23	ii5-24	ii5-25	ii5-26	ii5-27	ii5-28	ii5-29	ii5-30	ii5-31	ii6-0	ii6-1	ii6-2	ii6-3	ii6-4	ii6-5	ii6-6	ii6-7	ii6-8	ii6-9	ii6-10	ii6-11	ii6-12	ii6-13	ii6-14	ii6-15	ii6-16	ii6-17	ii6-18	ii6-19	ii6-20	ii6-21	ii6-22	ii6-23	ii6-24	ii6-25	ii6-26	ii6-27	ii6-28	ii6-29	ii6-30	ii6-31	INV-Array-32-m10	wn=6u	wp=18u	*m=10

x45	ii6-0	ii6-1	ii6-2	ii6-3	ii6-4	ii6-5	ii6-6	ii6-7	ii6-8	ii6-9	ii6-10	ii6-11	ii6-12	ii6-13	ii6-14	ii6-15	ii6-16	ii6-17	ii6-18	ii6-19	ii6-20	ii6-21	ii6-22	ii6-23	ii6-24	ii6-25	ii6-26	ii6-27	ii6-28	ii6-29	ii6-30	ii6-31	ii7-0	ii7-1	ii7-2	ii7-3	ii7-4	ii7-5	ii7-6	ii7-7	ii7-8	ii7-9	ii7-10	ii7-11	ii7-12	ii7-13	ii7-14	ii7-15	ii7-16	ii7-17	ii7-18	ii7-19	ii7-20	ii7-21	ii7-22	ii7-23	ii7-24	ii7-25	ii7-26	ii7-27	ii7-28	ii7-29	ii7-30	ii7-31	INV-Array-32-m10	wn=15u	wp=45u	*m=10

x46	ii7-0	ii7-1	ii7-2	ii7-3	ii7-4	ii7-5	ii7-6	ii7-7	ii7-8	ii7-9	ii7-10	ii7-11	ii7-12	ii7-13	ii7-14	ii7-15	ii7-16	ii7-17	ii7-18	ii7-19	ii7-20	ii7-21	ii7-22	ii7-23	ii7-24	ii7-25	ii7-26	ii7-27	ii7-28	ii7-29	ii7-30	ii7-31	ii8-0	ii8-1	ii8-2	ii8-3	ii8-4	ii8-5	ii8-6	ii8-7	ii8-8	ii8-9	ii8-10	ii8-11	ii8-12	ii8-13	ii8-14	ii8-15	ii8-16	ii8-17	ii8-18	ii8-19	ii8-20	ii8-21	ii8-22	ii8-23	ii8-24	ii8-25	ii8-26	ii8-27	ii8-28	ii8-29	ii8-30	ii8-31	INV-Array-32-m20	wn=19u	wp=57u	*m=20


x47	Fitness-Estimation-xstage1	30	INV-m10	wn=5u	wp=15u	*m=10
x48	30	31	INV-m10	wn=12.5u	wp=37.5u	*m=10
x49	31	32	INV-m10	wn=32u	wp=96u	*m=10
x50	32	33	INV-m50	wn=16u	wp=48u	*m=50
x51	33	34	INV-m100	wn=20u	wp=60u	*m=100
x52	34	35	INV-m150	wn=33u	wp=100u	*m=150

x53	Fitness-Estimation-stage2	40	INV-m10	wn=5u	wp=15u	*m=10
x54	40	41	INV-m10	wn=12.5u	wp=37.5u	*m=10
x55	41	42	INV-m10	wn=32u	wp=96u	*m=10
x56	42	43	INV-m50	wn=16u	wp=48u	*m=50
x57	43	44	INV-m100	wn=20u	wp=60u	*m=100
x58	44	45	INV-m150	wn=33u	wp=100u	*m=150

x59	i8-0	i8-1	i8-2	i8-3	i8-4	i8-5	i8-6	i8-7	i8-8	i8-9	i8-10	i8-11	i8-12	i8-13	i8-14	i8-15	i8-16	i8-17	i8-18	i8-19	i8-20	i8-21	i8-22	i8-23	i8-24	i8-25	i8-26	i8-27	i8-28	i8-29	i8-30	i8-31	bus0	bus1	bus2	bus3	bus4	bus5	bus6	bus7	bus8	bus9	bus10	bus11	bus12	bus13	bus14	bus15	bus16	bus17	bus18	bus19	bus20	bus21	bus22	bus23	bus24	bus25	bus26	bus27	bus28	bus29	bus30	bus31	35	Pad-Switch-Array-32-m20	wn=19u	wp=57u	*m=20

x60	ii8-0	ii8-1	ii8-2	ii8-3	ii8-4	ii8-5	ii8-6	ii8-7	ii8-8	ii8-9	ii8-10	ii8-11	ii8-12	ii8-13	ii8-14	ii8-15	ii8-16	ii8-17	ii8-18	ii8-19	ii8-20	ii8-21	ii8-22	ii8-23	ii8-24	ii8-25	ii8-26	ii8-27	ii8-28	ii8-29	ii8-30	ii8-31	bus0	bus1	bus2	bus3	bus4	bus5	bus6	bus7	bus8	bus9	bus10	bus11	bus12	bus13	bus14	bus15	bus16	bus17	bus18	bus19	bus20	bus21	bus22	bus23	bus24	bus25	bus26	bus27	bus28	bus29	bus30	bus31	45	Pad-Switch-Array-32-m20	wn=19u	wp=57u	*m=20

x61	stage3	Fitness-Resolution-Pin	50	50^	AND2	wn=8u	wp=24u
x62	stage4	Fitness-Resolution-Pin	51	51^	AND2	wn=8u	wp=24u

x63	bus0	bus1	bus2	bus3	bus4	bus5	bus6	bus7	bus8	bus9	bus10	bus11	bus12	bus13	bus14	bus15	bus16	bus17	bus18	bus19	bus20	bus21	bus22	bus23	bus24	bus25	bus26	bus27	bus28	bus29	bus30	bus31	Off1-32	Off1-33	Off1-34	Off1-35	Off1-36	Off1-37	Off1-38	Off1-39	Off1-40	Off1-41	Off1-42	Off1-43	Off1-44	Off1-45	Off1-46	Off1-47	Off1-48	Off1-49	Off1-50	Off1-51	Off1-52	Off1-53	Off1-54	Off1-55	Off1-56	Off1-57	Off1-58	Off1-59	Off1-60	Off1-61	Off1-62	Off1-63	stage3	stage3^	50	50^	Latch-Array-32	wn=0.25u	wp=0.75u

x64	bus0	bus1	bus2	bus3	bus4	bus5	bus6	bus7	bus8	bus9	bus10	bus11	bus12	bus13	bus14	bus15	bus16	bus17	bus18	bus19	bus20	bus21	bus22	bus23	bus24	bus25	bus26	bus27	bus28	bus29	bus30	bus31	Off2-32	Off2-33	Off2-34	Off2-35	Off2-36	Off2-37	Off2-38	Off2-39	Off2-40	Off2-41	Off2-42	Off2-43	Off2-44	Off2-45	Off2-46	Off2-47	Off2-48	Off2-49	Off2-50	Off2-51	Off2-52	Off2-53	Off2-54	Off2-55	Off2-56	Off2-57	Off2-58	Off2-59	Off2-60	Off2-61	Off2-62	Off2-63	stage4	stage4^	51	51^	Latch-Array-32	wn=0.25u	wp=0.75u

*offspring ready flag generation
x65	0	60	stage3	stage3^	Initialize	Initialize^	DFF-S	wn=0.5u	wp=1.5u
x66	60	61	stage3	stage3^	Initialize	Initialize^	DFF-S	wn=0.5u	wp=1.5u
x67	61	62	stage3	stage3^	Initialize	Initialize^	DFF-S	wn=0.5u	wp=1.5u
x68	62	63	stage3	stage3^	Initialize	Initialize^	DFF-S	wn=0.5u	wp=1.5u
x69	63	64	stage3	stage3^	Initialize	Initialize^	DFF-S	wn=0.5u	wp=1.5u
x70	64	65	stage3	stage3^	Initialize	Initialize^	DFF-S	wn=0.5u	wp=1.5u
x71	65	66	stage3	stage3^	Initialize	Initialize^	DFF-S	wn=0.5u	wp=1.5u
x72	66	67	stage3	stage3^	Initialize	Initialize^	DFF-S	wn=0.5u	wp=1.5u
x73	67	68	stage3	stage3^	Initialize	Initialize^	DFF-S	wn=0.5u	wp=1.5u
x74	68	69	stage3	stage3^	Initialize	Initialize^	DFF-S	wn=0.5u	wp=1.5u
x75	69	70	stage3	stage3^	Initialize	Initialize^	DFF-S	wn=0.5u	wp=1.5u
x76	70	71	stage3	stage3^	Initialize	Initialize^	DFF-S	wn=0.5u	wp=1.5u
x77	71	72	stage3	stage3^	Initialize	Initialize^	DFF-S	wn=0.5u	wp=1.5u
x78	72	73	stage3	stage3^	Initialize	Initialize^	DFF-S	wn=0.5u	wp=1.5u
x79	73	74	stage3	stage3^	Initialize	Initialize^	DFF-S	wn=0.5u	wp=1.5u
x80	74	75	stage3	stage3^	Initialize	Initialize^	DFF-S	wn=0.5u	wp=1.5u

x81	60	61	62	63	64	65	66	67	68	69	70	71	72	73	74	75	80	dec0	dec1	dec2	dec3	dec4	dec5	dec6	dec7	dec8	dec9	dec10	dec11	dec12	dec13	dec14	dec15	dec0^	dec1^	dec2^	dec3^	dec4^	dec5^	dec6^	dec7^	dec8^	dec9^	dec10^	dec11^	dec12^	dec13^	dec14^	dec15^	MUX-16	

x82	Fitness-Estimation-Discard-Pin	81	stage3	stage3^	D-Latch	wn=20u	wp=60u
x83	Fitness-Estimation-Discard-Pin	82	stage4	stage4^	D-Latch	wn=20u	wp=60u

x84	80	81	Offspring1-Ready-Flag	NOR2-m10	wn=2u	wp=6u	*m=10
x85	80	82	Offspring2-Ready-Flag	NOR2-m10	wn=2u	wp=6u	*m=10

*replica circuit
x86	Fitness-Estimation-Ack-Pin	Fitness-Estimation-Ack-Pin^	INV-m10	wn=20u	wp=60u	*m=10

x87	0	stage1	Fitness-Estimation-Ack-Pin	Fitness-Estimation-Ack-Pin^	Replica-Reset	Replica-Reset^	DFF-S	wn=20u	wp=60u
x88	stage1	Fitness-Estimation-stage2	Fitness-Estimation-Ack-Pin	Fitness-Estimation-Ack-Pin^	Replica-Reset	Replica-Reset^	DFF-R	wn=20u	wp=60u
x89	Fitness-Estimation-stage2	90	Fitness-Estimation-Ack-Pin	Fitness-Estimation-Ack-Pin^	Replica-Reset	Replica-Reset^	DFF-R	wn=20u	wp=60u
x90	90	91	Fitness-Estimation-Ack-Pin	Fitness-Estimation-Ack-Pin^	Replica-Reset	Replica-Reset^	DFF-R	wn=20u	wp=60u
x91	91	Fitness-Estimation-done	Fitness-Estimation-Ack-Pin	Fitness-Estimation-Ack-Pin^	Replica-Reset	Replica-Reset^	DFF-R	wn=5u	wp=15u

x92	90	500	INV-m10	wn=4u	wp=12u	*m=10
x93	500	501	INV-m10	wn=8u	wp=24u	*m=10
x94	501	100	INV-m10	wn=16u	wp=48u	*m=10
x95	100	stage3	INV-m10	wn=32u	wp=96u	*m=10

x96	91	101	INV-m10	wn=6u	wp=18u	*m=10
x97	101	stage4	INV-m10	wn=18u	wp=54u	*m=10

x98	Fitness-Estimation-Start	stage1	Fitness-Estimation-xstage1	Fitness-Estimation-xstage1^	AND2	wn=20u	wp=60u
x99	Fitness-Estimation-Ack-Pin^	Fitness-Estimation-stage2	pre-Fitness-Estimation-Req2-Pin	pre-Fitness-Estimation-Req2-Pin^	AND2	wn=2u	wp=6u
x100	Fitness-Estimation-Ack-Pin^	90	Fitness-Estimation-Ready1-Pin	Fitness-Estimation-Ready1-Pin^	AND2	wn=2u	wp=6u
x101	Fitness-Estimation-Ack-Pin^	91	Fitness-Estimation-Ready2-Pin	Fitness-Estimation-Ready2-Pin^	AND2	wn=2u	wp=6u

x102	Fitness-Estimation-xstage1	Fitness-Estimation-Ack-Pin^	pre-Fitness-Estimation-Req1-Pin	pre-Fitness-Estimation-Req1-Pin^	AND2	wn=2u	wp=6u

x103	pre-Fitness-Estimation-Req1-Pin	3480	INV	wn=2u	wp=6u	le=0.8u
x104	3480	Fitness-Estimation-Req1-Pin	INV	wn=2u	wp=6u	le=0.8u

x105	pre-Fitness-Estimation-Req2-Pin	3481	INV	wn=2u	wp=6u	le=0.8u
x106	3481	Fitness-Estimation-Req2-Pin	INV	wn=2u	wp=6u	le=0.8u

*****************************Pre Processing
.subckt	DFF-Stack	in1	in2	in3	in4	in5	in6	in7	in8	in9	in10	in11	in12	in13	in14	in15	in16	in17	in18	in19	in20	in21	in22	in23	in24	in25	in26	in27	in28	in29	in30	in31	in32	out1-1	out1-2	out1-3	out1-4	out1-5	out1-6	out1-7	out1-8	out1-9	out1-10	out1-11	out1-12	out1-13	out1-14	out1-15	out1-16	out1-17	out1-18	out1-19	out1-20	out1-21	out1-22	out1-23	out1-24	out1-25	out1-26	out1-27	out1-28	out1-29	out1-30	out1-31	out1-32	out2-1	out2-2	out2-3	out2-4	out2-5	out2-6	out2-7	out2-8	out2-9	out2-10	out2-11	out2-12	out2-13	out2-14	out2-15	out2-16	out2-17	out2-18	out2-19	out2-20	out2-21	out2-22	out2-23	out2-24	out2-25	out2-26	out2-27	out2-28	out2-29	out2-30	out2-31	out2-32	out3-1	out3-2	out3-3	out3-4	out3-5	out3-6	out3-7	out3-8	out3-9	out3-10	out3-11	out3-12	out3-13	out3-14	out3-15	out3-16	out3-17	out3-18	out3-19	out3-20	out3-21	out3-22	out3-23	out3-24	out3-25	out3-26	out3-27	out3-28	out3-29	out3-30	out3-31	out3-32	out4-1	out4-2	out4-3	out4-4	out4-5	out4-6	out4-7	out4-8	out4-9	out4-10	out4-11	out4-12	out4-13	out4-14	out4-15	out4-16	out4-17	out4-18	out4-19	out4-20	out4-21	out4-22	out4-23	out4-24	out4-25	out4-26	out4-27	out4-28	out4-29	out4-30	out4-31	out4-32	out5-1	out5-2	out5-3	out5-4	out5-5	out5-6	out5-7	out5-8	out5-9	out5-10	out5-11	out5-12	out5-13	out5-14	out5-15	out5-16	out5-17	out5-18	out5-19	out5-20	out5-21	out5-22	out5-23	out5-24	out5-25	out5-26	out5-27	out5-28	out5-29	out5-30	out5-31	out5-32	out6-1	out6-2	out6-3	out6-4	out6-5	out6-6	out6-7	out6-8	out6-9	out6-10	out6-11	out6-12	out6-13	out6-14	out6-15	out6-16	out6-17	out6-18	out6-19	out6-20	out6-21	out6-22	out6-23	out6-24	out6-25	out6-26	out6-27	out6-28	out6-29	out6-30	out6-31	out6-32	out7-1	out7-2	out7-3	out7-4	out7-5	out7-6	out7-7	out7-8	out7-9	out7-10	out7-11	out7-12	out7-13	out7-14	out7-15	out7-16	out7-17	out7-18	out7-19	out7-20	out7-21	out7-22	out7-23	out7-24	out7-25	out7-26	out7-27	out7-28	out7-29	out7-30	out7-31	out7-32	out8-1	out8-2	out8-3	out8-4	out8-5	out8-6	out8-7	out8-8	out8-9	out8-10	out8-11	out8-12	out8-13	out8-14	out8-15	out8-16	out8-17	out8-18	out8-19	out8-20	out8-21	out8-22	out8-23	out8-24	out8-25	out8-26	out8-27	out8-28	out8-29	out8-30	out8-31	out8-32	out9-1	out9-2	out9-3	out9-4	out9-5	out9-6	out9-7	out9-8	out9-9	out9-10	out9-11	out9-12	out9-13	out9-14	out9-15	out9-16	out9-17	out9-18	out9-19	out9-20	out9-21	out9-22	out9-23	out9-24	out9-25	out9-26	out9-27	out9-28	out9-29	out9-30	out9-31	out9-32	out10-1	out10-2	out10-3	out10-4	out10-5	out10-6	out10-7	out10-8	out10-9	out10-10	out10-11	out10-12	out10-13	out10-14	out10-15	out10-16	out10-17	out10-18	out10-19	out10-20	out10-21	out10-22	out10-23	out10-24	out10-25	out10-26	out10-27	out10-28	out10-29	out10-30	out10-31	out10-32	out11-1	out11-2	out11-3	out11-4	out11-5	out11-6	out11-7	out11-8	out11-9	out11-10	out11-11	out11-12	out11-13	out11-14	out11-15	out11-16	out11-17	out11-18	out11-19	out11-20	out11-21	out11-22	out11-23	out11-24	out11-25	out11-26	out11-27	out11-28	out11-29	out11-30	out11-31	out11-32	out12-1	out12-2	out12-3	out12-4	out12-5	out12-6	out12-7	out12-8	out12-9	out12-10	out12-11	out12-12	out12-13	out12-14	out12-15	out12-16	out12-17	out12-18	out12-19	out12-20	out12-21	out12-22	out12-23	out12-24	out12-25	out12-26	out12-27	out12-28	out12-29	out12-30	out12-31	out12-32	out13-1	out13-2	out13-3	out13-4	out13-5	out13-6	out13-7	out13-8	out13-9	out13-10	out13-11	out13-12	out13-13	out13-14	out13-15	out13-16	out13-17	out13-18	out13-19	out13-20	out13-21	out13-22	out13-23	out13-24	out13-25	out13-26	out13-27	out13-28	out13-29	out13-30	out13-31	out13-32	out14-1	out14-2	out14-3	out14-4	out14-5	out14-6	out14-7	out14-8	out14-9	out14-10	out14-11	out14-12	out14-13	out14-14	out14-15	out14-16	out14-17	out14-18	out14-19	out14-20	out14-21	out14-22	out14-23	out14-24	out14-25	out14-26	out14-27	out14-28	out14-29	out14-30	out14-31	out14-32	out15-1	out15-2	out15-3	out15-4	out15-5	out15-6	out15-7	out15-8	out15-9	out15-10	out15-11	out15-12	out15-13	out15-14	out15-15	out15-16	out15-17	out15-18	out15-19	out15-20	out15-21	out15-22	out15-23	out15-24	out15-25	out15-26	out15-27	out15-28	out15-29	out15-30	out15-31	out15-32	out16-1	out16-2	out16-3	out16-4	out16-5	out16-6	out16-7	out16-8	out16-9	out16-10	out16-11	out16-12	out16-13	out16-14	out16-15	out16-16	out16-17	out16-18	out16-19	out16-20	out16-21	out16-22	out16-23	out16-24	out16-25	out16-26	out16-27	out16-28	out16-29	out16-30	out16-31	out16-32	clk	clk^	clk-chromosome	clk-chromosome^	wn=1u	wp=3u	le=0.18u


x1	in1	in2	in3	in4	in5	in6	in7	in8	in9	in10	in11	in12	in13	in14	in15	in16	in17	in18	in19	in20	in21	in22	in23	in24	in25	in26	in27	in28	in29	in30	in31	in32	out1-1	out1-2	out1-3	out1-4	out1-5	out1-6	out1-7	out1-8	out1-9	out1-10	out1-11	out1-12	out1-13	out1-14	out1-15	out1-16	out1-17	out1-18	out1-19	out1-20	out1-21	out1-22	out1-23	out1-24	out1-25	out1-26	out1-27	out1-28	out1-29	out1-30	out1-31	out1-32	clk	clk^	clk-chromosome	clk-chromosome^	DFF-Array-32	wn='wn'	wp='wp'	le='le'

x2	out1-1	out1-2	out1-3	out1-4	out1-5	out1-6	out1-7	out1-8	out1-9	out1-10	out1-11	out1-12	out1-13	out1-14	out1-15	out1-16	out1-17	out1-18	out1-19	out1-20	out1-21	out1-22	out1-23	out1-24	out1-25	out1-26	out1-27	out1-28	out1-29	out1-30	out1-31	out1-32	out2-1	out2-2	out2-3	out2-4	out2-5	out2-6	out2-7	out2-8	out2-9	out2-10	out2-11	out2-12	out2-13	out2-14	out2-15	out2-16	out2-17	out2-18	out2-19	out2-20	out2-21	out2-22	out2-23	out2-24	out2-25	out2-26	out2-27	out2-28	out2-29	out2-30	out2-31	out2-32	clk	clk^	clk-chromosome	clk-chromosome^	DFF-Array-32	wn='wn'	wp='wp'	le='le'

x3	out2-1	out2-2	out2-3	out2-4	out2-5	out2-6	out2-7	out2-8	out2-9	out2-10	out2-11	out2-12	out2-13	out2-14	out2-15	out2-16	out2-17	out2-18	out2-19	out2-20	out2-21	out2-22	out2-23	out2-24	out2-25	out2-26	out2-27	out2-28	out2-29	out2-30	out2-31	out2-32	out3-1	out3-2	out3-3	out3-4	out3-5	out3-6	out3-7	out3-8	out3-9	out3-10	out3-11	out3-12	out3-13	out3-14	out3-15	out3-16	out3-17	out3-18	out3-19	out3-20	out3-21	out3-22	out3-23	out3-24	out3-25	out3-26	out3-27	out3-28	out3-29	out3-30	out3-31	out3-32	clk	clk^	clk-chromosome	clk-chromosome^	DFF-Array-32	wn='wn'	wp='wp'	le='le'

x4	out3-1	out3-2	out3-3	out3-4	out3-5	out3-6	out3-7	out3-8	out3-9	out3-10	out3-11	out3-12	out3-13	out3-14	out3-15	out3-16	out3-17	out3-18	out3-19	out3-20	out3-21	out3-22	out3-23	out3-24	out3-25	out3-26	out3-27	out3-28	out3-29	out3-30	out3-31	out3-32	out4-1	out4-2	out4-3	out4-4	out4-5	out4-6	out4-7	out4-8	out4-9	out4-10	out4-11	out4-12	out4-13	out4-14	out4-15	out4-16	out4-17	out4-18	out4-19	out4-20	out4-21	out4-22	out4-23	out4-24	out4-25	out4-26	out4-27	out4-28	out4-29	out4-30	out4-31	out4-32	clk	clk^	clk-chromosome	clk-chromosome^	DFF-Array-32	wn='wn'	wp='wp'	le='le'

x5	out4-1	out4-2	out4-3	out4-4	out4-5	out4-6	out4-7	out4-8	out4-9	out4-10	out4-11	out4-12	out4-13	out4-14	out4-15	out4-16	out4-17	out4-18	out4-19	out4-20	out4-21	out4-22	out4-23	out4-24	out4-25	out4-26	out4-27	out4-28	out4-29	out4-30	out4-31	out4-32	out5-1	out5-2	out5-3	out5-4	out5-5	out5-6	out5-7	out5-8	out5-9	out5-10	out5-11	out5-12	out5-13	out5-14	out5-15	out5-16	out5-17	out5-18	out5-19	out5-20	out5-21	out5-22	out5-23	out5-24	out5-25	out5-26	out5-27	out5-28	out5-29	out5-30	out5-31	out5-32	clk	clk^	clk-chromosome	clk-chromosome^	DFF-Array-32	wn='wn'	wp='wp'	le='le'

x6	out5-1	out5-2	out5-3	out5-4	out5-5	out5-6	out5-7	out5-8	out5-9	out5-10	out5-11	out5-12	out5-13	out5-14	out5-15	out5-16	out5-17	out5-18	out5-19	out5-20	out5-21	out5-22	out5-23	out5-24	out5-25	out5-26	out5-27	out5-28	out5-29	out5-30	out5-31	out5-32	out6-1	out6-2	out6-3	out6-4	out6-5	out6-6	out6-7	out6-8	out6-9	out6-10	out6-11	out6-12	out6-13	out6-14	out6-15	out6-16	out6-17	out6-18	out6-19	out6-20	out6-21	out6-22	out6-23	out6-24	out6-25	out6-26	out6-27	out6-28	out6-29	out6-30	out6-31	out6-32	clk	clk^	clk-chromosome	clk-chromosome^	DFF-Array-32	wn='wn'	wp='wp'	le='le'

x7	out6-1	out6-2	out6-3	out6-4	out6-5	out6-6	out6-7	out6-8	out6-9	out6-10	out6-11	out6-12	out6-13	out6-14	out6-15	out6-16	out6-17	out6-18	out6-19	out6-20	out6-21	out6-22	out6-23	out6-24	out6-25	out6-26	out6-27	out6-28	out6-29	out6-30	out6-31	out6-32	out7-1	out7-2	out7-3	out7-4	out7-5	out7-6	out7-7	out7-8	out7-9	out7-10	out7-11	out7-12	out7-13	out7-14	out7-15	out7-16	out7-17	out7-18	out7-19	out7-20	out7-21	out7-22	out7-23	out7-24	out7-25	out7-26	out7-27	out7-28	out7-29	out7-30	out7-31	out7-32	clk	clk^	clk-chromosome	clk-chromosome^	DFF-Array-32	wn='wn'	wp='wp'	le='le'

x8	out7-1	out7-2	out7-3	out7-4	out7-5	out7-6	out7-7	out7-8	out7-9	out7-10	out7-11	out7-12	out7-13	out7-14	out7-15	out7-16	out7-17	out7-18	out7-19	out7-20	out7-21	out7-22	out7-23	out7-24	out7-25	out7-26	out7-27	out7-28	out7-29	out7-30	out7-31	out7-32	out8-1	out8-2	out8-3	out8-4	out8-5	out8-6	out8-7	out8-8	out8-9	out8-10	out8-11	out8-12	out8-13	out8-14	out8-15	out8-16	out8-17	out8-18	out8-19	out8-20	out8-21	out8-22	out8-23	out8-24	out8-25	out8-26	out8-27	out8-28	out8-29	out8-30	out8-31	out8-32	clk	clk^	clk-chromosome	clk-chromosome^	DFF-Array-32	wn='wn'	wp='wp'	le='le'

x9	out8-1	out8-2	out8-3	out8-4	out8-5	out8-6	out8-7	out8-8	out8-9	out8-10	out8-11	out8-12	out8-13	out8-14	out8-15	out8-16	out8-17	out8-18	out8-19	out8-20	out8-21	out8-22	out8-23	out8-24	out8-25	out8-26	out8-27	out8-28	out8-29	out8-30	out8-31	out8-32	out9-1	out9-2	out9-3	out9-4	out9-5	out9-6	out9-7	out9-8	out9-9	out9-10	out9-11	out9-12	out9-13	out9-14	out9-15	out9-16	out9-17	out9-18	out9-19	out9-20	out9-21	out9-22	out9-23	out9-24	out9-25	out9-26	out9-27	out9-28	out9-29	out9-30	out9-31	out9-32	clk	clk^	clk-chromosome	clk-chromosome^	DFF-Array-32	wn='wn'	wp='wp'	le='le'

x10	out9-1	out9-2	out9-3	out9-4	out9-5	out9-6	out9-7	out9-8	out9-9	out9-10	out9-11	out9-12	out9-13	out9-14	out9-15	out9-16	out9-17	out9-18	out9-19	out9-20	out9-21	out9-22	out9-23	out9-24	out9-25	out9-26	out9-27	out9-28	out9-29	out9-30	out9-31	out9-32	out10-1	out10-2	out10-3	out10-4	out10-5	out10-6	out10-7	out10-8	out10-9	out10-10	out10-11	out10-12	out10-13	out10-14	out10-15	out10-16	out10-17	out10-18	out10-19	out10-20	out10-21	out10-22	out10-23	out10-24	out10-25	out10-26	out10-27	out10-28	out10-29	out10-30	out10-31	out10-32	clk	clk^	clk-chromosome	clk-chromosome^	DFF-Array-32	wn='wn'	wp='wp'	le='le'

x11	out10-1	out10-2	out10-3	out10-4	out10-5	out10-6	out10-7	out10-8	out10-9	out10-10	out10-11	out10-12	out10-13	out10-14	out10-15	out10-16	out10-17	out10-18	out10-19	out10-20	out10-21	out10-22	out10-23	out10-24	out10-25	out10-26	out10-27	out10-28	out10-29	out10-30	out10-31	out10-32	out11-1	out11-2	out11-3	out11-4	out11-5	out11-6	out11-7	out11-8	out11-9	out11-10	out11-11	out11-12	out11-13	out11-14	out11-15	out11-16	out11-17	out11-18	out11-19	out11-20	out11-21	out11-22	out11-23	out11-24	out11-25	out11-26	out11-27	out11-28	out11-29	out11-30	out11-31	out11-32	clk	clk^	clk-chromosome	clk-chromosome^	DFF-Array-32	wn='wn'	wp='wp'	le='le'

x12	out11-1	out11-2	out11-3	out11-4	out11-5	out11-6	out11-7	out11-8	out11-9	out11-10	out11-11	out11-12	out11-13	out11-14	out11-15	out11-16	out11-17	out11-18	out11-19	out11-20	out11-21	out11-22	out11-23	out11-24	out11-25	out11-26	out11-27	out11-28	out11-29	out11-30	out11-31	out11-32	out12-1	out12-2	out12-3	out12-4	out12-5	out12-6	out12-7	out12-8	out12-9	out12-10	out12-11	out12-12	out12-13	out12-14	out12-15	out12-16	out12-17	out12-18	out12-19	out12-20	out12-21	out12-22	out12-23	out12-24	out12-25	out12-26	out12-27	out12-28	out12-29	out12-30	out12-31	out12-32	clk	clk^	clk-chromosome	clk-chromosome^	DFF-Array-32	wn='wn'	wp='wp'	le='le'

x13	out12-1	out12-2	out12-3	out12-4	out12-5	out12-6	out12-7	out12-8	out12-9	out12-10	out12-11	out12-12	out12-13	out12-14	out12-15	out12-16	out12-17	out12-18	out12-19	out12-20	out12-21	out12-22	out12-23	out12-24	out12-25	out12-26	out12-27	out12-28	out12-29	out12-30	out12-31	out12-32	out13-1	out13-2	out13-3	out13-4	out13-5	out13-6	out13-7	out13-8	out13-9	out13-10	out13-11	out13-12	out13-13	out13-14	out13-15	out13-16	out13-17	out13-18	out13-19	out13-20	out13-21	out13-22	out13-23	out13-24	out13-25	out13-26	out13-27	out13-28	out13-29	out13-30	out13-31	out13-32	clk	clk^	clk-chromosome	clk-chromosome^	DFF-Array-32	wn='wn'	wp='wp'	le='le'

x14	out13-1	out13-2	out13-3	out13-4	out13-5	out13-6	out13-7	out13-8	out13-9	out13-10	out13-11	out13-12	out13-13	out13-14	out13-15	out13-16	out13-17	out13-18	out13-19	out13-20	out13-21	out13-22	out13-23	out13-24	out13-25	out13-26	out13-27	out13-28	out13-29	out13-30	out13-31	out13-32	out14-1	out14-2	out14-3	out14-4	out14-5	out14-6	out14-7	out14-8	out14-9	out14-10	out14-11	out14-12	out14-13	out14-14	out14-15	out14-16	out14-17	out14-18	out14-19	out14-20	out14-21	out14-22	out14-23	out14-24	out14-25	out14-26	out14-27	out14-28	out14-29	out14-30	out14-31	out14-32	clk	clk^	clk-chromosome	clk-chromosome^	DFF-Array-32	wn='wn'	wp='wp'	le='le'

x15	out14-1	out14-2	out14-3	out14-4	out14-5	out14-6	out14-7	out14-8	out14-9	out14-10	out14-11	out14-12	out14-13	out14-14	out14-15	out14-16	out14-17	out14-18	out14-19	out14-20	out14-21	out14-22	out14-23	out14-24	out14-25	out14-26	out14-27	out14-28	out14-29	out14-30	out14-31	out14-32	out15-1	out15-2	out15-3	out15-4	out15-5	out15-6	out15-7	out15-8	out15-9	out15-10	out15-11	out15-12	out15-13	out15-14	out15-15	out15-16	out15-17	out15-18	out15-19	out15-20	out15-21	out15-22	out15-23	out15-24	out15-25	out15-26	out15-27	out15-28	out15-29	out15-30	out15-31	out15-32	clk	clk^	clk-chromosome	clk-chromosome^	DFF-Array-32	wn='wn'	wp='wp'	le='le'

x16	out15-1	out15-2	out15-3	out15-4	out15-5	out15-6	out15-7	out15-8	out15-9	out15-10	out15-11	out15-12	out15-13	out15-14	out15-15	out15-16	out15-17	out15-18	out15-19	out15-20	out15-21	out15-22	out15-23	out15-24	out15-25	out15-26	out15-27	out15-28	out15-29	out15-30	out15-31	out15-32	out16-1	out16-2	out16-3	out16-4	out16-5	out16-6	out16-7	out16-8	out16-9	out16-10	out16-11	out16-12	out16-13	out16-14	out16-15	out16-16	out16-17	out16-18	out16-19	out16-20	out16-21	out16-22	out16-23	out16-24	out16-25	out16-26	out16-27	out16-28	out16-29	out16-30	out16-31	out16-32	clk	clk^	clk-chromosome	clk-chromosome^	DFF-Array-32	wn='wn'	wp='wp'	le='le'

.ends


.subckt	MUX-16-Array-32	in1-1	in1-2	in1-3	in1-4	in1-5	in1-6	in1-7	in1-8	in1-9	in1-10	in1-11	in1-12	in1-13	in1-14	in1-15	in1-16	in2-1	in2-2	in2-3	in2-4	in2-5	in2-6	in2-7	in2-8	in2-9	in2-10	in2-11	in2-12	in2-13	in2-14	in2-15	in2-16	in3-1	in3-2	in3-3	in3-4	in3-5	in3-6	in3-7	in3-8	in3-9	in3-10	in3-11	in3-12	in3-13	in3-14	in3-15	in3-16	in4-1	in4-2	in4-3	in4-4	in4-5	in4-6	in4-7	in4-8	in4-9	in4-10	in4-11	in4-12	in4-13	in4-14	in4-15	in4-16	in5-1	in5-2	in5-3	in5-4	in5-5	in5-6	in5-7	in5-8	in5-9	in5-10	in5-11	in5-12	in5-13	in5-14	in5-15	in5-16	in6-1	in6-2	in6-3	in6-4	in6-5	in6-6	in6-7	in6-8	in6-9	in6-10	in6-11	in6-12	in6-13	in6-14	in6-15	in6-16	in7-1	in7-2	in7-3	in7-4	in7-5	in7-6	in7-7	in7-8	in7-9	in7-10	in7-11	in7-12	in7-13	in7-14	in7-15	in7-16	in8-1	in8-2	in8-3	in8-4	in8-5	in8-6	in8-7	in8-8	in8-9	in8-10	in8-11	in8-12	in8-13	in8-14	in8-15	in8-16	in9-1	in9-2	in9-3	in9-4	in9-5	in9-6	in9-7	in9-8	in9-9	in9-10	in9-11	in9-12	in9-13	in9-14	in9-15	in9-16	in10-1	in10-2	in10-3	in10-4	in10-5	in10-6	in10-7	in10-8	in10-9	in10-10	in10-11	in10-12	in10-13	in10-14	in10-15	in10-16	in11-1	in11-2	in11-3	in11-4	in11-5	in11-6	in11-7	in11-8	in11-9	in11-10	in11-11	in11-12	in11-13	in11-14	in11-15	in11-16	in12-1	in12-2	in12-3	in12-4	in12-5	in12-6	in12-7	in12-8	in12-9	in12-10	in12-11	in12-12	in12-13	in12-14	in12-15	in12-16	in13-1	in13-2	in13-3	in13-4	in13-5	in13-6	in13-7	in13-8	in13-9	in13-10	in13-11	in13-12	in13-13	in13-14	in13-15	in13-16	in14-1	in14-2	in14-3	in14-4	in14-5	in14-6	in14-7	in14-8	in14-9	in14-10	in14-11	in14-12	in14-13	in14-14	in14-15	in14-16	in15-1	in15-2	in15-3	in15-4	in15-5	in15-6	in15-7	in15-8	in15-9	in15-10	in15-11	in15-12	in15-13	in15-14	in15-15	in15-16	in16-1	in16-2	in16-3	in16-4	in16-5	in16-6	in16-7	in16-8	in16-9	in16-10	in16-11	in16-12	in16-13	in16-14	in16-15	in16-16	in17-1	in17-2	in17-3	in17-4	in17-5	in17-6	in17-7	in17-8	in17-9	in17-10	in17-11	in17-12	in17-13	in17-14	in17-15	in17-16	in18-1	in18-2	in18-3	in18-4	in18-5	in18-6	in18-7	in18-8	in18-9	in18-10	in18-11	in18-12	in18-13	in18-14	in18-15	in18-16	in19-1	in19-2	in19-3	in19-4	in19-5	in19-6	in19-7	in19-8	in19-9	in19-10	in19-11	in19-12	in19-13	in19-14	in19-15	in19-16	in20-1	in20-2	in20-3	in20-4	in20-5	in20-6	in20-7	in20-8	in20-9	in20-10	in20-11	in20-12	in20-13	in20-14	in20-15	in20-16	in21-1	in21-2	in21-3	in21-4	in21-5	in21-6	in21-7	in21-8	in21-9	in21-10	in21-11	in21-12	in21-13	in21-14	in21-15	in21-16	in22-1	in22-2	in22-3	in22-4	in22-5	in22-6	in22-7	in22-8	in22-9	in22-10	in22-11	in22-12	in22-13	in22-14	in22-15	in22-16	in23-1	in23-2	in23-3	in23-4	in23-5	in23-6	in23-7	in23-8	in23-9	in23-10	in23-11	in23-12	in23-13	in23-14	in23-15	in23-16	in24-1	in24-2	in24-3	in24-4	in24-5	in24-6	in24-7	in24-8	in24-9	in24-10	in24-11	in24-12	in24-13	in24-14	in24-15	in24-16	in25-1	in25-2	in25-3	in25-4	in25-5	in25-6	in25-7	in25-8	in25-9	in25-10	in25-11	in25-12	in25-13	in25-14	in25-15	in25-16	in26-1	in26-2	in26-3	in26-4	in26-5	in26-6	in26-7	in26-8	in26-9	in26-10	in26-11	in26-12	in26-13	in26-14	in26-15	in26-16	in27-1	in27-2	in27-3	in27-4	in27-5	in27-6	in27-7	in27-8	in27-9	in27-10	in27-11	in27-12	in27-13	in27-14	in27-15	in27-16	in28-1	in28-2	in28-3	in28-4	in28-5	in28-6	in28-7	in28-8	in28-9	in28-10	in28-11	in28-12	in28-13	in28-14	in28-15	in28-16	in29-1	in29-2	in29-3	in29-4	in29-5	in29-6	in29-7	in29-8	in29-9	in29-10	in29-11	in29-12	in29-13	in29-14	in29-15	in29-16	in30-1	in30-2	in30-3	in30-4	in30-5	in30-6	in30-7	in30-8	in30-9	in30-10	in30-11	in30-12	in30-13	in30-14	in30-15	in30-16	in31-1	in31-2	in31-3	in31-4	in31-5	in31-6	in31-7	in31-8	in31-9	in31-10	in31-11	in31-12	in31-13	in31-14	in31-15	in31-16	in32-1	in32-2	in32-3	in32-4	in32-5	in32-6	in32-7	in32-8	in32-9	in32-10	in32-11	in32-12	in32-13	in32-14	in32-15	in32-16	out1	out2	out3	out4	out5	out6	out7	out8	out9	out10	out11	out12	out13	out14	out15	out16	out17	out18	out19	out20	out21	out22	out23	out24	out25	out26	out27	out28	out29	out30	out31	out32	control1	control2	control3	control4	control5	control6	control7	control8	control9	control10	control11	control12	control13	control14	control15	control16	control1^	control2^	control3^	control4^	control5^	control6^	control7^	control8^	control9^	control10^	control11^	control12^	control13^	control14^	control15^	control16^	wn=1u	wp=3u	le=0.18u

x1	in1-1	in1-2	in1-3	in1-4	in1-5	in1-6	in1-7	in1-8	in1-9	in1-10	in1-11	in1-12	in1-13	in1-14	in1-15	in1-16	in2-1	in2-2	in2-3	in2-4	in2-5	in2-6	in2-7	in2-8	in2-9	in2-10	in2-11	in2-12	in2-13	in2-14	in2-15	in2-16	in3-1	in3-2	in3-3	in3-4	in3-5	in3-6	in3-7	in3-8	in3-9	in3-10	in3-11	in3-12	in3-13	in3-14	in3-15	in3-16	in4-1	in4-2	in4-3	in4-4	in4-5	in4-6	in4-7	in4-8	in4-9	in4-10	in4-11	in4-12	in4-13	in4-14	in4-15	in4-16	out1	out2	out3	out4	control1	control2	control3	control4	control5	control6	control7	control8	control9	control10	control11	control12	control13	control14	control15	control16	control1^	control2^	control3^	control4^	control5^	control6^	control7^	control8^	control9^	control10^	control11^	control12^	control13^	control14^	control15^	control16^	MUX-16-Array-4	wn='wn'	wp='wp'	le='le'

x2	in5-1	in5-2	in5-3	in5-4	in5-5	in5-6	in5-7	in5-8	in5-9	in5-10	in5-11	in5-12	in5-13	in5-14	in5-15	in5-16	in6-1	in6-2	in6-3	in6-4	in6-5	in6-6	in6-7	in6-8	in6-9	in6-10	in6-11	in6-12	in6-13	in6-14	in6-15	in6-16	in7-1	in7-2	in7-3	in7-4	in7-5	in7-6	in7-7	in7-8	in7-9	in7-10	in7-11	in7-12	in7-13	in7-14	in7-15	in7-16	in8-1	in8-2	in8-3	in8-4	in8-5	in8-6	in8-7	in8-8	in8-9	in8-10	in8-11	in8-12	in8-13	in8-14	in8-15	in8-16	out5	out6	out7	out8	control1	control2	control3	control4	control5	control6	control7	control8	control9	control10	control11	control12	control13	control14	control15	control16	control1^	control2^	control3^	control4^	control5^	control6^	control7^	control8^	control9^	control10^	control11^	control12^	control13^	control14^	control15^	control16^	MUX-16-Array-4	wn='wn'	wp='wp'	le='le'

x3	in9-1	in9-2	in9-3	in9-4	in9-5	in9-6	in9-7	in9-8	in9-9	in9-10	in9-11	in9-12	in9-13	in9-14	in9-15	in9-16	in10-1	in10-2	in10-3	in10-4	in10-5	in10-6	in10-7	in10-8	in10-9	in10-10	in10-11	in10-12	in10-13	in10-14	in10-15	in10-16	in11-1	in11-2	in11-3	in11-4	in11-5	in11-6	in11-7	in11-8	in11-9	in11-10	in11-11	in11-12	in11-13	in11-14	in11-15	in11-16	in12-1	in12-2	in12-3	in12-4	in12-5	in12-6	in12-7	in12-8	in12-9	in12-10	in12-11	in12-12	in12-13	in12-14	in12-15	in12-16	out9	out10	out11	out12	control1	control2	control3	control4	control5	control6	control7	control8	control9	control10	control11	control12	control13	control14	control15	control16	control1^	control2^	control3^	control4^	control5^	control6^	control7^	control8^	control9^	control10^	control11^	control12^	control13^	control14^	control15^	control16^	MUX-16-Array-4	wn='wn'	wp='wp'	le='le'

x4	in13-1	in13-2	in13-3	in13-4	in13-5	in13-6	in13-7	in13-8	in13-9	in13-10	in13-11	in13-12	in13-13	in13-14	in13-15	in13-16	in14-1	in14-2	in14-3	in14-4	in14-5	in14-6	in14-7	in14-8	in14-9	in14-10	in14-11	in14-12	in14-13	in14-14	in14-15	in14-16	in15-1	in15-2	in15-3	in15-4	in15-5	in15-6	in15-7	in15-8	in15-9	in15-10	in15-11	in15-12	in15-13	in15-14	in15-15	in15-16	in16-1	in16-2	in16-3	in16-4	in16-5	in16-6	in16-7	in16-8	in16-9	in16-10	in16-11	in16-12	in16-13	in16-14	in16-15	in16-16	out13	out14	out15	out16	control1	control2	control3	control4	control5	control6	control7	control8	control9	control10	control11	control12	control13	control14	control15	control16	control1^	control2^	control3^	control4^	control5^	control6^	control7^	control8^	control9^	control10^	control11^	control12^	control13^	control14^	control15^	control16^	MUX-16-Array-4	wn='wn'	wp='wp'	le='le'

x5	in17-1	in17-2	in17-3	in17-4	in17-5	in17-6	in17-7	in17-8	in17-9	in17-10	in17-11	in17-12	in17-13	in17-14	in17-15	in17-16	in18-1	in18-2	in18-3	in18-4	in18-5	in18-6	in18-7	in18-8	in18-9	in18-10	in18-11	in18-12	in18-13	in18-14	in18-15	in18-16	in19-1	in19-2	in19-3	in19-4	in19-5	in19-6	in19-7	in19-8	in19-9	in19-10	in19-11	in19-12	in19-13	in19-14	in19-15	in19-16	in20-1	in20-2	in20-3	in20-4	in20-5	in20-6	in20-7	in20-8	in20-9	in20-10	in20-11	in20-12	in20-13	in20-14	in20-15	in20-16	out17	out18	out19	out20	control1	control2	control3	control4	control5	control6	control7	control8	control9	control10	control11	control12	control13	control14	control15	control16	control1^	control2^	control3^	control4^	control5^	control6^	control7^	control8^	control9^	control10^	control11^	control12^	control13^	control14^	control15^	control16^	MUX-16-Array-4	wn='wn'	wp='wp'	le='le'

x6	in21-1	in21-2	in21-3	in21-4	in21-5	in21-6	in21-7	in21-8	in21-9	in21-10	in21-11	in21-12	in21-13	in21-14	in21-15	in21-16	in22-1	in22-2	in22-3	in22-4	in22-5	in22-6	in22-7	in22-8	in22-9	in22-10	in22-11	in22-12	in22-13	in22-14	in22-15	in22-16	in23-1	in23-2	in23-3	in23-4	in23-5	in23-6	in23-7	in23-8	in23-9	in23-10	in23-11	in23-12	in23-13	in23-14	in23-15	in23-16	in24-1	in24-2	in24-3	in24-4	in24-5	in24-6	in24-7	in24-8	in24-9	in24-10	in24-11	in24-12	in24-13	in24-14	in24-15	in24-16	out21	out22	out23	out24	control1	control2	control3	control4	control5	control6	control7	control8	control9	control10	control11	control12	control13	control14	control15	control16	control1^	control2^	control3^	control4^	control5^	control6^	control7^	control8^	control9^	control10^	control11^	control12^	control13^	control14^	control15^	control16^	MUX-16-Array-4	wn='wn'	wp='wp'	le='le'

x7	in25-1	in25-2	in25-3	in25-4	in25-5	in25-6	in25-7	in25-8	in25-9	in25-10	in25-11	in25-12	in25-13	in25-14	in25-15	in25-16	in26-1	in26-2	in26-3	in26-4	in26-5	in26-6	in26-7	in26-8	in26-9	in26-10	in26-11	in26-12	in26-13	in26-14	in26-15	in26-16	in27-1	in27-2	in27-3	in27-4	in27-5	in27-6	in27-7	in27-8	in27-9	in27-10	in27-11	in27-12	in27-13	in27-14	in27-15	in27-16	in28-1	in28-2	in28-3	in28-4	in28-5	in28-6	in28-7	in28-8	in28-9	in28-10	in28-11	in28-12	in28-13	in28-14	in28-15	in28-16	out25	out26	out27	out28	control1	control2	control3	control4	control5	control6	control7	control8	control9	control10	control11	control12	control13	control14	control15	control16	control1^	control2^	control3^	control4^	control5^	control6^	control7^	control8^	control9^	control10^	control11^	control12^	control13^	control14^	control15^	control16^	MUX-16-Array-4	wn='wn'	wp='wp'	le='le'

x8	in29-1	in29-2	in29-3	in29-4	in29-5	in29-6	in29-7	in29-8	in29-9	in29-10	in29-11	in29-12	in29-13	in29-14	in29-15	in29-16	in30-1	in30-2	in30-3	in30-4	in30-5	in30-6	in30-7	in30-8	in30-9	in30-10	in30-11	in30-12	in30-13	in30-14	in30-15	in30-16	in31-1	in31-2	in31-3	in31-4	in31-5	in31-6	in31-7	in31-8	in31-9	in31-10	in31-11	in31-12	in31-13	in31-14	in31-15	in31-16	in32-1	in32-2	in32-3	in32-4	in32-5	in32-6	in32-7	in32-8	in32-9	in32-10	in32-11	in32-12	in32-13	in32-14	in32-15	in32-16	out29	out30	out31	out32	control1	control2	control3	control4	control5	control6	control7	control8	control9	control10	control11	control12	control13	control14	control15	control16	control1^	control2^	control3^	control4^	control5^	control6^	control7^	control8^	control9^	control10^	control11^	control12^	control13^	control14^	control15^	control16^	MUX-16-Array-4	wn='wn'	wp='wp'	le='le'

.ends


.subckt	MUX-16-Array-4	in1-1	in1-2	in1-3	in1-4	in1-5	in1-6	in1-7	in1-8	in1-9	in1-10	in1-11	in1-12	in1-13	in1-14	in1-15	in1-16	in2-1	in2-2	in2-3	in2-4	in2-5	in2-6	in2-7	in2-8	in2-9	in2-10	in2-11	in2-12	in2-13	in2-14	in2-15	in2-16	in3-1	in3-2	in3-3	in3-4	in3-5	in3-6	in3-7	in3-8	in3-9	in3-10	in3-11	in3-12	in3-13	in3-14	in3-15	in3-16	in4-1	in4-2	in4-3	in4-4	in4-5	in4-6	in4-7	in4-8	in4-9	in4-10	in4-11	in4-12	in4-13	in4-14	in4-15	in4-16	out1	out2	out3	out4	control1	control2	control3	control4	control5	control6	control7	control8	control9	control10	control11	control12	control13	control14	control15	control16	control1^	control2^	control3^	control4^	control5^	control6^	control7^	control8^	control9^	control10^	control11^	control12^	control13^	control14^	control15^	control16^	wn=1u	wp=3u	le=0.18u
x1	in1-1	in1-2	in1-3	in1-4	in1-5	in1-6	in1-7	in1-8	in1-9	in1-10	in1-11	in1-12	in1-13	in1-14	in1-15	in1-16	out1	control1	control2	control3	control4	control5	control6	control7	control8	control9	control10	control11	control12	control13	control14	control15	control16	control1^	control2^	control3^	control4^	control5^	control6^	control7^	control8^	control9^	control10^	control11^	control12^	control13^	control14^	control15^	control16^	MUX-16	wn='wn'	wp='wp'	le='le'
x2	in2-1	in2-2	in2-3	in2-4	in2-5	in2-6	in2-7	in2-8	in2-9	in2-10	in2-11	in2-12	in2-13	in2-14	in2-15	in2-16	out2	control1	control2	control3	control4	control5	control6	control7	control8	control9	control10	control11	control12	control13	control14	control15	control16	control1^	control2^	control3^	control4^	control5^	control6^	control7^	control8^	control9^	control10^	control11^	control12^	control13^	control14^	control15^	control16^	MUX-16	wn='wn'	wp='wp'	le='le'
x3	in3-1	in3-2	in3-3	in3-4	in3-5	in3-6	in3-7	in3-8	in3-9	in3-10	in3-11	in3-12	in3-13	in3-14	in3-15	in3-16	out3	control1	control2	control3	control4	control5	control6	control7	control8	control9	control10	control11	control12	control13	control14	control15	control16	control1^	control2^	control3^	control4^	control5^	control6^	control7^	control8^	control9^	control10^	control11^	control12^	control13^	control14^	control15^	control16^	MUX-16	wn='wn'	wp='wp'	le='le'
x4	in4-1	in4-2	in4-3	in4-4	in4-5	in4-6	in4-7	in4-8	in4-9	in4-10	in4-11	in4-12	in4-13	in4-14	in4-15	in4-16	out4	control1	control2	control3	control4	control5	control6	control7	control8	control9	control10	control11	control12	control13	control14	control15	control16	control1^	control2^	control3^	control4^	control5^	control6^	control7^	control8^	control9^	control10^	control11^	control12^	control13^	control14^	control15^	control16^	MUX-16	wn='wn'	wp='wp'	le='le'
.ends

.subckt	MUX-16	in1	in2	in3	in4	in5	in6	in7	in8	in9	in10	in11	in12	in13	in14	in15	in16	out	control1	control2	control3	control4	control5	control6	control7	control8	control9	control10	control11	control12	control13	control14	control15	control16	control1^	control2^	control3^	control4^	control5^	control6^	control7^	control8^	control9^	control10^	control11^	control12^	control13^	control14^	control15^	control16^	wn=1u	wp=3u	le=0.18u

x1	in1	out	control1	control1^	TG	wn='wn'	wp='wp'	le='le'
x2	in2	out	control2	control2^	TG	wn='wn'	wp='wp'	le='le'
x3	in3	out	control3	control3^	TG	wn='wn'	wp='wp'	le='le'
x4	in4	out	control4	control4^	TG	wn='wn'	wp='wp'	le='le'
x5	in5	out	control5	control5^	TG	wn='wn'	wp='wp'	le='le'
x6	in6	out	control6	control6^	TG	wn='wn'	wp='wp'	le='le'
x7	in7	out	control7	control7^	TG	wn='wn'	wp='wp'	le='le'
x8	in8	out	control8	control8^	TG	wn='wn'	wp='wp'	le='le'
x9	in9	out	control9	control9^	TG	wn='wn'	wp='wp'	le='le'
x10	in10	out	control10	control10^	TG	wn='wn'	wp='wp'	le='le'
x11	in11	out	control11	control11^	TG	wn='wn'	wp='wp'	le='le'
x12	in12	out	control12	control12^	TG	wn='wn'	wp='wp'	le='le'
x13	in13	out	control13	control13^	TG	wn='wn'	wp='wp'	le='le'
x14	in14	out	control14	control14^	TG	wn='wn'	wp='wp'	le='le'
x15	in15	out	control15	control15^	TG	wn='wn'	wp='wp'	le='le'
x16	in16	out	control16	control16^	TG	wn='wn'	wp='wp'	le='le'
.ends

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

.subckt	INV-Array-8	in1	in2	in3	in4	in5	in6	in7	in8	out1	out2	out3	out4	out5	out6	out7	out8	wn=1u	wp=3u	le=0.18u
x1	in1	in2	in3	in4	out1	out2	out3	out4	INV-Array-4	wn='wn'	wp='wp'	le='le'
x2	in5	in6	in7	in8	out5	out6	out7	out8	INV-Array-4	wn='wn'	wp='wp'	le='le'
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

.subckt	MUX-Array-32-no-INV	in1-1	in1-2	in1-3	in1-4	in1-5	in1-6	in1-7	in1-8	in1-9	in1-10	in1-11	in1-12	in1-13	in1-14	in1-15	in1-16	in1-17	in1-18	in1-19	in1-20	in1-21	in1-22	in1-23	in1-24	in1-25	in1-26	in1-27	in1-28	in1-29	in1-30	in1-31	in1-32	in2-1	in2-2	in2-3	in2-4	in2-5	in2-6	in2-7	in2-8	in2-9	in2-10	in2-11	in2-12	in2-13	in2-14	in2-15	in2-16	in2-17	in2-18	in2-19	in2-20	in2-21	in2-22	in2-23	in2-24	in2-25	in2-26	in2-27	in2-28	in2-29	in2-30	in2-31	in2-32	out1	out2	out3	out4	out5	out6	out7	out8	out9	out10	out11	out12	out13	out14	out15	out16	out17	out18	out19	out20	out21	out22	out23	out24	out25	out26	out27	out28	out29	out30	out31	out32	control	control^	wn=1u	wp=3u	le=0.18u
x1	in1-1	in1-2	in1-3	in1-4	in1-5	in1-6	in1-7	in1-8	in1-9	in1-10	in1-11	in1-12	in1-13	in1-14	in1-15	in1-16	in2-1	in2-2	in2-3	in2-4	in2-5	in2-6	in2-7	in2-8	in2-9	in2-10	in2-11	in2-12	in2-13	in2-14	in2-15	in2-16	out1	out2	out3	out4	out5	out6	out7	out8	out9	out10	out11	out12	out13	out14	out15	out16	control	control^	MUX-Array-16-no-INV	wn='wn'	wp='wp'	le='le'
x2	in1-17	in1-18	in1-19	in1-20	in1-21	in1-22	in1-23	in1-24	in1-25	in1-26	in1-27	in1-28	in1-29	in1-30	in1-31	in1-32	in2-17	in2-18	in2-19	in2-20	in2-21	in2-22	in2-23	in2-24	in2-25	in2-26	in2-27	in2-28	in2-29	in2-30	in2-31	in2-32	out17	out18	out19	out20	out21	out22	out23	out24	out25	out26	out27	out28	out29	out30	out31	out32	control	control^	MUX-Array-16-no-INV	wn='wn'	wp='wp'	le='le'
.ends

.subckt	MUX-Array-16-no-INV	in1-1	in1-2	in1-3	in1-4	in1-5	in1-6	in1-7	in1-8	in1-9	in1-10	in1-11	in1-12	in1-13	in1-14	in1-15	in1-16	in2-1	in2-2	in2-3	in2-4	in2-5	in2-6	in2-7	in2-8	in2-9	in2-10	in2-11	in2-12	in2-13	in2-14	in2-15	in2-16	out1	out2	out3	out4	out5	out6	out7	out8	out9	out10	out11	out12	out13	out14	out15	out16	control	control^	wn=1u	wp=3u	le=0.18u
x1	in1-1	in1-2	in1-3	in1-4	in2-1	in2-2	in2-3	in2-4	out1	out2	out3	out4	control	control^	MUX-Array-4-no-INV	wn='wn'	wp='wp'	le='le'
x2	in1-5	in1-6	in1-7	in1-8	in2-5	in2-6	in2-7	in2-8	out5	out6	out7	out8	control	control^	MUX-Array-4-no-INV	wn='wn'	wp='wp'	le='le'
x3	in1-9	in1-10	in1-11	in1-12	in2-9	in2-10	in2-11	in2-12	out9	out10	out11	out12	control	control^	MUX-Array-4-no-INV	wn='wn'	wp='wp'	le='le'
x4	in1-13	in1-14	in1-15	in1-16	in2-13	in2-14	in2-15	in2-16	out13	out14	out15	out16	control	control^	MUX-Array-4-no-INV	wn='wn'	wp='wp'	le='le'
.ends

.subckt	MUX-Array-4-no-INV	in1-1	in1-2	in1-3	in1-4	in2-1	in2-2	in2-3	in2-4	out1	out2	out3	out4	control	control^	wn=1u	wp=3u	le=0.18u
x1	in1-1	in2-1	out1	control	control^	MUX-no-INV	wn='wn'	wp='wp'	le='le'
x2	in1-2	in2-2	out2	control	control^	MUX-no-INV	wn='wn'	wp='wp'	le='le'
x3	in1-3	in2-3	out3	control	control^	MUX-no-INV	wn='wn'	wp='wp'	le='le'
x4	in1-4	in2-4	out4	control	control^	MUX-no-INV	wn='wn'	wp='wp'	le='le'
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

.subckt	MUX-Array-32	in1-1	in1-2	in1-3	in1-4	in1-5	in1-6	in1-7	in1-8	in1-9	in1-10	in1-11	in1-12	in1-13	in1-14	in1-15	in1-16	in1-17	in1-18	in1-19	in1-20	in1-21	in1-22	in1-23	in1-24	in1-25	in1-26	in1-27	in1-28	in1-29	in1-30	in1-31	in1-32	in2-1	in2-2	in2-3	in2-4	in2-5	in2-6	in2-7	in2-8	in2-9	in2-10	in2-11	in2-12	in2-13	in2-14	in2-15	in2-16	in2-17	in2-18	in2-19	in2-20	in2-21	in2-22	in2-23	in2-24	in2-25	in2-26	in2-27	in2-28	in2-29	in2-30	in2-31	in2-32	out1	out2	out3	out4	out5	out6	out7	out8	out9	out10	out11	out12	out13	out14	out15	out16	out17	out18	out19	out20	out21	out22	out23	out24	out25	out26	out27	out28	out29	out30	out31	out32	control	wn=1u	wp=3u	le=0.18u
x1	in1-1	in1-2	in1-3	in1-4	in1-5	in1-6	in1-7	in1-8	in1-9	in1-10	in1-11	in1-12	in1-13	in1-14	in1-15	in1-16	in2-1	in2-2	in2-3	in2-4	in2-5	in2-6	in2-7	in2-8	in2-9	in2-10	in2-11	in2-12	in2-13	in2-14	in2-15	in2-16	out1	out2	out3	out4	out5	out6	out7	out8	out9	out10	out11	out12	out13	out14	out15	out16	control	MUX-Array-16	wn='wn'	wp='wp'	le='le'
x2	in1-17	in1-18	in1-19	in1-20	in1-21	in1-22	in1-23	in1-24	in1-25	in1-26	in1-27	in1-28	in1-29	in1-30	in1-31	in1-32	in2-17	in2-18	in2-19	in2-20	in2-21	in2-22	in2-23	in2-24	in2-25	in2-26	in2-27	in2-28	in2-29	in2-30	in2-31	in2-32	out17	out18	out19	out20	out21	out22	out23	out24	out25	out26	out27	out28	out29	out30	out31	out32	control	MUX-Array-16	wn='wn'	wp='wp'	le='le'
.ends

.subckt	MUX-Array-16	in1-1	in1-2	in1-3	in1-4	in1-5	in1-6	in1-7	in1-8	in1-9	in1-10	in1-11	in1-12	in1-13	in1-14	in1-15	in1-16	in2-1	in2-2	in2-3	in2-4	in2-5	in2-6	in2-7	in2-8	in2-9	in2-10	in2-11	in2-12	in2-13	in2-14	in2-15	in2-16	out1	out2	out3	out4	out5	out6	out7	out8	out9	out10	out11	out12	out13	out14	out15	out16	control	wn=1u	wp=3u	le=0.18u
x1	in1-1	in1-2	in1-3	in1-4	in2-1	in2-2	in2-3	in2-4	out1	out2	out3	out4	control	MUX-Array-4	wn='wn'	wp='wp'	le='le'
x2	in1-5	in1-6	in1-7	in1-8	in2-5	in2-6	in2-7	in2-8	out5	out6	out7	out8	control	MUX-Array-4	wn='wn'	wp='wp'	le='le'
x3	in1-9	in1-10	in1-11	in1-12	in2-9	in2-10	in2-11	in2-12	out9	out10	out11	out12	control	MUX-Array-4	wn='wn'	wp='wp'	le='le'
x4	in1-13	in1-14	in1-15	in1-16	in2-13	in2-14	in2-15	in2-16	out13	out14	out15	out16	control	MUX-Array-4	wn='wn'	wp='wp'	le='le'
.ends

.subckt	MUX-Array-4	in1-1	in1-2	in1-3	in1-4	in2-1	in2-2	in2-3	in2-4	out1	out2	out3	out4	control	wn=1u	wp=3u	le=0.18u
x1	in1-1	in2-1	out1	control	MUX	wn='wn'	wp='wp'	le='le'
x2	in1-2	in2-2	out2	control	MUX	wn='wn'	wp='wp'	le='le'
x3	in1-3	in2-3	out3	control	MUX	wn='wn'	wp='wp'	le='le'
x4	in1-4	in2-4	out4	control	MUX	wn='wn'	wp='wp'	le='le'
.ends

************************************************************************************************Components

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

***D Latch
.subckt	D-Latch	in	out	clk	clk^	wn=1u	wp=3u	le=0.18u
x1	in	a	clk	clk^	TG	wn='wn'	wp='wp'	le='le'
x2	a	b	INV	wn='wn'	wp='wp'	le='le'
x3	b	a	clk^	clk	CK-INV	wn='wn'	wp='wp'	le='le'
x4	b	out	INV	wn='wn'	wp='wp'	le='le'
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

***2-Input NOR***
.subckt	NOR2	in1	in2	out	wn=1u	wp=3u	le=0.18u
m1	a	in2	vdd	vdd	mp18	w='2*wp'	l=le
m2	out	in1	a	vdd	mp18	w='2*wp'	l=le
m3	out	in1	0	0	mn18	w=wn	l=le
m4	out	in2	0	0	mn18	w=wn	l=le
.ends

***2-Input OR***
.subckt	OR2	in1	in2	out	out^	wn=1u	wp=3u	le=0.18u
x1	in1	in2	out^	NOR2	wn='wn'	wp='wp'	le='le'
x2	out^	out	INV	wn='wn'	wp='wp'	le='le'
.ends

***4-Bit Decoder
.subckt	Decoder4Bit	in0	in1	in2	in3	out0	out1	out2	out3	out4	out5	out6	out7	out8	out9	out10	out11	out12	out13	out14	out15	wn=1u	wp=3u	le=0.18u	*in0 & out0 are lsb
x1	in0	in0^	INV	wn='wn'	wp='wp'	le='le'
x2	in1	in1^	INV	wn='wn'	wp='wp'	le='le'
x3	in2	in2^	INV	wn='wn'	wp='wp'	le='le'
x4	in3	in3^	INV	wn='wn'	wp='wp'	le='le'

x5	in0	in1	in2	in3	out0	NOR4	wn='wn'	wp='wp'	le='le'
x6	in0^	in1	in2	in3	out1	NOR4	wn='wn'	wp='wp'	le='le'
x7	in0	in1^	in2	in3	out2	NOR4	wn='wn'	wp='wp'	le='le'
x8	in0^	in1^	in2	in3	out3	NOR4	wn='wn'	wp='wp'	le='le'
x9	in0	in1	in2^	in3	out4	NOR4	wn='wn'	wp='wp'	le='le'
x10	in0^	in1	in2^	in3	out5	NOR4	wn='wn'	wp='wp'	le='le'
x11	in0	in1^	in2^	in3	out6	NOR4	wn='wn'	wp='wp'	le='le'
x12	in0^	in1^	in2^	in3	out7	NOR4	wn='wn'	wp='wp'	le='le'
x13	in0	in1	in2	in3^	out8	NOR4	wn='wn'	wp='wp'	le='le'
x14	in0^	in1	in2	in3^	out9	NOR4	wn='wn'	wp='wp'	le='le'
x15	in0	in1^	in2	in3^	out10	NOR4	wn='wn'	wp='wp'	le='le'
x16	in0^	in1^	in2	in3^	out11	NOR4	wn='wn'	wp='wp'	le='le'
x17	in0	in1	in2^	in3^	out12	NOR4	wn='wn'	wp='wp'	le='le'
x18	in0^	in1	in2^	in3^	out13	NOR4	wn='wn'	wp='wp'	le='le'
x19	in0	in1^	in2^	in3^	out14	NOR4	wn='wn'	wp='wp'	le='le'
x20	in0^	in1^	in2^	in3^	out15	NOR4	wn='wn'	wp='wp'	le='le'
.ends

***2-Bit Decoder without fourth output
.subckt	Decoder2Bit-3output	in0	in1	out0	out1	out2	wn=1u	wp=3u	le=0.18u	*in0 & out0 are lsb
x1	in0	in0^	INV	wn='wn'	wp='wp'	le='le'
x2	in1	in1^	INV	wn='wn'	wp='wp'	le='le'

x3	in0	in1	out0	NOR2	wn='wn'	wp='wp'	le='le'
x4	in0^	in1	out1	NOR2	wn='wn'	wp='wp'	le='le'
x5	in0	in1^	out2	NOR2	wn='wn'	wp='wp'	le='le'
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

***20-Transistor Pad Switch
.subckt	Pad-Switch-m20	in	out	enable	wn=1u	wp=3u	le=0.18u
x1	in	enable	1	NAND2-m20	wn='(3*wn)/10'	wp='(3*wp)/10'	le='le'
x2	enable	enable^	INV-m20	wn='wn/10'	wp='wp/10'	le='le'
x3	in	enable^	2	NOR2-m20	wn='wn/10'	wp='wp/10'	le='le'
m1	out	1	vdd	vdd	mp18	w='wp'	l='le'	m=20
m2	out	2	0	0	mn18	w='wn'	l='le'	m=20
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

***10-Transistor Inverter
.subckt	INV-m10	in	out	wn=1u	wp=3u	le=0.18u
m1	out	in	vdd	vdd	mp18	w=wp	l=le	m=10
m2	out	in	0	0	mn18	w=wn	l=le	m=10
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

***100-Transistor Inverter
.subckt	INV-m100	in	out	wn=1u	wp=3u	le=0.18u
m1	out	in	vdd	vdd	mp18	w=wp	l=le	m=100
m2	out	in	0	0	mn18	w=wn	l=le	m=100
.ends

***150-Transistor Inverter
.subckt	INV-m150	in	out	wn=1u	wp=3u	le=0.18u
m1	out	in	vdd	vdd	mp18	w=wp	l=le	m=150
m2	out	in	0	0	mn18	w=wn	l=le	m=150
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

.ends	Fitness-Estimation_Random-Immigrants