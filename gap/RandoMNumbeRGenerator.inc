*Random Number Generator Module

.subckt	Random-Number-Generator	ck	ck^	Initialize^	PRNG-Seed-Select-Pin-0	PRNG-Seed-Select-Pin-1	PRNG-Seed-Select-Pin-2	PRNG-Seed-Select-Pin-3	finalout1	finalout2	finalout3	finalout4	finalout5	finalout6	finalout7	finalout8	finalout9	finalout10	finalout11	finalout12	finalout13	finalout14	finalout15	finalout16	finalout17	finalout18	finalout19	finalout20	finalout21	finalout22	finalout23	finalout24	finalout25	finalout26	finalout27	finalout28	finalout29	finalout30	finalout31	finalout32	finalout33	finalout34	finalout35	finalout36	finalout37	finalout38	finalout39	finalout40	finalout41	finalout42	finalout43	finalout44	finalout45	finalout46	finalout47	finalout48	finalout49	finalout50	finalout51	finalout52	finalout53	finalout54	finalout55	finalout56	finalout57	finalout58	finalout59	finalout60	finalout61	finalout62	finalout63	finalout64	finalout65	finalout66	finalout67	finalout68	finalout69	finalout70	finalout71	finalout72	finalout73	finalout74	finalout75	finalout76	finalout77	finalout78	finalout79	finalout80	finalout81	finalout82	finalout83	finalout84	finalout85	finalout86	finalout87	finalout88	finalout89	finalout90	finalout91	finalout92	finalout93	finalout94	finalout95	finalout96	finalout97	finalout98	finalout99	finalout100	finalout101	finalout102	finalout103	finalout104	finalout105	finalout106	finalout107	finalout108	finalout109	finalout110	finalout111	finalout112	finalout113	finalout114	finalout115	finalout116	finalout117	finalout118	finalout119	finalout120	finalout121	finalout122	finalout123	finalout124	finalout125	finalout126	finalout127	finalout128	finalout129	finalout130	finalout131	finalout132	finalout133	finalout134	finalout135	finalout136	finalout137	finalout138	finalout139	finalout140	finalout141	finalout142	finalout143	finalout144	finalout145	finalout146	finalout147	finalout148	finalout149	finalout150	finalout151	finalout152	finalout153	finalout154	finalout155	finalout156	finalout157	finalout158	finalout159	finalout160	finalout161	finalout162	finalout163	finalout164	finalout165	finalout166	finalout167	finalout168	finalout169	finalout170	finalout171	finalout172	finalout173	finalout174	finalout175	finalout176	finalout177	finalout178	finalout179	finalout180	finalout181	finalout182	finalout183	finalout184	finalout185	finalout186	finalout187	finalout188	finalout189	finalout190	finalout191	finalout192	finalout193	finalout194	finalout195	finalout196	finalout197	finalout198	finalout199	finalout200	finalout201	finalout202	finalout203	finalout204	finalout205	finalout206	finalout207	finalout208	finalout209	finalout210	finalout211	finalout212	finalout213	finalout214	finalout215	finalout216	finalout217	finalout218	finalout219	finalout220	finalout221	finalout222	finalout223	finalout224	finalout225	finalout226	finalout227	finalout228	finalout229	finalout230	finalout231	finalout232	finalout233	finalout234


* out1 instead of out0, because the first rule 90 is in fact a rule 150 with one 'zero' input so the first line of the subcircuit in this call is:
* x1	out1	out2	out2^	ck	ck^	out1	out1^	Rule90	***Rule 150
x1	ck	ck^	intcond1	intcond2	intcond3	intcond4	intcond5	intcond6	intcond7	intcond8	intcond9	intcond10	intcond11	intcond12	intcond13	intcond14	intcond15	intcond16	intcond17	intcond18	intcond19	intcond20	intcond21	intcond22	intcond23	intcond24	intcond25	intcond26	intcond27	intcond28	intcond29	intcond30	intcond31	intcond32	finalout1^	finalout2^	finalout3^	finalout4^	finalout5^	finalout6^	finalout7^	finalout8^	finalout9^	finalout10^	finalout11^	finalout12^	finalout13^	finalout14^	finalout15^	finalout16^	finalout17^	finalout18^	finalout19^	finalout20^	finalout21^	finalout22^	finalout23^	finalout24^	finalout25^	finalout26^	finalout27^	finalout28^	finalout29^	finalout30^	finalout31^	finalout32^	finalout1	finalout2	finalout3	finalout4	finalout5	finalout6	finalout7	finalout8	finalout9	finalout10	finalout11	finalout12	finalout13	finalout14	finalout15	finalout16	finalout17	finalout18	finalout19	finalout20	finalout21	finalout22	finalout23	finalout24	finalout25	finalout26	finalout27	finalout28	finalout29	finalout30	finalout31	finalout32	out1^	out2^	out3^	out4^	out5^	out6^	out7^	out8^	out9^	out10^	out11^	out12^	out13^	out14^	out15^	out16^	out17^	out18^	out19^	out20^	out21^	out22^	out23^	out24^	out25^	out26^	out27^	out28^	out29^	out30^	out31^	out32^	out1	out2	out3	out4	out5	out6	out7	out8	out9	out10	out11	out12	out13	out14	out15	out16	out17	out18	out19	out20	out21	out22	out23	out24	out25	out26	out27	out28	out29	out30	out31	out32	out33	out33^	out1	PRNG32

x2	ck	ck^	intcond33	intcond34	intcond35	intcond36	intcond37	intcond38	intcond39	intcond40	intcond41	intcond42	intcond43	intcond44	intcond45	intcond46	intcond47	intcond48	intcond49	intcond50	intcond51	intcond52	intcond53	intcond54	intcond55	intcond56	intcond57	intcond58	intcond59	intcond60	intcond61	intcond62	intcond63	intcond64	finalout33^	finalout34^	finalout35^	finalout36^	finalout37^	finalout38^	finalout39^	finalout40^	finalout41^	finalout42^	finalout43^	finalout44^	finalout45^	finalout46^	finalout47^	finalout48^	finalout49^	finalout50^	finalout51^	finalout52^	finalout53^	finalout54^	finalout55^	finalout56^	finalout57^	finalout58^	finalout59^	finalout60^	finalout61^	finalout62^	finalout63^	finalout64^	finalout33	finalout34	finalout35	finalout36	finalout37	finalout38	finalout39	finalout40	finalout41	finalout42	finalout43	finalout44	finalout45	finalout46	finalout47	finalout48	finalout49	finalout50	finalout51	finalout52	finalout53	finalout54	finalout55	finalout56	finalout57	finalout58	finalout59	finalout60	finalout61	finalout62	finalout63	finalout64	out33^	out34^	out35^	out36^	out37^	out38^	out39^	out40^	out41^	out42^	out43^	out44^	out45^	out46^	out47^	out48^	out49^	out50^	out51^	out52^	out53^	out54^	out55^	out56^	out57^	out58^	out59^	out60^	out61^	out62^	out63^	out64^	out33	out34	out35	out36	out37	out38	out39	out40	out41	out42	out43	out44	out45	out46	out47	out48	out49	out50	out51	out52	out53	out54	out55	out56	out57	out58	out59	out60	out61	out62	out63	out64	out65	out65^	out32	PRNG32

x3	ck	ck^	intcond65	intcond66	intcond67	intcond68	intcond69	intcond70	intcond71	intcond72	intcond73	intcond74	intcond75	intcond76	intcond77	intcond78	intcond79	intcond80	intcond81	intcond82	intcond83	intcond84	intcond85	intcond86	intcond87	intcond88	intcond89	intcond90	intcond91	intcond92	intcond93	intcond94	intcond95	intcond96	finalout65^	finalout66^	finalout67^	finalout68^	finalout69^	finalout70^	finalout71^	finalout72^	finalout73^	finalout74^	finalout75^	finalout76^	finalout77^	finalout78^	finalout79^	finalout80^	finalout81^	finalout82^	finalout83^	finalout84^	finalout85^	finalout86^	finalout87^	finalout88^	finalout89^	finalout90^	finalout91^	finalout92^	finalout93^	finalout94^	finalout95^	finalout96^	finalout65	finalout66	finalout67	finalout68	finalout69	finalout70	finalout71	finalout72	finalout73	finalout74	finalout75	finalout76	finalout77	finalout78	finalout79	finalout80	finalout81	finalout82	finalout83	finalout84	finalout85	finalout86	finalout87	finalout88	finalout89	finalout90	finalout91	finalout92	finalout93	finalout94	finalout95	finalout96	out65^	out66^	out67^	out68^	out69^	out70^	out71^	out72^	out73^	out74^	out75^	out76^	out77^	out78^	out79^	out80^	out81^	out82^	out83^	out84^	out85^	out86^	out87^	out88^	out89^	out90^	out91^	out92^	out93^	out94^	out95^	out96^	out65	out66	out67	out68	out69	out70	out71	out72	out73	out74	out75	out76	out77	out78	out79	out80	out81	out82	out83	out84	out85	out86	out87	out88	out89	out90	out91	out92	out93	out94	out95	out96	out97	out97^	out64	PRNG32

x4	ck	ck^	intcond97	intcond98	intcond99	intcond100	intcond101	intcond102	intcond103	intcond104	intcond105	intcond106	intcond107	intcond108	intcond109	intcond110	intcond111	intcond112	intcond113	intcond114	intcond115	intcond116	intcond117	intcond118	intcond119	intcond120	intcond121	intcond122	intcond123	intcond124	intcond125	intcond126	intcond127	intcond128	finalout97^	finalout98^	finalout99^	finalout100^	finalout101^	finalout102^	finalout103^	finalout104^	finalout105^	finalout106^	finalout107^	finalout108^	finalout109^	finalout110^	finalout111^	finalout112^	finalout113^	finalout114^	finalout115^	finalout116^	finalout117^	finalout118^	finalout119^	finalout120^	finalout121^	finalout122^	finalout123^	finalout124^	finalout125^	finalout126^	finalout127^	finalout128^	finalout97	finalout98	finalout99	finalout100	finalout101	finalout102	finalout103	finalout104	finalout105	finalout106	finalout107	finalout108	finalout109	finalout110	finalout111	finalout112	finalout113	finalout114	finalout115	finalout116	finalout117	finalout118	finalout119	finalout120	finalout121	finalout122	finalout123	finalout124	finalout125	finalout126	finalout127	finalout128	out97^	out98^	out99^	out100^	out101^	out102^	out103^	out104^	out105^	out106^	out107^	out108^	out109^	out110^	out111^	out112^	out113^	out114^	out115^	out116^	out117^	out118^	out119^	out120^	out121^	out122^	out123^	out124^	out125^	out126^	out127^	out128^	out97	out98	out99	out100	out101	out102	out103	out104	out105	out106	out107	out108	out109	out110	out111	out112	out113	out114	out115	out116	out117	out118	out119	out120	out121	out122	out123	out124	out125	out126	out127	out128	out129	out129^	out96	PRNG32

x5	ck	ck^	intcond129	intcond130	intcond131	intcond132	intcond133	intcond134	intcond135	intcond136	intcond137	intcond138	intcond139	intcond140	intcond141	intcond142	intcond143	intcond144	intcond145	intcond146	intcond147	intcond148	intcond149	intcond150	intcond151	intcond152	intcond153	intcond154	intcond155	intcond156	intcond157	intcond158	intcond159	intcond160	finalout129^	finalout130^	finalout131^	finalout132^	finalout133^	finalout134^	finalout135^	finalout136^	finalout137^	finalout138^	finalout139^	finalout140^	finalout141^	finalout142^	finalout143^	finalout144^	finalout145^	finalout146^	finalout147^	finalout148^	finalout149^	finalout150^	finalout151^	finalout152^	finalout153^	finalout154^	finalout155^	finalout156^	finalout157^	finalout158^	finalout159^	finalout160^	finalout129	finalout130	finalout131	finalout132	finalout133	finalout134	finalout135	finalout136	finalout137	finalout138	finalout139	finalout140	finalout141	finalout142	finalout143	finalout144	finalout145	finalout146	finalout147	finalout148	finalout149	finalout150	finalout151	finalout152	finalout153	finalout154	finalout155	finalout156	finalout157	finalout158	finalout159	finalout160	out129^	out130^	out131^	out132^	out133^	out134^	out135^	out136^	out137^	out138^	out139^	out140^	out141^	out142^	out143^	out144^	out145^	out146^	out147^	out148^	out149^	out150^	out151^	out152^	out153^	out154^	out155^	out156^	out157^	out158^	out159^	out160^	out129	out130	out131	out132	out133	out134	out135	out136	out137	out138	out139	out140	out141	out142	out143	out144	out145	out146	out147	out148	out149	out150	out151	out152	out153	out154	out155	out156	out157	out158	out159	out160	out161	out161^	out128	PRNG32

x6	ck	ck^	intcond161	intcond162	intcond163	intcond164	intcond165	intcond166	intcond167	intcond168	intcond169	intcond170	intcond171	intcond172	intcond173	intcond174	intcond175	intcond176	intcond177	intcond178	intcond179	intcond180	intcond181	intcond182	intcond183	intcond184	intcond185	intcond186	intcond187	intcond188	intcond189	intcond190	intcond191	intcond192	finalout161^	finalout162^	finalout163^	finalout164^	finalout165^	finalout166^	finalout167^	finalout168^	finalout169^	finalout170^	finalout171^	finalout172^	finalout173^	finalout174^	finalout175^	finalout176^	finalout177^	finalout178^	finalout179^	finalout180^	finalout181^	finalout182^	finalout183^	finalout184^	finalout185^	finalout186^	finalout187^	finalout188^	finalout189^	finalout190^	finalout191^	finalout192^	finalout161	finalout162	finalout163	finalout164	finalout165	finalout166	finalout167	finalout168	finalout169	finalout170	finalout171	finalout172	finalout173	finalout174	finalout175	finalout176	finalout177	finalout178	finalout179	finalout180	finalout181	finalout182	finalout183	finalout184	finalout185	finalout186	finalout187	finalout188	finalout189	finalout190	finalout191	finalout192	out161^	out162^	out163^	out164^	out165^	out166^	out167^	out168^	out169^	out170^	out171^	out172^	out173^	out174^	out175^	out176^	out177^	out178^	out179^	out180^	out181^	out182^	out183^	out184^	out185^	out186^	out187^	out188^	out189^	out190^	out191^	out192^	out161	out162	out163	out164	out165	out166	out167	out168	out169	out170	out171	out172	out173	out174	out175	out176	out177	out178	out179	out180	out181	out182	out183	out184	out185	out186	out187	out188	out189	out190	out191	out192	out193	out193^	out160	PRNG32

x7	ck	ck^	intcond193	intcond194	intcond195	intcond196	intcond197	intcond198	intcond199	intcond200	intcond201	intcond202	intcond203	intcond204	intcond205	intcond206	intcond207	intcond208	intcond209	intcond210	intcond211	intcond212	intcond213	intcond214	intcond215	intcond216	intcond217	intcond218	intcond219	intcond220	intcond221	intcond222	intcond223	intcond224	finalout193^	finalout194^	finalout195^	finalout196^	finalout197^	finalout198^	finalout199^	finalout200^	finalout201^	finalout202^	finalout203^	finalout204^	finalout205^	finalout206^	finalout207^	finalout208^	finalout209^	finalout210^	finalout211^	finalout212^	finalout213^	finalout214^	finalout215^	finalout216^	finalout217^	finalout218^	finalout219^	finalout220^	finalout221^	finalout222^	finalout223^	finalout224^	finalout193	finalout194	finalout195	finalout196	finalout197	finalout198	finalout199	finalout200	finalout201	finalout202	finalout203	finalout204	finalout205	finalout206	finalout207	finalout208	finalout209	finalout210	finalout211	finalout212	finalout213	finalout214	finalout215	finalout216	finalout217	finalout218	finalout219	finalout220	finalout221	finalout222	finalout223	finalout224	out193^	out194^	out195^	out196^	out197^	out198^	out199^	out200^	out201^	out202^	out203^	out204^	out205^	out206^	out207^	out208^	out209^	out210^	out211^	out212^	out213^	out214^	out215^	out216^	out217^	out218^	out219^	out220^	out221^	out222^	out223^	out224^	out193	out194	out195	out196	out197	out198	out199	out200	out201	out202	out203	out204	out205	out206	out207	out208	out209	out210	out211	out212	out213	out214	out215	out216	out217	out218	out219	out220	out221	out222	out223	out224	out225	out225^	out192	PRNG32

* the last rule 90 is in fact a rule 150 with one 'zero' input so the last line of the subcircuit in this call is:
* x234	out234	out233	out233^	ck	ck^	out234	out234^	Rule90	***Rule 150
x8	ck	ck^	intcond225	intcond226	intcond227	intcond228	intcond229	intcond230	intcond231	intcond232	intcond233	intcond234	finalout225^	finalout226^	finalout227^	finalout228^	finalout229^	finalout230^	finalout231^	finalout232^	finalout233^	finalout234^	finalout225	finalout226	finalout227	finalout228	finalout229	finalout230	finalout231	finalout232	finalout233	finalout234	out225^	out226^	out227^	out228^	out229^	out230^	out231^	out232^	out233^	out234^	out225	out226	out227	out228	out229	out230	out231	out232	out233	out234	out224	PRNG10


*prng initialization
x9	PRNG-Seed-Select-Pin-0	PRNG-Seed-Select-Pin-1	PRNG-Seed-Select-Pin-2	PRNG-Seed-Select-Pin-3	Initialize^	dec0	dec1	dec2	dec3	dec4	dec5	dec6	dec7	dec8	dec9	dec10	dec11	dec12	dec13	dec14	dec15	Decoder5Bit-Outputs-16-m10	wn=3u	wp=9u

x10	dec0	dec0^	INV	wn=15u	wp=45u
x11	dec1	dec1^	INV	wn=15u	wp=45u
x12	dec2	dec2^	INV	wn=15u	wp=45u
x13	dec3	dec3^	INV	wn=15u	wp=45u
x52	dec4	dec4^	INV	wn=15u	wp=45u
x53	dec5	dec5^	INV	wn=15u	wp=45u
x54	dec6	dec6^	INV	wn=15u	wp=45u
x55	dec7	dec7^	INV	wn=15u	wp=45u
x56	dec8	dec8^	INV	wn=15u	wp=45u
x57	dec9	dec9^	INV	wn=15u	wp=45u
x58	dec10	dec10^	INV	wn=15u	wp=45u
x59	dec11	dec11^	INV	wn=15u	wp=45u
x60	dec12	dec12^	INV	wn=15u	wp=45u
x61	dec13	dec13^	INV	wn=15u	wp=45u
x62	dec14	dec14^	INV	wn=15u	wp=45u
x63	dec15	dec15^	INV	wn=15u	wp=45u


*seed1
x14	dec0^	intcond144	intcond100	intcond162	intcond122	intcond84	intcond118	intcond105	intcond198	intcond176	intcond208	intcond190	intcond110	intcond154	intcond35	intcond53	intcond23	intcond206	intcond20	intcond87	intcond91	intcond116	intcond52	intcond66	intcond43	intcond150	intcond114	intcond142	intcond107	intcond88	intcond3	intcond121	intcond215	intcond6	intcond58	intcond33	intcond130	intcond99	intcond101	intcond47	intcond2	intcond113	intcond45	intcond12	intcond230	intcond145	intcond173	intcond182	intcond65	intcond147	intcond7	intcond56	intcond44	intcond80	intcond159	intcond120	intcond83	intcond119	intcond67	intcond195	intcond140	intcond34	intcond18	intcond168	intcond93	intcond188	intcond134	intcond126	intcond187	intcond141	intcond94	intcond4	intcond151	intcond231	intcond158	intcond213	intcond161	intcond217	intcond233	intcond39	intcond171	intcond123	intcond86	intcond19	intcond131	intcond46	intcond201	intcond199	intcond63	intcond26	intcond207	intcond77	intcond139	intcond59	intcond156	intcond117	intcond49	intcond143	intcond81	intcond211	intcond163	intcond204	intcond38	intcond202	intcond60	intcond22	intcond29	intcond221	intcond25	intcond193	intcond197	intcond183	intcond24	intcond224	intcond64	intcond212	intcond133	intcond95	seed-vdd-117

x15	dec0	intcond218	intcond73	intcond50	intcond234	intcond40	intcond28	intcond51	intcond138	intcond5	intcond75	intcond191	intcond17	intcond200	intcond8	intcond167	intcond128	intcond98	intcond166	intcond210	intcond55	intcond71	intcond174	intcond78	intcond57	intcond97	intcond82	intcond226	intcond76	intcond165	intcond92	intcond146	intcond152	intcond229	intcond164	intcond194	intcond225	intcond32	intcond85	intcond124	intcond170	intcond137	intcond178	intcond108	intcond214	intcond109	intcond228	intcond1	intcond155	intcond232	intcond10	intcond129	intcond205	intcond115	intcond136	intcond31	intcond11	intcond179	intcond184	intcond196	intcond220	intcond90	intcond181	intcond61	intcond74	intcond37	intcond102	intcond96	intcond72	intcond112	intcond54	intcond135	intcond14	intcond103	intcond48	intcond185	intcond127	intcond125	intcond203	intcond21	intcond192	intcond15	intcond153	intcond69	intcond62	intcond41	intcond177	intcond9	intcond30	intcond160	intcond186	intcond104	intcond42	intcond27	intcond169	intcond209	intcond89	intcond189	intcond70	intcond175	intcond216	intcond79	intcond36	intcond68	intcond132	intcond180	intcond172	intcond227	intcond222	intcond157	intcond111	intcond149	intcond148	intcond223	intcond16	intcond13	intcond106	intcond219	seed-gnd-117

*seed2
x22	dec1^	intcond141	intcond213	intcond178	intcond231	intcond6	intcond12	intcond173	intcond220	intcond7	intcond208	intcond188	intcond123	intcond149	intcond139	intcond233	intcond177	intcond140	intcond108	intcond60	intcond42	intcond119	intcond154	intcond206	intcond91	intcond45	intcond97	intcond117	intcond59	intcond103	intcond116	intcond39	intcond94	intcond16	intcond193	intcond142	intcond124	intcond58	intcond11	intcond132	intcond46	intcond224	intcond204	intcond95	intcond57	intcond144	intcond25	intcond31	intcond114	intcond78	intcond75	intcond32	intcond232	intcond34	intcond198	intcond35	intcond155	intcond27	intcond30	intcond159	intcond87	intcond153	intcond175	intcond201	intcond54	intcond73	intcond145	intcond4	intcond207	intcond212	intcond99	intcond234	intcond48	intcond107	intcond33	intcond126	intcond203	intcond1	intcond164	intcond150	intcond109	intcond179	intcond157	intcond62	intcond174	intcond66	intcond28	intcond167	intcond29	intcond147	intcond8	intcond181	intcond169	intcond205	intcond71	intcond5	intcond186	intcond166	intcond218	intcond106	intcond160	intcond219	intcond131	intcond69	intcond36	intcond89	intcond104	intcond19	intcond176	intcond88	intcond209	intcond76	intcond122	intcond191	intcond86	intcond195	intcond83	intcond98	seed-vdd-117

x23	dec1	intcond217	intcond187	intcond165	intcond192	intcond85	intcond143	intcond120	intcond222	intcond163	intcond43	intcond82	intcond50	intcond80	intcond111	intcond216	intcond190	intcond22	intcond24	intcond226	intcond53	intcond113	intcond93	intcond81	intcond221	intcond79	intcond128	intcond10	intcond225	intcond184	intcond121	intcond47	intcond96	intcond2	intcond125	intcond172	intcond227	intcond38	intcond210	intcond49	intcond230	intcond40	intcond211	intcond194	intcond214	intcond70	intcond196	intcond229	intcond228	intcond162	intcond168	intcond215	intcond21	intcond44	intcond72	intcond61	intcond84	intcond51	intcond127	intcond17	intcond56	intcond134	intcond199	intcond151	intcond170	intcond156	intcond55	intcond77	intcond182	intcond14	intcond135	intcond15	intcond223	intcond74	intcond130	intcond202	intcond152	intcond23	intcond171	intcond90	intcond118	intcond105	intcond37	intcond197	intcond110	intcond115	intcond137	intcond26	intcond65	intcond13	intcond136	intcond200	intcond133	intcond183	intcond185	intcond180	intcond3	intcond189	intcond102	intcond64	intcond148	intcond41	intcond100	intcond52	intcond101	intcond68	intcond138	intcond146	intcond9	intcond18	intcond158	intcond63	intcond67	intcond92	intcond112	intcond161	intcond129	intcond20	seed-gnd-117

*seed3
x24	dec2^	intcond184	intcond166	intcond186	intcond152	intcond232	intcond22	intcond217	intcond124	intcond73	intcond72	intcond151	intcond23	intcond49	intcond203	intcond60	intcond75	intcond114	intcond139	intcond79	intcond231	intcond143	intcond109	intcond82	intcond211	intcond7	intcond129	intcond198	intcond76	intcond158	intcond204	intcond67	intcond1	intcond5	intcond225	intcond70	intcond179	intcond104	intcond189	intcond169	intcond131	intcond196	intcond14	intcond34	intcond50	intcond135	intcond110	intcond45	intcond191	intcond30	intcond132	intcond138	intcond157	intcond115	intcond159	intcond154	intcond80	intcond33	intcond209	intcond125	intcond52	intcond89	intcond69	intcond61	intcond212	intcond88	intcond116	intcond78	intcond39	intcond18	intcond51	intcond6	intcond128	intcond9	intcond168	intcond85	intcond233	intcond201	intcond71	intcond207	intcond59	intcond160	intcond226	intcond111	intcond19	intcond93	intcond81	intcond163	intcond130	intcond155	intcond223	intcond38	intcond68	intcond54	intcond150	intcond227	intcond25	intcond83	intcond101	intcond87	intcond66	intcond173	intcond216	intcond215	intcond192	intcond77	intcond122	intcond32	intcond74	intcond53	intcond36	intcond29	intcond162	intcond121	intcond42	intcond3	intcond181	intcond44	seed-vdd-117

x25	dec2	intcond99	intcond10	intcond96	intcond146	intcond194	intcond64	intcond187	intcond153	intcond27	intcond210	intcond185	intcond228	intcond31	intcond137	intcond222	intcond170	intcond20	intcond12	intcond176	intcond200	intcond35	intcond144	intcond190	intcond2	intcond145	intcond214	intcond123	intcond15	intcond8	intcond127	intcond90	intcond188	intcond102	intcond205	intcond37	intcond142	intcond84	intcond97	intcond230	intcond177	intcond140	intcond21	intcond180	intcond55	intcond41	intcond62	intcond149	intcond95	intcond13	intcond16	intcond28	intcond106	intcond164	intcond208	intcond174	intcond136	intcond182	intcond206	intcond229	intcond107	intcond219	intcond178	intcond195	intcond113	intcond4	intcond91	intcond156	intcond105	intcond118	intcond120	intcond197	intcond199	intcond117	intcond221	intcond202	intcond133	intcond63	intcond58	intcond94	intcond126	intcond40	intcond48	intcond100	intcond56	intcond26	intcond98	intcond167	intcond43	intcond165	intcond172	intcond161	intcond17	intcond103	intcond112	intcond218	intcond220	intcond234	intcond11	intcond47	intcond183	intcond65	intcond119	intcond193	intcond147	intcond92	intcond86	intcond46	intcond175	intcond141	intcond148	intcond134	intcond108	intcond224	intcond171	intcond213	intcond57	intcond24	seed-gnd-117

*seed4
x26	dec3^	intcond100	intcond23	intcond40	intcond35	intcond56	intcond217	intcond88	intcond138	intcond188	intcond179	intcond148	intcond14	intcond44	intcond62	intcond25	intcond170	intcond113	intcond34	intcond155	intcond108	intcond36	intcond45	intcond174	intcond49	intcond58	intcond176	intcond109	intcond129	intcond65	intcond209	intcond114	intcond157	intcond192	intcond79	intcond189	intcond186	intcond59	intcond20	intcond215	intcond199	intcond97	intcond143	intcond231	intcond28	intcond115	intcond77	intcond67	intcond110	intcond30	intcond213	intcond1	intcond55	intcond198	intcond149	intcond26	intcond107	intcond131	intcond204	intcond5	intcond8	intcond134	intcond227	intcond146	intcond121	intcond89	intcond144	intcond80	intcond154	intcond74	intcond90	intcond71	intcond139	intcond12	intcond187	intcond48	intcond130	intcond185	intcond16	intcond116	intcond13	intcond117	intcond51	intcond195	intcond151	intcond53	intcond153	intcond181	intcond2	intcond211	intcond137	intcond43	intcond32	intcond123	intcond225	intcond218	intcond159	intcond102	intcond229	intcond105	intcond160	intcond21	intcond86	intcond112	intcond63	intcond73	intcond46	intcond164	intcond210	intcond19	intcond135	intcond166	intcond95	intcond191	intcond163	intcond175	intcond41	intcond193	seed-vdd-117

x27	dec3	intcond226	intcond200	intcond103	intcond70	intcond11	intcond27	intcond140	intcond119	intcond93	intcond145	intcond92	intcond203	intcond50	intcond180	intcond142	intcond125	intcond61	intcond171	intcond17	intcond177	intcond81	intcond173	intcond7	intcond91	intcond15	intcond220	intcond68	intcond64	intcond37	intcond196	intcond169	intcond42	intcond6	intcond168	intcond22	intcond208	intcond224	intcond101	intcond216	intcond152	intcond207	intcond128	intcond120	intcond85	intcond165	intcond158	intcond31	intcond98	intcond38	intcond206	intcond162	intcond205	intcond39	intcond183	intcond230	intcond72	intcond212	intcond99	intcond4	intcond83	intcond141	intcond214	intcond75	intcond52	intcond29	intcond126	intcond9	intcond69	intcond57	intcond233	intcond96	intcond124	intcond150	intcond221	intcond167	intcond60	intcond33	intcond197	intcond201	intcond122	intcond54	intcond202	intcond147	intcond219	intcond66	intcond178	intcond3	intcond133	intcond161	intcond127	intcond190	intcond24	intcond223	intcond232	intcond172	intcond84	intcond18	intcond78	intcond132	intcond118	intcond156	intcond222	intcond87	intcond76	intcond10	intcond47	intcond111	intcond106	intcond136	intcond228	intcond104	intcond182	intcond184	intcond94	intcond194	intcond234	intcond82	seed-gnd-117

*seed5
x28	dec4^	intcond20	intcond66	intcond199	intcond78	intcond220	intcond120	intcond60	intcond111	intcond49	intcond32	intcond224	intcond196	intcond168	intcond186	intcond21	intcond223	intcond95	intcond213	intcond222	intcond43	intcond124	intcond175	intcond17	intcond151	intcond158	intcond9	intcond203	intcond82	intcond74	intcond200	intcond42	intcond10	intcond178	intcond48	intcond34	intcond127	intcond40	intcond166	intcond122	intcond75	intcond130	intcond183	intcond209	intcond123	intcond210	intcond61	intcond83	intcond230	intcond19	intcond45	intcond46	intcond110	intcond101	intcond155	intcond87	intcond131	intcond51	intcond108	intcond205	intcond221	intcond184	intcond59	intcond191	intcond142	intcond218	intcond206	intcond128	intcond53	intcond121	intcond173	intcond190	intcond94	intcond211	intcond54	intcond65	intcond159	intcond47	intcond150	intcond8	intcond174	intcond181	intcond30	intcond132	intcond79	intcond182	intcond195	intcond146	intcond141	intcond202	intcond23	intcond140	intcond76	intcond163	intcond228	intcond31	intcond232	intcond179	intcond85	intcond216	intcond169	intcond133	intcond119	intcond188	intcond231	intcond107	intcond177	intcond89	intcond154	intcond207	intcond171	intcond136	intcond73	intcond139	intcond58	intcond192	intcond138	intcond153	seed-vdd-117

x29	dec4	intcond176	intcond7	intcond4	intcond156	intcond167	intcond25	intcond115	intcond208	intcond164	intcond5	intcond180	intcond225	intcond126	intcond69	intcond103	intcond77	intcond214	intcond148	intcond67	intcond100	intcond197	intcond44	intcond137	intcond161	intcond165	intcond55	intcond215	intcond152	intcond143	intcond234	intcond35	intcond33	intcond134	intcond194	intcond27	intcond24	intcond117	intcond91	intcond198	intcond160	intcond63	intcond187	intcond125	intcond64	intcond71	intcond70	intcond226	intcond1	intcond84	intcond193	intcond2	intcond13	intcond129	intcond41	intcond38	intcond93	intcond50	intcond145	intcond90	intcond212	intcond114	intcond149	intcond227	intcond99	intcond81	intcond144	intcond57	intcond68	intcond116	intcond88	intcond189	intcond16	intcond22	intcond12	intcond29	intcond102	intcond37	intcond201	intcond229	intcond106	intcond15	intcond162	intcond52	intcond28	intcond72	intcond185	intcond233	intcond172	intcond118	intcond98	intcond26	intcond147	intcond96	intcond56	intcond6	intcond86	intcond217	intcond170	intcond92	intcond204	intcond157	intcond62	intcond104	intcond80	intcond219	intcond105	intcond39	intcond109	intcond135	intcond11	intcond14	intcond3	intcond97	intcond18	intcond36	intcond113	intcond112	seed-gnd-117

*seed6
x30	dec5^	intcond224	intcond223	intcond68	intcond137	intcond205	intcond81	intcond32	intcond153	intcond199	intcond25	intcond177	intcond23	intcond220	intcond162	intcond161	intcond77	intcond62	intcond144	intcond215	intcond140	intcond12	intcond101	intcond53	intcond60	intcond43	intcond208	intcond180	intcond195	intcond36	intcond150	intcond207	intcond114	intcond210	intcond95	intcond48	intcond20	intcond57	intcond108	intcond186	intcond130	intcond21	intcond136	intcond61	intcond11	intcond169	intcond107	intcond51	intcond2	intcond72	intcond8	intcond123	intcond117	intcond132	intcond197	intcond232	intcond142	intcond188	intcond29	intcond112	intcond190	intcond28	intcond55	intcond189	intcond183	intcond3	intcond206	intcond209	intcond90	intcond193	intcond171	intcond118	intcond103	intcond4	intcond185	intcond203	intcond135	intcond149	intcond173	intcond104	intcond176	intcond91	intcond102	intcond6	intcond111	intcond13	intcond196	intcond146	intcond151	intcond160	intcond7	intcond56	intcond14	intcond217	intcond33	intcond17	intcond79	intcond231	intcond124	intcond74	intcond24	intcond39	intcond93	intcond139	intcond58	intcond34	intcond120	intcond168	intcond175	intcond233	intcond109	intcond5	intcond158	intcond221	intcond116	intcond141	intcond100	intcond85	seed-vdd-117

x31	dec5	intcond211	intcond134	intcond179	intcond174	intcond147	intcond73	intcond214	intcond121	intcond170	intcond106	intcond65	intcond127	intcond125	intcond219	intcond181	intcond152	intcond128	intcond89	intcond122	intcond105	intcond47	intcond227	intcond75	intcond16	intcond145	intcond157	intcond167	intcond40	intcond94	intcond172	intcond184	intcond163	intcond10	intcond82	intcond218	intcond194	intcond229	intcond80	intcond129	intcond155	intcond178	intcond138	intcond84	intcond92	intcond131	intcond71	intcond234	intcond88	intcond70	intcond1	intcond154	intcond9	intcond19	intcond148	intcond99	intcond165	intcond86	intcond222	intcond115	intcond212	intcond159	intcond156	intcond50	intcond37	intcond64	intcond230	intcond35	intcond191	intcond31	intcond216	intcond202	intcond42	intcond26	intcond15	intcond66	intcond22	intcond46	intcond98	intcond143	intcond119	intcond27	intcond164	intcond198	intcond83	intcond45	intcond182	intcond126	intcond67	intcond133	intcond200	intcond54	intcond87	intcond226	intcond213	intcond228	intcond44	intcond96	intcond18	intcond204	intcond192	intcond49	intcond59	intcond97	intcond69	intcond201	intcond187	intcond52	intcond166	intcond76	intcond41	intcond63	intcond110	intcond30	intcond225	intcond113	intcond38	intcond78	seed-gnd-117

*seed7
x32	dec6^	intcond64	intcond196	intcond201	intcond45	intcond111	intcond221	intcond146	intcond106	intcond18	intcond33	intcond98	intcond226	intcond89	intcond190	intcond220	intcond166	intcond47	intcond181	intcond210	intcond15	intcond185	intcond162	intcond76	intcond206	intcond205	intcond200	intcond62	intcond219	intcond120	intcond119	intcond53	intcond105	intcond63	intcond157	intcond228	intcond148	intcond141	intcond97	intcond137	intcond151	intcond10	intcond218	intcond57	intcond96	intcond160	intcond229	intcond80	intcond153	intcond178	intcond121	intcond193	intcond227	intcond127	intcond104	intcond145	intcond40	intcond21	intcond118	intcond70	intcond116	intcond48	intcond156	intcond14	intcond24	intcond29	intcond99	intcond69	intcond192	intcond20	intcond83	intcond207	intcond128	intcond82	intcond60	intcond152	intcond176	intcond72	intcond189	intcond32	intcond28	intcond110	intcond86	intcond16	intcond211	intcond139	intcond7	intcond113	intcond44	intcond8	intcond93	intcond51	intcond131	intcond167	intcond13	intcond88	intcond115	intcond109	intcond154	intcond112	intcond65	intcond198	intcond31	intcond187	intcond35	intcond74	intcond25	intcond122	intcond184	intcond61	intcond208	intcond214	intcond26	intcond101	intcond150	intcond223	intcond46	intcond197	seed-vdd-117

x33	dec6	intcond49	intcond203	intcond117	intcond30	intcond3	intcond38	intcond67	intcond140	intcond95	intcond66	intcond213	intcond209	intcond43	intcond81	intcond224	intcond55	intcond92	intcond75	intcond5	intcond56	intcond234	intcond94	intcond170	intcond136	intcond232	intcond217	intcond12	intcond179	intcond102	intcond171	intcond202	intcond164	intcond6	intcond134	intcond19	intcond23	intcond132	intcond59	intcond42	intcond149	intcond41	intcond54	intcond107	intcond17	intcond216	intcond39	intcond230	intcond215	intcond37	intcond194	intcond163	intcond188	intcond126	intcond84	intcond90	intcond71	intcond2	intcond87	intcond68	intcond191	intcond155	intcond108	intcond1	intcond103	intcond195	intcond91	intcond73	intcond158	intcond22	intcond123	intcond124	intcond50	intcond168	intcond133	intcond173	intcond144	intcond52	intcond165	intcond114	intcond135	intcond180	intcond79	intcond138	intcond143	intcond9	intcond186	intcond58	intcond231	intcond159	intcond222	intcond142	intcond204	intcond174	intcond34	intcond175	intcond161	intcond177	intcond36	intcond147	intcond129	intcond169	intcond78	intcond130	intcond11	intcond182	intcond100	intcond172	intcond4	intcond212	intcond27	intcond125	intcond199	intcond183	intcond85	intcond233	intcond225	intcond77	seed-gnd-117

*seed8
x34	dec7^	intcond129	intcond30	intcond29	intcond127	intcond178	intcond131	intcond1	intcond132	intcond80	intcond112	intcond195	intcond71	intcond141	intcond20	intcond189	intcond93	intcond164	intcond98	intcond215	intcond152	intcond139	intcond179	intcond198	intcond227	intcond66	intcond87	intcond37	intcond75	intcond92	intcond83	intcond149	intcond5	intcond34	intcond172	intcond65	intcond169	intcond207	intcond22	intcond233	intcond100	intcond102	intcond217	intcond76	intcond120	intcond103	intcond24	intcond219	intcond119	intcond148	intcond117	intcond225	intcond142	intcond41	intcond231	intcond202	intcond192	intcond81	intcond105	intcond90	intcond160	intcond9	intcond143	intcond183	intcond38	intcond166	intcond59	intcond60	intcond115	intcond201	intcond136	intcond218	intcond197	intcond51	intcond146	intcond99	intcond151	intcond220	intcond176	intcond123	intcond33	intcond27	intcond108	intcond228	intcond48	intcond58	intcond89	intcond45	intcond182	intcond86	intcond109	intcond26	intcond122	intcond53	intcond163	intcond8	intcond216	intcond79	intcond74	intcond46	intcond206	intcond6	intcond21	intcond138	intcond116	intcond221	intcond210	intcond130	intcond78	intcond180	intcond61	intcond184	intcond170	intcond175	intcond2	intcond39	intcond174	intcond57	seed-vdd-117

x35	dec7	intcond91	intcond56	intcond68	intcond137	intcond162	intcond214	intcond23	intcond111	intcond96	intcond168	intcond73	intcond35	intcond7	intcond101	intcond16	intcond153	intcond124	intcond107	intcond126	intcond144	intcond213	intcond15	intcond28	intcond209	intcond88	intcond104	intcond36	intcond97	intcond133	intcond52	intcond171	intcond194	intcond95	intcond203	intcond199	intcond11	intcond167	intcond106	intcond159	intcond212	intcond155	intcond185	intcond157	intcond85	intcond140	intcond118	intcond13	intcond173	intcond62	intcond14	intcond70	intcond145	intcond165	intcond72	intcond49	intcond191	intcond230	intcond229	intcond43	intcond234	intcond12	intcond187	intcond67	intcond128	intcond31	intcond55	intcond42	intcond193	intcond205	intcond18	intcond222	intcond181	intcond47	intcond113	intcond63	intcond226	intcond190	intcond125	intcond232	intcond44	intcond204	intcond25	intcond4	intcond94	intcond17	intcond188	intcond200	intcond84	intcond186	intcond154	intcond19	intcond156	intcond135	intcond161	intcond69	intcond54	intcond121	intcond147	intcond110	intcond10	intcond150	intcond3	intcond208	intcond134	intcond32	intcond77	intcond114	intcond40	intcond223	intcond158	intcond64	intcond224	intcond177	intcond196	intcond82	intcond211	intcond50	seed-gnd-117

*seed9
x36	dec8^	intcond195	intcond207	intcond65	intcond148	intcond143	intcond219	intcond49	intcond153	intcond193	intcond42	intcond71	intcond131	intcond163	intcond134	intcond50	intcond103	intcond28	intcond129	intcond11	intcond84	intcond234	intcond111	intcond110	intcond199	intcond92	intcond80	intcond223	intcond118	intcond59	intcond10	intcond32	intcond86	intcond48	intcond124	intcond192	intcond156	intcond7	intcond88	intcond25	intcond101	intcond112	intcond72	intcond144	intcond60	intcond189	intcond169	intcond216	intcond15	intcond45	intcond187	intcond24	intcond52	intcond1	intcond230	intcond74	intcond146	intcond213	intcond152	intcond40	intcond123	intcond210	intcond29	intcond127	intcond188	intcond63	intcond12	intcond201	intcond34	intcond104	intcond217	intcond222	intcond209	intcond231	intcond185	intcond2	intcond182	intcond95	intcond203	intcond161	intcond47	intcond141	intcond135	intcond64	intcond38	intcond105	intcond17	intcond168	intcond164	intcond186	intcond31	intcond147	intcond181	intcond43	intcond35	intcond178	intcond136	intcond119	intcond194	intcond233	intcond83	intcond96	intcond204	intcond97	intcond218	intcond214	intcond26	intcond172	intcond179	intcond79	intcond171	intcond220	intcond151	intcond180	intcond200	intcond44	intcond176	intcond41	seed-vdd-117

x37	dec8	intcond162	intcond106	intcond133	intcond99	intcond196	intcond142	intcond221	intcond8	intcond137	intcond226	intcond61	intcond81	intcond227	intcond23	intcond174	intcond27	intcond160	intcond157	intcond140	intcond145	intcond198	intcond85	intcond69	intcond98	intcond211	intcond55	intcond121	intcond100	intcond93	intcond170	intcond68	intcond102	intcond46	intcond21	intcond73	intcond62	intcond138	intcond22	intcond177	intcond120	intcond4	intcond139	intcond130	intcond76	intcond117	intcond91	intcond109	intcond191	intcond114	intcond67	intcond6	intcond150	intcond166	intcond16	intcond232	intcond30	intcond82	intcond90	intcond212	intcond3	intcond115	intcond78	intcond5	intcond173	intcond154	intcond53	intcond108	intcond175	intcond113	intcond36	intcond190	intcond75	intcond39	intcond13	intcond165	intcond20	intcond158	intcond9	intcond149	intcond14	intcond56	intcond18	intcond132	intcond224	intcond89	intcond57	intcond159	intcond37	intcond155	intcond19	intcond208	intcond228	intcond33	intcond206	intcond70	intcond66	intcond225	intcond205	intcond107	intcond51	intcond126	intcond58	intcond197	intcond229	intcond116	intcond167	intcond87	intcond94	intcond54	intcond125	intcond215	intcond77	intcond183	intcond122	intcond202	intcond184	intcond128	seed-gnd-117

*seed10
x38	dec9^	intcond226	intcond134	intcond99	intcond197	intcond28	intcond46	intcond66	intcond175	intcond62	intcond142	intcond136	intcond91	intcond183	intcond47	intcond35	intcond192	intcond15	intcond2	intcond185	intcond80	intcond234	intcond178	intcond77	intcond155	intcond220	intcond225	intcond79	intcond167	intcond160	intcond116	intcond82	intcond219	intcond102	intcond170	intcond153	intcond64	intcond206	intcond52	intcond131	intcond61	intcond78	intcond17	intcond114	intcond201	intcond168	intcond127	intcond68	intcond97	intcond24	intcond172	intcond209	intcond125	intcond34	intcond83	intcond41	intcond199	intcond165	intcond146	intcond45	intcond57	intcond53	intcond14	intcond215	intcond228	intcond139	intcond94	intcond181	intcond67	intcond176	intcond25	intcond158	intcond140	intcond143	intcond147	intcond210	intcond58	intcond42	intcond10	intcond88	intcond186	intcond218	intcond111	intcond112	intcond119	intcond138	intcond121	intcond204	intcond150	intcond217	intcond74	intcond106	intcond163	intcond104	intcond40	intcond214	intcond144	intcond107	intcond122	intcond22	intcond115	intcond108	intcond87	intcond190	intcond56	intcond229	intcond84	intcond207	intcond18	intcond182	intcond90	intcond4	intcond148	intcond161	intcond31	intcond133	intcond54	intcond26	seed-vdd-117

x39	dec9	intcond118	intcond75	intcond5	intcond173	intcond189	intcond63	intcond49	intcond96	intcond55	intcond198	intcond159	intcond128	intcond71	intcond21	intcond95	intcond72	intcond151	intcond213	intcond145	intcond187	intcond93	intcond232	intcond191	intcond70	intcond7	intcond109	intcond103	intcond227	intcond44	intcond117	intcond113	intcond154	intcond141	intcond200	intcond110	intcond8	intcond48	intcond60	intcond202	intcond3	intcond188	intcond224	intcond211	intcond230	intcond101	intcond184	intcond177	intcond39	intcond152	intcond69	intcond20	intcond98	intcond137	intcond13	intcond19	intcond16	intcond216	intcond105	intcond180	intcond65	intcond120	intcond50	intcond169	intcond164	intcond194	intcond76	intcond166	intcond233	intcond205	intcond174	intcond27	intcond212	intcond193	intcond135	intcond126	intcond29	intcond89	intcond223	intcond1	intcond171	intcond208	intcond59	intcond132	intcond195	intcond162	intcond33	intcond6	intcond9	intcond23	intcond38	intcond149	intcond85	intcond179	intcond123	intcond36	intcond43	intcond157	intcond37	intcond32	intcond203	intcond222	intcond92	intcond231	intcond73	intcond100	intcond129	intcond221	intcond81	intcond124	intcond30	intcond12	intcond86	intcond130	intcond196	intcond156	intcond11	intcond51	seed-gnd-117

*seed11
x40	dec10^	intcond125	intcond21	intcond132	intcond202	intcond9	intcond200	intcond80	intcond88	intcond41	intcond131	intcond129	intcond190	intcond170	intcond3	intcond39	intcond209	intcond181	intcond58	intcond233	intcond212	intcond191	intcond196	intcond105	intcond19	intcond43	intcond179	intcond206	intcond85	intcond199	intcond7	intcond133	intcond198	intcond205	intcond126	intcond87	intcond52	intcond78	intcond82	intcond171	intcond112	intcond228	intcond137	intcond148	intcond224	intcond227	intcond151	intcond188	intcond138	intcond75	intcond5	intcond156	intcond186	intcond40	intcond102	intcond4	intcond180	intcond84	intcond124	intcond32	intcond76	intcond71	intcond81	intcond204	intcond72	intcond223	intcond134	intcond18	intcond36	intcond38	intcond167	intcond118	intcond45	intcond166	intcond153	intcond37	intcond120	intcond165	intcond35	intcond1	intcond229	intcond155	intcond56	intcond135	intcond231	intcond222	intcond50	intcond83	intcond178	intcond194	intcond220	intcond127	intcond177	intcond10	intcond106	intcond145	intcond34	intcond175	intcond77	intcond12	intcond25	intcond73	intcond51	intcond195	intcond139	intcond101	intcond54	intcond47	intcond111	intcond108	intcond187	intcond26	intcond110	intcond169	intcond116	intcond96	intcond29	intcond232	seed-vdd-117

x41	dec10	intcond143	intcond114	intcond219	intcond221	intcond183	intcond225	intcond63	intcond53	intcond16	intcond162	intcond123	intcond154	intcond144	intcond168	intcond161	intcond59	intcond46	intcond109	intcond79	intcond94	intcond147	intcond42	intcond115	intcond91	intcond174	intcond152	intcond172	intcond189	intcond146	intcond159	intcond65	intcond23	intcond28	intcond213	intcond113	intcond208	intcond6	intcond100	intcond66	intcond57	intcond24	intcond128	intcond92	intcond210	intcond142	intcond62	intcond33	intcond104	intcond207	intcond173	intcond193	intcond20	intcond130	intcond14	intcond70	intcond30	intcond97	intcond217	intcond119	intcond13	intcond176	intcond149	intcond117	intcond89	intcond163	intcond48	intcond234	intcond90	intcond121	intcond136	intcond218	intcond182	intcond103	intcond150	intcond185	intcond107	intcond157	intcond158	intcond22	intcond44	intcond211	intcond95	intcond216	intcond99	intcond141	intcond226	intcond201	intcond8	intcond15	intcond55	intcond184	intcond67	intcond122	intcond60	intcond214	intcond98	intcond74	intcond61	intcond11	intcond93	intcond64	intcond69	intcond68	intcond160	intcond192	intcond203	intcond140	intcond230	intcond197	intcond215	intcond17	intcond27	intcond31	intcond49	intcond164	intcond86	intcond2	seed-gnd-117

*seed12
x42	dec11^	intcond25	intcond52	intcond83	intcond48	intcond77	intcond174	intcond214	intcond230	intcond220	intcond144	intcond116	intcond180	intcond68	intcond42	intcond156	intcond57	intcond23	intcond16	intcond11	intcond103	intcond27	intcond155	intcond224	intcond193	intcond204	intcond206	intcond65	intcond32	intcond72	intcond146	intcond227	intcond132	intcond105	intcond191	intcond151	intcond185	intcond8	intcond104	intcond216	intcond24	intcond150	intcond50	intcond222	intcond163	intcond159	intcond70	intcond2	intcond9	intcond153	intcond22	intcond113	intcond35	intcond14	intcond21	intcond37	intcond145	intcond58	intcond78	intcond231	intcond46	intcond118	intcond38	intcond86	intcond81	intcond110	intcond200	intcond44	intcond137	intcond6	intcond179	intcond36	intcond62	intcond149	intcond45	intcond91	intcond97	intcond138	intcond139	intcond205	intcond111	intcond201	intcond40	intcond161	intcond187	intcond55	intcond89	intcond12	intcond49	intcond107	intcond115	intcond167	intcond192	intcond147	intcond96	intcond157	intcond119	intcond165	intcond140	intcond67	intcond126	intcond160	intcond154	intcond80	intcond51	intcond194	intcond75	intcond128	intcond123	intcond28	intcond3	intcond178	intcond207	intcond53	intcond171	intcond211	intcond183	intcond101	seed-vdd-117

x43	dec11	intcond26	intcond198	intcond162	intcond202	intcond197	intcond108	intcond60	intcond175	intcond141	intcond117	intcond226	intcond30	intcond100	intcond212	intcond79	intcond92	intcond186	intcond181	intcond228	intcond208	intcond209	intcond131	intcond190	intcond85	intcond106	intcond173	intcond232	intcond142	intcond47	intcond234	intcond133	intcond99	intcond82	intcond84	intcond71	intcond188	intcond87	intcond56	intcond136	intcond1	intcond39	intcond125	intcond10	intcond33	intcond74	intcond18	intcond169	intcond195	intcond95	intcond203	intcond19	intcond172	intcond17	intcond102	intcond61	intcond217	intcond184	intcond229	intcond93	intcond170	intcond121	intcond124	intcond233	intcond5	intcond66	intcond114	intcond221	intcond166	intcond7	intcond94	intcond64	intcond112	intcond98	intcond219	intcond143	intcond158	intcond135	intcond76	intcond130	intcond34	intcond129	intcond41	intcond199	intcond177	intcond127	intcond122	intcond213	intcond215	intcond182	intcond63	intcond164	intcond225	intcond218	intcond210	intcond196	intcond59	intcond189	intcond69	intcond88	intcond168	intcond54	intcond29	intcond134	intcond31	intcond73	intcond13	intcond148	intcond176	intcond4	intcond20	intcond120	intcond152	intcond90	intcond223	intcond109	intcond43	intcond15	seed-gnd-117

*seed13
x44	dec12^	intcond75	intcond133	intcond7	intcond33	intcond90	intcond57	intcond67	intcond105	intcond204	intcond128	intcond197	intcond149	intcond102	intcond31	intcond175	intcond18	intcond129	intcond179	intcond230	intcond186	intcond1	intcond44	intcond45	intcond35	intcond81	intcond58	intcond114	intcond83	intcond103	intcond132	intcond70	intcond65	intcond100	intcond79	intcond147	intcond146	intcond220	intcond188	intcond135	intcond206	intcond34	intcond22	intcond117	intcond16	intcond4	intcond89	intcond192	intcond95	intcond151	intcond61	intcond92	intcond116	intcond189	intcond96	intcond110	intcond29	intcond216	intcond17	intcond178	intcond170	intcond37	intcond63	intcond184	intcond36	intcond203	intcond94	intcond218	intcond138	intcond219	intcond38	intcond72	intcond119	intcond201	intcond23	intcond49	intcond121	intcond30	intcond140	intcond207	intcond227	intcond139	intcond82	intcond130	intcond196	intcond46	intcond107	intcond69	intcond104	intcond118	intcond26	intcond136	intcond10	intcond126	intcond76	intcond234	intcond27	intcond217	intcond52	intcond222	intcond225	intcond165	intcond214	intcond25	intcond106	intcond125	intcond169	intcond99	intcond171	intcond112	intcond120	intcond228	intcond181	intcond51	intcond88	intcond164	intcond200	intcond78	seed-vdd-117

x45	dec12	intcond231	intcond157	intcond233	intcond221	intcond127	intcond109	intcond177	intcond158	intcond73	intcond176	intcond66	intcond160	intcond47	intcond144	intcond40	intcond224	intcond173	intcond212	intcond113	intcond187	intcond163	intcond21	intcond226	intcond60	intcond191	intcond213	intcond84	intcond153	intcond194	intcond64	intcond41	intcond32	intcond111	intcond54	intcond115	intcond155	intcond223	intcond167	intcond166	intcond43	intcond211	intcond209	intcond50	intcond205	intcond150	intcond143	intcond180	intcond162	intcond142	intcond6	intcond56	intcond12	intcond148	intcond193	intcond182	intcond59	intcond232	intcond154	intcond152	intcond28	intcond85	intcond123	intcond101	intcond15	intcond13	intcond93	intcond5	intcond131	intcond202	intcond145	intcond14	intcond11	intcond3	intcond42	intcond74	intcond156	intcond208	intcond55	intcond108	intcond68	intcond97	intcond91	intcond24	intcond198	intcond229	intcond8	intcond161	intcond80	intcond172	intcond87	intcond86	intcond210	intcond137	intcond215	intcond53	intcond168	intcond19	intcond71	intcond62	intcond122	intcond9	intcond199	intcond159	intcond39	intcond2	intcond174	intcond98	intcond124	intcond183	intcond195	intcond77	intcond141	intcond190	intcond48	intcond185	intcond134	intcond20	seed-gnd-117

*seed14
x46	dec13^	intcond58	intcond198	intcond148	intcond38	intcond71	intcond129	intcond99	intcond156	intcond205	intcond202	intcond173	intcond120	intcond78	intcond123	intcond40	intcond211	intcond1	intcond232	intcond75	intcond179	intcond47	intcond157	intcond185	intcond51	intcond24	intcond151	intcond177	intcond230	intcond35	intcond31	intcond223	intcond204	intcond9	intcond93	intcond16	intcond39	intcond163	intcond158	intcond91	intcond81	intcond214	intcond171	intcond27	intcond19	intcond233	intcond226	intcond217	intcond197	intcond139	intcond84	intcond76	intcond147	intcond107	intcond228	intcond57	intcond46	intcond166	intcond201	intcond209	intcond192	intcond160	intcond6	intcond186	intcond100	intcond112	intcond187	intcond141	intcond49	intcond189	intcond135	intcond4	intcond234	intcond94	intcond28	intcond67	intcond178	intcond73	intcond165	intcond90	intcond74	intcond21	intcond48	intcond199	intcond108	intcond128	intcond82	intcond143	intcond121	intcond184	intcond36	intcond210	intcond146	intcond126	intcond13	intcond212	intcond54	intcond69	intcond85	intcond7	intcond145	intcond44	intcond62	intcond8	intcond12	intcond89	intcond25	intcond42	intcond170	intcond14	intcond175	intcond133	intcond134	intcond215	intcond101	intcond182	intcond96	intcond180	seed-vdd-117

x47	dec13	intcond169	intcond162	intcond83	intcond61	intcond95	intcond87	intcond131	intcond193	intcond102	intcond29	intcond183	intcond109	intcond20	intcond23	intcond153	intcond229	intcond154	intcond213	intcond122	intcond45	intcond63	intcond41	intcond224	intcond65	intcond105	intcond26	intcond221	intcond10	intcond43	intcond137	intcond142	intcond72	intcond196	intcond174	intcond219	intcond188	intcond104	intcond225	intcond110	intcond200	intcond86	intcond203	intcond216	intcond111	intcond181	intcond113	intcond132	intcond218	intcond30	intcond15	intcond50	intcond98	intcond167	intcond161	intcond176	intcond53	intcond208	intcond52	intcond17	intcond32	intcond80	intcond56	intcond59	intcond22	intcond144	intcond172	intcond127	intcond140	intcond118	intcond79	intcond152	intcond159	intcond114	intcond168	intcond77	intcond70	intcond55	intcond195	intcond11	intcond150	intcond2	intcond136	intcond227	intcond155	intcond60	intcond149	intcond130	intcond116	intcond37	intcond194	intcond190	intcond220	intcond5	intcond117	intcond119	intcond3	intcond207	intcond191	intcond106	intcond88	intcond231	intcond138	intcond33	intcond97	intcond124	intcond206	intcond18	intcond66	intcond222	intcond68	intcond103	intcond34	intcond125	intcond64	intcond115	intcond164	intcond92	seed-gnd-117

*seed15
x48	dec14^	intcond166	intcond137	intcond198	intcond226	intcond22	intcond25	intcond133	intcond76	intcond61	intcond136	intcond221	intcond21	intcond207	intcond233	intcond157	intcond18	intcond139	intcond183	intcond122	intcond31	intcond7	intcond24	intcond82	intcond41	intcond87	intcond210	intcond209	intcond156	intcond52	intcond115	intcond5	intcond12	intcond30	intcond152	intcond92	intcond218	intcond153	intcond44	intcond206	intcond169	intcond164	intcond189	intcond43	intcond108	intcond79	intcond6	intcond57	intcond212	intcond191	intcond127	intcond32	intcond66	intcond129	intcond214	intcond45	intcond147	intcond77	intcond172	intcond80	intcond154	intcond230	intcond103	intcond228	intcond73	intcond29	intcond111	intcond168	intcond26	intcond162	intcond193	intcond48	intcond78	intcond125	intcond211	intcond10	intcond118	intcond81	intcond138	intcond159	intcond19	intcond89	intcond9	intcond106	intcond33	intcond102	intcond197	intcond98	intcond146	intcond37	intcond4	intcond86	intcond151	intcond158	intcond75	intcond114	intcond59	intcond70	intcond27	intcond104	intcond38	intcond119	intcond128	intcond174	intcond182	intcond1	intcond200	intcond47	intcond229	intcond208	intcond171	intcond188	intcond203	intcond46	intcond204	intcond23	intcond215	intcond110	seed-vdd-117

x49	dec14	intcond91	intcond39	intcond170	intcond51	intcond60	intcond53	intcond201	intcond71	intcond227	intcond68	intcond177	intcond58	intcond232	intcond2	intcond132	intcond35	intcond180	intcond195	intcond196	intcond96	intcond148	intcond187	intcond202	intcond145	intcond155	intcond55	intcond42	intcond34	intcond175	intcond62	intcond213	intcond20	intcond185	intcond94	intcond105	intcond116	intcond65	intcond97	intcond149	intcond167	intcond142	intcond109	intcond123	intcond99	intcond130	intcond135	intcond100	intcond85	intcond40	intcond192	intcond120	intcond143	intcond150	intcond219	intcond176	intcond126	intcond199	intcond140	intcond17	intcond220	intcond63	intcond83	intcond95	intcond113	intcond50	intcond8	intcond56	intcond163	intcond84	intcond107	intcond190	intcond101	intcond28	intcond88	intcond15	intcond131	intcond90	intcond3	intcond144	intcond74	intcond16	intcond161	intcond72	intcond93	intcond165	intcond223	intcond121	intcond54	intcond11	intcond194	intcond14	intcond184	intcond112	intcond181	intcond160	intcond186	intcond64	intcond217	intcond49	intcond225	intcond134	intcond141	intcond234	intcond231	intcond124	intcond69	intcond179	intcond205	intcond117	intcond173	intcond178	intcond216	intcond224	intcond13	intcond67	intcond36	intcond222	seed-gnd-117

*seed16
x50	dec15^	intcond71	intcond220	intcond89	intcond36	intcond50	intcond171	intcond216	intcond15	intcond108	intcond43	intcond37	intcond138	intcond10	intcond107	intcond158	intcond9	intcond23	intcond18	intcond121	intcond133	intcond82	intcond76	intcond129	intcond131	intcond90	intcond28	intcond2	intcond32	intcond144	intcond25	intcond223	intcond230	intcond126	intcond209	intcond31	intcond191	intcond22	intcond162	intcond78	intcond173	intcond146	intcond29	intcond172	intcond62	intcond49	intcond127	intcond204	intcond125	intcond99	intcond178	intcond124	intcond102	intcond97	intcond65	intcond159	intcond224	intcond183	intcond208	intcond141	intcond139	intcond181	intcond63	intcond170	intcond199	intcond185	intcond219	intcond135	intcond42	intcond61	intcond70	intcond189	intcond160	intcond14	intcond116	intcond154	intcond179	intcond118	intcond30	intcond169	intcond92	intcond231	intcond165	intcond20	intcond161	intcond148	intcond3	intcond56	intcond152	intcond218	intcond232	intcond79	intcond66	intcond140	intcond19	intcond104	intcond77	intcond51	intcond106	intcond52	intcond94	intcond83	intcond13	intcond4	intcond58	intcond101	intcond190	intcond75	intcond11	intcond222	intcond17	intcond85	intcond33	intcond21	intcond168	intcond67	intcond122	intcond74	seed-vdd-117

x51	dec15	intcond206	intcond182	intcond212	intcond150	intcond81	intcond163	intcond24	intcond80	intcond227	intcond60	intcond130	intcond39	intcond136	intcond142	intcond1	intcond147	intcond156	intcond226	intcond46	intcond38	intcond225	intcond217	intcond16	intcond98	intcond84	intcond192	intcond45	intcond164	intcond188	intcond195	intcond196	intcond69	intcond35	intcond95	intcond167	intcond5	intcond47	intcond194	intcond137	intcond48	intcond91	intcond201	intcond180	intcond143	intcond229	intcond234	intcond41	intcond157	intcond176	intcond26	intcond128	intcond153	intcond119	intcond113	intcond145	intcond155	intcond205	intcond111	intcond72	intcond27	intcond57	intcond203	intcond193	intcond115	intcond114	intcond34	intcond134	intcond187	intcond213	intcond96	intcond105	intcond55	intcond87	intcond64	intcond7	intcond112	intcond86	intcond215	intcond233	intcond166	intcond197	intcond59	intcond88	intcond103	intcond210	intcond221	intcond214	intcond40	intcond120	intcond109	intcond44	intcond6	intcond68	intcond12	intcond184	intcond177	intcond207	intcond151	intcond211	intcond73	intcond175	intcond110	intcond123	intcond132	intcond54	intcond186	intcond8	intcond174	intcond53	intcond200	intcond198	intcond202	intcond228	intcond93	intcond100	intcond149	intcond117	seed-gnd-117


**************************Pre Processing

.subckt	seed-vdd-117	control	seed1	seed2	seed3	seed4	seed5	seed6	seed7	seed8	seed9	seed10	seed11	seed12	seed13	seed14	seed15	seed16	seed17	seed18	seed19	seed20	seed21	seed22	seed23	seed24	seed25	seed26	seed27	seed28	seed29	seed30	seed31	seed32	seed33	seed34	seed35	seed36	seed37	seed38	seed39	seed40	seed41	seed42	seed43	seed44	seed45	seed46	seed47	seed48	seed49	seed50	seed51	seed52	seed53	seed54	seed55	seed56	seed57	seed58	seed59	seed60	seed61	seed62	seed63	seed64	seed65	seed66	seed67	seed68	seed69	seed70	seed71	seed72	seed73	seed74	seed75	seed76	seed77	seed78	seed79	seed80	seed81	seed82	seed83	seed84	seed85	seed86	seed87	seed88	seed89	seed90	seed91	seed92	seed93	seed94	seed95	seed96	seed97	seed98	seed99	seed100	seed101	seed102	seed103	seed104	seed105	seed106	seed107	seed108	seed109	seed110	seed111	seed112	seed113	seed114	seed115	seed116	seed117	wp=0.75u
x1	control	seed1	seed2	seed3	seed4	seed5	seed6	seed7	seed8	seed9	seed10	seed-vdd-10
x2	control	seed11	seed12	seed13	seed14	seed15	seed16	seed17	seed18	seed19	seed20	seed-vdd-10
x3	control	seed21	seed22	seed23	seed24	seed25	seed26	seed27	seed28	seed29	seed30	seed-vdd-10
x4	control	seed31	seed32	seed33	seed34	seed35	seed36	seed37	seed38	seed39	seed40	seed-vdd-10
x5	control	seed41	seed42	seed43	seed44	seed45	seed46	seed47	seed48	seed49	seed50	seed-vdd-10
x6	control	seed51	seed52	seed53	seed54	seed55	seed56	seed57	seed58	seed59	seed60	seed-vdd-10
x7	control	seed61	seed62	seed63	seed64	seed65	seed66	seed67	seed68	seed69	seed70	seed-vdd-10
x8	control	seed71	seed72	seed73	seed74	seed75	seed76	seed77	seed78	seed79	seed80	seed-vdd-10
x9	control	seed81	seed82	seed83	seed84	seed85	seed86	seed87	seed88	seed89	seed90	seed-vdd-10
x10	control	seed91	seed92	seed93	seed94	seed95	seed96	seed97	seed98	seed99	seed100	seed-vdd-10
x11	control	seed101	seed102	seed103	seed104	seed105	seed106	seed107	seed108	seed109	seed110	seed-vdd-10
x12	control	seed111	seed112	seed113	seed114	seed115	seed-vdd-5
x13	control	seed116	seed117	seed-vdd-2
.ends

.subckt	seed-gnd-117	control	seed1	seed2	seed3	seed4	seed5	seed6	seed7	seed8	seed9	seed10	seed11	seed12	seed13	seed14	seed15	seed16	seed17	seed18	seed19	seed20	seed21	seed22	seed23	seed24	seed25	seed26	seed27	seed28	seed29	seed30	seed31	seed32	seed33	seed34	seed35	seed36	seed37	seed38	seed39	seed40	seed41	seed42	seed43	seed44	seed45	seed46	seed47	seed48	seed49	seed50	seed51	seed52	seed53	seed54	seed55	seed56	seed57	seed58	seed59	seed60	seed61	seed62	seed63	seed64	seed65	seed66	seed67	seed68	seed69	seed70	seed71	seed72	seed73	seed74	seed75	seed76	seed77	seed78	seed79	seed80	seed81	seed82	seed83	seed84	seed85	seed86	seed87	seed88	seed89	seed90	seed91	seed92	seed93	seed94	seed95	seed96	seed97	seed98	seed99	seed100	seed101	seed102	seed103	seed104	seed105	seed106	seed107	seed108	seed109	seed110	seed111	seed112	seed113	seed114	seed115	seed116	seed117	wn=0.25u
x1	control	seed1	seed2	seed3	seed4	seed5	seed6	seed7	seed8	seed9	seed10	seed-gnd-10
x2	control	seed11	seed12	seed13	seed14	seed15	seed16	seed17	seed18	seed19	seed20	seed-gnd-10
x3	control	seed21	seed22	seed23	seed24	seed25	seed26	seed27	seed28	seed29	seed30	seed-gnd-10
x4	control	seed31	seed32	seed33	seed34	seed35	seed36	seed37	seed38	seed39	seed40	seed-gnd-10
x5	control	seed41	seed42	seed43	seed44	seed45	seed46	seed47	seed48	seed49	seed50	seed-gnd-10
x6	control	seed51	seed52	seed53	seed54	seed55	seed56	seed57	seed58	seed59	seed60	seed-gnd-10
x7	control	seed61	seed62	seed63	seed64	seed65	seed66	seed67	seed68	seed69	seed70	seed-gnd-10
x8	control	seed71	seed72	seed73	seed74	seed75	seed76	seed77	seed78	seed79	seed80	seed-gnd-10
x9	control	seed81	seed82	seed83	seed84	seed85	seed86	seed87	seed88	seed89	seed90	seed-gnd-10
x10	control	seed91	seed92	seed93	seed94	seed95	seed96	seed97	seed98	seed99	seed100	seed-gnd-10
x11	control	seed101	seed102	seed103	seed104	seed105	seed106	seed107	seed108	seed109	seed110	seed-gnd-10
x12	control	seed111	seed112	seed113	seed114	seed115	seed-gnd-5
x13	control	seed116	seed117	seed-gnd-2
.ends

.subckt	seed-vdd-10	control	seed1	seed2	seed3	seed4	seed5	seed6	seed7	seed8	seed9	seed10	wp=0.25u	le=0.18u
m1	seed1	control	vdd	vdd	mp18	w='wp'	l='le'
m2	seed2	control	vdd	vdd	mp18	w='wp'	l='le'
m3	seed3	control	vdd	vdd	mp18	w='wp'	l='le'
m4	seed4	control	vdd	vdd	mp18	w='wp'	l='le'
m5	seed5	control	vdd	vdd	mp18	w='wp'	l='le'
m6	seed6	control	vdd	vdd	mp18	w='wp'	l='le'
m7	seed7	control	vdd	vdd	mp18	w='wp'	l='le'
m8	seed8	control	vdd	vdd	mp18	w='wp'	l='le'
m9	seed9	control	vdd	vdd	mp18	w='wp'	l='le'
m10	seed10	control	vdd	vdd	mp18	w='wp'	l='le'
.ends

.subckt	seed-gnd-10	control	seed1	seed2	seed3	seed4	seed5	seed6	seed7	seed8	seed9	seed10	wn=0.25u	le=0.18u
m1	seed1	control	0	0	mn18	w='wn'	l='le'
m2	seed2	control	0	0	mn18	w='wn'	l='le'
m3	seed3	control	0	0	mn18	w='wn'	l='le'
m4	seed4	control	0	0	mn18	w='wn'	l='le'
m5	seed5	control	0	0	mn18	w='wn'	l='le'
m6	seed6	control	0	0	mn18	w='wn'	l='le'
m7	seed7	control	0	0	mn18	w='wn'	l='le'
m8	seed8	control	0	0	mn18	w='wn'	l='le'
m9	seed9	control	0	0	mn18	w='wn'	l='le'
m10	seed10	control	0	0	mn18	w='wn'	l='le'
.ends

.subckt	seed-vdd-5	control	seed1	seed2	seed3	seed4	seed5	wp=0.25u	le=0.18u
m1	seed1	control	vdd	vdd	mp18	w='wp'	l='le'
m2	seed2	control	vdd	vdd	mp18	w='wp'	l='le'
m3	seed3	control	vdd	vdd	mp18	w='wp'	l='le'
m4	seed4	control	vdd	vdd	mp18	w='wp'	l='le'
m5	seed5	control	vdd	vdd	mp18	w='wp'	l='le'
.ends

.subckt	seed-gnd-5	control	seed1	seed2	seed3	seed4	seed5	wn=0.25u	le=0.18u
m1	seed1	control	0	0	mn18	w='wn'	l='le'
m2	seed2	control	0	0	mn18	w='wn'	l='le'
m3	seed3	control	0	0	mn18	w='wn'	l='le'
m4	seed4	control	0	0	mn18	w='wn'	l='le'
m5	seed5	control	0	0	mn18	w='wn'	l='le'
.ends

.subckt	seed-vdd-2	control	seed1	seed2	wp=0.25u	le=0.18u
m1	seed1	control	vdd	vdd	mp18	w='wp'	l='le'
m2	seed2	control	vdd	vdd	mp18	w='wp'	l='le'
.ends

.subckt	seed-gnd-2	control	seed1	seed2	wn=0.25u	le=0.18u
m1	seed1	control	0	0	mn18	w='wn'	l='le'
m2	seed2	control	0	0	mn18	w='wn'	l='le'
.ends

*32-Bit PRNG
.subckt	PRNG32	ck	ck^	intcnd1	intcnd2	intcnd3	intcnd4	intcnd5	intcnd6	intcnd7	intcnd8	intcnd9	intcnd10	intcnd11	intcnd12	intcnd13	intcnd14	intcnd15	intcnd16	intcnd17	intcnd18	intcnd19	intcnd20	intcnd21	intcnd22	intcnd23	intcnd24	intcnd25	intcnd26	intcnd27	intcnd28	intcnd29	intcnd30	intcnd31	intcnd32	finalout1^	finalout2^	finalout3^	finalout4^	finalout5^	finalout6^	finalout7^	finalout8^	finalout9^	finalout10^	finalout11^	finalout12^	finalout13^	finalout14^	finalout15^	finalout16^	finalout17^	finalout18^	finalout19^	finalout20^	finalout21^	finalout22^	finalout23^	finalout24^	finalout25^	finalout26^	finalout27^	finalout28^	finalout29^	finalout30^	finalout31^	finalout32^	finalout1	finalout2	finalout3	finalout4	finalout5	finalout6	finalout7	finalout8	finalout9	finalout10	finalout11	finalout12	finalout13	finalout14	finalout15	finalout16	finalout17	finalout18	finalout19	finalout20	finalout21	finalout22	finalout23	finalout24	finalout25	finalout26	finalout27	finalout28	finalout29	finalout30	finalout31	finalout32	out1^	out2^	out3^	out4^	out5^	out6^	out7^	out8^	out9^	out10^	out11^	out12^	out13^	out14^	out15^	out16^	out17^	out18^	out19^	out20^	out21^	out22^	out23^	out24^	out25^	out26^	out27^	out28^	out29^	out30^	out31^	out32^	out1	out2	out3	out4	out5	out6	out7	out8	out9	out10	out11	out12	out13	out14	out15	out16	out17	out18	out19	out20	out21	out22	out23	out24	out25	out26	out27	out28	out29	out30	out31	out32	out33	out33^	out0
x1	out0	out2	out2^	ck	ck^	out1	out1^	finalout1	finalout1^	intcnd1	Rule90
x2	out1	out2	out2^	out3	out3^	ck	ck^	out2	out2^	finalout2	finalout2^	intcnd2	Rule150
x3	out2	out4	out4^	ck	ck^	out3	out3^	finalout3	finalout3^	intcnd3	Rule90
x4	out3	out4	out4^	out5	out5^	ck	ck^	out4	out4^	finalout4	finalout4^	intcnd4	Rule150
x5	out4	out6	out6^	ck	ck^	out5	out5^	finalout5	finalout5^	intcnd5	Rule90
x6	out5	out6	out6^	out7	out7^	ck	ck^	out6	out6^	finalout6	finalout6^	intcnd6	Rule150
x7	out6	out8	out8^	ck	ck^	out7	out7^	finalout7	finalout7^	intcnd7	Rule90
x8	out7	out8	out8^	out9	out9^	ck	ck^	out8	out8^	finalout8	finalout8^	intcnd8	Rule150
x9	out8	out10	out10^	ck	ck^	out9	out9^	finalout9	finalout9^	intcnd9	Rule90
x10	out9	out10	out10^	out11	out11^	ck	ck^	out10	out10^	finalout10	finalout10^	intcnd10	Rule150
x11	out10	out12	out12^	ck	ck^	out11	out11^	finalout11	finalout11^	intcnd11	Rule90
x12	out11	out12	out12^	out13	out13^	ck	ck^	out12	out12^	finalout12	finalout12^	intcnd12	Rule150
x13	out12	out14	out14^	ck	ck^	out13	out13^	finalout13	finalout13^	intcnd13	Rule90
x14	out13	out14	out14^	out15	out15^	ck	ck^	out14	out14^	finalout14	finalout14^	intcnd14	Rule150
x15	out14	out16	out16^	ck	ck^	out15	out15^	finalout15	finalout15^	intcnd15	Rule90
x16	out15	out16	out16^	out17	out17^	ck	ck^	out16	out16^	finalout16	finalout16^	intcnd16	Rule150
x17	out16	out18	out18^	ck	ck^	out17	out17^	finalout17	finalout17^	intcnd17	Rule90
x18	out17	out18	out18^	out19	out19^	ck	ck^	out18	out18^	finalout18	finalout18^	intcnd18	Rule150
x19	out18	out20	out20^	ck	ck^	out19	out19^	finalout19	finalout19^	intcnd19	Rule90
x20	out19	out20	out20^	out21	out21^	ck	ck^	out20	out20^	finalout20	finalout20^	intcnd20	Rule150
x21	out20	out22	out22^	ck	ck^	out21	out21^	finalout21	finalout21^	intcnd21	Rule90
x22	out21	out22	out22^	out23	out23^	ck	ck^	out22	out22^	finalout22	finalout22^	intcnd22	Rule150
x23	out22	out24	out24^	ck	ck^	out23	out23^	finalout23	finalout23^	intcnd23	Rule90
x24	out23	out24	out24^	out25	out25^	ck	ck^	out24	out24^	finalout24	finalout24^	intcnd24	Rule150
x25	out24	out26	out26^	ck	ck^	out25	out25^	finalout25	finalout25^	intcnd25	Rule90
x26	out25	out26	out26^	out27	out27^	ck	ck^	out26	out26^	finalout26	finalout26^	intcnd26	Rule150
x27	out26	out28	out28^	ck	ck^	out27	out27^	finalout27	finalout27^	intcnd27	Rule90
x28	out27	out28	out28^	out29	out29^	ck	ck^	out28	out28^	finalout28	finalout28^	intcnd28	Rule150
x29	out28	out30	out30^	ck	ck^	out29	out29^	finalout29	finalout29^	intcnd29	Rule90
x30	out29	out30	out30^	out31	out31^	ck	ck^	out30	out30^	finalout30	finalout30^	intcnd30	Rule150
x31	out30	out32	out32^	ck	ck^	out31	out31^	finalout31	finalout31^	intcnd31	Rule90
x32	out31	out32	out32^	out33	out33^	ck	ck^	out32	out32^	finalout32	finalout32^	intcnd32	Rule150
.ends

*10-Bit PRNG
.subckt	PRNG10	ck	ck^	intcnd1	intcnd2	intcnd3	intcnd4	intcnd5	intcnd6	intcnd7	intcnd8	intcnd9	intcnd10	finalout1^	finalout2^	finalout3^	finalout4^	finalout5^	finalout6^	finalout7^	finalout8^	finalout9^	finalout10^	finalout1	finalout2	finalout3	finalout4	finalout5	finalout6	finalout7	finalout8	finalout9	finalout10	out1^	out2^	out3^	out4^	out5^	out6^	out7^	out8^	out9^	out10^	out1	out2	out3	out4	out5	out6	out7	out8	out9	out10	out0
x1	out0	out2	out2^	ck	ck^	out1	out1^	finalout1	finalout1^	intcnd1	Rule90
x2	out1	out2	out2^	out3	out3^	ck	ck^	out2	out2^	finalout2	finalout2^	intcnd2	Rule150
x3	out2	out4	out4^	ck	ck^	out3	out3^	finalout3	finalout3^	intcnd3	Rule90
x4	out3	out4	out4^	out5	out5^	ck	ck^	out4	out4^	finalout4	finalout4^	intcnd4	Rule150
x5	out4	out6	out6^	ck	ck^	out5	out5^	finalout5	finalout5^	intcnd5	Rule90
x6	out5	out6	out6^	out7	out7^	ck	ck^	out6	out6^	finalout6	finalout6^	intcnd6	Rule150
x7	out6	out8	out8^	ck	ck^	out7	out7^	finalout7	finalout7^	intcnd7	Rule90
x8	out7	out8	out8^	out9	out9^	ck	ck^	out8	out8^	finalout8	finalout8^	intcnd8	Rule150
x9	out8	out10	out10^	ck	ck^	out9	out9^	finalout9	finalout9^	intcnd9	Rule90
x10	out10	out9	out9^	ck	ck^	out10	out10^	finalout10	finalout10^	intcnd10	Rule90	***Rule 150
.ends

***Rule 150 (Pass Transistor Logic)
.subckt	Rule150	in1	in2	in2^	in3	in3^	ck	ck^	out	out^	finalout	finalout^	clocked-xor
x1	in1	in2	in2^	in3	in3^	clocked-xor	ck	ck^	CK-XOR3
x2	clocked-xor	finalout^	INV
x3	finalout^	finalout	INV
x112	finalout	preout^	INV
x113	finalout^	preout	INV
x4	preout^	out^	ck^	ck	TG
x5	preout	out	ck^	ck	TG
.ends

***Rule 90 (Pass Transistor Logic)
.subckt	Rule90	in1	in2	in2^	ck	ck^	out	out^	finalout	finalout^	clocked-xor
x1	in1	in2	in2^	xor	XOR2
x2	xor	clocked-xor	ck	ck^	TG
x3	clocked-xor	finalout^	INV
x4	finalout^	finalout	INV
x112	finalout	preout^	INV
x113	finalout^	preout	INV
x5	preout^	out^	ck^	ck	TG
x6	preout	out	ck^	ck	TG
.ends

***Inverter
.subckt	INV	in	out	wn=1u	wp=3u	le=0.18u
m1	out	in	vdd	vdd	mp18	w=wp	l=le
m2	out	in	0	0	mn18	w=wn	l=le
.ends

***Transmission Gate
.subckt	TG	in	out	control	control^	wn=1u	wp=3u	le=0.18u
m1	in	control^	out	vdd	mp18	w=wp	l=le
m2	out	control	in	0	mn18	w=wn	l=le
.ends

***2-Input XOR (Pass Transistor Logic)
.subckt	XOR2	in1	in2	in2^	out	wn=1u	wp=3u	le=0.18u
m1	out	in2	in1	vdd	mp18	w=wp	l=le
m2	in1	in2^	out	0	mn18	w=wn	l=le
m3	out	in1	in2	vdd	mp18	w=wp	l=le
m4	out	in1	in2^	0	mn18	w=wn	l=le
.ends

***3-Input XOR (Pass Transistor Logic)
.subckt	CK-XOR3	in1	in2	in2^	in3	in3^	out	ck	ck^	wn=1u	wp=3u	le=0.18u
x1	in1	in2	in2^	a	XOR2	wn='wn'	wp='wp'	le='le'	
x2	a	in3	in3^	b	XOR2	wn='wn'	wp='wp'	le='le'	
x3	b	out	ck	ck^	TG	wn='wn'	wp='wp'	le='le'	
.ends

***5-Bit Decoder with only 16 outputs
.subckt	Decoder5Bit-Outputs-16-m10	in0	in1	in2	in3	in4	out0	out1	out2	out3	out4	out5	out6	out7	out8	out9	out10	out11	out12	out13	out14	out15	wn=0.25u	wp=0.75u	le=0.18u	*in0 & out0 are lsb
x1	in0	in0^	INV-m10	wn='wn'	wp='wp'	le='le'
x2	in1	in1^	INV-m10	wn='wn'	wp='wp'	le='le'
x3	in2	in2^	INV-m10	wn='wn'	wp='wp'	le='le'
x4	in3	in3^	INV-m10	wn='wn'	wp='wp'	le='le'
x5	in4	in4^	INV-m10	wn='wn'	wp='wp'	le='le'

x6	in0	in1	in2	in3	in4	out0	NOR5-m10	wn='wn'	wp='wp'	le='le'
x7	in0^	in1	in2	in3	in4	out1	NOR5-m10	wn='wn'	wp='wp'	le='le'
x8	in0	in1^	in2	in3	in4	out2	NOR5-m10	wn='wn'	wp='wp'	le='le'
x9	in0^	in1^	in2	in3	in4	out3	NOR5-m10	wn='wn'	wp='wp'	le='le'
x10	in0	in1	in2^	in3	in4	out4	NOR5-m10	wn='wn'	wp='wp'	le='le'
x11	in0^	in1	in2^	in3	in4	out5	NOR5-m10	wn='wn'	wp='wp'	le='le'
x12	in0	in1^	in2^	in3	in4	out6	NOR5-m10	wn='wn'	wp='wp'	le='le'
x13	in0^	in1^	in2^	in3	in4	out7	NOR5-m10	wn='wn'	wp='wp'	le='le'
x14	in0	in1	in2	in3^	in4	out8	NOR5-m10	wn='wn'	wp='wp'	le='le'
x15	in0^	in1	in2	in3^	in4	out9	NOR5-m10	wn='wn'	wp='wp'	le='le'
x16	in0	in1^	in2	in3^	in4	out10	NOR5-m10	wn='wn'	wp='wp'	le='le'
x17	in0^	in1^	in2	in3^	in4	out11	NOR5-m10	wn='wn'	wp='wp'	le='le'
x18	in0	in1	in2^	in3^	in4	out12	NOR5-m10	wn='wn'	wp='wp'	le='le'
x19	in0^	in1	in2^	in3^	in4	out13	NOR5-m10	wn='wn'	wp='wp'	le='le'
x20	in0	in1^	in2^	in3^	in4	out14	NOR5-m10	wn='wn'	wp='wp'	le='le'
x21	in0^	in1^	in2^	in3^	in4	out15	NOR5-m10	wn='wn'	wp='wp'	le='le'

.ends

***10-Transistor 3-Input NOR***
.subckt	NOR5-m10	in1	in2	in3	in4	in5	out	wn=0.25u	wp=0.75u	le=0.18u
m1	d	in5	vdd	vdd	mp18	w='3*wp'	l=le	m=10
m2	c	in4	d	vdd	mp18	w='3*wp'	l=le	m=10
m3	b	in3	c	vdd	mp18	w='3*wp'	l=le	m=10
m4	a	in2	b	vdd	mp18	w='3*wp'	l=le	m=10
m5	out	in1	a	vdd	mp18	w='3*wp'	l=le	m=10

m6	out	in1	0	0	mn18	w=wn	l=le	m=10
m7	out	in2	0	0	mn18	w=wn	l=le	m=10
m8	out	in3	0	0	mn18	w=wn	l=le	m=10
m9	out	in4	0	0	mn18	w=wn	l=le	m=10
m10	out	in5	0	0	mn18	w=wn	l=le	m=10
.ends

***10-Transistor Multiplexer***
.subckt	MUX-m10	in1	in2	out	control	wn=0.25u	wp=0.75u	le=0.18u
x1	in1	out	control	control^	TG-m10	wn='wn'	wp='wp'	le='le'
x2	in2	out	control^	control	TG-m10	wn='wn'	wp='wp'	le='le'
x3	control	control^	INV-m10	wn='wn'	wp='wp'	le='le'
.ends

***10-Transistor Inverter
.subckt	INV-m10	in	out	wn=1u	wp=3u	le=0.18u
m1	out	in	vdd	vdd	mp18	w=wp	l=le	m=10
m2	out	in	0	0	mn18	w=wn	l=le	m=10
.ends

.ends Random-Number-Generator
