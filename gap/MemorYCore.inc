*Memory Core

.subckt	Memory-Core	clk-Main	clk-Main^	clk-Selection	clk-Selection^	Master-Slave-Select-Pin-1	Population-Size-Pin-0	Population-Size-Pin-1	Dual-Ram-Pin	Initialization-Start	Chromosome-Resolution-Pin	Fitness-Resolution-Pin	X-Handshake-Enable	X-Handshake-Enable^	Selection-done	Replacement-CS	No-Elitism-Pin	Elite-Selected-1	Elite-Selected-2	Received-Elite-Selected-1	Received-Elite-Selected-2	i0-q0	r0	r1	r2	r3	r4	r5	r6	r7	r8	r9	r10	r11	r12	r13	r14	r15	r16	r17	r18	r19	r20	r21	r22	r23	r24	r25	r26	r27	r28	r29	r30	r31	r32	r33	r34	r35	r36	r37	r38	r39	r40	r41	r42	r43	r44	r45	r46	r47	r48	r49	r50	r51	r52	r53	r54	r55	r56	r57	r58	r59	r60	r61	r62	r63	bf0	bf1	bf2	bf3	bf4	bf5	bf6	bf7	bf8	bf9	bf10	bf11	bf12	bf13	bf14	bf15	bf16	bf17	bf18	bf19	bf20	bf21	bf22	bf23	bf24	bf25	bf26	bf27	bf28	bf29	bf30	bf31	bf32	bf33	bf34	bf35	bf36	bf37	bf38	bf39	bf40	bf41	bf42	bf43	bf44	bf45	bf46	bf47	bf48	bf49	bf50	bf51	bf52	bf53	bf54	bf55	bf56	bf57	bf58	bf59	bf60	bf61	bf62	bf63	SI1-0	SI1-1	SI1-2	SI1-3	SI1-4	SI1-5	SI1-6	SI1-7	SI1-8	SI1-9	SI1-10	SI1-11	SI1-12	SI1-13	SI1-14	SI1-15	SI1-16	SI1-17	SI1-18	SI1-19	SI1-20	SI1-21	SI1-22	SI1-23	SI1-24	SI1-25	SI1-26	SI1-27	SI1-28	SI1-29	SI1-30	SI1-31	SI1-32	SI1-33	SI1-34	SI1-35	SI1-36	SI1-37	SI1-38	SI1-39	SI1-40	SI1-41	SI1-42	SI1-43	SI1-44	SI1-45	SI1-46	SI1-47	SI1-48	SI1-49	SI1-50	SI1-51	SI1-52	SI1-53	SI1-54	SI1-55	SI1-56	SI1-57	SI1-58	SI1-59	SI1-60	SI1-61	SI1-62	SI1-63	SI2-0	SI2-1	SI2-2	SI2-3	SI2-4	SI2-5	SI2-6	SI2-7	SI2-8	SI2-9	SI2-10	SI2-11	SI2-12	SI2-13	SI2-14	SI2-15	SI2-16	SI2-17	SI2-18	SI2-19	SI2-20	SI2-21	SI2-22	SI2-23	SI2-24	SI2-25	SI2-26	SI2-27	SI2-28	SI2-29	SI2-30	SI2-31	SI2-32	SI2-33	SI2-34	SI2-35	SI2-36	SI2-37	SI2-38	SI2-39	SI2-40	SI2-41	SI2-42	SI2-43	SI2-44	SI2-45	SI2-46	SI2-47	SI2-48	SI2-49	SI2-50	SI2-51	SI2-52	SI2-53	SI2-54	SI2-55	SI2-56	SI2-57	SI2-58	SI2-59	SI2-60	SI2-61	SI2-62	SI2-63	counter1-0	counter1-1	counter1-2	counter1-3	counter1-4	counter1-5	counter1-6	counter1-7	counter2-0	counter2-1	counter2-2	counter2-3	counter2-4	counter2-5	counter2-6	counter2-7	Received-Address1-0	Received-Address1-1	Received-Address1-2	Received-Address1-3	Received-Address1-4	Received-Address1-5	Received-Address1-6	Received-Address1-7	Received-Address2-0	Received-Address2-1	Received-Address2-2	Received-Address2-3	Received-Address2-4	Received-Address2-5	Received-Address2-6	Received-Address2-7	Selected-Address1-0	Selected-Address1-1	Selected-Address1-2	Selected-Address1-3	Selected-Address1-4	Selected-Address1-5	Selected-Address1-6	Selected-Address1-7	Selected-Address2-0	Selected-Address2-1	Selected-Address2-2	Selected-Address2-3	Selected-Address2-4	Selected-Address2-5	Selected-Address2-6	Selected-Address2-7	rng200	rng201	rng202	rng203	rng204	rng205	rng206	rng207	rng208	rng209	rng210	rng211	rng212	rng213	rng214	rng215	rng216	rng217	rng218	rng219	rng220	rng221	rng222	rng223	rng224	rng225	rng226	rng227	rng228	rng229	rng230	rng231

***Chip Select and Write Signals control
x1	Selection-done	i0-q0	1	Dual-Ram-Pin	MUX-m10	wn=6u	wp=18u	*m=10
x2	Replacement-CS	clk-Selection	left	right	1	MUX-Pair	wn=25u	wp=75u

x3	Dual-Ram-Pin	Dual-Ram-Pin^	INV	wn=5u	wp=15u
x4	Dual-Ram-Pin^	Replacement-CS	2	2^	AND2	wn=25u	wp=75u
x5	2	right	cs-right	Initialization-Start	Static-MUX	wn=25u	wp=75u
x6	Replacement-CS	left	cs-left	Initialization-Start	Static-MUX	wn=25u	wp=75u

x7	vdd	Initialization-Start	write-left	write-right	1	MUX-Pair	wn=20u	wp=60u


***Address signals control
x8	rng216	rng217	rng218	rng219	rng220	rng221	rng222	rng223	random1-0	random1-1	random1-2	random1-3	random1-4	random1-5	random1-6	random1-7	clk-Main^	clk-Main	Latch-Array-8-weaker-in	wn=5u	wp=15u

x9	rng224	rng225	rng226	rng227	rng228	rng229	rng230	rng231	random2-0	random2-1	random2-2	random2-3	random2-4	random2-5	random2-6	random2-7	clk-Main^	clk-Main	Latch-Array-8-weaker-in	wn=5u	wp=15u

x10	Received-Address1-0	Received-Address1-1	Received-Address1-2	Received-Address1-3	Received-Address1-4	Received-Address1-5	Received-Address1-6	Received-Address1-7	random1-0	random1-1	random1-2	random1-3	random1-4	random1-5	random1-6	random1-7	pre-add1-0	pre-add1-1	pre-add1-2	pre-add1-3	pre-add1-4	pre-add1-5	pre-add1-6	pre-add1-7	Master-Slave-Select-Pin-1	MUX-Array-8	wn=5u	wp=15u

x11	Received-Address2-0	Received-Address2-1	Received-Address2-2	Received-Address2-3	Received-Address2-4	Received-Address2-5	Received-Address2-6	Received-Address2-7	random2-0	random2-1	random2-2	random2-3	random2-4	random2-5	random2-6	random2-7	pre-add2-0	pre-add2-1	pre-add2-2	pre-add2-3	pre-add2-4	pre-add2-5	pre-add2-6	pre-add2-7	Master-Slave-Select-Pin-1	MUX-Array-8	wn=5u	wp=15u

x12	counter1-0	counter1-1	counter1-2	counter1-3	counter1-4	counter1-5	counter1-6	counter1-7	pre-add1-0	pre-add1-1	pre-add1-2	pre-add1-3	pre-add1-4	pre-add1-5	pre-add1-6	pre-add1-7	add1-0	add1-1	add1-2	add1-3	add1-4	add1-5	add1-6	add1-7	Initialization-Start	MUX-Array-8	wn=5u	wp=15u

x13	counter1-0	counter1-1	counter1-2	counter1-3	counter1-4	counter1-5	counter1-6	counter1-7	pre-add2-0	pre-add2-1	pre-add2-2	pre-add2-3	pre-add2-4	pre-add2-5	pre-add2-6	pre-add2-7	add2-0	add2-1	add2-2	add2-3	add2-4	add2-5	add2-6	add2-7	Initialization-Start	MUX-Array-8	wn=5u	wp=15u

x14	Population-Size-Pin-0	Population-Size-Pin-1	10	10^	AND2	wn=5u	wp=15u
x15	Population-Size-Pin-0	Population-Size-Pin-1	11	11^	OR2	wn=5u	wp=15u

x16	add1-5	11	gadd1-5	gadd1-5^	AND2	wn=5u	wp=15u
x17	add1-6	Population-Size-Pin-1	gadd1-6	gadd1-6^	AND2	wn=5u	wp=15u
x18	add1-7	10	gadd1-7	gadd1-7^	AND2	wn=5u	wp=15u

x19	add2-5	11	gadd2-5	gadd2-5^	AND2	wn=5u	wp=15u
x20	add2-6	Population-Size-Pin-1	gadd2-6	gadd2-6^	AND2	wn=5u	wp=15u
x21	add2-7	10	gadd2-7	gadd2-7^	AND2	wn=5u	wp=15u

x22	Dual-Ram-Pin	i0-q0	20	20^	OR2	wn=10u	wp=30u
x23	counter1-0	counter1-1	counter1-2	counter1-3	counter1-4	counter1-5	counter1-6	counter1-7	counter2-0	counter2-1	counter2-2	counter2-3	counter2-4	counter2-5	counter2-6	counter2-7	cadd-0	cadd-1	cadd-2	cadd-3	cadd-4	cadd-5	cadd-6	cadd-7	20	20^	MUX-Array-8-no-INV	wn=5u	wp=15u

x24	cadd-5	11	gcadd-5	gcadd-5^	AND2	wn=5u	wp=15u
x25	cadd-6	Population-Size-Pin-1	gcadd-6	gcadd-6^	AND2	wn=5u	wp=15u
x26	cadd-7	10	gcadd-7	gcadd-7^	AND2	wn=5u	wp=15u

x27	cadd-0	cadd-1	cadd-2	cadd-3	cadd-4	gcadd-5	gcadd-6	gcadd-7	add1-0	add1-1	add1-2	add1-3	add1-4	gadd1-5	gadd1-6	gadd1-7	top-left-0	top-left-1	top-left-2	top-left-3	top-left-4	top-left-5	top-left-6	top-left-7	top-right-0	top-right-1	top-right-2	top-right-3	top-right-4	top-right-5	top-right-6	top-right-7	1	Static-MUX-Pair-Array-8	wn=5u	wp=15u

x28	cadd-0	cadd-1	cadd-2	cadd-3	cadd-4	gcadd-5	gcadd-6	gcadd-7	add2-0	add2-1	add2-2	add2-3	add2-4	gadd2-5	gadd2-6	gadd2-7	bottom-left-0	bottom-left-1	bottom-left-2	bottom-left-3	bottom-left-4	bottom-left-5	bottom-left-6	bottom-left-7	bottom-right-0	bottom-right-1	bottom-right-2	bottom-right-3	bottom-right-4	bottom-right-5	bottom-right-6	bottom-right-7	1	Static-MUX-Pair-Array-8	wn=5u	wp=15u


***quadri-RAM structure

*top left RAM
x29	cs-left	write-left	Chromosome-Resolution-Pin	Fitness-Resolution-Pin	top-left-0	top-left-1	top-left-2	top-left-3	top-left-4	top-left-5	top-left-6	top-left-7	tt0	tt1	tt2	tt3	tt4	tt5	tt6	tt7	tt8	tt9	tt10	tt11	tt12	tt13	tt14	tt15	tt16	tt17	tt18	tt19	tt20	tt21	tt22	tt23	tt24	tt25	tt26	tt27	tt28	tt29	tt30	tt31	tt32	tt33	tt34	tt35	tt36	tt37	tt38	tt39	tt40	tt41	tt42	tt43	tt44	tt45	tt46	tt47	tt48	tt49	tt50	tt51	tt52	tt53	tt54	tt55	tt56	tt57	tt58	tt59	tt60	tt61	tt62	tt63	r0	r1	r2	r3	r4	r5	r6	r7	r8	r9	r10	r11	r12	r13	r14	r15	r16	r17	r18	r19	r20	r21	r22	r23	r24	r25	r26	r27	r28	r29	r30	r31	r32	r33	r34	r35	r36	r37	r38	r39	r40	r41	r42	r43	r44	r45	r46	r47	r48	r49	r50	r51	r52	r53	r54	r55	r56	r57	r58	r59	r60	r61	r62	r63	RAM

*bottom left RAM
x30	cs-left	write-left	Chromosome-Resolution-Pin	Fitness-Resolution-Pin	bottom-left-0	bottom-left-1	bottom-left-2	bottom-left-3	bottom-left-4	bottom-left-5	bottom-left-6	bottom-left-7	bb0	bb1	bb2	bb3	bb4	bb5	bb6	bb7	bb8	bb9	bb10	bb11	bb12	bb13	bb14	bb15	bb16	bb17	bb18	bb19	bb20	bb21	bb22	bb23	bb24	bb25	bb26	bb27	bb28	bb29	bb30	bb31	bb32	bb33	bb34	bb35	bb36	bb37	bb38	bb39	bb40	bb41	bb42	bb43	bb44	bb45	bb46	bb47	bb48	bb49	bb50	bb51	bb52	bb53	bb54	bb55	bb56	bb57	bb58	bb59	bb60	bb61	bb62	bb63	r0	r1	r2	r3	r4	r5	r6	r7	r8	r9	r10	r11	r12	r13	r14	r15	r16	r17	r18	r19	r20	r21	r22	r23	r24	r25	r26	r27	r28	r29	r30	r31	r32	r33	r34	r35	r36	r37	r38	r39	r40	r41	r42	r43	r44	r45	r46	r47	r48	r49	r50	r51	r52	r53	r54	r55	r56	r57	r58	r59	r60	r61	r62	r63	RAM

*top right RAM
x31	cs-right	write-right	Chromosome-Resolution-Pin	Fitness-Resolution-Pin	top-right-0	top-right-1	top-right-2	top-right-3	top-right-4	top-right-5	top-right-6	top-right-7	tt0	tt1	tt2	tt3	tt4	tt5	tt6	tt7	tt8	tt9	tt10	tt11	tt12	tt13	tt14	tt15	tt16	tt17	tt18	tt19	tt20	tt21	tt22	tt23	tt24	tt25	tt26	tt27	tt28	tt29	tt30	tt31	tt32	tt33	tt34	tt35	tt36	tt37	tt38	tt39	tt40	tt41	tt42	tt43	tt44	tt45	tt46	tt47	tt48	tt49	tt50	tt51	tt52	tt53	tt54	tt55	tt56	tt57	tt58	tt59	tt60	tt61	tt62	tt63	r0	r1	r2	r3	r4	r5	r6	r7	r8	r9	r10	r11	r12	r13	r14	r15	r16	r17	r18	r19	r20	r21	r22	r23	r24	r25	r26	r27	r28	r29	r30	r31	r32	r33	r34	r35	r36	r37	r38	r39	r40	r41	r42	r43	r44	r45	r46	r47	r48	r49	r50	r51	r52	r53	r54	r55	r56	r57	r58	r59	r60	r61	r62	r63	RAM

*bottom right RAM
x32	cs-right	write-right	Chromosome-Resolution-Pin	Fitness-Resolution-Pin	bottom-right-0	bottom-right-1	bottom-right-2	bottom-right-3	bottom-right-4	bottom-right-5	bottom-right-6	bottom-right-7	bb0	bb1	bb2	bb3	bb4	bb5	bb6	bb7	bb8	bb9	bb10	bb11	bb12	bb13	bb14	bb15	bb16	bb17	bb18	bb19	bb20	bb21	bb22	bb23	bb24	bb25	bb26	bb27	bb28	bb29	bb30	bb31	bb32	bb33	bb34	bb35	bb36	bb37	bb38	bb39	bb40	bb41	bb42	bb43	bb44	bb45	bb46	bb47	bb48	bb49	bb50	bb51	bb52	bb53	bb54	bb55	bb56	bb57	bb58	bb59	bb60	bb61	bb62	bb63	r0	r1	r2	r3	r4	r5	r6	r7	r8	r9	r10	r11	r12	r13	r14	r15	r16	r17	r18	r19	r20	r21	r22	r23	r24	r25	r26	r27	r28	r29	r30	r31	r32	r33	r34	r35	r36	r37	r38	r39	r40	r41	r42	r43	r44	r45	r46	r47	r48	r49	r50	r51	r52	r53	r54	r55	r56	r57	r58	r59	r60	r61	r62	r63	RAM


x33	clk-Selection	Chromosome-Resolution-Pin	200	200^	AND2	wn=2u	wp=6u
x34	clk-Selection	Fitness-Resolution-Pin	201	201^	AND2	wn=2u	wp=6u

x35	tt0	tt1	tt2	tt3	tt4	tt5	tt6	tt7	tt8	tt9	tt10	tt11	tt12	tt13	tt14	tt15	tt16	tt17	tt18	tt19	tt20	tt21	tt22	tt23	tt24	tt25	tt26	tt27	tt28	tt29	tt30	tt31	tt32	tt33	tt34	tt35	tt36	tt37	tt38	tt39	tt40	tt41	tt42	tt43	tt44	tt45	tt46	tt47	tt48	tt49	tt50	tt51	tt52	tt53	tt54	tt55	tt56	tt57	tt58	tt59	tt60	tt61	tt62	tt63	t0	t1	t2	t3	t4	t5	t6	t7	t8	t9	t10	t11	t12	t13	t14	t15	t16	t17	t18	t19	t20	t21	t22	t23	t24	t25	t26	t27	t28	t29	t30	t31	t32	t33	t34	t35	t36	t37	t38	t39	t40	t41	t42	t43	t44	t45	t46	t47	t48	t49	t50	t51	t52	t53	t54	t55	t56	t57	t58	t59	t60	t61	t62	t63	clk-Selection	clk-Selection^	200	200^	201	201^	Half-Register-Array-64	wn=0.25u	wp=0.75u

x36	bb0	bb1	bb2	bb3	bb4	bb5	bb6	bb7	bb8	bb9	bb10	bb11	bb12	bb13	bb14	bb15	bb16	bb17	bb18	bb19	bb20	bb21	bb22	bb23	bb24	bb25	bb26	bb27	bb28	bb29	bb30	bb31	bb32	bb33	bb34	bb35	bb36	bb37	bb38	bb39	bb40	bb41	bb42	bb43	bb44	bb45	bb46	bb47	bb48	bb49	bb50	bb51	bb52	bb53	bb54	bb55	bb56	bb57	bb58	bb59	bb60	bb61	bb62	bb63	b0	b1	b2	b3	b4	b5	b6	b7	b8	b9	b10	b11	b12	b13	b14	b15	b16	b17	b18	b19	b20	b21	b22	b23	b24	b25	b26	b27	b28	b29	b30	b31	b32	b33	b34	b35	b36	b37	b38	b39	b40	b41	b42	b43	b44	b45	b46	b47	b48	b49	b50	b51	b52	b53	b54	b55	b56	b57	b58	b59	b60	b61	b62	b63	clk-Selection	clk-Selection^	200	200^	201	201^	Half-Register-Array-64	wn=0.25u	wp=0.75u

***Elitism part
x37	X-Handshake-Enable	Chromosome-Resolution-Pin	30	30^	AND2	wn=7u	wp=21u
x38	X-Handshake-Enable	Fitness-Resolution-Pin	31	31^	AND2	wn=7u	wp=21u

x39	bf0	bf1	bf2	bf3	bf4	bf5	bf6	bf7	bf8	bf9	bf10	bf11	bf12	bf13	bf14	bf15	bf16	bf17	bf18	bf19	bf20	bf21	bf22	bf23	bf24	bf25	bf26	bf27	bf28	bf29	bf30	bf31	bf32	bf33	bf34	bf35	bf36	bf37	bf38	bf39	bf40	bf41	bf42	bf43	bf44	bf45	bf46	bf47	bf48	bf49	bf50	bf51	bf52	bf53	bf54	bf55	bf56	bf57	bf58	bf59	bf60	bf61	bf62	bf63	e0	e1	e2	e3	e4	e5	e6	e7	e8	e9	e10	e11	e12	e13	e14	e15	e16	e17	e18	e19	e20	e21	e22	e23	e24	e25	e26	e27	e28	e29	e30	e31	e32	e33	e34	e35	e36	e37	e38	e39	e40	e41	e42	e43	e44	e45	e46	e47	e48	e49	e50	e51	e52	e53	e54	e55	e56	e57	e58	e59	e60	e61	e62	e63	X-Handshake-Enable	X-Handshake-Enable^	30	30^	31	31^	Latch-Array-64	wn=0.25u	wp=0.75u


x40	Master-Slave-Select-Pin-1	Initialization-Start	No-Elitism-Pin	40	NOR3-m10	wn=1.5u	wp=4.5u	*m=10

x7200	Population-Size-Pin-0	Population-Size-Pin-1	7200	7200^	AND2	wn=0.5u	wp=1.5u
x7201	Population-Size-Pin-0	Population-Size-Pin-1	7201	7201^	OR2	wn=0.5u	wp=1.5u
x7202	7201	rng205	post-rng205	NAND2	wn=1.5u	wp=4.5u
x7203	Population-Size-Pin-1	rng206	post-rng206	NAND2	wn=1.5u	wp=4.5u
x7204	7200	rng207	post-rng207	NAND2	wn=1.5u	wp=4.5u

x41	40	rng200	rng201	50	NAND3	wn=1.5u	wp=4.5u
x42	rng202	rng203	rng204	51	NAND3	wn=1.5u	wp=4.5u
x43	post-rng205	post-rng206	post-rng207	52	NAND3	wn=1.5u	wp=4.5u
x44	50	51	52	53	NOR3	wn=4u	wp=12u

x45	Master-Slave-Select-Pin-1	Received-Elite-Selected-1	54	54^	AND2	wn=10u	wp=30u
x46	53	54	55	55^	OR2	wn=10u	wp=30u

x47	e0	e1	e2	e3	e4	e5	e6	e7	e8	e9	e10	e11	e12	e13	e14	e15	e16	e17	e18	e19	e20	e21	e22	e23	e24	e25	e26	e27	e28	e29	e30	e31	e32	e33	e34	e35	e36	e37	e38	e39	e40	e41	e42	e43	e44	e45	e46	e47	e48	e49	e50	e51	e52	e53	e54	e55	e56	e57	e58	e59	e60	e61	e62	e63	t0	t1	t2	t3	t4	t5	t6	t7	t8	t9	t10	t11	t12	t13	t14	t15	t16	t17	t18	t19	t20	t21	t22	t23	t24	t25	t26	t27	t28	t29	t30	t31	t32	t33	t34	t35	t36	t37	t38	t39	t40	t41	t42	t43	t44	t45	t46	t47	t48	t49	t50	t51	t52	t53	t54	t55	t56	t57	t58	t59	t60	t61	t62	t63	s1-0	s1-1	s1-2	s1-3	s1-4	s1-5	s1-6	s1-7	s1-8	s1-9	s1-10	s1-11	s1-12	s1-13	s1-14	s1-15	s1-16	s1-17	s1-18	s1-19	s1-20	s1-21	s1-22	s1-23	s1-24	s1-25	s1-26	s1-27	s1-28	s1-29	s1-30	s1-31	s1-32	s1-33	s1-34	s1-35	s1-36	s1-37	s1-38	s1-39	s1-40	s1-41	s1-42	s1-43	s1-44	s1-45	s1-46	s1-47	s1-48	s1-49	s1-50	s1-51	s1-52	s1-53	s1-54	s1-55	s1-56	s1-57	s1-58	s1-59	s1-60	s1-61	s1-62	s1-63	55	55^	MUX-Array-64-no-INV	wn=0.25u	wp=0.75u

x48	clk-Selection^	Chromosome-Resolution-Pin	70	70^	AND2	wn=4u	wp=12u
x49	clk-Selection^	Fitness-Resolution-Pin	71	71^	AND2	wn=4u	wp=12u

x50	s1-0	s1-1	s1-2	s1-3	s1-4	s1-5	s1-6	s1-7	s1-8	s1-9	s1-10	s1-11	s1-12	s1-13	s1-14	s1-15	s1-16	s1-17	s1-18	s1-19	s1-20	s1-21	s1-22	s1-23	s1-24	s1-25	s1-26	s1-27	s1-28	s1-29	s1-30	s1-31	s1-32	s1-33	s1-34	s1-35	s1-36	s1-37	s1-38	s1-39	s1-40	s1-41	s1-42	s1-43	s1-44	s1-45	s1-46	s1-47	s1-48	s1-49	s1-50	s1-51	s1-52	s1-53	s1-54	s1-55	s1-56	s1-57	s1-58	s1-59	s1-60	s1-61	s1-62	s1-63	SI1-0	SI1-1	SI1-2	SI1-3	SI1-4	SI1-5	SI1-6	SI1-7	SI1-8	SI1-9	SI1-10	SI1-11	SI1-12	SI1-13	SI1-14	SI1-15	SI1-16	SI1-17	SI1-18	SI1-19	SI1-20	SI1-21	SI1-22	SI1-23	SI1-24	SI1-25	SI1-26	SI1-27	SI1-28	SI1-29	SI1-30	SI1-31	SI1-32	SI1-33	SI1-34	SI1-35	SI1-36	SI1-37	SI1-38	SI1-39	SI1-40	SI1-41	SI1-42	SI1-43	SI1-44	SI1-45	SI1-46	SI1-47	SI1-48	SI1-49	SI1-50	SI1-51	SI1-52	SI1-53	SI1-54	SI1-55	SI1-56	SI1-57	SI1-58	SI1-59	SI1-60	SI1-61	SI1-62	SI1-63	clk-Selection^	clk-Selection	70	70^	71	71^	Half-Register-Array-64	wn=0.25u	wp=0.75u

x7210	Population-Size-Pin-0	Population-Size-Pin-1	7210	7210^	AND2	wn=0.5u	wp=1.5u
x7211	Population-Size-Pin-0	Population-Size-Pin-1	7211	7211^	OR2	wn=0.5u	wp=1.5u
x7212	7211	rng213	post-rng213	NAND2	wn=1.5u	wp=4.5u
x7213	Population-Size-Pin-1	rng214	post-rng214	NAND2	wn=1.5u	wp=4.5u
x7214	7210	rng215	post-rng215	NAND2	wn=1.5u	wp=4.5u

x51	40	rng208	rng209	60	NAND3	wn=1.5u	wp=4.5u
x52	rng210	rng211	rng212	61	NAND3	wn=1.5u	wp=4.5u
x53	post-rng213	post-rng214	post-rng215	62	NAND3	wn=1.5u	wp=4.5u
x54	60	61	62	63	NOR3	wn=4u	wp=12u

x55	Master-Slave-Select-Pin-1	Received-Elite-Selected-2	64	64^	AND2	wn=10u	wp=30u
x56	63	64	65	65^	OR2	wn=10u	wp=30u

x57	e0	e1	e2	e3	e4	e5	e6	e7	e8	e9	e10	e11	e12	e13	e14	e15	e16	e17	e18	e19	e20	e21	e22	e23	e24	e25	e26	e27	e28	e29	e30	e31	e32	e33	e34	e35	e36	e37	e38	e39	e40	e41	e42	e43	e44	e45	e46	e47	e48	e49	e50	e51	e52	e53	e54	e55	e56	e57	e58	e59	e60	e61	e62	e63	b0	b1	b2	b3	b4	b5	b6	b7	b8	b9	b10	b11	b12	b13	b14	b15	b16	b17	b18	b19	b20	b21	b22	b23	b24	b25	b26	b27	b28	b29	b30	b31	b32	b33	b34	b35	b36	b37	b38	b39	b40	b41	b42	b43	b44	b45	b46	b47	b48	b49	b50	b51	b52	b53	b54	b55	b56	b57	b58	b59	b60	b61	b62	b63	s2-0	s2-1	s2-2	s2-3	s2-4	s2-5	s2-6	s2-7	s2-8	s2-9	s2-10	s2-11	s2-12	s2-13	s2-14	s2-15	s2-16	s2-17	s2-18	s2-19	s2-20	s2-21	s2-22	s2-23	s2-24	s2-25	s2-26	s2-27	s2-28	s2-29	s2-30	s2-31	s2-32	s2-33	s2-34	s2-35	s2-36	s2-37	s2-38	s2-39	s2-40	s2-41	s2-42	s2-43	s2-44	s2-45	s2-46	s2-47	s2-48	s2-49	s2-50	s2-51	s2-52	s2-53	s2-54	s2-55	s2-56	s2-57	s2-58	s2-59	s2-60	s2-61	s2-62	s2-63	65	65^	MUX-Array-64-no-INV	wn=1u	wp=3u

x58	s2-0	s2-1	s2-2	s2-3	s2-4	s2-5	s2-6	s2-7	s2-8	s2-9	s2-10	s2-11	s2-12	s2-13	s2-14	s2-15	s2-16	s2-17	s2-18	s2-19	s2-20	s2-21	s2-22	s2-23	s2-24	s2-25	s2-26	s2-27	s2-28	s2-29	s2-30	s2-31	s2-32	s2-33	s2-34	s2-35	s2-36	s2-37	s2-38	s2-39	s2-40	s2-41	s2-42	s2-43	s2-44	s2-45	s2-46	s2-47	s2-48	s2-49	s2-50	s2-51	s2-52	s2-53	s2-54	s2-55	s2-56	s2-57	s2-58	s2-59	s2-60	s2-61	s2-62	s2-63	SI2-0	SI2-1	SI2-2	SI2-3	SI2-4	SI2-5	SI2-6	SI2-7	SI2-8	SI2-9	SI2-10	SI2-11	SI2-12	SI2-13	SI2-14	SI2-15	SI2-16	SI2-17	SI2-18	SI2-19	SI2-20	SI2-21	SI2-22	SI2-23	SI2-24	SI2-25	SI2-26	SI2-27	SI2-28	SI2-29	SI2-30	SI2-31	SI2-32	SI2-33	SI2-34	SI2-35	SI2-36	SI2-37	SI2-38	SI2-39	SI2-40	SI2-41	SI2-42	SI2-43	SI2-44	SI2-45	SI2-46	SI2-47	SI2-48	SI2-49	SI2-50	SI2-51	SI2-52	SI2-53	SI2-54	SI2-55	SI2-56	SI2-57	SI2-58	SI2-59	SI2-60	SI2-61	SI2-62	SI2-63	clk-Selection^	clk-Selection	70	70^	71	71^	Half-Register-Array-64	wn=1u	wp=3u

x59	53	Elite-Selected-1	clk-Selection^	clk-Selection	Half-Register	wn=0.25u	wp=0.75u
x60	63	Elite-Selected-2	clk-Selection^	clk-Selection	Half-Register	wn=0.25u	wp=0.75u

x61	random1-0	random1-1	random1-2	random1-3	random1-4	random1-5	random1-6	random1-7	Selected-Address1-0	Selected-Address1-1	Selected-Address1-2	Selected-Address1-3	Selected-Address1-4	Selected-Address1-5	Selected-Address1-6	Selected-Address1-7	clk-Main^	clk-Main	Register-Array-8	wn=0.25u	wp=0.75u

x62	random2-0	random2-1	random2-2	random2-3	random2-4	random2-5	random2-6	random2-7	Selected-Address2-0	Selected-Address2-1	Selected-Address2-2	Selected-Address2-3	Selected-Address2-4	Selected-Address2-5	Selected-Address2-6	Selected-Address2-7	clk-Main^	clk-Main	Register-Array-8	wn=0.25u	wp=0.75u


************************************************************************************************Arrays

.subckt	Static-MUX-Pair-Array-8	in1-1	in1-2	in1-3	in1-4	in1-5	in1-6	in1-7	in1-8	in2-1	in2-2	in2-3	in2-4	in2-5	in2-6	in2-7	in2-8	out1-1	out1-2	out1-3	out1-4	out1-5	out1-6	out1-7	out1-8	out2-1	out2-2	out2-3	out2-4	out2-5	out2-6	out2-7	out2-8	control	wn=1u	wp=3u	le=0.18u
x1	in1-1	in1-2	in1-3	in1-4	in2-1	in2-2	in2-3	in2-4	out1-1	out1-2	out1-3	out1-4	out2-1	out2-2	out2-3	out2-4	control	Static-MUX-Pair-Array-4	wn='wn'	wp='wp'	le='le'
x2	in1-5	in1-6	in1-7	in1-8	in2-5	in2-6	in2-7	in2-8	out1-5	out1-6	out1-7	out1-8	out2-5	out2-6	out2-7	out2-8	control	Static-MUX-Pair-Array-4	wn='wn'	wp='wp'	le='le'
.ends

.subckt	Static-MUX-Pair-Array-4	in1-1	in1-2	in1-3	in1-4	in2-1	in2-2	in2-3	in2-4	out1-1	out1-2	out1-3	out1-4	out2-1	out2-2	out2-3	out2-4	control	wn=1u	wp=3u	le=0.18u
x1	in1-1	in2-1	out1-1	out2-1	control	Static-MUX-Pair	wn='wn'	wp='wp'	le='le'
x2	in1-2	in2-2	out1-2	out2-2	control	Static-MUX-Pair	wn='wn'	wp='wp'	le='le'
x3	in1-3	in2-3	out1-3	out2-3	control	Static-MUX-Pair	wn='wn'	wp='wp'	le='le'
x4	in1-4	in2-4	out1-4	out2-4	control	Static-MUX-Pair	wn='wn'	wp='wp'	le='le'
.ends

.subckt	MUX-Array-8	in1-1	in1-2	in1-3	in1-4	in1-5	in1-6	in1-7	in1-8	in2-1	in2-2	in2-3	in2-4	in2-5	in2-6	in2-7	in2-8	out1	out2	out3	out4	out5	out6	out7	out8	control	wn=1u	wp=3u	le=0.18u
x1	in1-1	in1-2	in1-3	in1-4	in2-1	in2-2	in2-3	in2-4	out1	out2	out3	out4	control	MUX-Array-4	wn='wn'	wp='wp'	le='le'
x2	in1-5	in1-6	in1-7	in1-8	in2-5	in2-6	in2-7	in2-8	out5	out6	out7	out8	control	MUX-Array-4	wn='wn'	wp='wp'	le='le'
.ends

.subckt	MUX-Array-4	in1-1	in1-2	in1-3	in1-4	in2-1	in2-2	in2-3	in2-4	out1	out2	out3	out4	control	wn=1u	wp=3u	le=0.18u
x1	in1-1	in2-1	out1	control	MUX	wn='wn'	wp='wp'	le='le'
x2	in1-2	in2-2	out2	control	MUX	wn='wn'	wp='wp'	le='le'
x3	in1-3	in2-3	out3	control	MUX	wn='wn'	wp='wp'	le='le'
x4	in1-4	in2-4	out4	control	MUX	wn='wn'	wp='wp'	le='le'
.ends

.subckt	MUX-Array-64-no-INV	in1-1	in1-2	in1-3	in1-4	in1-5	in1-6	in1-7	in1-8	in1-9	in1-10	in1-11	in1-12	in1-13	in1-14	in1-15	in1-16	in1-17	in1-18	in1-19	in1-20	in1-21	in1-22	in1-23	in1-24	in1-25	in1-26	in1-27	in1-28	in1-29	in1-30	in1-31	in1-32	in1-33	in1-34	in1-35	in1-36	in1-37	in1-38	in1-39	in1-40	in1-41	in1-42	in1-43	in1-44	in1-45	in1-46	in1-47	in1-48	in1-49	in1-50	in1-51	in1-52	in1-53	in1-54	in1-55	in1-56	in1-57	in1-58	in1-59	in1-60	in1-61	in1-62	in1-63	in1-64	in2-1	in2-2	in2-3	in2-4	in2-5	in2-6	in2-7	in2-8	in2-9	in2-10	in2-11	in2-12	in2-13	in2-14	in2-15	in2-16	in2-17	in2-18	in2-19	in2-20	in2-21	in2-22	in2-23	in2-24	in2-25	in2-26	in2-27	in2-28	in2-29	in2-30	in2-31	in2-32	in2-33	in2-34	in2-35	in2-36	in2-37	in2-38	in2-39	in2-40	in2-41	in2-42	in2-43	in2-44	in2-45	in2-46	in2-47	in2-48	in2-49	in2-50	in2-51	in2-52	in2-53	in2-54	in2-55	in2-56	in2-57	in2-58	in2-59	in2-60	in2-61	in2-62	in2-63	in2-64	out1	out2	out3	out4	out5	out6	out7	out8	out9	out10	out11	out12	out13	out14	out15	out16	out17	out18	out19	out20	out21	out22	out23	out24	out25	out26	out27	out28	out29	out30	out31	out32	out33	out34	out35	out36	out37	out38	out39	out40	out41	out42	out43	out44	out45	out46	out47	out48	out49	out50	out51	out52	out53	out54	out55	out56	out57	out58	out59	out60	out61	out62	out63	out64	control	control^	wn=1u	wp=3u	le=0.18u
x1	in1-1	in1-2	in1-3	in1-4	in1-5	in1-6	in1-7	in1-8	in1-9	in1-10	in1-11	in1-12	in1-13	in1-14	in1-15	in1-16	in2-1	in2-2	in2-3	in2-4	in2-5	in2-6	in2-7	in2-8	in2-9	in2-10	in2-11	in2-12	in2-13	in2-14	in2-15	in2-16	out1	out2	out3	out4	out5	out6	out7	out8	out9	out10	out11	out12	out13	out14	out15	out16	control	control^	MUX-Array-16-no-INV	wn='wn'	wp='wp'	le='le'
x2	in1-17	in1-18	in1-19	in1-20	in1-21	in1-22	in1-23	in1-24	in1-25	in1-26	in1-27	in1-28	in1-29	in1-30	in1-31	in1-32	in2-17	in2-18	in2-19	in2-20	in2-21	in2-22	in2-23	in2-24	in2-25	in2-26	in2-27	in2-28	in2-29	in2-30	in2-31	in2-32	out17	out18	out19	out20	out21	out22	out23	out24	out25	out26	out27	out28	out29	out30	out31	out32	control	control^	MUX-Array-16-no-INV	wn='wn'	wp='wp'	le='le'
x3	in1-33	in1-34	in1-35	in1-36	in1-37	in1-38	in1-39	in1-40	in1-41	in1-42	in1-43	in1-44	in1-45	in1-46	in1-47	in1-48	in2-33	in2-34	in2-35	in2-36	in2-37	in2-38	in2-39	in2-40	in2-41	in2-42	in2-43	in2-44	in2-45	in2-46	in2-47	in2-48	out33	out34	out35	out36	out37	out38	out39	out40	out41	out42	out43	out44	out45	out46	out47	out48	control	control^	MUX-Array-16-no-INV	wn='wn'	wp='wp'	le='le'
x4	in1-49	in1-50	in1-51	in1-52	in1-53	in1-54	in1-55	in1-56	in1-57	in1-58	in1-59	in1-60	in1-61	in1-62	in1-63	in1-64	in2-49	in2-50	in2-51	in2-52	in2-53	in2-54	in2-55	in2-56	in2-57	in2-58	in2-59	in2-60	in2-61	in2-62	in2-63	in2-64	out49	out50	out51	out52	out53	out54	out55	out56	out57	out58	out59	out60	out61	out62	out63	out64	control	control^	MUX-Array-16-no-INV	wn='wn'	wp='wp'	le='le'
.ends

.subckt	MUX-Array-16-no-INV	in1-1	in1-2	in1-3	in1-4	in1-5	in1-6	in1-7	in1-8	in1-9	in1-10	in1-11	in1-12	in1-13	in1-14	in1-15	in1-16	in2-1	in2-2	in2-3	in2-4	in2-5	in2-6	in2-7	in2-8	in2-9	in2-10	in2-11	in2-12	in2-13	in2-14	in2-15	in2-16	out1	out2	out3	out4	out5	out6	out7	out8	out9	out10	out11	out12	out13	out14	out15	out16	control	control^	wn=1u	wp=3u	le=0.18u
x1	in1-1	in1-2	in1-3	in1-4	in2-1	in2-2	in2-3	in2-4	out1	out2	out3	out4	control	control^	MUX-Array-4-no-INV	wn='wn'	wp='wp'	le='le'
x2	in1-5	in1-6	in1-7	in1-8	in2-5	in2-6	in2-7	in2-8	out5	out6	out7	out8	control	control^	MUX-Array-4-no-INV	wn='wn'	wp='wp'	le='le'
x3	in1-9	in1-10	in1-11	in1-12	in2-9	in2-10	in2-11	in2-12	out9	out10	out11	out12	control	control^	MUX-Array-4-no-INV	wn='wn'	wp='wp'	le='le'
x4	in1-13	in1-14	in1-15	in1-16	in2-13	in2-14	in2-15	in2-16	out13	out14	out15	out16	control	control^	MUX-Array-4-no-INV	wn='wn'	wp='wp'	le='le'
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

.subckt	Latch-Array-64	in1	in2	in3	in4	in5	in6	in7	in8	in9	in10	in11	in12	in13	in14	in15	in16	in17	in18	in19	in20	in21	in22	in23	in24	in25	in26	in27	in28	in29	in30	in31	in32	in33	in34	in35	in36	in37	in38	in39	in40	in41	in42	in43	in44	in45	in46	in47	in48	in49	in50	in51	in52	in53	in54	in55	in56	in57	in58	in59	in60	in61	in62	in63	in64	out1	out2	out3	out4	out5	out6	out7	out8	out9	out10	out11	out12	out13	out14	out15	out16	out17	out18	out19	out20	out21	out22	out23	out24	out25	out26	out27	out28	out29	out30	out31	out32	out33	out34	out35	out36	out37	out38	out39	out40	out41	out42	out43	out44	out45	out46	out47	out48	out49	out50	out51	out52	out53	out54	out55	out56	out57	out58	out59	out60	out61	out62	out63	out64	clk	clk^	clk-chromosome	clk-chromosome^	clk-fitness	clk-fitness^	wn=1u	wp=3u	le=0.18u
x1	in1	in2	in3	in4	in5	in6	in7	in8	out1	out2	out3	out4	out5	out6	out7	out8	clk	clk^	Latch-Array-8	wn='wn'	wp='wp'	le='le'
x2	in9	in10	in11	in12	in13	in14	in15	in16	out9	out10	out11	out12	out13	out14	out15	out16	clk	clk^	Latch-Array-8	wn='wn'	wp='wp'	le='le'
x3	in17	in18	in19	in20	in21	in22	in23	in24	out17	out18	out19	out20	out21	out22	out23	out24	clk-chromosome	clk-chromosome^	Latch-Array-8	wn='wn'	wp='wp'	le='le'
x4	in25	in26	in27	in28	in29	in30	in31	in32	out25	out26	out27	out28	out29	out30	out31	out32	clk-chromosome	clk-chromosome^	Latch-Array-8	wn='wn'	wp='wp'	le='le'
x5	in33	in34	in35	in36	in37	in38	in39	in40	out33	out34	out35	out36	out37	out38	out39	out40	clk	clk^	Latch-Array-8	wn='wn'	wp='wp'	le='le'
x6	in41	in42	in43	in44	in45	in46	in47	in48	out41	out42	out43	out44	out45	out46	out47	out48	clk	clk^	Latch-Array-8	wn='wn'	wp='wp'	le='le'
x7	in49	in50	in51	in52	in53	in54	in55	in56	out49	out50	out51	out52	out53	out54	out55	out56	clk-fitness	clk-fitness^	Latch-Array-8	wn='wn'	wp='wp'	le='le'
x8	in57	in58	in59	in60	in61	in62	in63	in64	out57	out58	out59	out60	out61	out62	out63	out64	clk-fitness	clk-fitness^	Latch-Array-8	wn='wn'	wp='wp'	le='le'
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

.subckt	Latch-Array-8-weaker-in	in1	in2	in3	in4	in5	in6	in7	in8	out1	out2	out3	out4	out5	out6	out7	out8	clk	clk^	wn=1u	wp=3u	le=0.18u
x1	in1	in2	in3	in4	out1	out2	out3	out4	clk	clk^	Latch-Array-4	wn='wn'	wp='wp'	le='le'
x2	in5	in6	in7	in8	out5	out6	out7	out8	clk	clk^	Latch-Array-4	wn='wn'	wp='wp'	le='le'
.ends

.subckt	Latch-Array-4-weaker-in	in1	in2	in3	in4	out1	out2	out3	out4	clk	clk^	wn=1u	wp=3u	le=0.18u
x1	in1	out1	clk	clk^	D-Latch-weaker-in	wn='wn'	wp='wp'	le='le'
x2	in2	out2	clk	clk^	D-Latch-weaker-in	wn='wn'	wp='wp'	le='le'
x3	in3	out3	clk	clk^	D-Latch-weaker-in	wn='wn'	wp='wp'	le='le'
x4	in4	out4	clk	clk^	D-Latch-weaker-in	wn='wn'	wp='wp'	le='le'
.ends

.subckt	Register-Array-8	in1	in2	in3	in4	in5	in6	in7	in8	out1	out2	out3	out4	out5	out6	out7	out8	clk	clk^	wn=1u	wp=3u	le=0.18u
x1	in1	in2	in3	in4	out1	out2	out3	out4	clk	clk^	Register-Array-4	wn='wn'	wp='wp'	le='le'
x2	in5	in6	in7	in8	out5	out6	out7	out8	clk	clk^	Register-Array-4	wn='wn'	wp='wp'	le='le'
.ends

.subckt	Register-Array-4	in1	in2	in3	in4	out1	out2	out3	out4	clk	clk^	wn=1u	wp=3u	le=0.18u
x1	in1	out1	clk	clk^	Register	wn='wn'	wp='wp'	le='le'
x2	in2	out2	clk	clk^	Register	wn='wn'	wp='wp'	le='le'
x3	in3	out3	clk	clk^	Register	wn='wn'	wp='wp'	le='le'
x4	in4	out4	clk	clk^	Register	wn='wn'	wp='wp'	le='le'
.ends

.subckt	Half-Register-Array-64	in1	in2	in3	in4	in5	in6	in7	in8	in9	in10	in11	in12	in13	in14	in15	in16	in17	in18	in19	in20	in21	in22	in23	in24	in25	in26	in27	in28	in29	in30	in31	in32	in33	in34	in35	in36	in37	in38	in39	in40	in41	in42	in43	in44	in45	in46	in47	in48	in49	in50	in51	in52	in53	in54	in55	in56	in57	in58	in59	in60	in61	in62	in63	in64	out1	out2	out3	out4	out5	out6	out7	out8	out9	out10	out11	out12	out13	out14	out15	out16	out17	out18	out19	out20	out21	out22	out23	out24	out25	out26	out27	out28	out29	out30	out31	out32	out33	out34	out35	out36	out37	out38	out39	out40	out41	out42	out43	out44	out45	out46	out47	out48	out49	out50	out51	out52	out53	out54	out55	out56	out57	out58	out59	out60	out61	out62	out63	out64	clk	clk^	clk-chromosome	clk-chromosome^	clk-fitness	clk-fitness^	wn=1u	wp=3u	le=0.18u
x1	in1	in2	in3	in4	in5	in6	in7	in8	in9	in10	in11	in12	in13	in14	in15	in16	out1	out2	out3	out4	out5	out6	out7	out8	out9	out10	out11	out12	out13	out14	out15	out16	clk	clk^	Half-Register-Array-16	wn='wn'	wp='wp'	le='le'
x2	in17	in18	in19	in20	in21	in22	in23	in24	in25	in26	in27	in28	in29	in30	in31	in32	out17	out18	out19	out20	out21	out22	out23	out24	out25	out26	out27	out28	out29	out30	out31	out32	clk-chromosome	clk-chromosome^	Half-Register-Array-16	wn='wn'	wp='wp'	le='le'
x3	in33	in34	in35	in36	in37	in38	in39	in40	in41	in42	in43	in44	in45	in46	in47	in48	out33	out34	out35	out36	out37	out38	out39	out40	out41	out42	out43	out44	out45	out46	out47	out48	clk	clk^	Half-Register-Array-16	wn='wn'	wp='wp'	le='le'
x4	in49	in50	in51	in52	in53	in54	in55	in56	in57	in58	in59	in60	in61	in62	in63	in64	out49	out50	out51	out52	out53	out54	out55	out56	out57	out58	out59	out60	out61	out62	out63	out64	clk-fitness	clk-fitness^	Half-Register-Array-16	wn='wn'	wp='wp'	le='le'
.ends

.subckt	Half-Register-Array-16	in1	in2	in3	in4	in5	in6	in7	in8	in9	in10	in11	in12	in13	in14	in15	in16	out1	out2	out3	out4	out5	out6	out7	out8	out9	out10	out11	out12	out13	out14	out15	out16	clk	clk^	wn=1u	wp=3u	le=0.18u
x1	in1	in2	in3	in4	out1	out2	out3	out4	clk	clk^	Half-Register-Array-4	wn='wn'	wp='wp'	le='le'
x2	in5	in6	in7	in8	out5	out6	out7	out8	clk	clk^	Half-Register-Array-4	wn='wn'	wp='wp'	le='le'
x3	in9	in10	in11	in12	out9	out10	out11	out12	clk	clk^	Half-Register-Array-4	wn='wn'	wp='wp'	le='le'
x4	in13	in14	in15	in16	out13	out14	out15	out16	clk	clk^	Half-Register-Array-4	wn='wn'	wp='wp'	le='le'
.ends

.subckt	Half-Register-Array-4	in1	in2	in3	in4	out1	out2	out3	out4	clk	clk^	wn=1u	wp=3u	le=0.18u
x1	in1	out1	clk	clk^	Half-Register	wn='wn'	wp='wp'	le='le'
x2	in2	out2	clk	clk^	Half-Register	wn='wn'	wp='wp'	le='le'
x3	in3	out3	clk	clk^	Half-Register	wn='wn'	wp='wp'	le='le'
x4	in4	out4	clk	clk^	Half-Register	wn='wn'	wp='wp'	le='le'
.ends


************************************************************************************************Components

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

***Static Multiplexer***
.subckt	Static-MUX	in1	in2	out	control	wn=1u	wp=3u	le=0.18u
x1	control	control^	INV	wn='wn'	wp='wp'	le='le'

m1	a	control	vdd	vdd	mp18	w='wp'	l=le
m2	b	control^	a	vdd	mp18	w='wp'	l=le
m3	b	control	c	0	mn18	w='wn'	l=le
m4	c	in1	0	0	mn18	w='wn'	l=le
m5	a	in1	vdd	vdd	mp18	w='wp'	l=le
m6	b	in2	a	vdd	mp18	w='wp'	l=le
m7	b	control^	d	0	mn18	w='wn'	l=le
m8	d	in2	0	0	mn18	w='wn'	l=le

x2	b	out	INV	wn='wn'	wp='wp'	le='le'
.ends

***D Latch
.subckt	D-Latch	in	out	clk	clk^	wn=1u	wp=3u	le=0.18u
x1	in	a	clk	clk^	TG	wn='wn'	wp='wp'	le='le'
x2	a	b	INV	wn='wn'	wp='wp'	le='le'
x3	b	a	clk^	clk	CK-INV	wn='wn'	wp='wp'	le='le'
x4	b	out	INV	wn='wn'	wp='wp'	le='le'
.ends

***D Latch with weaker (1/3) input
.subckt	D-Latch-weaker-in	in	out	clk	clk^	wn=1u	wp=3u	le=0.18u
x1	in	a	clk	clk^	TG	wn='wn/3'	wp='wp/3'	le='le'
x2	a	b	INV	wn='wn/3'	wp='wp/3'	le='le'
x3	b	a	clk^	clk	CK-INV	wn='wn'	wp='wp'	le='le'
x4	b	out	INV	wn='wn'	wp='wp'	le='le'
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

***Static MUX-Pair***
.subckt	Static-MUX-Pair	in1	in2	out1	out2	control	wn=1u	wp=3u	le=0.18u
x1	in1	in2	out1	control	Static-MUX	wn='wn'	wp='wp'	le='le'
x2	in2	in1	out2	control	Static-MUX	wn='wn'	wp='wp'	le='le'
.ends

***MUX-Pair***
.subckt	MUX-Pair	in1	in2	out1	out2	control	wn=1u	wp=3u	le=0.18u
x1	in1	in2	out1	control	MUX	wn='wn'	wp='wp'	le='le'
x2	in2	in1	out2	control	MUX	wn='wn'	wp='wp'	le='le'
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

***3-Input NOR***
.subckt	NOR3	in1	in2	in3	out	wn=1u	wp=3u	le=0.18u
m1	b	in3	vdd	vdd	mp18	w='3*wp'	l=le
m2	a	in2	b	vdd	mp18	w='3*wp'	l=le
m3	out	in1	a	vdd	mp18	w='3*wp'	l=le
m4	out	in1	0	0	mn18	w=wn	l=le
m5	out	in2	0	0	mn18	w=wn	l=le
m6	out	in3	0	0	mn18	w=wn	l=le
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

***10-Transistor 3-Input NOR***
.subckt	NOR3-m10	in1	in2	in3	out	wn=1u	wp=3u	le=0.18u
m1	b	in3	vdd	vdd	mp18	w='3*wp'	l=le	m=10
m2	a	in2	b	vdd	mp18	w='3*wp'	l=le	m=10
m3	out	in1	a	vdd	mp18	w='3*wp'	l=le	m=10
m4	out	in1	0	0	mn18	w=wn	l=le	m=10
m5	out	in2	0	0	mn18	w=wn	l=le	m=10
m6	out	in3	0	0	mn18	w=wn	l=le	m=10
.ends

.ends	Memory-Core