*Selection Module

.subckt	Selection	clk-Main	clk-Main^	clk-Selection	clk-Selection^	Selection-Start	Selection-done	Initialize	Initialize^	Replica-Reset	Replica-Reset^	Master-Slave-Select-Pin-1	Master-Slave-Select-Pin-0	Received-Address1-0	Received-Address1-1	Received-Address1-2	Received-Address1-3	Received-Address1-4	Received-Address1-5	Received-Address1-6	Received-Address1-7	Received-Address2-0	Received-Address2-1	Received-Address2-2	Received-Address2-3	Received-Address2-4	Received-Address2-5	Received-Address2-6	Received-Address2-7	Received-Elite-Selected-1	Received-Elite-Selected-2	Selection-Ack-Pin	Selection-Req-Pin	Address-Port-1	Address-Port-2	Address-Port-3	Address-Port-4	Address-Port-5	Address-Port-6	Address-Port-7	Address-Port-8	Address-Port-9-Elite-Selected	Fitness-or-Cost-Pin	Chromosome-Resolution-Pin	Fitness-Resolution-Pin	Tournament-Size-Pin-1	Tournament-Size-Pin-0	Selected-Address1-0	Selected-Address1-1	Selected-Address1-2	Selected-Address1-3	Selected-Address1-4	Selected-Address1-5	Selected-Address1-6	Selected-Address1-7	Selected-Address2-0	Selected-Address2-1	Selected-Address2-2	Selected-Address2-3	Selected-Address2-4	Selected-Address2-5	Selected-Address2-6	Selected-Address2-7	Elite-Selected-1	Elite-Selected-2	SI1-0	SI1-1	SI1-2	SI1-3	SI1-4	SI1-5	SI1-6	SI1-7	SI1-8	SI1-9	SI1-10	SI1-11	SI1-12	SI1-13	SI1-14	SI1-15	SI1-16	SI1-17	SI1-18	SI1-19	SI1-20	SI1-21	SI1-22	SI1-23	SI1-24	SI1-25	SI1-26	SI1-27	SI1-28	SI1-29	SI1-30	SI1-31	SI1-32	SI1-33	SI1-34	SI1-35	SI1-36	SI1-37	SI1-38	SI1-39	SI1-40	SI1-41	SI1-42	SI1-43	SI1-44	SI1-45	SI1-46	SI1-47	SI1-48	SI1-49	SI1-50	SI1-51	SI1-52	SI1-53	SI1-54	SI1-55	SI1-56	SI1-57	SI1-58	SI1-59	SI1-60	SI1-61	SI1-62	SI1-63	SI2-0	SI2-1	SI2-2	SI2-3	SI2-4	SI2-5	SI2-6	SI2-7	SI2-8	SI2-9	SI2-10	SI2-11	SI2-12	SI2-13	SI2-14	SI2-15	SI2-16	SI2-17	SI2-18	SI2-19	SI2-20	SI2-21	SI2-22	SI2-23	SI2-24	SI2-25	SI2-26	SI2-27	SI2-28	SI2-29	SI2-30	SI2-31	SI2-32	SI2-33	SI2-34	SI2-35	SI2-36	SI2-37	SI2-38	SI2-39	SI2-40	SI2-41	SI2-42	SI2-43	SI2-44	SI2-45	SI2-46	SI2-47	SI2-48	SI2-49	SI2-50	SI2-51	SI2-52	SI2-53	SI2-54	SI2-55	SI2-56	SI2-57	SI2-58	SI2-59	SI2-60	SI2-61	SI2-62	SI2-63	p1-0	p1-1	p1-2	p1-3	p1-4	p1-5	p1-6	p1-7	p1-8	p1-9	p1-10	p1-11	p1-12	p1-13	p1-14	p1-15	p1-16	p1-17	p1-18	p1-19	p1-20	p1-21	p1-22	p1-23	p1-24	p1-25	p1-26	p1-27	p1-28	p1-29	p1-30	p1-31	p2-0	p2-1	p2-2	p2-3	p2-4	p2-5	p2-6	p2-7	p2-8	p2-9	p2-10	p2-11	p2-12	p2-13	p2-14	p2-15	p2-16	p2-17	p2-18	p2-19	p2-20	p2-21	p2-22	p2-23	p2-24	p2-25	p2-26	p2-27	p2-28	p2-29	p2-30	p2-31


***clock gating
x1	receiver-done	10	INV	wn=3u	wp=9u
x2	10	11	INV	wn=3u	wp=9u
x3	11	12	INV	wn=3u	wp=9u
x4	12	13	INV	wn=3u	wp=9u
x2032	13	receiver-done^	INV	wn=3u	wp=9u
x5	Master-Slave-Select-Pin-1	receiver-done^	14	NAND2	wn=3u	wp=9u
x6	done^	Selection-Start	14	1	1^	AND3	wn=7u	wp=21u
x7	1	2	clk-Main	clk-Main^	Register	wn=25u	wp=75u
x8	clk-Main	3	INV	wn=25u	wp=75u
x9	3	4	INV	wn=25u	wp=75u
x10	2	4	clk-Selection	clk-Selection^	AND2-m10	wn=6u	wp=18u	*m=10

***replica delay
x11	stage0	stage1	clk-Selection	clk-Selection^	Replica-Reset	Replica-Reset^	DFF-R	wn=3u	wp=9u
x12	stage1	stage2	clk-Selection	clk-Selection^	Replica-Reset	Replica-Reset^	DFF-R	wn=3u	wp=9u
x13	stage2	stage3	clk-Selection	clk-Selection^	Replica-Reset	Replica-Reset^	DFF-R	wn=3u	wp=9u
x14	stage3	stage4	clk-Selection	clk-Selection^	Replica-Reset	Replica-Reset^	DFF-R	wn=3u	wp=9u
x15	stage4	stage5	clk-Selection	clk-Selection^	Replica-Reset	Replica-Reset^	DFF-R	wn=3u	wp=9u
x16	stage5	stage6	clk-Selection	clk-Selection^	Replica-Reset	Replica-Reset^	DFF-R	wn=3u	wp=9u
x17	stage6	stage7	clk-Selection	clk-Selection^	Replica-Reset	Replica-Reset^	DFF-R	wn=3u	wp=9u
x18	stage7	stage8	clk-Selection	clk-Selection^	Replica-Reset	Replica-Reset^	DFF-R	wn=3u	wp=9u
x19	stage8	stage9	clk-Selection	clk-Selection^	Replica-Reset	Replica-Reset^	DFF-R	wn=3u	wp=9u
x20	stage9	stage10	clk-Selection	clk-Selection^	Replica-Reset	Replica-Reset^	DFF-R	wn=3u	wp=9u
x21	stage10	stage11	clk-Selection	clk-Selection^	Replica-Reset	Replica-Reset^	DFF-R	wn=3u	wp=9u
x22	stage11	stage12	clk-Selection	clk-Selection^	Replica-Reset	Replica-Reset^	DFF-R	wn=3u	wp=9u
x23	stage12	stage13	clk-Selection	clk-Selection^	Replica-Reset	Replica-Reset^	DFF-R	wn=3u	wp=9u
x24	stage13	stage14	clk-Selection	clk-Selection^	Replica-Reset	Replica-Reset^	DFF-R	wn=3u	wp=9u
x25	stage14	stage15	clk-Selection	clk-Selection^	Replica-Reset	Replica-Reset^	DFF-R	wn=3u	wp=9u
x26	stage15	stage16	clk-Selection	clk-Selection^	Replica-Reset	Replica-Reset^	DFF-R	wn=3u	wp=9u
x27	stage16	stage17	clk-Selection	clk-Selection^	Replica-Reset	Replica-Reset^	DFF-S	wn=3u	wp=9u
x28	stage17	stage0	clk-Selection	clk-Selection^	Replica-Reset	Replica-Reset^	DFF-R	wn=3u	wp=9u

x29	Tournament-Size-Pin-0	Tournament-Size-Pin-1	dec0	dec1	dec2	Decoder2Bit-3output	wn=1u	wp=3u
x30	Master-Slave-Select-Pin-1	stage1	20	20^	AND2	wn=3u	wp=9u
x31	dec0	stage2	21	21^	AND2	wn=3u	wp=9u
x32	dec1	stage4	22	22^	AND2	wn=3u	wp=9u
x33	dec2	stage8	23	23^	AND2	wn=3u	wp=9u
x34	20	21	22	23	stage16	done^	NOR5	wn=3u	wp=9u
x35	done^	done	INV	wn=3u	wp=9u


***main part
x36	Fitness-Resolution-Pin	Fitness-or-Cost-Pin	SI1-32	SI1-33	SI1-34	SI1-35	SI1-36	SI1-37	SI1-38	SI1-39	SI1-40	SI1-41	SI1-42	SI1-43	SI1-44	SI1-45	SI1-46	SI1-47	SI1-48	SI1-49	SI1-50	SI1-51	SI1-52	SI1-53	SI1-54	SI1-55	SI1-56	SI1-57	SI1-58	SI1-59	SI1-60	SI1-61	SI1-62	SI1-63	p1-32	p1-33	p1-34	p1-35	p1-36	p1-37	p1-38	p1-39	p1-40	p1-41	p1-42	p1-43	p1-44	p1-45	p1-46	p1-47	p1-48	p1-49	p1-50	p1-51	p1-52	p1-53	p1-54	p1-55	p1-56	p1-57	p1-58	p1-59	p1-60	p1-61	p1-62	p1-63	30	Comparator	wn=4u	wp=12u

x37	stage1	30	31	NOR2	wn=4u	wp=12u
x900	clk-Selection^	900	INV	wn=10u	wp=30u	le=0.7u
x901	900	delayed-clk-Selection^	INV	wn=10u	wp=30u	le=0.7u
x38	delayed-clk-Selection^	31	32	NOR2	wn=10u	wp=30u
x39	32	32^	INV	wn=2.5u	wp=7.5u

x40	Chromosome-Resolution-Pin	32	33	33^	AND2	wn=2.5u	wp=7.5u
x41	Fitness-Resolution-Pin	32	34	34^	AND2	wn=2.5u	wp=7.5u

x42	SI1-0	SI1-1	SI1-2	SI1-3	SI1-4	SI1-5	SI1-6	SI1-7	SI1-8	SI1-9	SI1-10	SI1-11	SI1-12	SI1-13	SI1-14	SI1-15	SI1-16	SI1-17	SI1-18	SI1-19	SI1-20	SI1-21	SI1-22	SI1-23	SI1-24	SI1-25	SI1-26	SI1-27	SI1-28	SI1-29	SI1-30	SI1-31	SI1-32	SI1-33	SI1-34	SI1-35	SI1-36	SI1-37	SI1-38	SI1-39	SI1-40	SI1-41	SI1-42	SI1-43	SI1-44	SI1-45	SI1-46	SI1-47	SI1-48	SI1-49	SI1-50	SI1-51	SI1-52	SI1-53	SI1-54	SI1-55	SI1-56	SI1-57	SI1-58	SI1-59	SI1-60	SI1-61	SI1-62	SI1-63	p1-0	p1-1	p1-2	p1-3	p1-4	p1-5	p1-6	p1-7	p1-8	p1-9	p1-10	p1-11	p1-12	p1-13	p1-14	p1-15	p1-16	p1-17	p1-18	p1-19	p1-20	p1-21	p1-22	p1-23	p1-24	p1-25	p1-26	p1-27	p1-28	p1-29	p1-30	p1-31	p1-32	p1-33	p1-34	p1-35	p1-36	p1-37	p1-38	p1-39	p1-40	p1-41	p1-42	p1-43	p1-44	p1-45	p1-46	p1-47	p1-48	p1-49	p1-50	p1-51	p1-52	p1-53	p1-54	p1-55	p1-56	p1-57	p1-58	p1-59	p1-60	p1-61	p1-62	p1-63	32	32^	33	33^	34	34^	DFF-Array-64	wn=0.25u	wp=0.75u

x43	Selected-Address1-0	Selected-Address1-1	Selected-Address1-2	Selected-Address1-3	Selected-Address1-4	Selected-Address1-5	Selected-Address1-6	Selected-Address1-7	Elite-Selected-1	WA1-0	WA1-1	WA1-2	WA1-3	WA1-4	WA1-5	WA1-6	WA1-7	WA1-8	32	32^	DFF-Array-9	wn=0.25u	wp=0.75u

x44	Fitness-Resolution-Pin	Fitness-or-Cost-Pin	SI2-32	SI2-33	SI2-34	SI2-35	SI2-36	SI2-37	SI2-38	SI2-39	SI2-40	SI2-41	SI2-42	SI2-43	SI2-44	SI2-45	SI2-46	SI2-47	SI2-48	SI2-49	SI2-50	SI2-51	SI2-52	SI2-53	SI2-54	SI2-55	SI2-56	SI2-57	SI2-58	SI2-59	SI2-60	SI2-61	SI2-62	SI2-63	p2-32	p2-33	p2-34	p2-35	p2-36	p2-37	p2-38	p2-39	p2-40	p2-41	p2-42	p2-43	p2-44	p2-45	p2-46	p2-47	p2-48	p2-49	p2-50	p2-51	p2-52	p2-53	p2-54	p2-55	p2-56	p2-57	p2-58	p2-59	p2-60	p2-61	p2-62	p2-63	40	Comparator	wn=4u	wp=12u

x45	stage1	40	41	NOR2	wn=4u	wp=12u
x902	clk-Selection^	901	INV	wn=10u	wp=30u	le=0.7u
x903	901	ddelayed-clk-Selection^	INV	wn=10u	wp=30u	le=0.7u
x46	ddelayed-clk-Selection^	41	42	NOR2	wn=10u	wp=30u
x47	42	42^	INV	wn=2.5u	wp=7.5u

x48	Chromosome-Resolution-Pin	42	43	43^	AND2	wn=2.5u	wp=7.5u
x49	Fitness-Resolution-Pin	42	44	44^	AND2	wn=2.5u	wp=7.5u

x50	SI2-0	SI2-1	SI2-2	SI2-3	SI2-4	SI2-5	SI2-6	SI2-7	SI2-8	SI2-9	SI2-10	SI2-11	SI2-12	SI2-13	SI2-14	SI2-15	SI2-16	SI2-17	SI2-18	SI2-19	SI2-20	SI2-21	SI2-22	SI2-23	SI2-24	SI2-25	SI2-26	SI2-27	SI2-28	SI2-29	SI2-30	SI2-31	SI2-32	SI2-33	SI2-34	SI2-35	SI2-36	SI2-37	SI2-38	SI2-39	SI2-40	SI2-41	SI2-42	SI2-43	SI2-44	SI2-45	SI2-46	SI2-47	SI2-48	SI2-49	SI2-50	SI2-51	SI2-52	SI2-53	SI2-54	SI2-55	SI2-56	SI2-57	SI2-58	SI2-59	SI2-60	SI2-61	SI2-62	SI2-63	p2-0	p2-1	p2-2	p2-3	p2-4	p2-5	p2-6	p2-7	p2-8	p2-9	p2-10	p2-11	p2-12	p2-13	p2-14	p2-15	p2-16	p2-17	p2-18	p2-19	p2-20	p2-21	p2-22	p2-23	p2-24	p2-25	p2-26	p2-27	p2-28	p2-29	p2-30	p2-31	p2-32	p2-33	p2-34	p2-35	p2-36	p2-37	p2-38	p2-39	p2-40	p2-41	p2-42	p2-43	p2-44	p2-45	p2-46	p2-47	p2-48	p2-49	p2-50	p2-51	p2-52	p2-53	p2-54	p2-55	p2-56	p2-57	p2-58	p2-59	p2-60	p2-61	p2-62	p2-63	42	42^	43	43^	44	44^	DFF-Array-64	wn=0.25u	wp=0.75u

x51	Selected-Address2-0	Selected-Address2-1	Selected-Address2-2	Selected-Address2-3	Selected-Address2-4	Selected-Address2-5	Selected-Address2-6	Selected-Address2-7	Elite-Selected-2	WA2-0	WA2-1	WA2-2	WA2-3	WA2-4	WA2-5	WA2-6	WA2-7	WA2-8	42	42^	DFF-Array-9	wn=0.25u	wp=0.75u

***sender and done generation
x52	done	50	clk-Main	clk-Main^	Register	wn=3u	wp=9u
x53	done	50	51	51^	AND2	wn=3u	wp=9u

x54	51^	70	80	sender-ack	60	NOR4	wn=3u	wp=9u
X55	Initialize	61	62	NOR2	wn=3u	wp=9u
x56	62	60	sender-req	C-element	wn=3u	wp=9u
x57	Initialize^	sender-ack	63	63^	AND2	wn=3u	wp=9u
x58	63	sender-req	61	C-element	wn=3u	wp=9u

x4004	Replica-Reset	4004	INV	wn=12u	wp=36u	le=1u
x4005	4004	4005	INV	wn=25u	wp=75u	le=1u
x4006	4005	4005^	INV	wn=13u	wp=39u

x59	sender-ack	sender-ack^	INV	wn=18u	wp=54u
x60	70	71	sender-ack	sender-ack^	4005	4005^	DFF-S	wn=3u	wp=9u
x61	71	72	sender-ack	sender-ack^	4005	4005^	DFF-R	wn=3u	wp=9u
x62	72	70	sender-ack	sender-ack^	4005	4005^	DFF-R	wn=3u	wp=9u

x63	Master-Slave-Select-Pin-0	Master-Slave-Select-Pin-0^	INV	wn=1u	wp=3u
x64	Master-Slave-Select-Pin-0^	Master-Slave-Select-Pin-1	80	80^	OR2	wn=1u	wp=3u
x65	51	70	81	81^	AND2	wn=3u	wp=9u
x66	51	pre-Selection-done	80	80^	TG	wn=3u	wp=9u
x67	81	pre-Selection-done	80^	80	TG	wn=3u	wp=9u

x1043	pre-Selection-done	1043	INV	wn=9u	wp=27u
x1044	1043	Selection-done	INV	wn=27u	wp=81u

x68	WA2-0	WA2-1	WA2-2	WA2-3	WA2-4	WA2-5	WA2-6	WA2-7	WA2-8	WA1-0	WA1-1	WA1-2	WA1-3	WA1-4	WA1-5	WA1-6	WA1-7	WA1-8	address-out-0	address-out-1	address-out-2	address-out-3	address-out-4	address-out-5	address-out-6	address-out-7	address-out-8	72	MUX-Array-9	wn=0.25u	wp=0.75u

x69	address-out-0	address-out-1	address-out-2	address-out-3	address-out-4	address-out-5	address-out-6	address-out-7	address-out-8	AO1-0	AO1-1	AO1-2	AO1-3	AO1-4	AO1-5	AO1-6	AO1-7	AO1-8	INV-Array-9	wn=0.6u	wp=1.8u
x70	AO1-0	AO1-1	AO1-2	AO1-3	AO1-4	AO1-5	AO1-6	AO1-7	AO1-8	AO2-0	AO2-1	AO2-2	AO2-3	AO2-4	AO2-5	AO2-6	AO2-7	AO2-8	INV-Array-9	wn=1.5u	wp=4.5u
x71	AO2-0	AO2-1	AO2-2	AO2-3	AO2-4	AO2-5	AO2-6	AO2-7	AO2-8	AO3-0	AO3-1	AO3-2	AO3-3	AO3-4	AO3-5	AO3-6	AO3-7	AO3-8	INV-Array-9	wn=4u	wp=12u
x72	AO3-0	AO3-1	AO3-2	AO3-3	AO3-4	AO3-5	AO3-6	AO3-7	AO3-8	AO4-0	AO4-1	AO4-2	AO4-3	AO4-4	AO4-5	AO4-6	AO4-7	AO4-8	INV-Array-9	wn=10u	wp=30u
X73	AO4-0	AO4-1	AO4-2	AO4-3	AO4-4	AO4-5	AO4-6	AO4-7	AO4-8	AO5-0	AO5-1	AO5-2	AO5-3	AO5-4	AO5-5	AO5-6	AO5-7	AO5-8	INV-Array-9	wn=25u	wp=75u
x74	AO5-0	AO5-1	AO5-2	AO5-3	AO5-4	AO5-5	AO5-6	AO5-7	AO5-8	AO6-0	AO6-1	AO6-2	AO6-3	AO6-4	AO6-5	AO6-6	AO6-7	AO6-8	INV-Array-9-m10	wn=6u	wp=18u	*m=10
x75	AO6-0	AO6-1	AO6-2	AO6-3	AO6-4	AO6-5	AO6-6	AO6-7	AO6-8	AO7-0	AO7-1	AO7-2	AO7-3	AO7-4	AO7-5	AO7-6	AO7-7	AO7-8	INV-Array-9-m10	wn=15u	wp=45u	*m=10
X76	AO7-0	AO7-1	AO7-2	AO7-3	AO7-4	AO7-5	AO7-6	AO7-7	AO7-8	AO8-0	AO8-1	AO8-2	AO8-3	AO8-4	AO8-5	AO8-6	AO8-7	AO8-8	INV-Array-9-m20	wn=18.75u	wp=56.25u	*m=20

x77	sender-req	200	INV	wn=7.5u	wp=22.5u
x78	200	201	INV	wn=19u	wp=57u
x79	201	202	INV-m10	wn=4.5u	wp=13.5u	*m=10
x80	202	203	INV-m10	wn=12u	wp=35u	*m=10
x81	203	204	INV-m10	wn=30u	wp=90u	*m=10
x82	204	205	INV-m50	wn=15u	wp=45u	*m=50

x83	AO8-0	AO8-1	AO8-2	AO8-3	AO8-4	AO8-5	AO8-6	AO8-7	AO8-8	Address-Port-1	Address-Port-2	Address-Port-3	Address-Port-4	Address-Port-5	Address-Port-6	Address-Port-7	Address-Port-8	Address-Port-9-Elite-Selected	205	Pad-Switch-Array-9-m20	wn=18.75u	wp=56.25u

***receiver
x84	Initialize^	receiver-req	90	90^	AND2	wn=3u	wp=9u
x85	Initialize	91	92	NOR2	wn=3u	wp=9u
x86	92	90	9022	C-element	wn=3u	wp=9u
x9022	9022	9023	INV	wn=9u	wp=27u
x9023	9023	receiver-ack	INV	wn=27u	wp=81u
x87	Initialize	inner-ack	93	NOR2	wn=3u	wp=9u
x88	93	receiver-ack	91	C-element	wn=3u	wp=9u

x89	91	91^	INV	wn=3u	wp=9u
x90	receiver-ack	91	91^	100	XNOR2	wn=3u	wp=9u
x91	receiver-done	100	Replica-Reset	9012	NOR3	wn=5u	wp=15u
x9012	9012	9013	INV	wn=15u	wp=45u
x9013	9013	101	INV-m10	wn=4.5u	wp=13.5u	*m=10
x92	101	101^	INV	wn=22u	wp=66u
x93	102	inner-ack	101	101^	Replica-Reset	Replica-Reset^	DFF-S	wn=15u	wp=45u
x94	inner-ack	102	101	101^	Replica-Reset	Replica-Reset^	DFF-R	wn=15u	wp=45u
x95	102	pre-103	101	101^	Replica-Reset	Replica-Reset^	DFF-R	wn=15u	wp=45u
x96	pre-103	104	101	101^	Replica-Reset	Replica-Reset^	DFF-R	wn=15u	wp=45u
x97	104	receiver-done	101	101^	Replica-Reset	Replica-Reset^	DFF-R	wn=15u	wp=45u

x98	Master-Slave-Select-Pin-1	Master-Slave-Select-Pin-1^	INV	wn=15u	wp=45u
x99	Address-Port-1	Address-Port-2	Address-Port-3	Address-Port-4	Address-Port-5	Address-Port-6	Address-Port-7	Address-Port-8	Address-Port-9-Elite-Selected	pre-receive-0	pre-receive-1	pre-receive-2	pre-receive-3	pre-receive-4	pre-receive-5	pre-receive-6	pre-receive-7	pre-receive-8	Master-Slave-Select-Pin-1	Master-Slave-Select-Pin-1^	TG-Array-9	wn=15u	wp=45u

x100	receiver-ack	receiver-ack^	INV	wn=3u	wp=9u
x101	pre-receive-0	pre-receive-1	pre-receive-2	pre-receive-3	pre-receive-4	pre-receive-5	pre-receive-6	pre-receive-7	pre-receive-8	receive-0	receive-1	receive-2	receive-3	receive-4	receive-5	receive-6	receive-7	receive-8	receiver-ack	receiver-ack^	DFF-Array-9	wn=15u	wp=45u

x2555	pre-103	2555	INV	wn=15u	wp=45u
x2556	2555	103	INV-m10	wn=4.5u	wp=13.5u	*m=10
x102	103	103^	INV	wn=22u	wp=66u
x103	receive-0	receive-1	receive-2	receive-3	receive-4	receive-5	receive-6	receive-7	receive-8	Received-Address2-0	Received-Address2-1	Received-Address2-2	Received-Address2-3	Received-Address2-4	Received-Address2-5	Received-Address2-6	Received-Address2-7	Received-Elite-Selected-2	103	103^	DFF-Array-9	wn=15u	wp=45u

x104	Received-Address2-0	Received-Address2-1	Received-Address2-2	Received-Address2-3	Received-Address2-4	Received-Address2-5	Received-Address2-6	Received-Address2-7	Received-Elite-Selected-2	Received-Address1-0	Received-Address1-1	Received-Address1-2	Received-Address1-3	Received-Address1-4	Received-Address1-5	Received-Address1-6	Received-Address1-7	Received-Elite-Selected-1	103	103^	DFF-Array-9	wn=15u	wp=45u

x105	receiver-req	sender-ack	Selection-Ack-Pin	Master-Slave-Select-Pin-1	MUX	wn=3u	wp=9u

x106	receiver-ack	sender-req	Selection-Req-Pin	Master-Slave-Select-Pin-1	MUX	wn=3u	wp=9u


************************************************************************************************Arrays

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

.subckt	DFF-Array-9	in1	in2	in3	in4	in5	in6	in7	in8	in9	out1	out2	out3	out4	out5	out6	out7	out8	out9	clk	clk^	wn=1u	wp=3u	le=0.18u
x1	in1	in2	in3	in4	out1	out2	out3	out4	clk	clk^	DFF-Array-4	wn='wn'	wp='wp'	le='le'
x2	in5	in6	in7	in8	out5	out6	out7	out8	clk	clk^	DFF-Array-4	wn='wn'	wp='wp'	le='le'
x3	in9	out9	clk	clk^	DFF	wn='wn'	wp='wp'	le='le'
.ends

.subckt	DFF-Array-4	in1	in2	in3	in4	out1	out2	out3	out4	clk	clk^	wn=1u	wp=3u	le=0.18u
x1	in1	out1	clk	clk^	DFF	wn='wn'	wp='wp'	le='le'
x2	in2	out2	clk	clk^	DFF	wn='wn'	wp='wp'	le='le'
x3	in3	out3	clk	clk^	DFF	wn='wn'	wp='wp'	le='le'
x4	in4	out4	clk	clk^	DFF	wn='wn'	wp='wp'	le='le'
.ends

.subckt	MUX-Array-9	in1-1	in1-2	in1-3	in1-4	in1-5	in1-6	in1-7	in1-8	in1-9	in2-1	in2-2	in2-3	in2-4	in2-5	in2-6	in2-7	in2-8	in2-9	out1	out2	out3	out4	out5	out6	out7	out8	out9	control	wn=1u	wp=3u	le=0.18u
x1	in1-1	in1-2	in1-3	in1-4	in2-1	in2-2	in2-3	in2-4	out1	out2	out3	out4	control	MUX-Array-4	wn='wn'	wp='wp'	le='le'
x2	in1-5	in1-6	in1-7	in1-8	in2-5	in2-6	in2-7	in2-8	out5	out6	out7	out8	control	MUX-Array-4	wn='wn'	wp='wp'	le='le'
x3	in1-9	in2-9	out9	control	MUX	wn='wn'	wp='wp'	le='le'
.ends

.subckt	MUX-Array-4	in1-1	in1-2	in1-3	in1-4	in2-1	in2-2	in2-3	in2-4	out1	out2	out3	out4	control	wn=1u	wp=3u	le=0.18u
x1	in1-1	in2-1	out1	control	MUX	wn='wn'	wp='wp'	le='le'
x2	in1-2	in2-2	out2	control	MUX	wn='wn'	wp='wp'	le='le'
x3	in1-3	in2-3	out3	control	MUX	wn='wn'	wp='wp'	le='le'
x4	in1-4	in2-4	out4	control	MUX	wn='wn'	wp='wp'	le='le'
.ends

.subckt	TG-Array-9	in1	in2	in3	in4	in5	in6	in7	in8	in9	out1	out2	out3	out4	out5	out6	out7	out8	out9	clk	clk^	wn=1u	wp=3u	le=0.18u
x1	in1	in2	in3	in4	out1	out2	out3	out4	clk	clk^	TG-Array-4	wn='wn'	wp='wp'	le='le'
x2	in5	in6	in7	in8	out5	out6	out7	out8	clk	clk^	TG-Array-4	wn='wn'	wp='wp'	le='le'
x3	in9	out9	clk	clk^	TG	wn='wn'	wp='wp'	le='le'
.ends

.subckt	TG-Array-4	in1	in2	in3	in4	out1	out2	out3	out4	clk	clk^	wn=1u	wp=3u	le=0.18u
x1	in1	out1	clk	clk^	TG	wn='wn'	wp='wp'	le='le'
x2	in2	out2	clk	clk^	TG	wn='wn'	wp='wp'	le='le'
x3	in3	out3	clk	clk^	TG	wn='wn'	wp='wp'	le='le'
x4	in4	out4	clk	clk^	TG	wn='wn'	wp='wp'	le='le'
.ends

.subckt	Pad-Switch-Array-9-m20	in1	in2	in3	in4	in5	in6	in7	in8	in9	out1	out2	out3	out4	out5	out6	out7	out8	out9	control	wn=1u	wp=3u	le=0.18u
x1	in1	in2	in3	in4	out1	out2	out3	out4	control	Pad-Switch-Array-4-m20	wn='wn'	wp='wp'	le='le'
x2	in5	in6	in7	in8	out5	out6	out7	out8	control	Pad-Switch-Array-4-m20	wn='wn'	wp='wp'	le='le'
x3	in9	out9	control	Pad-Switch-m20	wn='wn'	wp='wp'	le='le'
.ends

.subckt	Pad-Switch-Array-4-m20	in1	in2	in3	in4	out1	out2	out3	out4	control	wn=1u	wp=3u	le=0.18u
x1	in1	out1	control	Pad-Switch-m20	wn='wn'	wp='wp'	le='le'
x2	in2	out2	control	Pad-Switch-m20	wn='wn'	wp='wp'	le='le'
x3	in3	out3	control	Pad-Switch-m20	wn='wn'	wp='wp'	le='le'
x4	in4	out4	control	Pad-Switch-m20	wn='wn'	wp='wp'	le='le'
.ends

.subckt	INV-Array-9	in1	in2	in3	in4	in5	in6	in7	in8	in9	out1	out2	out3	out4	out5	out6	out7	out8	out9	wn=1u	wp=3u	le=0.18u
x1	in1	in2	in3	in4	out1	out2	out3	out4	INV-Array-4	wn='wn'	wp='wp'	le='le'
x2	in5	in6	in7	in8	out5	out6	out7	out8	INV-Array-4	wn='wn'	wp='wp'	le='le'
x3	in9	out9	INV	wn='wn'	wp='wp'	le='le'
.ends

.subckt	INV-Array-4	in1	in2	in3	in4	out1	out2	out3	out4	wn=1u	wp=3u	le=0.18u
x1	in1	out1	INV	wn='wn'	wp='wp'	le='le'
x2	in2	out2	INV	wn='wn'	wp='wp'	le='le'
x3	in3	out3	INV	wn='wn'	wp='wp'	le='le'
x4	in4	out4	INV	wn='wn'	wp='wp'	le='le'
.ends

.subckt	INV-Array-9-m10	in1	in2	in3	in4	in5	in6	in7	in8	in9	out1	out2	out3	out4	out5	out6	out7	out8	out9	wn=1u	wp=3u	le=0.18u
x1	in1	in2	in3	in4	out1	out2	out3	out4	INV-Array-4-m10	wn='wn'	wp='wp'	le='le'
x2	in5	in6	in7	in8	out5	out6	out7	out8	INV-Array-4-m10	wn='wn'	wp='wp'	le='le'
x3	in9	out9	INV-m10	wn='wn'	wp='wp'	le='le'
.ends

.subckt	INV-Array-4-m10	in1	in2	in3	in4	out1	out2	out3	out4	wn=1u	wp=3u	le=0.18u
x1	in1	out1	INV-m10	wn='wn'	wp='wp'	le='le'
x2	in2	out2	INV-m10	wn='wn'	wp='wp'	le='le'
x3	in3	out3	INV-m10	wn='wn'	wp='wp'	le='le'
x4	in4	out4	INV-m10	wn='wn'	wp='wp'	le='le'
.ends

.subckt	INV-Array-9-m20	in1	in2	in3	in4	in5	in6	in7	in8	in9	out1	out2	out3	out4	out5	out6	out7	out8	out9	wn=1u	wp=3u	le=0.18u
x1	in1	in2	in3	in4	out1	out2	out3	out4	INV-Array-4-m20	wn='wn'	wp='wp'	le='le'
x2	in5	in6	in7	in8	out5	out6	out7	out8	INV-Array-4-m20	wn='wn'	wp='wp'	le='le'
x3	in9	out9	INV-m20	wn='wn'	wp='wp'	le='le'
.ends

.subckt	INV-Array-4-m20	in1	in2	in3	in4	out1	out2	out3	out4	wn=1u	wp=3u	le=0.18u
x1	in1	out1	INV-m20	wn='wn'	wp='wp'	le='le'
x2	in2	out2	INV-m20	wn='wn'	wp='wp'	le='le'
x3	in3	out3	INV-m20	wn='wn'	wp='wp'	le='le'
x4	in4	out4	INV-m20	wn='wn'	wp='wp'	le='le'
.ends
************************************************************************************************Include
.include	'./Comparator.inc'


************************************************************************************************Components

***2-Input XNOR (Pass Transistor Logic)
.subckt	XNOR2	in1	in2	in2^	out	wn=1u	wp=3u	le=0.18u
m1	out	in2^	in1	vdd	mp18	w=wp	l=le
m2	in1	in2	out	0	mn18	w=wn	l=le
m3	out	in1	in2^	vdd	mp18	w=wp	l=le
m4	out	in1	in2	0	mn18	w=wn	l=le
.ends

***Multiplexer***
.subckt	MUX	in1	in2	out	control	wn=1u	wp=3u	le=0.18u
x1	in1	out	control	control^	TG	wn='wn'	wp='wp'	le='le'
x2	in2	out	control^	control	TG	wn='wn'	wp='wp'	le='le'
x3	control	control^	INV	wn='wn'	wp='wp'	le='le'
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

***3-Input NOR***
.subckt	NOR3	in1	in2	in3	out	wn=1u	wp=3u	le=0.18u
m1	b	in3	vdd	vdd	mp18	w='3*wp'	l=le
m2	a	in2	b	vdd	mp18	w='3*wp'	l=le
m3	out	in1	a	vdd	mp18	w='3*wp'	l=le
m4	out	in1	0	0	mn18	w=wn	l=le
m5	out	in2	0	0	mn18	w=wn	l=le
m6	out	in3	0	0	mn18	w=wn	l=le
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

***2-Input OR***
.subckt	OR2	in1	in2	out	out^	wn=1u	wp=3u	le=0.18u
x1	in1	in2	out^	NOR2	wn='wn'	wp='wp'	le='le'
x2	out^	out	INV	wn='wn'	wp='wp'	le='le'
.ends

***2-Input NOR***
.subckt	NOR2	in1	in2	out	wn=1u	wp=3u	le=0.18u
m1	a	in2	vdd	vdd	mp18	w='2*wp'	l=le
m2	out	in1	a	vdd	mp18	w='2*wp'	l=le
m3	out	in1	0	0	mn18	w=wn	l=le
m4	out	in2	0	0	mn18	w=wn	l=le
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

***Half Register
.subckt	Half-Register	in	out	clk	clk^	wn=1u	wp=3u	le=0.18u
x1	in	a	clk	clk^	TG	wn='wn'	wp='wp'	le='le'
x2	a	b	INV	wn='wn'	wp='wp'	le='le'
x3	b	out	INV	wn='wn'	wp='wp'	le='le'
.ends

***Full Register
.subckt	Register	in	out	clk	clk^	wn=1u	wp=3u	le=0.18u
x1	in	a	clk^	clk	TG	wn='wn'	wp='wp'	le='le'
x2	a	b	INV	wn='wn'	wp='wp'	le='le'
x3	b	c	clk	clk^	TG	wn='wn'	wp='wp'	le='le'
x4	c	out	INV	wn='wn'	wp='wp'	le='le'
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

***2-Bit Decoder without the fourth output
.subckt	Decoder2Bit-3output	in0	in1	out0	out1	out2	wn=1u	wp=3u	le=0.18u	*in0 & out0 are lsb
x1	in0	in0^	INV	wn='wn'	wp='wp'	le='le'
x2	in1	in1^	INV	wn='wn'	wp='wp'	le='le'

x3	in0	in1	out0	NOR2	wn='wn'	wp='wp'	le='le'
x4	in0^	in1	out1	NOR2	wn='wn'	wp='wp'	le='le'
x5	in0	in1^	out2	NOR2	wn='wn'	wp='wp'	le='le'
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

.ends Selection