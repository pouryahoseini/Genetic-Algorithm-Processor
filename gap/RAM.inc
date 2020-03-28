*RAM

.subckt	RAM	cs	write	chromosomeresolution	fitnessresolution	add0	add1	add2	add3	add4	add5	add6	add7	cout0	cout1	cout2	cout3	cout4	cout5	cout6	cout7	cout8	cout9	cout10	cout11	cout12	cout13	cout14	cout15	cout16	cout17	cout18	cout19	cout20	cout21	cout22	cout23	cout24	cout25	cout26	cout27	cout28	cout29	cout30	cout31	fout0	fout1	fout2	fout3	fout4	fout5	fout6	fout7	fout8	fout9	fout10	fout11	fout12	fout13	fout14	fout15	fout16	fout17	fout18	fout19	fout20	fout21	fout22	fout23	fout24	fout25	fout26	fout27	fout28	fout29	fout30	fout31	cdata0	cdata1	cdata2	cdata3	cdata4	cdata5	cdata6	cdata7	cdata8	cdata9	cdata10	cdata11	cdata12	cdata13	cdata14	cdata15	cdata16	cdata17	cdata18	cdata19	cdata20	cdata21	cdata22	cdata23	cdata24	cdata25	cdata26	cdata27	cdata28	cdata29	cdata30	cdata31	fdata0	fdata1	fdata2	fdata3	fdata4	fdata5	fdata6	fdata7	fdata8	fdata9	fdata10	fdata11	fdata12	fdata13	fdata14	fdata15	fdata16	fdata17	fdata18	fdata19	fdata20	fdata21	fdata22	fdata23	fdata24	fdata25	fdata26	fdata27	fdata28	fdata29	fdata30	fdata31


***Main Circuit

x70	cs	chromosomeresolution	cs32chromosome^	NAND2	wn=5u	wp=15u

x71	cs32chromosome^	cs32chromosome	INV	wn=5u	wp=15u

x72	cs	fitnessresolution	cs32fitness^	NAND2	wn=5u	wp=15u

x73	cs32fitness^	cs32fitness	INV	wn=5u	wp=15u


x80	cs	cs^	INV	wn=5u	wp=15u

x81	cs^	write	senseampsel	NOR	wn=5u	wp=15u

x82	cs32chromosome^	write	senseampsel32chromosome	NOR	wn=5u	wp=15u

x83	cs32fitness^	write	senseampsel32fitness	NOR	wn=5u	wp=15u


x90	add7	add6^	128population	NOR	wn=5u	wp=15u

x91	add7	add6	add5^	64population	NOR3	wn=5u	wp=15u

x92	add7	add6	add5	32population	NOR3	wn=5u	wp=15u

x93	128population	128population^	INV	wn=5u	wp=15u

x94	64population	64population^	INV	wn=5u	wp=15u

x95	32population	32population^	INV	wn=5u	wp=15u

x100	dec0	dec1	dec2	dec3	dec4	dec5	dec6	dec7	dec8	dec9	dec10	dec11	dec12	dec13	dec14	dec15	dec16	dec17	dec18	dec19	dec20	dec21	dec22	dec23	dec24	dec25	dec26	dec27	dec28	dec29	dec30	dec31	bcz0	bcz0^	bcz1	bcz1^	bcz2	bcz2^	bcz3	bcz3^	bcz4	bcz4^	bcz5	bcz5^	bcz6	bcz6^	bcz7	bcz7^	bcz8	bcz8^	bcz9	bcz9^	bcz10	bcz10^	bcz11	bcz11^	bcz12	bcz12^	bcz13	bcz13^	bcz14	bcz14^	bcz15	bcz15^	bcz16	bcz16^	bcz17	bcz17^	bcz18	bcz18^	bcz19	bcz19^	bcz20	bcz20^	bcz21	bcz21^	bcz22	bcz22^	bcz23	bcz23^	bcz24	bcz24^	bcz25	bcz25^	bcz26	bcz26^	bcz27	bcz27^	bcz28	bcz28^	bcz29	bcz29^	bcz30	bcz30^	bcz31	bcz31^	Block32x32

x101	dec0	dec1	dec2	dec3	dec4	dec5	dec6	dec7	dec8	dec9	dec10	dec11	dec12	dec13	dec14	dec15	dec16	dec17	dec18	dec19	dec20	dec21	dec22	dec23	dec24	dec25	dec26	dec27	dec28	dec29	dec30	dec31	bfz0	bfz0^	bfz1	bfz1^	bfz2	bfz2^	bfz3	bfz3^	bfz4	bfz4^	bfz5	bfz5^	bfz6	bfz6^	bfz7	bfz7^	bfz8	bfz8^	bfz9	bfz9^	bfz10	bfz10^	bfz11	bfz11^	bfz12	bfz12^	bfz13	bfz13^	bfz14	bfz14^	bfz15	bfz15^	bfz16	bfz16^	bfz17	bfz17^	bfz18	bfz18^	bfz19	bfz19^	bfz20	bfz20^	bfz21	bfz21^	bfz22	bfz22^	bfz23	bfz23^	bfz24	bfz24^	bfz25	bfz25^	bfz26	bfz26^	bfz27	bfz27^	bfz28	bfz28^	bfz29	bfz29^	bfz30	bfz30^	bfz31	bfz31^	Block32x32

x102	bcz0	bcz0^	bcz1	bcz1^	bcz2	bcz2^	bcz3	bcz3^	bcz4	bcz4^	bcz5	bcz5^	bcz6	bcz6^	bcz7	bcz7^	bcz8	bcz8^	bcz9	bcz9^	bcz10	bcz10^	bcz11	bcz11^	bcz12	bcz12^	bcz13	bcz13^	bcz14	bcz14^	bcz15	bcz15^	bcz16	bcz16^	bcz17	bcz17^	bcz18	bcz18^	bcz19	bcz19^	bcz20	bcz20^	bcz21	bcz21^	bcz22	bcz22^	bcz23	bcz23^	bcz24	bcz24^	bcz25	bcz25^	bcz26	bcz26^	bcz27	bcz27^	bcz28	bcz28^	bcz29	bcz29^	bcz30	bcz30^	bcz31	bcz31^	bc0	bc0^	bc1	bc1^	bc2	bc2^	bc3	bc3^	bc4	bc4^	bc5	bc5^	bc6	bc6^	bc7	bc7^	bc8	bc8^	bc9	bc9^	bc10	bc10^	bc11	bc11^	bc12	bc12^	bc13	bc13^	bc14	bc14^	bc15	bc15^	bc16	bc16^	bc17	bc17^	bc18	bc18^	bc19	bc19^	bc20	bc20^	bc21	bc21^	bc22	bc22^	bc23	bc23^	bc24	bc24^	bc25	bc25^	bc26	bc26^	bc27	bc27^	bc28	bc28^	bc29	bc29^	bc30	bc30^	bc31	bc31^	32population	32population^	TG64

x103	bfz0	bfz0^	bfz1	bfz1^	bfz2	bfz2^	bfz3	bfz3^	bfz4	bfz4^	bfz5	bfz5^	bfz6	bfz6^	bfz7	bfz7^	bfz8	bfz8^	bfz9	bfz9^	bfz10	bfz10^	bfz11	bfz11^	bfz12	bfz12^	bfz13	bfz13^	bfz14	bfz14^	bfz15	bfz15^	bfz16	bfz16^	bfz17	bfz17^	bfz18	bfz18^	bfz19	bfz19^	bfz20	bfz20^	bfz21	bfz21^	bfz22	bfz22^	bfz23	bfz23^	bfz24	bfz24^	bfz25	bfz25^	bfz26	bfz26^	bfz27	bfz27^	bfz28	bfz28^	bfz29	bfz29^	bfz30	bfz30^	bfz31	bfz31^	bf0	bf0^	bf1	bf1^	bf2	bf2^	bf3	bf3^	bf4	bf4^	bf5	bf5^	bf6	bf6^	bf7	bf7^	bf8	bf8^	bf9	bf9^	bf10	bf10^	bf11	bf11^	bf12	bf12^	bf13	bf13^	bf14	bf14^	bf15	bf15^	bf16	bf16^	bf17	bf17^	bf18	bf18^	bf19	bf19^	bf20	bf20^	bf21	bf21^	bf22	bf22^	bf23	bf23^	bf24	bf24^	bf25	bf25^	bf26	bf26^	bf27	bf27^	bf28	bf28^	bf29	bf29^	bf30	bf30^	bf31	bf31^	32population	32population^	TG64

x104	dec32	dec33	dec34	dec35	dec36	dec37	dec38	dec39	dec40	dec41	dec42	dec43	dec44	dec45	dec46	dec47	dec48	dec49	dec50	dec51	dec52	dec53	dec54	dec55	dec56	dec57	dec58	dec59	dec60	dec61	dec62	dec63	bca0	bca0^	bca1	bca1^	bca2	bca2^	bca3	bca3^	bca4	bca4^	bca5	bca5^	bca6	bca6^	bca7	bca7^	bca8	bca8^	bca9	bca9^	bca10	bca10^	bca11	bca11^	bca12	bca12^	bca13	bca13^	bca14	bca14^	bca15	bca15^	bca16	bca16^	bca17	bca17^	bca18	bca18^	bca19	bca19^	bca20	bca20^	bca21	bca21^	bca22	bca22^	bca23	bca23^	bca24	bca24^	bca25	bca25^	bca26	bca26^	bca27	bca27^	bca28	bca28^	bca29	bca29^	bca30	bca30^	bca31	bca31^	Block32x32

x105	dec32	dec33	dec34	dec35	dec36	dec37	dec38	dec39	dec40	dec41	dec42	dec43	dec44	dec45	dec46	dec47	dec48	dec49	dec50	dec51	dec52	dec53	dec54	dec55	dec56	dec57	dec58	dec59	dec60	dec61	dec62	dec63	bfa0	bfa0^	bfa1	bfa1^	bfa2	bfa2^	bfa3	bfa3^	bfa4	bfa4^	bfa5	bfa5^	bfa6	bfa6^	bfa7	bfa7^	bfa8	bfa8^	bfa9	bfa9^	bfa10	bfa10^	bfa11	bfa11^	bfa12	bfa12^	bfa13	bfa13^	bfa14	bfa14^	bfa15	bfa15^	bfa16	bfa16^	bfa17	bfa17^	bfa18	bfa18^	bfa19	bfa19^	bfa20	bfa20^	bfa21	bfa21^	bfa22	bfa22^	bfa23	bfa23^	bfa24	bfa24^	bfa25	bfa25^	bfa26	bfa26^	bfa27	bfa27^	bfa28	bfa28^	bfa29	bfa29^	bfa30	bfa30^	bfa31	bfa31^	Block32x32

x106	bca0	bca0^	bca1	bca1^	bca2	bca2^	bca3	bca3^	bca4	bca4^	bca5	bca5^	bca6	bca6^	bca7	bca7^	bca8	bca8^	bca9	bca9^	bca10	bca10^	bca11	bca11^	bca12	bca12^	bca13	bca13^	bca14	bca14^	bca15	bca15^	bca16	bca16^	bca17	bca17^	bca18	bca18^	bca19	bca19^	bca20	bca20^	bca21	bca21^	bca22	bca22^	bca23	bca23^	bca24	bca24^	bca25	bca25^	bca26	bca26^	bca27	bca27^	bca28	bca28^	bca29	bca29^	bca30	bca30^	bca31	bca31^	bc0	bc0^	bc1	bc1^	bc2	bc2^	bc3	bc3^	bc4	bc4^	bc5	bc5^	bc6	bc6^	bc7	bc7^	bc8	bc8^	bc9	bc9^	bc10	bc10^	bc11	bc11^	bc12	bc12^	bc13	bc13^	bc14	bc14^	bc15	bc15^	bc16	bc16^	bc17	bc17^	bc18	bc18^	bc19	bc19^	bc20	bc20^	bc21	bc21^	bc22	bc22^	bc23	bc23^	bc24	bc24^	bc25	bc25^	bc26	bc26^	bc27	bc27^	bc28	bc28^	bc29	bc29^	bc30	bc30^	bc31	bc31^	64population	64population^	TG64

x107	bfa0	bfa0^	bfa1	bfa1^	bfa2	bfa2^	bfa3	bfa3^	bfa4	bfa4^	bfa5	bfa5^	bfa6	bfa6^	bfa7	bfa7^	bfa8	bfa8^	bfa9	bfa9^	bfa10	bfa10^	bfa11	bfa11^	bfa12	bfa12^	bfa13	bfa13^	bfa14	bfa14^	bfa15	bfa15^	bfa16	bfa16^	bfa17	bfa17^	bfa18	bfa18^	bfa19	bfa19^	bfa20	bfa20^	bfa21	bfa21^	bfa22	bfa22^	bfa23	bfa23^	bfa24	bfa24^	bfa25	bfa25^	bfa26	bfa26^	bfa27	bfa27^	bfa28	bfa28^	bfa29	bfa29^	bfa30	bfa30^	bfa31	bfa31^	bf0	bf0^	bf1	bf1^	bf2	bf2^	bf3	bf3^	bf4	bf4^	bf5	bf5^	bf6	bf6^	bf7	bf7^	bf8	bf8^	bf9	bf9^	bf10	bf10^	bf11	bf11^	bf12	bf12^	bf13	bf13^	bf14	bf14^	bf15	bf15^	bf16	bf16^	bf17	bf17^	bf18	bf18^	bf19	bf19^	bf20	bf20^	bf21	bf21^	bf22	bf22^	bf23	bf23^	bf24	bf24^	bf25	bf25^	bf26	bf26^	bf27	bf27^	bf28	bf28^	bf29	bf29^	bf30	bf30^	bf31	bf31^	64population	64population^	TG64

x108	dec64	dec65	dec66	dec67	dec68	dec69	dec70	dec71	dec72	dec73	dec74	dec75	dec76	dec77	dec78	dec79	dec80	dec81	dec82	dec83	dec84	dec85	dec86	dec87	dec88	dec89	dec90	dec91	dec92	dec93	dec94	dec95	dec96	dec97	dec98	dec99	dec100	dec101	dec102	dec103	dec104	dec105	dec106	dec107	dec108	dec109	dec110	dec111	dec112	dec113	dec114	dec115	dec116	dec117	dec118	dec119	dec120	dec121	dec122	dec123	dec124	dec125	dec126	dec127	bcb0	bcb0^	bcb1	bcb1^	bcb2	bcb2^	bcb3	bcb3^	bcb4	bcb4^	bcb5	bcb5^	bcb6	bcb6^	bcb7	bcb7^	bcb8	bcb8^	bcb9	bcb9^	bcb10	bcb10^	bcb11	bcb11^	bcb12	bcb12^	bcb13	bcb13^	bcb14	bcb14^	bcb15	bcb15^	bcb16	bcb16^	bcb17	bcb17^	bcb18	bcb18^	bcb19	bcb19^	bcb20	bcb20^	bcb21	bcb21^	bcb22	bcb22^	bcb23	bcb23^	bcb24	bcb24^	bcb25	bcb25^	bcb26	bcb26^	bcb27	bcb27^	bcb28	bcb28^	bcb29	bcb29^	bcb30	bcb30^	bcb31	bcb31^	Block64x32

x109	dec64	dec65	dec66	dec67	dec68	dec69	dec70	dec71	dec72	dec73	dec74	dec75	dec76	dec77	dec78	dec79	dec80	dec81	dec82	dec83	dec84	dec85	dec86	dec87	dec88	dec89	dec90	dec91	dec92	dec93	dec94	dec95	dec96	dec97	dec98	dec99	dec100	dec101	dec102	dec103	dec104	dec105	dec106	dec107	dec108	dec109	dec110	dec111	dec112	dec113	dec114	dec115	dec116	dec117	dec118	dec119	dec120	dec121	dec122	dec123	dec124	dec125	dec126	dec127	bfb0	bfb0^	bfb1	bfb1^	bfb2	bfb2^	bfb3	bfb3^	bfb4	bfb4^	bfb5	bfb5^	bfb6	bfb6^	bfb7	bfb7^	bfb8	bfb8^	bfb9	bfb9^	bfb10	bfb10^	bfb11	bfb11^	bfb12	bfb12^	bfb13	bfb13^	bfb14	bfb14^	bfb15	bfb15^	bfb16	bfb16^	bfb17	bfb17^	bfb18	bfb18^	bfb19	bfb19^	bfb20	bfb20^	bfb21	bfb21^	bfb22	bfb22^	bfb23	bfb23^	bfb24	bfb24^	bfb25	bfb25^	bfb26	bfb26^	bfb27	bfb27^	bfb28	bfb28^	bfb29	bfb29^	bfb30	bfb30^	bfb31	bfb31^	Block64x32

x110	bcb0	bcb0^	bcb1	bcb1^	bcb2	bcb2^	bcb3	bcb3^	bcb4	bcb4^	bcb5	bcb5^	bcb6	bcb6^	bcb7	bcb7^	bcb8	bcb8^	bcb9	bcb9^	bcb10	bcb10^	bcb11	bcb11^	bcb12	bcb12^	bcb13	bcb13^	bcb14	bcb14^	bcb15	bcb15^	bcb16	bcb16^	bcb17	bcb17^	bcb18	bcb18^	bcb19	bcb19^	bcb20	bcb20^	bcb21	bcb21^	bcb22	bcb22^	bcb23	bcb23^	bcb24	bcb24^	bcb25	bcb25^	bcb26	bcb26^	bcb27	bcb27^	bcb28	bcb28^	bcb29	bcb29^	bcb30	bcb30^	bcb31	bcb31^	bc0	bc0^	bc1	bc1^	bc2	bc2^	bc3	bc3^	bc4	bc4^	bc5	bc5^	bc6	bc6^	bc7	bc7^	bc8	bc8^	bc9	bc9^	bc10	bc10^	bc11	bc11^	bc12	bc12^	bc13	bc13^	bc14	bc14^	bc15	bc15^	bc16	bc16^	bc17	bc17^	bc18	bc18^	bc19	bc19^	bc20	bc20^	bc21	bc21^	bc22	bc22^	bc23	bc23^	bc24	bc24^	bc25	bc25^	bc26	bc26^	bc27	bc27^	bc28	bc28^	bc29	bc29^	bc30	bc30^	bc31	bc31^	128population	128population^	TG64

x111	bfb0	bfb0^	bfb1	bfb1^	bfb2	bfb2^	bfb3	bfb3^	bfb4	bfb4^	bfb5	bfb5^	bfb6	bfb6^	bfb7	bfb7^	bfb8	bfb8^	bfb9	bfb9^	bfb10	bfb10^	bfb11	bfb11^	bfb12	bfb12^	bfb13	bfb13^	bfb14	bfb14^	bfb15	bfb15^	bfb16	bfb16^	bfb17	bfb17^	bfb18	bfb18^	bfb19	bfb19^	bfb20	bfb20^	bfb21	bfb21^	bfb22	bfb22^	bfb23	bfb23^	bfb24	bfb24^	bfb25	bfb25^	bfb26	bfb26^	bfb27	bfb27^	bfb28	bfb28^	bfb29	bfb29^	bfb30	bfb30^	bfb31	bfb31^	bf0	bf0^	bf1	bf1^	bf2	bf2^	bf3	bf3^	bf4	bf4^	bf5	bf5^	bf6	bf6^	bf7	bf7^	bf8	bf8^	bf9	bf9^	bf10	bf10^	bf11	bf11^	bf12	bf12^	bf13	bf13^	bf14	bf14^	bf15	bf15^	bf16	bf16^	bf17	bf17^	bf18	bf18^	bf19	bf19^	bf20	bf20^	bf21	bf21^	bf22	bf22^	bf23	bf23^	bf24	bf24^	bf25	bf25^	bf26	bf26^	bf27	bf27^	bf28	bf28^	bf29	bf29^	bf30	bf30^	bf31	bf31^	128population	128population^	TG64

x112	dec128	dec129	dec130	dec131	dec132	dec133	dec134	dec135	dec136	dec137	dec138	dec139	dec140	dec141	dec142	dec143	dec144	dec145	dec146	dec147	dec148	dec149	dec150	dec151	dec152	dec153	dec154	dec155	dec156	dec157	dec158	dec159	dec160	dec161	dec162	dec163	dec164	dec165	dec166	dec167	dec168	dec169	dec170	dec171	dec172	dec173	dec174	dec175	dec176	dec177	dec178	dec179	dec180	dec181	dec182	dec183	dec184	dec185	dec186	dec187	dec188	dec189	dec190	dec191	dec192	dec193	dec194	dec195	dec196	dec197	dec198	dec199	dec200	dec201	dec202	dec203	dec204	dec205	dec206	dec207	dec208	dec209	dec210	dec211	dec212	dec213	dec214	dec215	dec216	dec217	dec218	dec219	dec220	dec221	dec222	dec223	dec224	dec225	dec226	dec227	dec228	dec229	dec230	dec231	dec232	dec233	dec234	dec235	dec236	dec237	dec238	dec239	dec240	dec241	dec242	dec243	dec244	dec245	dec246	dec247	dec248	dec249	dec250	dec251	dec252	dec253	dec254	dec255	bcc0	bcc0^	bcc1	bcc1^	bcc2	bcc2^	bcc3	bcc3^	bcc4	bcc4^	bcc5	bcc5^	bcc6	bcc6^	bcc7	bcc7^	bcc8	bcc8^	bcc9	bcc9^	bcc10	bcc10^	bcc11	bcc11^	bcc12	bcc12^	bcc13	bcc13^	bcc14	bcc14^	bcc15	bcc15^	bcc16	bcc16^	bcc17	bcc17^	bcc18	bcc18^	bcc19	bcc19^	bcc20	bcc20^	bcc21	bcc21^	bcc22	bcc22^	bcc23	bcc23^	bcc24	bcc24^	bcc25	bcc25^	bcc26	bcc26^	bcc27	bcc27^	bcc28	bcc28^	bcc29	bcc29^	bcc30	bcc30^	bcc31	bcc31^	Block128x32

x113	dec128	dec129	dec130	dec131	dec132	dec133	dec134	dec135	dec136	dec137	dec138	dec139	dec140	dec141	dec142	dec143	dec144	dec145	dec146	dec147	dec148	dec149	dec150	dec151	dec152	dec153	dec154	dec155	dec156	dec157	dec158	dec159	dec160	dec161	dec162	dec163	dec164	dec165	dec166	dec167	dec168	dec169	dec170	dec171	dec172	dec173	dec174	dec175	dec176	dec177	dec178	dec179	dec180	dec181	dec182	dec183	dec184	dec185	dec186	dec187	dec188	dec189	dec190	dec191	dec192	dec193	dec194	dec195	dec196	dec197	dec198	dec199	dec200	dec201	dec202	dec203	dec204	dec205	dec206	dec207	dec208	dec209	dec210	dec211	dec212	dec213	dec214	dec215	dec216	dec217	dec218	dec219	dec220	dec221	dec222	dec223	dec224	dec225	dec226	dec227	dec228	dec229	dec230	dec231	dec232	dec233	dec234	dec235	dec236	dec237	dec238	dec239	dec240	dec241	dec242	dec243	dec244	dec245	dec246	dec247	dec248	dec249	dec250	dec251	dec252	dec253	dec254	dec255	bfc0	bfc0^	bfc1	bfc1^	bfc2	bfc2^	bfc3	bfc3^	bfc4	bfc4^	bfc5	bfc5^	bfc6	bfc6^	bfc7	bfc7^	bfc8	bfc8^	bfc9	bfc9^	bfc10	bfc10^	bfc11	bfc11^	bfc12	bfc12^	bfc13	bfc13^	bfc14	bfc14^	bfc15	bfc15^	bfc16	bfc16^	bfc17	bfc17^	bfc18	bfc18^	bfc19	bfc19^	bfc20	bfc20^	bfc21	bfc21^	bfc22	bfc22^	bfc23	bfc23^	bfc24	bfc24^	bfc25	bfc25^	bfc26	bfc26^	bfc27	bfc27^	bfc28	bfc28^	bfc29	bfc29^	bfc30	bfc30^	bfc31	bfc31^	Block128x32

x114	bcc0	bcc0^	bcc1	bcc1^	bcc2	bcc2^	bcc3	bcc3^	bcc4	bcc4^	bcc5	bcc5^	bcc6	bcc6^	bcc7	bcc7^	bcc8	bcc8^	bcc9	bcc9^	bcc10	bcc10^	bcc11	bcc11^	bcc12	bcc12^	bcc13	bcc13^	bcc14	bcc14^	bcc15	bcc15^	bcc16	bcc16^	bcc17	bcc17^	bcc18	bcc18^	bcc19	bcc19^	bcc20	bcc20^	bcc21	bcc21^	bcc22	bcc22^	bcc23	bcc23^	bcc24	bcc24^	bcc25	bcc25^	bcc26	bcc26^	bcc27	bcc27^	bcc28	bcc28^	bcc29	bcc29^	bcc30	bcc30^	bcc31	bcc31^	bc0	bc0^	bc1	bc1^	bc2	bc2^	bc3	bc3^	bc4	bc4^	bc5	bc5^	bc6	bc6^	bc7	bc7^	bc8	bc8^	bc9	bc9^	bc10	bc10^	bc11	bc11^	bc12	bc12^	bc13	bc13^	bc14	bc14^	bc15	bc15^	bc16	bc16^	bc17	bc17^	bc18	bc18^	bc19	bc19^	bc20	bc20^	bc21	bc21^	bc22	bc22^	bc23	bc23^	bc24	bc24^	bc25	bc25^	bc26	bc26^	bc27	bc27^	bc28	bc28^	bc29	bc29^	bc30	bc30^	bc31	bc31^	add7	add7^	TG64

x115	bfc0	bfc0^	bfc1	bfc1^	bfc2	bfc2^	bfc3	bfc3^	bfc4	bfc4^	bfc5	bfc5^	bfc6	bfc6^	bfc7	bfc7^	bfc8	bfc8^	bfc9	bfc9^	bfc10	bfc10^	bfc11	bfc11^	bfc12	bfc12^	bfc13	bfc13^	bfc14	bfc14^	bfc15	bfc15^	bfc16	bfc16^	bfc17	bfc17^	bfc18	bfc18^	bfc19	bfc19^	bfc20	bfc20^	bfc21	bfc21^	bfc22	bfc22^	bfc23	bfc23^	bfc24	bfc24^	bfc25	bfc25^	bfc26	bfc26^	bfc27	bfc27^	bfc28	bfc28^	bfc29	bfc29^	bfc30	bfc30^	bfc31	bfc31^	bf0	bf0^	bf1	bf1^	bf2	bf2^	bf3	bf3^	bf4	bf4^	bf5	bf5^	bf6	bf6^	bf7	bf7^	bf8	bf8^	bf9	bf9^	bf10	bf10^	bf11	bf11^	bf12	bf12^	bf13	bf13^	bf14	bf14^	bf15	bf15^	bf16	bf16^	bf17	bf17^	bf18	bf18^	bf19	bf19^	bf20	bf20^	bf21	bf21^	bf22	bf22^	bf23	bf23^	bf24	bf24^	bf25	bf25^	bf26	bf26^	bf27	bf27^	bf28	bf28^	bf29	bf29^	bf30	bf30^	bf31	bf31^	add7	add7^	TG64

x116	cs	bcz0	bcz0^	bcz1	bcz1^	bcz2	bcz2^	bcz3	bcz3^	bcz4	bcz4^	bcz5	bcz5^	bcz6	bcz6^	bcz7	bcz7^	bcz8	bcz8^	bcz9	bcz9^	bcz10	bcz10^	bcz11	bcz11^	bcz12	bcz12^	bcz13	bcz13^	bcz14	bcz14^	bcz15	bcz15^	Pr16

x117	cs32chromosome	bcz16	bcz16^	bcz17	bcz17^	bcz18	bcz18^	bcz19	bcz19^	bcz20	bcz20^	bcz21	bcz21^	bcz22	bcz22^	bcz23	bcz23^	bcz24	bcz24^	bcz25	bcz25^	bcz26	bcz26^	bcz27	bcz27^	bcz28	bcz28^	bcz29	bcz29^	bcz30	bcz30^	bcz31	bcz31^	Pr16

x118	cs	bfz0	bfz0^	bfz1	bfz1^	bfz2	bfz2^	bfz3	bfz3^	bfz4	bfz4^	bfz5	bfz5^	bfz6	bfz6^	bfz7	bfz7^	bfz8	bfz8^	bfz9	bfz9^	bfz10	bfz10^	bfz11	bfz11^	bfz12	bfz12^	bfz13	bfz13^	bfz14	bfz14^	bfz15	bfz15^	Pr16

x119	cs32fitness	bfz16	bfz16^	bfz17	bfz17^	bfz18	bfz18^	bfz19	bfz19^	bfz20	bfz20^	bfz21	bfz21^	bfz22	bfz22^	bfz23	bfz23^	bfz24	bfz24^	bfz25	bfz25^	bfz26	bfz26^	bfz27	bfz27^	bfz28	bfz28^	bfz29	bfz29^	bfz30	bfz30^	bfz31	bfz31^	Pr16

x120	cs	bca0	bca0^	bca1	bca1^	bca2	bca2^	bca3	bca3^	bca4	bca4^	bca5	bca5^	bca6	bca6^	bca7	bca7^	bca8	bca8^	bca9	bca9^	bca10	bca10^	bca11	bca11^	bca12	bca12^	bca13	bca13^	bca14	bca14^	bca15	bca15^	Pr16

x121	cs32chromosome	bca16	bca16^	bca17	bca17^	bca18	bca18^	bca19	bca19^	bca20	bca20^	bca21	bca21^	bca22	bca22^	bca23	bca23^	bca24	bca24^	bca25	bca25^	bca26	bca26^	bca27	bca27^	bca28	bca28^	bca29	bca29^	bca30	bca30^	bca31	bca31^	Pr16

x122	cs	bfa0	bfa0^	bfa1	bfa1^	bfa2	bfa2^	bfa3	bfa3^	bfa4	bfa4^	bfa5	bfa5^	bfa6	bfa6^	bfa7	bfa7^	bfa8	bfa8^	bfa9	bfa9^	bfa10	bfa10^	bfa11	bfa11^	bfa12	bfa12^	bfa13	bfa13^	bfa14	bfa14^	bfa15	bfa15^	Pr16

x123	cs32fitness	bfa16	bfa16^	bfa17	bfa17^	bfa18	bfa18^	bfa19	bfa19^	bfa20	bfa20^	bfa21	bfa21^	bfa22	bfa22^	bfa23	bfa23^	bfa24	bfa24^	bfa25	bfa25^	bfa26	bfa26^	bfa27	bfa27^	bfa28	bfa28^	bfa29	bfa29^	bfa30	bfa30^	bfa31	bfa31^	Pr16

x124	cs	bcb0	bcb0^	bcb1	bcb1^	bcb2	bcb2^	bcb3	bcb3^	bcb4	bcb4^	bcb5	bcb5^	bcb6	bcb6^	bcb7	bcb7^	bcb8	bcb8^	bcb9	bcb9^	bcb10	bcb10^	bcb11	bcb11^	bcb12	bcb12^	bcb13	bcb13^	bcb14	bcb14^	bcb15	bcb15^	Pr16

x125	cs32chromosome	bcb16	bcb16^	bcb17	bcb17^	bcb18	bcb18^	bcb19	bcb19^	bcb20	bcb20^	bcb21	bcb21^	bcb22	bcb22^	bcb23	bcb23^	bcb24	bcb24^	bcb25	bcb25^	bcb26	bcb26^	bcb27	bcb27^	bcb28	bcb28^	bcb29	bcb29^	bcb30	bcb30^	bcb31	bcb31^	Pr16

x126	cs	bfb0	bfb0^	bfb1	bfb1^	bfb2	bfb2^	bfb3	bfb3^	bfb4	bfb4^	bfb5	bfb5^	bfb6	bfb6^	bfb7	bfb7^	bfb8	bfb8^	bfb9	bfb9^	bfb10	bfb10^	bfb11	bfb11^	bfb12	bfb12^	bfb13	bfb13^	bfb14	bfb14^	bfb15	bfb15^	Pr16

x127	cs32fitness	bfb16	bfb16^	bfb17	bfb17^	bfb18	bfb18^	bfb19	bfb19^	bfb20	bfb20^	bfb21	bfb21^	bfb22	bfb22^	bfb23	bfb23^	bfb24	bfb24^	bfb25	bfb25^	bfb26	bfb26^	bfb27	bfb27^	bfb28	bfb28^	bfb29	bfb29^	bfb30	bfb30^	bfb31	bfb31^	Pr16

x128	cs	bcc0	bcc0^	bcc1	bcc1^	bcc2	bcc2^	bcc3	bcc3^	bcc4	bcc4^	bcc5	bcc5^	bcc6	bcc6^	bcc7	bcc7^	bcc8	bcc8^	bcc9	bcc9^	bcc10	bcc10^	bcc11	bcc11^	bcc12	bcc12^	bcc13	bcc13^	bcc14	bcc14^	bcc15	bcc15^	Pr16

x129	cs32chromosome	bcc16	bcc16^	bcc17	bcc17^	bcc18	bcc18^	bcc19	bcc19^	bcc20	bcc20^	bcc21	bcc21^	bcc22	bcc22^	bcc23	bcc23^	bcc24	bcc24^	bcc25	bcc25^	bcc26	bcc26^	bcc27	bcc27^	bcc28	bcc28^	bcc29	bcc29^	bcc30	bcc30^	bcc31	bcc31^	Pr16

x130	cs	bfc0	bfc0^	bfc1	bfc1^	bfc2	bfc2^	bfc3	bfc3^	bfc4	bfc4^	bfc5	bfc5^	bfc6	bfc6^	bfc7	bfc7^	bfc8	bfc8^	bfc9	bfc9^	bfc10	bfc10^	bfc11	bfc11^	bfc12	bfc12^	bfc13	bfc13^	bfc14	bfc14^	bfc15	bfc15^	Pr16

x131	cs32fitness	bfc16	bfc16^	bfc17	bfc17^	bfc18	bfc18^	bfc19	bfc19^	bfc20	bfc20^	bfc21	bfc21^	bfc22	bfc22^	bfc23	bfc23^	bfc24	bfc24^	bfc25	bfc25^	bfc26	bfc26^	bfc27	bfc27^	bfc28	bfc28^	bfc29	bfc29^	bfc30	bfc30^	bfc31	bfc31^	Pr16


x134	write	cdata0	cdata1	cdata2	cdata3	cdata4	cdata5	cdata6	cdata7	cdata8	cdata9	cdata10	cdata11	cdata12	cdata13	cdata14	cdata15	cs	bc0	bc0^	bc1	bc1^	bc2	bc2^	bc3	bc3^	bc4	bc4^	bc5	bc5^	bc6	bc6^	bc7	bc7^	bc8	bc8^	bc9	bc9^	bc10	bc10^	bc11	bc11^	bc12	bc12^	bc13	bc13^	bc14	bc14^	bc15	bc15^	Bitline16

x135	write	cdata16	cdata17	cdata18	cdata19	cdata20	cdata21	cdata22	cdata23	cdata24	cdata25	cdata26	cdata27	cdata28	cdata29	cdata30	cdata31	cs32chromosome	bc16	bc16^	bc17	bc17^	bc18	bc18^	bc19	bc19^	bc20	bc20^	bc21	bc21^	bc22	bc22^	bc23	bc23^	bc24	bc24^	bc25	bc25^	bc26	bc26^	bc27	bc27^	bc28	bc28^	bc29	bc29^	bc30	bc30^	bc31	bc31^	Bitline16

x136	write	fdata0	fdata1	fdata2	fdata3	fdata4	fdata5	fdata6	fdata7	fdata8	fdata9	fdata10	fdata11	fdata12	fdata13	fdata14	fdata15	cs	bf0	bf0^	bf1	bf1^	bf2	bf2^	bf3	bf3^	bf4	bf4^	bf5	bf5^	bf6	bf6^	bf7	bf7^	bf8	bf8^	bf9	bf9^	bf10	bf10^	bf11	bf11^	bf12	bf12^	bf13	bf13^	bf14	bf14^	bf15	bf15^	Bitline16

x137	write	fdata16	fdata17	fdata18	fdata19	fdata20	fdata21	fdata22	fdata23	fdata24	fdata25	fdata26	fdata27	fdata28	fdata29	fdata30	fdata31	cs32fitness	bf16	bf16^	bf17	bf17^	bf18	bf18^	bf19	bf19^	bf20	bf20^	bf21	bf21^	bf22	bf22^	bf23	bf23^	bf24	bf24^	bf25	bf25^	bf26	bf26^	bf27	bf27^	bf28	bf28^	bf29	bf29^	bf30	bf30^	bf31	bf31^	Bitline16

x138	senseampsel	bc0	bc0^	bc1	bc1^	bc2	bc2^	bc3	bc3^	bc4	bc4^	bc5	bc5^	bc6	bc6^	bc7	bc7^	bc8	bc8^	bc9	bc9^	bc10	bc10^	bc11	bc11^	bc12	bc12^	bc13	bc13^	bc14	bc14^	bc15	bc15^	cout0	cout1	cout2	cout3	cout4	cout5	cout6	cout7	cout8	cout9	cout10	cout11	cout12	cout13	cout14	cout15	SenseAmp16

x139	senseampsel32chromosome	bc16	bc16^	bc17	bc17^	bc18	bc18^	bc19	bc19^	bc20	bc20^	bc21	bc21^	bc22	bc22^	bc23	bc23^	bc24	bc24^	bc25	bc25^	bc26	bc26^	bc27	bc27^	bc28	bc28^	bc29	bc29^	bc30	bc30^	bc31	bc31^	cout16	cout17	cout18	cout19	cout20	cout21	cout22	cout23	cout24	cout25	cout26	cout27	cout28	cout29	cout30	cout31	SenseAmp16

x140	senseampsel	bf0	bf0^	bf1	bf1^	bf2	bf2^	bf3	bf3^	bf4	bf4^	bf5	bf5^	bf6	bf6^	bf7	bf7^	bf8	bf8^	bf9	bf9^	bf10	bf10^	bf11	bf11^	bf12	bf12^	bf13	bf13^	bf14	bf14^	bf15	bf15^	fout0	fout1	fout2	fout3	fout4	fout5	fout6	fout7	fout8	fout9	fout10	fout11	fout12	fout13	fout14	fout15	SenseAmp16

x141	senseampsel32fitness	bf16	bf16^	bf17	bf17^	bf18	bf18^	bf19	bf19^	bf20	bf20^	bf21	bf21^	bf22	bf22^	bf23	bf23^	bf24	bf24^	bf25	bf25^	bf26	bf26^	bf27	bf27^	bf28	bf28^	bf29	bf29^	bf30	bf30^	bf31	bf31^	fout16	fout17	fout18	fout19	fout20	fout21	fout22	fout23	fout24	fout25	fout26	fout27	fout28	fout29	fout30	fout31	SenseAmp16


***128x32-bit Block***
.subckt	Block128x32	w1	w2	w3	w4	w5	w6	w7	w8	w9	w10	w11	w12	w13	w14	w15	w16	w17	w18	w19	w20	w21	w22	w23	w24	w25	w26	w27	w28	w29	w30	w31	w32	w33	w34	w35	w36	w37	w38	w39	w40	w41	w42	w43	w44	w45	w46	w47	w48	w49	w50	w51	w52	w53	w54	w55	w56	w57	w58	w59	w60	w61	w62	w63	w64	w65	w66	w67	w68	w69	w70	w71	w72	w73	w74	w75	w76	w77	w78	w79	w80	w81	w82	w83	w84	w85	w86	w87	w88	w89	w90	w91	w92	w93	w94	w95	w96	w97	w98	w99	w100	w101	w102	w103	w104	w105	w106	w107	w108	w109	w110	w111	w112	w113	w114	w115	w116	w117	w118	w119	w120	w121	w122	w123	w124	w125	w126	w127	w128	b1	b1^	b2	b2^	b3	b3^	b4	b4^	b5	b5^	b6	b6^	b7	b7^	b8	b8^	b9	b9^	b10	b10^	b11	b11^	b12	b12^	b13	b13^	b14	b14^	b15	b15^	b16	b16^	b17	b17^	b18	b18^	b19	b19^	b20	b20^	b21	b21^	b22	b22^	b23	b23^	b24	b24^	b25	b25^	b26	b26^	b27	b27^	b28	b28^	b29	b29^	b30	b30^	b31	b31^	b32	b32^
x1	w1	w2	w3	w4	w5	w6	w7	w8	w9	w10	w11	w12	w13	w14	w15	w16	w17	w18	w19	w20	w21	w22	w23	w24	w25	w26	w27	w28	w29	w30	w31	w32	w33	w34	w35	w36	w37	w38	w39	w40	w41	w42	w43	w44	w45	w46	w47	w48	w49	w50	w51	w52	w53	w54	w55	w56	w57	w58	w59	w60	w61	w62	w63	w64	b1	b1^	b2	b2^	b3	b3^	b4	b4^	b5	b5^	b6	b6^	b7	b7^	b8	b8^	b9	b9^	b10	b10^	b11	b11^	b12	b12^	b13	b13^	b14	b14^	b15	b15^	b16	b16^	b17	b17^	b18	b18^	b19	b19^	b20	b20^	b21	b21^	b22	b22^	b23	b23^	b24	b24^	b25	b25^	b26	b26^	b27	b27^	b28	b28^	b29	b29^	b30	b30^	b31	b31^	b32	b32^	Block64x32
x2	w65	w66	w67	w68	w69	w70	w71	w72	w73	w74	w75	w76	w77	w78	w79	w80	w81	w82	w83	w84	w85	w86	w87	w88	w89	w90	w91	w92	w93	w94	w95	w96	w97	w98	w99	w100	w101	w102	w103	w104	w105	w106	w107	w108	w109	w110	w111	w112	w113	w114	w115	w116	w117	w118	w119	w120	w121	w122	w123	w124	w125	w126	w127	w128	b1	b1^	b2	b2^	b3	b3^	b4	b4^	b5	b5^	b6	b6^	b7	b7^	b8	b8^	b9	b9^	b10	b10^	b11	b11^	b12	b12^	b13	b13^	b14	b14^	b15	b15^	b16	b16^	b17	b17^	b18	b18^	b19	b19^	b20	b20^	b21	b21^	b22	b22^	b23	b23^	b24	b24^	b25	b25^	b26	b26^	b27	b27^	b28	b28^	b29	b29^	b30	b30^	b31	b31^	b32	b32^	Block64x32
.ends

***64x32-bit Block***
.subckt	Block64x32	w1	w2	w3	w4	w5	w6	w7	w8	w9	w10	w11	w12	w13	w14	w15	w16	w17	w18	w19	w20	w21	w22	w23	w24	w25	w26	w27	w28	w29	w30	w31	w32	w33	w34	w35	w36	w37	w38	w39	w40	w41	w42	w43	w44	w45	w46	w47	w48	w49	w50	w51	w52	w53	w54	w55	w56	w57	w58	w59	w60	w61	w62	w63	w64	b1	b1^	b2	b2^	b3	b3^	b4	b4^	b5	b5^	b6	b6^	b7	b7^	b8	b8^	b9	b9^	b10	b10^	b11	b11^	b12	b12^	b13	b13^	b14	b14^	b15	b15^	b16	b16^	b17	b17^	b18	b18^	b19	b19^	b20	b20^	b21	b21^	b22	b22^	b23	b23^	b24	b24^	b25	b25^	b26	b26^	b27	b27^	b28	b28^	b29	b29^	b30	b30^	b31	b31^	b32	b32^
x1	w1	w2	w3	w4	w5	w6	w7	w8	w9	w10	w11	w12	w13	w14	w15	w16	w17	w18	w19	w20	w21	w22	w23	w24	w25	w26	w27	w28	w29	w30	w31	w32	b1	b1^	b2	b2^	b3	b3^	b4	b4^	b5	b5^	b6	b6^	b7	b7^	b8	b8^	b9	b9^	b10	b10^	b11	b11^	b12	b12^	b13	b13^	b14	b14^	b15	b15^	b16	b16^	b17	b17^	b18	b18^	b19	b19^	b20	b20^	b21	b21^	b22	b22^	b23	b23^	b24	b24^	b25	b25^	b26	b26^	b27	b27^	b28	b28^	b29	b29^	b30	b30^	b31	b31^	b32	b32^	Block32x32
x2	w33	w34	w35	w36	w37	w38	w39	w40	w41	w42	w43	w44	w45	w46	w47	w48	w49	w50	w51	w52	w53	w54	w55	w56	w57	w58	w59	w60	w61	w62	w63	w64	b1	b1^	b2	b2^	b3	b3^	b4	b4^	b5	b5^	b6	b6^	b7	b7^	b8	b8^	b9	b9^	b10	b10^	b11	b11^	b12	b12^	b13	b13^	b14	b14^	b15	b15^	b16	b16^	b17	b17^	b18	b18^	b19	b19^	b20	b20^	b21	b21^	b22	b22^	b23	b23^	b24	b24^	b25	b25^	b26	b26^	b27	b27^	b28	b28^	b29	b29^	b30	b30^	b31	b31^	b32	b32^	Block32x32
.ends

***32x32-bit Block***
.subckt Block32x32	w1	w2	w3	w4	w5	w6	w7	w8	w9	w10	w11	w12	w13	w14	w15	w16	w17	w18	w19	w20	w21	w22	w23	w24	w25	w26	w27	w28	w29	w30	w31	w32	b1	b1^	b2	b2^	b3	b3^	b4	b4^	b5	b5^	b6	b6^	b7	b7^	b8	b8^	b9	b9^	b10	b10^	b11	b11^	b12	b12^	b13	b13^	b14	b14^	b15	b15^	b16	b16^	b17	b17^	b18	b18^	b19	b19^	b20	b20^	b21	b21^	b22	b22^	b23	b23^	b24	b24^	b25	b25^	b26	b26^	b27	b27^	b28	b28^	b29	b29^	b30	b30^	b31	b31^	b32	b32^
x1	w1	b1	b1^	b2	b2^	b3	b3^	b4	b4^	b5	b5^	b6	b6^	b7	b7^	b8	b8^	b9	b9^	b10	b10^	b11	b11^	b12	b12^	b13	b13^	b14	b14^	b15	b15^	b16	b16^	b17	b17^	b18	b18^	b19	b19^	b20	b20^	b21	b21^	b22	b22^	b23	b23^	b24	b24^	b25	b25^	b26	b26^	b27	b27^	b28	b28^	b29	b29^	b30	b30^	b31	b31^	b32	b32^	Word
x2	w2	b1	b1^	b2	b2^	b3	b3^	b4	b4^	b5	b5^	b6	b6^	b7	b7^	b8	b8^	b9	b9^	b10	b10^	b11	b11^	b12	b12^	b13	b13^	b14	b14^	b15	b15^	b16	b16^	b17	b17^	b18	b18^	b19	b19^	b20	b20^	b21	b21^	b22	b22^	b23	b23^	b24	b24^	b25	b25^	b26	b26^	b27	b27^	b28	b28^	b29	b29^	b30	b30^	b31	b31^	b32	b32^	Word
x3	w3	b1	b1^	b2	b2^	b3	b3^	b4	b4^	b5	b5^	b6	b6^	b7	b7^	b8	b8^	b9	b9^	b10	b10^	b11	b11^	b12	b12^	b13	b13^	b14	b14^	b15	b15^	b16	b16^	b17	b17^	b18	b18^	b19	b19^	b20	b20^	b21	b21^	b22	b22^	b23	b23^	b24	b24^	b25	b25^	b26	b26^	b27	b27^	b28	b28^	b29	b29^	b30	b30^	b31	b31^	b32	b32^	Word
x4	w4	b1	b1^	b2	b2^	b3	b3^	b4	b4^	b5	b5^	b6	b6^	b7	b7^	b8	b8^	b9	b9^	b10	b10^	b11	b11^	b12	b12^	b13	b13^	b14	b14^	b15	b15^	b16	b16^	b17	b17^	b18	b18^	b19	b19^	b20	b20^	b21	b21^	b22	b22^	b23	b23^	b24	b24^	b25	b25^	b26	b26^	b27	b27^	b28	b28^	b29	b29^	b30	b30^	b31	b31^	b32	b32^	Word
x5	w5	b1	b1^	b2	b2^	b3	b3^	b4	b4^	b5	b5^	b6	b6^	b7	b7^	b8	b8^	b9	b9^	b10	b10^	b11	b11^	b12	b12^	b13	b13^	b14	b14^	b15	b15^	b16	b16^	b17	b17^	b18	b18^	b19	b19^	b20	b20^	b21	b21^	b22	b22^	b23	b23^	b24	b24^	b25	b25^	b26	b26^	b27	b27^	b28	b28^	b29	b29^	b30	b30^	b31	b31^	b32	b32^	Word
x6	w6	b1	b1^	b2	b2^	b3	b3^	b4	b4^	b5	b5^	b6	b6^	b7	b7^	b8	b8^	b9	b9^	b10	b10^	b11	b11^	b12	b12^	b13	b13^	b14	b14^	b15	b15^	b16	b16^	b17	b17^	b18	b18^	b19	b19^	b20	b20^	b21	b21^	b22	b22^	b23	b23^	b24	b24^	b25	b25^	b26	b26^	b27	b27^	b28	b28^	b29	b29^	b30	b30^	b31	b31^	b32	b32^	Word
x7	w7	b1	b1^	b2	b2^	b3	b3^	b4	b4^	b5	b5^	b6	b6^	b7	b7^	b8	b8^	b9	b9^	b10	b10^	b11	b11^	b12	b12^	b13	b13^	b14	b14^	b15	b15^	b16	b16^	b17	b17^	b18	b18^	b19	b19^	b20	b20^	b21	b21^	b22	b22^	b23	b23^	b24	b24^	b25	b25^	b26	b26^	b27	b27^	b28	b28^	b29	b29^	b30	b30^	b31	b31^	b32	b32^	Word
x8	w8	b1	b1^	b2	b2^	b3	b3^	b4	b4^	b5	b5^	b6	b6^	b7	b7^	b8	b8^	b9	b9^	b10	b10^	b11	b11^	b12	b12^	b13	b13^	b14	b14^	b15	b15^	b16	b16^	b17	b17^	b18	b18^	b19	b19^	b20	b20^	b21	b21^	b22	b22^	b23	b23^	b24	b24^	b25	b25^	b26	b26^	b27	b27^	b28	b28^	b29	b29^	b30	b30^	b31	b31^	b32	b32^	Word
x9	w9	b1	b1^	b2	b2^	b3	b3^	b4	b4^	b5	b5^	b6	b6^	b7	b7^	b8	b8^	b9	b9^	b10	b10^	b11	b11^	b12	b12^	b13	b13^	b14	b14^	b15	b15^	b16	b16^	b17	b17^	b18	b18^	b19	b19^	b20	b20^	b21	b21^	b22	b22^	b23	b23^	b24	b24^	b25	b25^	b26	b26^	b27	b27^	b28	b28^	b29	b29^	b30	b30^	b31	b31^	b32	b32^	Word
x10	w10	b1	b1^	b2	b2^	b3	b3^	b4	b4^	b5	b5^	b6	b6^	b7	b7^	b8	b8^	b9	b9^	b10	b10^	b11	b11^	b12	b12^	b13	b13^	b14	b14^	b15	b15^	b16	b16^	b17	b17^	b18	b18^	b19	b19^	b20	b20^	b21	b21^	b22	b22^	b23	b23^	b24	b24^	b25	b25^	b26	b26^	b27	b27^	b28	b28^	b29	b29^	b30	b30^	b31	b31^	b32	b32^	Word
x11	w11	b1	b1^	b2	b2^	b3	b3^	b4	b4^	b5	b5^	b6	b6^	b7	b7^	b8	b8^	b9	b9^	b10	b10^	b11	b11^	b12	b12^	b13	b13^	b14	b14^	b15	b15^	b16	b16^	b17	b17^	b18	b18^	b19	b19^	b20	b20^	b21	b21^	b22	b22^	b23	b23^	b24	b24^	b25	b25^	b26	b26^	b27	b27^	b28	b28^	b29	b29^	b30	b30^	b31	b31^	b32	b32^	Word
x12	w12	b1	b1^	b2	b2^	b3	b3^	b4	b4^	b5	b5^	b6	b6^	b7	b7^	b8	b8^	b9	b9^	b10	b10^	b11	b11^	b12	b12^	b13	b13^	b14	b14^	b15	b15^	b16	b16^	b17	b17^	b18	b18^	b19	b19^	b20	b20^	b21	b21^	b22	b22^	b23	b23^	b24	b24^	b25	b25^	b26	b26^	b27	b27^	b28	b28^	b29	b29^	b30	b30^	b31	b31^	b32	b32^	Word
x13	w13	b1	b1^	b2	b2^	b3	b3^	b4	b4^	b5	b5^	b6	b6^	b7	b7^	b8	b8^	b9	b9^	b10	b10^	b11	b11^	b12	b12^	b13	b13^	b14	b14^	b15	b15^	b16	b16^	b17	b17^	b18	b18^	b19	b19^	b20	b20^	b21	b21^	b22	b22^	b23	b23^	b24	b24^	b25	b25^	b26	b26^	b27	b27^	b28	b28^	b29	b29^	b30	b30^	b31	b31^	b32	b32^	Word
x14	w14	b1	b1^	b2	b2^	b3	b3^	b4	b4^	b5	b5^	b6	b6^	b7	b7^	b8	b8^	b9	b9^	b10	b10^	b11	b11^	b12	b12^	b13	b13^	b14	b14^	b15	b15^	b16	b16^	b17	b17^	b18	b18^	b19	b19^	b20	b20^	b21	b21^	b22	b22^	b23	b23^	b24	b24^	b25	b25^	b26	b26^	b27	b27^	b28	b28^	b29	b29^	b30	b30^	b31	b31^	b32	b32^	Word
x15	w15	b1	b1^	b2	b2^	b3	b3^	b4	b4^	b5	b5^	b6	b6^	b7	b7^	b8	b8^	b9	b9^	b10	b10^	b11	b11^	b12	b12^	b13	b13^	b14	b14^	b15	b15^	b16	b16^	b17	b17^	b18	b18^	b19	b19^	b20	b20^	b21	b21^	b22	b22^	b23	b23^	b24	b24^	b25	b25^	b26	b26^	b27	b27^	b28	b28^	b29	b29^	b30	b30^	b31	b31^	b32	b32^	Word
x16	w16	b1	b1^	b2	b2^	b3	b3^	b4	b4^	b5	b5^	b6	b6^	b7	b7^	b8	b8^	b9	b9^	b10	b10^	b11	b11^	b12	b12^	b13	b13^	b14	b14^	b15	b15^	b16	b16^	b17	b17^	b18	b18^	b19	b19^	b20	b20^	b21	b21^	b22	b22^	b23	b23^	b24	b24^	b25	b25^	b26	b26^	b27	b27^	b28	b28^	b29	b29^	b30	b30^	b31	b31^	b32	b32^	Word
x17	w17	b1	b1^	b2	b2^	b3	b3^	b4	b4^	b5	b5^	b6	b6^	b7	b7^	b8	b8^	b9	b9^	b10	b10^	b11	b11^	b12	b12^	b13	b13^	b14	b14^	b15	b15^	b16	b16^	b17	b17^	b18	b18^	b19	b19^	b20	b20^	b21	b21^	b22	b22^	b23	b23^	b24	b24^	b25	b25^	b26	b26^	b27	b27^	b28	b28^	b29	b29^	b30	b30^	b31	b31^	b32	b32^	Word
x18	w18	b1	b1^	b2	b2^	b3	b3^	b4	b4^	b5	b5^	b6	b6^	b7	b7^	b8	b8^	b9	b9^	b10	b10^	b11	b11^	b12	b12^	b13	b13^	b14	b14^	b15	b15^	b16	b16^	b17	b17^	b18	b18^	b19	b19^	b20	b20^	b21	b21^	b22	b22^	b23	b23^	b24	b24^	b25	b25^	b26	b26^	b27	b27^	b28	b28^	b29	b29^	b30	b30^	b31	b31^	b32	b32^	Word
x19	w19	b1	b1^	b2	b2^	b3	b3^	b4	b4^	b5	b5^	b6	b6^	b7	b7^	b8	b8^	b9	b9^	b10	b10^	b11	b11^	b12	b12^	b13	b13^	b14	b14^	b15	b15^	b16	b16^	b17	b17^	b18	b18^	b19	b19^	b20	b20^	b21	b21^	b22	b22^	b23	b23^	b24	b24^	b25	b25^	b26	b26^	b27	b27^	b28	b28^	b29	b29^	b30	b30^	b31	b31^	b32	b32^	Word
x20	w20	b1	b1^	b2	b2^	b3	b3^	b4	b4^	b5	b5^	b6	b6^	b7	b7^	b8	b8^	b9	b9^	b10	b10^	b11	b11^	b12	b12^	b13	b13^	b14	b14^	b15	b15^	b16	b16^	b17	b17^	b18	b18^	b19	b19^	b20	b20^	b21	b21^	b22	b22^	b23	b23^	b24	b24^	b25	b25^	b26	b26^	b27	b27^	b28	b28^	b29	b29^	b30	b30^	b31	b31^	b32	b32^	Word
x21	w21	b1	b1^	b2	b2^	b3	b3^	b4	b4^	b5	b5^	b6	b6^	b7	b7^	b8	b8^	b9	b9^	b10	b10^	b11	b11^	b12	b12^	b13	b13^	b14	b14^	b15	b15^	b16	b16^	b17	b17^	b18	b18^	b19	b19^	b20	b20^	b21	b21^	b22	b22^	b23	b23^	b24	b24^	b25	b25^	b26	b26^	b27	b27^	b28	b28^	b29	b29^	b30	b30^	b31	b31^	b32	b32^	Word
x22	w22	b1	b1^	b2	b2^	b3	b3^	b4	b4^	b5	b5^	b6	b6^	b7	b7^	b8	b8^	b9	b9^	b10	b10^	b11	b11^	b12	b12^	b13	b13^	b14	b14^	b15	b15^	b16	b16^	b17	b17^	b18	b18^	b19	b19^	b20	b20^	b21	b21^	b22	b22^	b23	b23^	b24	b24^	b25	b25^	b26	b26^	b27	b27^	b28	b28^	b29	b29^	b30	b30^	b31	b31^	b32	b32^	Word
x23	w23	b1	b1^	b2	b2^	b3	b3^	b4	b4^	b5	b5^	b6	b6^	b7	b7^	b8	b8^	b9	b9^	b10	b10^	b11	b11^	b12	b12^	b13	b13^	b14	b14^	b15	b15^	b16	b16^	b17	b17^	b18	b18^	b19	b19^	b20	b20^	b21	b21^	b22	b22^	b23	b23^	b24	b24^	b25	b25^	b26	b26^	b27	b27^	b28	b28^	b29	b29^	b30	b30^	b31	b31^	b32	b32^	Word
x24	w24	b1	b1^	b2	b2^	b3	b3^	b4	b4^	b5	b5^	b6	b6^	b7	b7^	b8	b8^	b9	b9^	b10	b10^	b11	b11^	b12	b12^	b13	b13^	b14	b14^	b15	b15^	b16	b16^	b17	b17^	b18	b18^	b19	b19^	b20	b20^	b21	b21^	b22	b22^	b23	b23^	b24	b24^	b25	b25^	b26	b26^	b27	b27^	b28	b28^	b29	b29^	b30	b30^	b31	b31^	b32	b32^	Word
x25	w25	b1	b1^	b2	b2^	b3	b3^	b4	b4^	b5	b5^	b6	b6^	b7	b7^	b8	b8^	b9	b9^	b10	b10^	b11	b11^	b12	b12^	b13	b13^	b14	b14^	b15	b15^	b16	b16^	b17	b17^	b18	b18^	b19	b19^	b20	b20^	b21	b21^	b22	b22^	b23	b23^	b24	b24^	b25	b25^	b26	b26^	b27	b27^	b28	b28^	b29	b29^	b30	b30^	b31	b31^	b32	b32^	Word
x26	w26	b1	b1^	b2	b2^	b3	b3^	b4	b4^	b5	b5^	b6	b6^	b7	b7^	b8	b8^	b9	b9^	b10	b10^	b11	b11^	b12	b12^	b13	b13^	b14	b14^	b15	b15^	b16	b16^	b17	b17^	b18	b18^	b19	b19^	b20	b20^	b21	b21^	b22	b22^	b23	b23^	b24	b24^	b25	b25^	b26	b26^	b27	b27^	b28	b28^	b29	b29^	b30	b30^	b31	b31^	b32	b32^	Word
x27	w27	b1	b1^	b2	b2^	b3	b3^	b4	b4^	b5	b5^	b6	b6^	b7	b7^	b8	b8^	b9	b9^	b10	b10^	b11	b11^	b12	b12^	b13	b13^	b14	b14^	b15	b15^	b16	b16^	b17	b17^	b18	b18^	b19	b19^	b20	b20^	b21	b21^	b22	b22^	b23	b23^	b24	b24^	b25	b25^	b26	b26^	b27	b27^	b28	b28^	b29	b29^	b30	b30^	b31	b31^	b32	b32^	Word
x28	w28	b1	b1^	b2	b2^	b3	b3^	b4	b4^	b5	b5^	b6	b6^	b7	b7^	b8	b8^	b9	b9^	b10	b10^	b11	b11^	b12	b12^	b13	b13^	b14	b14^	b15	b15^	b16	b16^	b17	b17^	b18	b18^	b19	b19^	b20	b20^	b21	b21^	b22	b22^	b23	b23^	b24	b24^	b25	b25^	b26	b26^	b27	b27^	b28	b28^	b29	b29^	b30	b30^	b31	b31^	b32	b32^	Word
x29	w29	b1	b1^	b2	b2^	b3	b3^	b4	b4^	b5	b5^	b6	b6^	b7	b7^	b8	b8^	b9	b9^	b10	b10^	b11	b11^	b12	b12^	b13	b13^	b14	b14^	b15	b15^	b16	b16^	b17	b17^	b18	b18^	b19	b19^	b20	b20^	b21	b21^	b22	b22^	b23	b23^	b24	b24^	b25	b25^	b26	b26^	b27	b27^	b28	b28^	b29	b29^	b30	b30^	b31	b31^	b32	b32^	Word
x30	w30	b1	b1^	b2	b2^	b3	b3^	b4	b4^	b5	b5^	b6	b6^	b7	b7^	b8	b8^	b9	b9^	b10	b10^	b11	b11^	b12	b12^	b13	b13^	b14	b14^	b15	b15^	b16	b16^	b17	b17^	b18	b18^	b19	b19^	b20	b20^	b21	b21^	b22	b22^	b23	b23^	b24	b24^	b25	b25^	b26	b26^	b27	b27^	b28	b28^	b29	b29^	b30	b30^	b31	b31^	b32	b32^	Word
x31	w31	b1	b1^	b2	b2^	b3	b3^	b4	b4^	b5	b5^	b6	b6^	b7	b7^	b8	b8^	b9	b9^	b10	b10^	b11	b11^	b12	b12^	b13	b13^	b14	b14^	b15	b15^	b16	b16^	b17	b17^	b18	b18^	b19	b19^	b20	b20^	b21	b21^	b22	b22^	b23	b23^	b24	b24^	b25	b25^	b26	b26^	b27	b27^	b28	b28^	b29	b29^	b30	b30^	b31	b31^	b32	b32^	Word
x32	w32	b1	b1^	b2	b2^	b3	b3^	b4	b4^	b5	b5^	b6	b6^	b7	b7^	b8	b8^	b9	b9^	b10	b10^	b11	b11^	b12	b12^	b13	b13^	b14	b14^	b15	b15^	b16	b16^	b17	b17^	b18	b18^	b19	b19^	b20	b20^	b21	b21^	b22	b22^	b23	b23^	b24	b24^	b25	b25^	b26	b26^	b27	b27^	b28	b28^	b29	b29^	b30	b30^	b31	b31^	b32	b32^	Word
.ends

***32-bit Word***
.subckt	Word	w	b1	b1^	b2	b2^	b3	b3^	b4	b4^	b5	b5^	b6	b6^	b7	b7^	b8	b8^	b9	b9^	b10	b10^	b11	b11^	b12	b12^	b13	b13^	b14	b14^	b15	b15^	b16	b16^	b17	b17^	b18	b18^	b19	b19^	b20	b20^	b21	b21^	b22	b22^	b23	b23^	b24	b24^	b25	b25^	b26	b26^	b27	b27^	b28	b28^	b29	b29^	b30	b30^	b31	b31^	b32	b32^
x1	w	b1	b1^	Cell
x2	w	b2	b2^	Cell
x3	w	b3	b3^	Cell
x4	w	b4	b4^	Cell
x5	w	b5	b5^	Cell
x6	w	b6	b6^	Cell
x7	w	b7	b7^	Cell
x8	w	b8	b8^	Cell
x9	w	b9	b9^	Cell
x10	w	b10	b10^	Cell
x11	w	b11	b11^	Cell
x12	w	b12	b12^	Cell
x13	w	b13	b13^	Cell
x14	w	b14	b14^	Cell
x15	w	b15	b15^	Cell
x16	w	b16	b16^	Cell
x17	w	b17	b17^	Cell
x18	w	b18	b18^	Cell
x19	w	b19	b19^	Cell
x20	w	b20	b20^	Cell
x21	w	b21	b21^	Cell
x22	w	b22	b22^	Cell
x23	w	b23	b23^	Cell
x24	w	b24	b24^	Cell
x25	w	b25	b25^	Cell
x26	w	b26	b26^	Cell
x27	w	b27	b27^	Cell
x28	w	b28	b28^	Cell
x29	w	b29	b29^	Cell
x30	w	b30	b30^	Cell
x31	w	b31	b31^	Cell
x32	w	b32	b32^	Cell
.ends

***Decoder***
x1	add0	add0^	INV	wn=15u	wp=45u
x2	add1	add1^	INV	wn=15u	wp=45u
x3	add2	add2^	INV	wn=15u	wp=45u
x4	add3	add3^	INV	wn=15u	wp=45u
x5	add4	add4^	INV	wn=15u	wp=45u
x6	add5	add5^	INV	wn=15u	wp=45u
x7	add6	add6^	INV	wn=15u	wp=45u
x8	add7	add7^	INV	wn=15u	wp=45u

x9	add0^	add1^	add2^	add3^	prel0	NAND4	wn=5u	wp=15u
x10	add0	add1^	add2^	add3^	prel1	NAND4	wn=5u	wp=15u
x11	add0^	add1	add2^	add3^	prel2	NAND4	wn=5u	wp=15u
x12	add0	add1	add2^	add3^	prel3	NAND4	wn=5u	wp=15u
x13	add0^	add1^	add2	add3^	prel4	NAND4	wn=5u	wp=15u
x14	add0	add1^	add2	add3^	prel5	NAND4	wn=5u	wp=15u
x15	add0^	add1	add2	add3^	prel6	NAND4	wn=5u	wp=15u
x16	add0	add1	add2	add3^	prel7	NAND4	wn=5u	wp=15u
x17	add0^	add1^	add2^	add3	prel8	NAND4	wn=5u	wp=15u
x18	add0	add1^	add2^	add3	prel9	NAND4	wn=5u	wp=15u
x19	add0^	add1	add2^	add3	prel10	NAND4	wn=5u	wp=15u
x20	add0	add1	add2^	add3	prel11	NAND4	wn=5u	wp=15u
x21	add0^	add1^	add2	add3	prel12	NAND4	wn=5u	wp=15u
x22	add0	add1^	add2	add3	prel13	NAND4	wn=5u	wp=15u
x23	add0^	add1	add2	add3	prel14	NAND4	wn=5u	wp=15u
x24	add0	add1	add2	add3	prel15	NAND4	wn=5u	wp=15u

x25	add4^	add5^	add6^	add7^	prem0	NAND4	wn=5u	wp=15u
x26	add4	add5^	add6^	add7^	prem1	NAND4	wn=5u	wp=15u
x27	add4^	add5	add6^	add7^	prem2	NAND4	wn=5u	wp=15u
x28	add4	add5	add6^	add7^	prem3	NAND4	wn=5u	wp=15u
x29	add4^	add5^	add6	add7^	prem4	NAND4	wn=5u	wp=15u
x30	add4	add5^	add6	add7^	prem5	NAND4	wn=5u	wp=15u
x31	add4^	add5	add6	add7^	prem6	NAND4	wn=5u	wp=15u
x32	add4	add5	add6	add7^	prem7	NAND4	wn=5u	wp=15u
x33	add4^	add5^	add6^	add7	prem8	NAND4	wn=5u	wp=15u
x34	add4	add5^	add6^	add7	prem9	NAND4	wn=5u	wp=15u
x35	add4^	add5	add6^	add7	prem10	NAND4	wn=5u	wp=15u
x36	add4	add5	add6^	add7	prem11	NAND4	wn=5u	wp=15u
x37	add4^	add5^	add6	add7	prem12	NAND4	wn=5u	wp=15u
x38	add4	add5^	add6	add7	prem13	NAND4	wn=5u	wp=15u
x39	add4^	add5	add6	add7	prem14	NAND4	wn=5u	wp=15u
x40	add4	add5	add6	add7	prem15	NAND4	wn=5u	wp=15u

x41	prem0	prel0	prel1	prel2	prel3	prel4	prel5	prel6	prel7	prel8	prel9	prel10	prel11	prel12	prel13	prel14	prel15	dec0	dec1	dec2	dec3	dec4	dec5	dec6	dec7	dec8	dec9	dec10	dec11	dec12	dec13	dec14	dec15	Second-Stage
x42	prem1	prel0	prel1	prel2	prel3	prel4	prel5	prel6	prel7	prel8	prel9	prel10	prel11	prel12	prel13	prel14	prel15	dec16	dec17	dec18	dec19	dec20	dec21	dec22	dec23	dec24	dec25	dec26	dec27	dec28	dec29	dec30	dec31	Second-Stage
x43	prem2	prel0	prel1	prel2	prel3	prel4	prel5	prel6	prel7	prel8	prel9	prel10	prel11	prel12	prel13	prel14	prel15	dec32	dec33	dec34	dec35	dec36	dec37	dec38	dec39	dec40	dec41	dec42	dec43	dec44	dec45	dec46	dec47	Second-Stage
x44	prem3	prel0	prel1	prel2	prel3	prel4	prel5	prel6	prel7	prel8	prel9	prel10	prel11	prel12	prel13	prel14	prel15	dec48	dec49	dec50	dec51	dec52	dec53	dec54	dec55	dec56	dec57	dec58	dec59	dec60	dec61	dec62	dec63	Second-Stage
x45	prem4	prel0	prel1	prel2	prel3	prel4	prel5	prel6	prel7	prel8	prel9	prel10	prel11	prel12	prel13	prel14	prel15	dec64	dec65	dec66	dec67	dec68	dec69	dec70	dec71	dec72	dec73	dec74	dec75	dec76	dec77	dec78	dec79	Second-Stage
x46	prem5	prel0	prel1	prel2	prel3	prel4	prel5	prel6	prel7	prel8	prel9	prel10	prel11	prel12	prel13	prel14	prel15	dec80	dec81	dec82	dec83	dec84	dec85	dec86	dec87	dec88	dec89	dec90	dec91	dec92	dec93	dec94	dec95	Second-Stage
x47	prem6	prel0	prel1	prel2	prel3	prel4	prel5	prel6	prel7	prel8	prel9	prel10	prel11	prel12	prel13	prel14	prel15	dec96	dec97	dec98	dec99	dec100	dec101	dec102	dec103	dec104	dec105	dec106	dec107	dec108	dec109	dec110	dec111	Second-Stage
x48	prem7	prel0	prel1	prel2	prel3	prel4	prel5	prel6	prel7	prel8	prel9	prel10	prel11	prel12	prel13	prel14	prel15	dec112	dec113	dec114	dec115	dec116	dec117	dec118	dec119	dec120	dec121	dec122	dec123	dec124	dec125	dec126	dec127	Second-Stage
x49	prem8	prel0	prel1	prel2	prel3	prel4	prel5	prel6	prel7	prel8	prel9	prel10	prel11	prel12	prel13	prel14	prel15	dec128	dec129	dec130	dec131	dec132	dec133	dec134	dec135	dec136	dec137	dec138	dec139	dec140	dec141	dec142	dec143	Second-Stage
x50	prem9	prel0	prel1	prel2	prel3	prel4	prel5	prel6	prel7	prel8	prel9	prel10	prel11	prel12	prel13	prel14	prel15	dec144	dec145	dec146	dec147	dec148	dec149	dec150	dec151	dec152	dec153	dec154	dec155	dec156	dec157	dec158	dec159	Second-Stage
x51	prem10	prel0	prel1	prel2	prel3	prel4	prel5	prel6	prel7	prel8	prel9	prel10	prel11	prel12	prel13	prel14	prel15	dec160	dec161	dec162	dec163	dec164	dec165	dec166	dec167	dec168	dec169	dec170	dec171	dec172	dec173	dec174	dec175	Second-Stage
x52	prem11	prel0	prel1	prel2	prel3	prel4	prel5	prel6	prel7	prel8	prel9	prel10	prel11	prel12	prel13	prel14	prel15	dec176	dec177	dec178	dec179	dec180	dec181	dec182	dec183	dec184	dec185	dec186	dec187	dec188	dec189	dec190	dec191	Second-Stage
x53	prem12	prel0	prel1	prel2	prel3	prel4	prel5	prel6	prel7	prel8	prel9	prel10	prel11	prel12	prel13	prel14	prel15	dec192	dec193	dec194	dec195	dec196	dec197	dec198	dec199	dec200	dec201	dec202	dec203	dec204	dec205	dec206	dec207	Second-Stage
x54	prem13	prel0	prel1	prel2	prel3	prel4	prel5	prel6	prel7	prel8	prel9	prel10	prel11	prel12	prel13	prel14	prel15	dec208	dec209	dec210	dec211	dec212	dec213	dec214	dec215	dec216	dec217	dec218	dec219	dec220	dec221	dec222	dec223	Second-Stage
x55	prem14	prel0	prel1	prel2	prel3	prel4	prel5	prel6	prel7	prel8	prel9	prel10	prel11	prel12	prel13	prel14	prel15	dec224	dec225	dec226	dec227	dec228	dec229	dec230	dec231	dec232	dec233	dec234	dec235	dec236	dec237	dec238	dec239	Second-Stage
x56	prem15	prel0	prel1	prel2	prel3	prel4	prel5	prel6	prel7	prel8	prel9	prel10	prel11	prel12	prel13	prel14	prel15	dec240	dec241	dec242	dec243	dec244	dec245	dec246	dec247	dec248	dec249	dec250	dec251	dec252	dec253	dec254	dec255	Second-Stage

***Decoder's Second Stage***
.subckt	Second-Stage	prem	prel0	prel1	prel2	prel3	prel4	prel5	prel6	prel7	prel8	prel9	prel10	prel11	prel12	prel13	prel14	prel15	dec0	dec1	dec2	dec3	dec4	dec5	dec6	dec7	dec8	dec9	dec10	dec11	dec12	dec13	dec14	dec15
x1	prem	prel0	dec0	NOR	wn=3u	wp=9u
x2	prem	prel1	dec1	NOR	wn=3u	wp=9u
x3	prem	prel2	dec2	NOR	wn=3u	wp=9u
x4	prem	prel3	dec3	NOR	wn=3u	wp=9u
x5	prem	prel4	dec4	NOR	wn=3u	wp=9u
x6	prem	prel5	dec5	NOR	wn=3u	wp=9u
x7	prem	prel6	dec6	NOR	wn=3u	wp=9u
x8	prem	prel7	dec7	NOR	wn=3u	wp=9u
x9	prem	prel8	dec8	NOR	wn=3u	wp=9u
x10	prem	prel9	dec9	NOR	wn=3u	wp=9u
x11	prem	prel10	dec10	NOR	wn=3u	wp=9u
x12	prem	prel11	dec11	NOR	wn=3u	wp=9u
x13	prem	prel12	dec12	NOR	wn=3u	wp=9u
x14	prem	prel13	dec13	NOR	wn=3u	wp=9u
x15	prem	prel14	dec14	NOR	wn=3u	wp=9u
x16	prem	prel15	dec15	NOR	wn=3u	wp=9u
.ends

***64x1 Transmission Gate Array***
.subckt	TG64	in1	in2	in3	in4	in5	in6	in7	in8	in9	in10	in11	in12	in13	in14	in15	in16	in17	in18	in19	in20	in21	in22	in23	in24	in25	in26	in27	in28	in29	in30	in31	in32	in33	in34	in35	in36	in37	in38	in39	in40	in41	in42	in43	in44	in45	in46	in47	in48	in49	in50	in51	in52	in53	in54	in55	in56	in57	in58	in59	in60	in61	in62	in63	in64	out1	out2	out3	out4	out5	out6	out7	out8	out9	out10	out11	out12	out13	out14	out15	out16	out17	out18	out19	out20	out21	out22	out23	out24	out25	out26	out27	out28	out29	out30	out31	out32	out33	out34	out35	out36	out37	out38	out39	out40	out41	out42	out43	out44	out45	out46	out47	out48	out49	out50	out51	out52	out53	out54	out55	out56	out57	out58	out59	out60	out61	out62	out63	out64	control	control^	wn=0.5u	wp=1.5u
x1	in1	in2	in3	in4	in5	in6	in7	in8	in9	in10	in11	in12	in13	in14	in15	in16	in17	in18	in19	in20	in21	in22	in23	in24	in25	in26	in27	in28	in29	in30	in31	in32	out1	out2	out3	out4	out5	out6	out7	out8	out9	out10	out11	out12	out13	out14	out15	out16	out17	out18	out19	out20	out21	out22	out23	out24	out25	out26	out27	out28	out29	out30	out31	out32	control	control^	TG32	wn='wn'	wp='wp'
x2	in33	in34	in35	in36	in37	in38	in39	in40	in41	in42	in43	in44	in45	in46	in47	in48	in49	in50	in51	in52	in53	in54	in55	in56	in57	in58	in59	in60	in61	in62	in63	in64	out33	out34	out35	out36	out37	out38	out39	out40	out41	out42	out43	out44	out45	out46	out47	out48	out49	out50	out51	out52	out53	out54	out55	out56	out57	out58	out59	out60	out61	out62	out63	out64	control	control^	TG32	wn='wn'	wp='wp'
.ends

***32x1 Transmission Gate Array***
.subckt	TG32	in1	in2	in3	in4	in5	in6	in7	in8	in9	in10	in11	in12	in13	in14	in15	in16	in17	in18	in19	in20	in21	in22	in23	in24	in25	in26	in27	in28	in29	in30	in31	in32	out1	out2	out3	out4	out5	out6	out7	out8	out9	out10	out11	out12	out13	out14	out15	out16	out17	out18	out19	out20	out21	out22	out23	out24	out25	out26	out27	out28	out29	out30	out31	out32	control	control^	wn=1.25u	wp=3.75u
x1	in1	out1	control	control^	TG	wn='wn'	wp='wp'
x2	in2	out2	control	control^	TG	wn='wn'	wp='wp'
x3	in3	out3	control	control^	TG	wn='wn'	wp='wp'
x4	in4	out4	control	control^	TG	wn='wn'	wp='wp'
x5	in5	out5	control	control^	TG	wn='wn'	wp='wp'
x6	in6	out6	control	control^	TG	wn='wn'	wp='wp'
x7	in7	out7	control	control^	TG	wn='wn'	wp='wp'
x8	in8	out8	control	control^	TG	wn='wn'	wp='wp'
x9	in9	out9	control	control^	TG	wn='wn'	wp='wp'
x10	in10	out10	control	control^	TG	wn='wn'	wp='wp'
x11	in11	out11	control	control^	TG	wn='wn'	wp='wp'
x12	in12	out12	control	control^	TG	wn='wn'	wp='wp'
x13	in13	out13	control	control^	TG	wn='wn'	wp='wp'
x14	in14	out14	control	control^	TG	wn='wn'	wp='wp'
x15	in15	out15	control	control^	TG	wn='wn'	wp='wp'
x16	in16	out16	control	control^	TG	wn='wn'	wp='wp'
x17	in17	out17	control	control^	TG	wn='wn'	wp='wp'
x18	in18	out18	control	control^	TG	wn='wn'	wp='wp'
x19	in19	out19	control	control^	TG	wn='wn'	wp='wp'
x20	in20	out20	control	control^	TG	wn='wn'	wp='wp'
x21	in21	out21	control	control^	TG	wn='wn'	wp='wp'
x22	in22	out22	control	control^	TG	wn='wn'	wp='wp'
x23	in23	out23	control	control^	TG	wn='wn'	wp='wp'
x24	in24	out24	control	control^	TG	wn='wn'	wp='wp'
x25	in25	out25	control	control^	TG	wn='wn'	wp='wp'
x26	in26	out26	control	control^	TG	wn='wn'	wp='wp'
x27	in27	out27	control	control^	TG	wn='wn'	wp='wp'
x28	in28	out28	control	control^	TG	wn='wn'	wp='wp'
x29	in29	out29	control	control^	TG	wn='wn'	wp='wp'
x30	in30	out30	control	control^	TG	wn='wn'	wp='wp'
x31	in31	out31	control	control^	TG	wn='wn'	wp='wp'
x32	in32	out32	control	control^	TG	wn='wn'	wp='wp'
.ends

***Inverter***
.subckt	INV	in	out	wn=0.25u	wp=0.5u	le=0.18u
m1	out	in	vdd	vdd	mp18	w=wp	l=le
m2	out	in	0	0	mn18	w=wn	l=le
.ends

***Transmission Gate***
.subckt	TG	in	out	control	control^	wn=1.25u	wp=3.75u	le=0.18u
m1	in	control^	out	vdd	mp18	w=wp	l=le
m2	out	control	in	0	mn18	w=wn	l=le
.ends

***2-Input NAND***
.subckt	NAND2	in1	in2	out	wn=10u	wp=30u	le=0.18u
m1	out	in2	vdd	vdd	mp18	w=wp	l=le
m2	out	in1	vdd	vdd	mp18	w=wp	l=le
m3	out	in1	a	0	mn18	w='2*wn'	l=le
m4	a	in2	0	0	mn18	w='2*wn'	l=le
.ends

***4-Input NAND***
.subckt	NAND4	in1	in2	in3	in4	out	wn=1.25u	wp=3.75u	le=0.18u
m1	out	in2	vdd	vdd	mp18	w=wp	l=le
m2	out	in1	vdd	vdd	mp18	w=wp	l=le
m3	out	in3	vdd	vdd	mp18	w=wp	l=le
m4	out	in4	vdd	vdd	mp18	w=wp	l=le
m5	out	in1	a	0	mn18	w='4*wn'	l=le
m6	a	in2	b	0	mn18	w='4*wn'	l=le
m7	b	in3	c	0	mn18	w='4*wn'	l=le
m8	c	in4	0	0	mn18	w='4*wn'	l=le
.ends

***NOR***
.subckt	NOR	in1	in2	out	wn=1.25u	wp=3.75u	le=0.18u
m1	a	in2	vdd	vdd	mp18	w='2*wp'	l=le
m2	out	in1	a	vdd	mp18	w='2*wp'	l=le
m3	out	in1	0	0	mn18	w=wn	l=le
m4	out	in2	0	0	mn18	w=wn	l=le
.ends

***3-Input NOR***
.subckt	NOR3	in1	in2	in3	out	wn=1.25u	wp=3.75u	le=0.18u
m1	b	in3	vdd	vdd	mp18	w='3*wp'	l=le
m2	a	in2	b	vdd	mp18	w='3*wp'	l=le
m3	out	in1	a	vdd	mp18	w='3*wp'	l=le
m4	out	in1	0	0	mn18	w=wn	l=le
m5	out	in2	0	0	mn18	w=wn	l=le
m6	out	in3	0	0	mn18	w=wn	l=le
.ends

***1x16 Precharge Circuit Array***
.subckt	Pr16	cs	b1	b1^	b2	b2^	b3	b3^	b4	b4^	b5	b5^	b6	b6^	b7	b7^	b8	b8^	b9	b9^	b10	b10^	b11	b11^	b12	b12^	b13	b13^	b14	b14^	b15	b15^	b16	b16^	wn=1.25u	wp=3.75u
x1	cs	b1	b1^	Precharge	wn='wn'	wp='wp'
x2	cs	b2	b2^	Precharge	wn='wn'	wp='wp'
x3	cs	b3	b3^	Precharge	wn='wn'	wp='wp'
x4	cs	b4	b4^	Precharge	wn='wn'	wp='wp'
x5	cs	b5	b5^	Precharge	wn='wn'	wp='wp'
x6	cs	b6	b6^	Precharge	wn='wn'	wp='wp'
x7	cs	b7	b7^	Precharge	wn='wn'	wp='wp'
x8	cs	b8	b8^	Precharge	wn='wn'	wp='wp'
x9	cs	b9	b9^	Precharge	wn='wn'	wp='wp'
x10	cs	b10	b10^	Precharge	wn='wn'	wp='wp'
x11	cs	b11	b11^	Precharge	wn='wn'	wp='wp'
x12	cs	b12	b12^	Precharge	wn='wn'	wp='wp'
x13	cs	b13	b13^	Precharge	wn='wn'	wp='wp'
x14	cs	b14	b14^	Precharge	wn='wn'	wp='wp'
x15	cs	b15	b15^	Precharge	wn='wn'	wp='wp'
x16	cs	b16	b16^	Precharge	wn='wn'	wp='wp'
.ends

***Precharge Circuit***
.subckt	Precharge	cs	b	b^	wn=1.25u	wp=3.75u	le=0.18u
m1	vdd	vdd	b	0	mn18	w=wn	l=le
m2	vdd	vdd	b^	0	mn18	w=wn	l=le
m3	b	cs	b^	vdd	mp18	w=wp	l=le
.ends

***1x16 Bitline Circuit Array***
.subckt	Bitline16	write	data1	data2	data3	data4	data5	data6	data7	data8	data9	data10	data11	data12	data13	data14	data15	data16	cs	b1	b1^	b2	b2^	b3	b3^	b4	b4^	b5	b5^	b6	b6^	b7	b7^	b8	b8^	b9	b9^	b10	b10^	b11	b11^	b12	b12^	b13	b13^	b14	b14^	b15	b15^	b16	b16^	wn=3.75u	wp=3.75u	le=0.18u
x1	write	data1	cs	b1	b1^	Bitline	wn='wn'	wp='wp'
x2	write	data2	cs	b2	b2^	Bitline	wn='wn'	wp='wp'
x3	write	data3	cs	b3	b3^	Bitline	wn='wn'	wp='wp'
x4	write	data4	cs	b4	b4^	Bitline	wn='wn'	wp='wp'
x5	write	data5	cs	b5	b5^	Bitline	wn='wn'	wp='wp'
x6	write	data6	cs	b6	b6^	Bitline	wn='wn'	wp='wp'
x7	write	data7	cs	b7	b7^	Bitline	wn='wn'	wp='wp'
x8	write	data8	cs	b8	b8^	Bitline	wn='wn'	wp='wp'
x9	write	data9	cs	b9	b9^	Bitline	wn='wn'	wp='wp'
x10	write	data10	cs	b10	b10^	Bitline	wn='wn'	wp='wp'
x11	write	data11	cs	b11	b11^	Bitline	wn='wn'	wp='wp'
x12	write	data12	cs	b12	b12^	Bitline	wn='wn'	wp='wp'
x13	write	data13	cs	b13	b13^	Bitline	wn='wn'	wp='wp'
x14	write	data14	cs	b14	b14^	Bitline	wn='wn'	wp='wp'
x15	write	data15	cs	b15	b15^	Bitline	wn='wn'	wp='wp'
x16	write	data16	cs	b16	b16^	Bitline	wn='wn'	wp='wp'
.ends

***Bitline Circuit***
.subckt	Bitline	write	data	cs	b	b^	wn=0.5u	wp=1.5u	le=0.18u
x1	data	data^	INV	wn=0.25u	wp=0.75u
m1	b	write	1	0	mn18	w=wn	l=le
m2	1	data^	3	0	mn18	w=wn	l=le
m3	b^	write	2	0	mn18	w=wn	l=le
m4	2	data	3	0	mn18	w=wn	l=le
m5	3	cs	0	0	mn18	w=wn	l=le
.ends

***Memory Cell***	*Page 341 of the Hodges book
.subckt	Cell	w	b	b^	wn=0.375u	le=0.18u
m1	q	q^	0	0	mn18	w=0.56u	l='le'		**w='wn*1.5'
m2	q^	q	0	0	mn18	w=0.56u	l='le'		**w='wn*1.5'

m3	b	w	q	0	mn18	w='wn'	l='le'		**w='wn'
m4	b^	w	q^	0	mn18	w='wn'	l='le'		**w='wn'

m5	q	q^	vdd	vdd	mp18	w=0.25u	l='le'		**w='wn/1.5'
m6	q^	q	vdd	vdd	mp18	w=0.25u	l='le'		**w='wn/1.5'
.ends

***1x16	Sense Amplifier Array***
.subckt	SenseAmp16	cs	b1	b1^	b2	b2^	b3	b3^	b4	b4^	b5	b5^	b6	b6^	b7	b7^	b8	b8^	b9	b9^	b10	b10^	b11	b11^	b12	b12^	b13	b13^	b14	b14^	b15	b15^	b16	b16^	out1	out2	out3	out4	out5	out6	out7	out8	out9	out10	out11	out12	out13	out14	out15	out16
x1	cs	b1	b1^	out1	Sense-Amp-Simple
x2	cs	b2	b2^	out2	Sense-Amp-Simple
x3	cs	b3	b3^	out3	Sense-Amp-Simple
x4	cs	b4	b4^	out4	Sense-Amp-Simple
x5	cs	b5	b5^	out5	Sense-Amp-Simple
x6	cs	b6	b6^	out6	Sense-Amp-Simple
x7	cs	b7	b7^	out7	Sense-Amp-Simple
x8	cs	b8	b8^	out8	Sense-Amp-Simple
x9	cs	b9	b9^	out9	Sense-Amp-Simple
x10	cs	b10	b10^	out10	Sense-Amp-Simple
x11	cs	b11	b11^	out11	Sense-Amp-Simple
x12	cs	b12	b12^	out12	Sense-Amp-Simple
x13	cs	b13	b13^	out13	Sense-Amp-Simple
x14	cs	b14	b14^	out14	Sense-Amp-Simple
x15	cs	b15	b15^	out15	Sense-Amp-Simple
x16	cs	b16	b16^	out16	Sense-Amp-Simple
.ends

***Sense Amplifier***(Simple)
.subckt	Sense-Amp-Simple	cs	b	b^	out	wn=0.5u	wp=1.5u	le=0.3u
m1	out	b^	5	0	mn18	w=wn	l=le
m2	2	b	5	0	mn18	w=wn	l=le
m3	out	2	vdd	vdd	mp18	w=wp	l=le
m4	2	2	vdd	vdd	mp18	w=wp	l=le
m5	5	cs	0	0	mn18	w='2*wn'	l=le
m11	2	cs	out	vdd	mp18	w=wp	l=le
.ends

.ends	RAM