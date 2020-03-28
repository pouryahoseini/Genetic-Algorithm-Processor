*Emmigration Module 

.subckt	Emmigration	clk-Main-2	clk-Main-2^	Replica-Reset	Replica-Reset^	Emmigration-Enable-Flag	Best-Found-Emmigration-Pin	Handshake-Enable	Offspring1-Ready-Flag	Chromosome-Resolution-Pin	Fitness-Resolution-Pin	Intermediate-Registers-Enable	SPI-Out-Line1	SPI-Out-Line2	SPI-Out-Line3	SPI-Out-Line4	SPI-Out-clk-Pin	SPI-Out-CS-Pin	SPI-In1-CS-Pin	SPI-In2-CS-Pin	Emmigration-done	Emmigration-Immigration-Start	Emmigration-Start^	Immigration1-Receive	Immigration2-done	bf0	bf1	bf2	bf3	bf4	bf5	bf6	bf7	bf8	bf9	bf10	bf11	bf12	bf13	bf14	bf15	bf16	bf17	bf18	bf19	bf20	bf21	bf22	bf23	bf24	bf25	bf26	bf27	bf28	bf29	bf30	bf31	bf32	bf33	bf34	bf35	bf36	bf37	bf38	bf39	bf40	bf41	bf42	bf43	bf44	bf45	bf46	bf47	bf48	bf49	bf50	bf51	bf52	bf53	bf54	bf55	bf56	bf57	bf58	bf59	bf60	bf61	bf62	bf63	Off1-0	Off1-1	Off1-2	Off1-3	Off1-4	Off1-5	Off1-6	Off1-7	Off1-8	Off1-9	Off1-10	Off1-11	Off1-12	Off1-13	Off1-14	Off1-15	Off1-16	Off1-17	Off1-18	Off1-19	Off1-20	Off1-21	Off1-22	Off1-23	Off1-24	Off1-25	Off1-26	Off1-27	Off1-28	Off1-29	Off1-30	Off1-31	Off1-32	Off1-33	Off1-34	Off1-35	Off1-36	Off1-37	Off1-38	Off1-39	Off1-40	Off1-41	Off1-42	Off1-43	Off1-44	Off1-45	Off1-46	Off1-47	Off1-48	Off1-49	Off1-50	Off1-51	Off1-52	Off1-53	Off1-54	Off1-55	Off1-56	Off1-57	Off1-58	Off1-59	Off1-60	Off1-61	Off1-62	Off1-63

***replica delay
x1	stage0	stage1	clk-Emmigration	clk-Emmigration^	Replica-Reset	Replica-Reset^	DFF-R	wn=0.5u	wp=1.5u
x2	stage1	stage2	clk-Emmigration	clk-Emmigration^	Replica-Reset	Replica-Reset^	DFF-R	wn=0.5u	wp=1.5u
x3	stage2	stage3	clk-Emmigration	clk-Emmigration^	Replica-Reset	Replica-Reset^	DFF-R	wn=0.5u	wp=1.5u
x4	stage3	stage4	clk-Emmigration	clk-Emmigration^	Replica-Reset	Replica-Reset^	DFF-R	wn=0.5u	wp=1.5u
x5	stage4	stage5	clk-Emmigration	clk-Emmigration^	Replica-Reset	Replica-Reset^	DFF-R	wn=0.5u	wp=1.5u
x6	stage5	stage6	clk-Emmigration	clk-Emmigration^	Replica-Reset	Replica-Reset^	DFF-R	wn=0.5u	wp=1.5u
x7	stage6	stage7	clk-Emmigration	clk-Emmigration^	Replica-Reset	Replica-Reset^	DFF-R	wn=0.5u	wp=1.5u
x8	stage7	stage8	clk-Emmigration	clk-Emmigration^	Replica-Reset	Replica-Reset^	DFF-R	wn=0.5u	wp=1.5u
x9	stage8	stage9	clk-Emmigration	clk-Emmigration^	Replica-Reset	Replica-Reset^	DFF-R	wn=0.5u	wp=1.5u
x10	stage9	stage10	clk-Emmigration	clk-Emmigration^	Replica-Reset	Replica-Reset^	DFF-R	wn=0.5u	wp=1.5u
x11	stage10	stage11	clk-Emmigration	clk-Emmigration^	Replica-Reset	Replica-Reset^	DFF-R	wn=0.5u	wp=1.5u
x12	stage11	stage12	clk-Emmigration	clk-Emmigration^	Replica-Reset	Replica-Reset^	DFF-R	wn=0.5u	wp=1.5u
x13	stage12	stage13	clk-Emmigration	clk-Emmigration^	Replica-Reset	Replica-Reset^	DFF-R	wn=0.5u	wp=1.5u
x14	stage13	stage14	clk-Emmigration	clk-Emmigration^	Replica-Reset	Replica-Reset^	DFF-R	wn=0.5u	wp=1.5u
x15	stage14	stage15	clk-Emmigration	clk-Emmigration^	Replica-Reset	Replica-Reset^	DFF-R	wn=0.5u	wp=1.5u
x16	stage15	stage16	clk-Emmigration	clk-Emmigration^	Replica-Reset	Replica-Reset^	DFF-R	wn=0.5u	wp=1.5u
x17	stage16	stage0	clk-Emmigration	clk-Emmigration^	Replica-Reset	Replica-Reset^	DFF-S	wn=0.5u	wp=1.5u

x18	Chromosome-Resolution-Pin	Chromosome-Resolution-Pin^	INV	wn=1u	wp=3u
x19	Fitness-Resolution-Pin	Fitness-Resolution-Pin^	INV	wn=1u	wp=3u
x20	Fitness-Resolution-Pin	Chromosome-Resolution-Pin	Chromosome-Resolution-Pin^	1	XOR2	wn=1u	wp=3u

x21	Fitness-Resolution-Pin^	Chromosome-Resolution-Pin^	stage8	2	NAND3	wn=1u	wp=3u
x22	1	stage12	3	NAND2	wn=1u	wp=3u
x23	stage16	stage16^	INV	wn=1u	wp=3u

x24	2	3	stage16^	4	NAND3	wn=2u	wp=6u

x25	4	Emmigration-Start^	done	done^	OR2	wn=3u	wp=9u
x26	done	5	clk-Main-2	clk-Main-2^	Register	wn=5u	wp=15u
x27	done	5	Emmigration-done	Emmigration-done^	AND2	wn=5u	wp=15u

***clock gating
x28	Emmigration-Enable-Flag	Emmigration-Immigration-Start	Emmigration-Start	Emmigration-Start^	AND2	wn=20u	wp=60u

x29	done^	Emmigration-Start	SPI-Out-CS-Pin^	NAND2	wn=5u	wp=15u
x1040	SPI-Out-CS-Pin^	SPI-Out-CS-Pin	INV	wn=1u	wp=3u
x30	SPI-In1-CS-Pin	Immigration1-Receive	10	NOR2	wn=5u	wp=15u
x31	SPI-In2-CS-Pin	Immigration2-done	11	NOR2	wn=5u	wp=15u

x32	SPI-Out-CS-Pin^	10	11	enable	NOR3-m10	wn=1.5u	wp=4.5u	*m=10

x33	enable	12	clk-Main-2	clk-Main-2^	Register	wn=33u	wp=99u
x34	clk-Main-2	13	INV	wn=33u	wp=99u
x35	13	14	INV	wn=33u	wp=99u

x36	12	14	clk-Emmigration	clk-Emmigration^	AND2-m10	wn=6.5u	wp=19.5u	*m=10
x1291	clk-Emmigration	1291	INV	wn=0.25u	wp=0.75u
x1292	1291	1292	INV	wn=0.25u	wp=0.75u
x1293	1292	1293	INV	wn=0.25u	wp=0.75u
x1294	1293	SPI-Out-clk-Pin	INV	wn=0.25u	wp=0.75u

***main part
x37	Intermediate-Registers-Enable	Intermediate-Registers-Enable^	INV	wn=10u	wp=30u
x38	Offspring1-Ready-Flag	20	Intermediate-Registers-Enable	Intermediate-Registers-Enable^	DFF	wn=5u	wp=15u

x39	20	20^	INV	wn=5u	wp=15u
x40	20^	Best-Found-Emmigration-Pin	21	NOR2	wn=10u	wp=30u

x41	Off1-0	Off1-1	Off1-2	Off1-3	Off1-4	Off1-5	Off1-6	Off1-7	Off1-8	Off1-9	Off1-10	Off1-11	Off1-12	Off1-13	Off1-14	Off1-15	Off1-16	Off1-17	Off1-18	Off1-19	Off1-20	Off1-21	Off1-22	Off1-23	Off1-24	Off1-25	Off1-26	Off1-27	Off1-28	Off1-29	Off1-30	Off1-31	Off1-32	Off1-33	Off1-34	Off1-35	Off1-36	Off1-37	Off1-38	Off1-39	Off1-40	Off1-41	Off1-42	Off1-43	Off1-44	Off1-45	Off1-46	Off1-47	Off1-48	Off1-49	Off1-50	Off1-51	Off1-52	Off1-53	Off1-54	Off1-55	Off1-56	Off1-57	Off1-58	Off1-59	Off1-60	Off1-61	Off1-62	Off1-63	bf0	bf1	bf2	bf3	bf4	bf5	bf6	bf7	bf8	bf9	bf10	bf11	bf12	bf13	bf14	bf15	bf16	bf17	bf18	bf19	bf20	bf21	bf22	bf23	bf24	bf25	bf26	bf27	bf28	bf29	bf30	bf31	bf32	bf33	bf34	bf35	bf36	bf37	bf38	bf39	bf40	bf41	bf42	bf43	bf44	bf45	bf46	bf47	bf48	bf49	bf50	bf51	bf52	bf53	bf54	bf55	bf56	bf57	bf58	bf59	bf60	bf61	bf62	bf63	pre-m0	pre-m1	pre-m2	pre-m3	pre-m4	pre-m5	pre-m6	pre-m7	pre-m8	pre-m9	pre-m10	pre-m11	pre-m12	pre-m13	pre-m14	pre-m15	pre-m16	pre-m17	pre-m18	pre-m19	pre-m20	pre-m21	pre-m22	pre-m23	pre-m24	pre-m25	pre-m26	pre-m27	pre-m28	pre-m29	pre-m30	pre-m31	pre-m32	pre-m33	pre-m34	pre-m35	pre-m36	pre-m37	pre-m38	pre-m39	pre-m40	pre-m41	pre-m42	pre-m43	pre-m44	pre-m45	pre-m46	pre-m47	pre-m48	pre-m49	pre-m50	pre-m51	pre-m52	pre-m53	pre-m54	pre-m55	pre-m56	pre-m57	pre-m58	pre-m59	pre-m60	pre-m61	pre-m62	pre-m63	21	MUX-Array-64	wn=0.25u	wp=0.75u

x42	Handshake-Enable	Chromosome-Resolution-Pin	30	30^	AND2	wn=8u	wp=24u
x43	Handshake-Enable	Fitness-Resolution-Pin	31	31^	AND2	wn=8u	wp=24u

x44	30	Emmigration-Enable-Flag	32	32^	AND2	wn=8u	wp=24u
x45	31	Emmigration-Enable-Flag	33	33^	AND2	wn=8u	wp=24u
x46	Handshake-Enable	Emmigration-Enable-Flag	34	34^	AND2	wn=16u	wp=48u

x47	pre-m0	pre-m1	pre-m2	pre-m3	pre-m4	pre-m5	pre-m6	pre-m7	pre-m8	pre-m9	pre-m10	pre-m11	pre-m12	pre-m13	pre-m14	pre-m15	pre-m16	pre-m17	pre-m18	pre-m19	pre-m20	pre-m21	pre-m22	pre-m23	pre-m24	pre-m25	pre-m26	pre-m27	pre-m28	pre-m29	pre-m30	pre-m31	pre-m32	pre-m33	pre-m34	pre-m35	pre-m36	pre-m37	pre-m38	pre-m39	pre-m40	pre-m41	pre-m42	pre-m43	pre-m44	pre-m45	pre-m46	pre-m47	pre-m48	pre-m49	pre-m50	pre-m51	pre-m52	pre-m53	pre-m54	pre-m55	pre-m56	pre-m57	pre-m58	pre-m59	pre-m60	pre-m61	pre-m62	pre-m63	m0	m1	m2	m3	m4	m5	m6	m7	m8	m9	m10	m11	m12	m13	m14	m15	m16	m17	m18	m19	m20	m21	m22	m23	m24	m25	m26	m27	m28	m29	m30	m31	m32	m33	m34	m35	m36	m37	m38	m39	m40	m41	m42	m43	m44	m45	m46	m47	m48	m49	m50	m51	m52	m53	m54	m55	m56	m57	m58	m59	m60	m61	m62	m63	34	34^	32	32^	33	33^	CK-INV-Array-64	wn=0.25u	wp=0.75u

x48	m16	m17	m18	m19	m20	m21	m22	m23	m24	m25	m26	m27	m28	m29	m30	m31	m32	m33	m34	m35	m36	m37	m38	m39	m40	m41	m42	m43	m44	m45	m46	m47	xm16	xm17	xm18	xm19	xm20	xm21	xm22	xm23	xm24	xm25	xm26	xm27	xm28	xm29	xm30	xm31	Chromosome-Resolution-Pin	MUX-Array-16	wn=0.25u	wp=0.75u

x49	m32	m33	m34	m35	m36	m37	m38	m39	m40	m41	m42	m43	m44	m45	m46	m47	m48	m49	m50	m51	m52	m53	m54	m55	m56	m57	m58	m59	m60	m61	m62	m63	xm32	xm33	xm34	xm35	xm36	xm37	xm38	xm39	xm40	xm41	xm42	xm43	xm44	xm45	xm46	xm47	Chromosome-Resolution-Pin	MUX-Array-16	wn=0.25u	wp=0.75u

x50	m63	m63^	INV	wn=0.25u	wp=0.75u
x51	m63^	40	m62	m61	m60	xm47	clk-Emmigration	clk-Emmigration^	Register-Preloadable-Line-4	wn=0.25u	wp=0.75u

x52	m59	m59^	INV	wn=0.25u	wp=0.75u
x53	m59^	41	m58	m57	m56	xm43	clk-Emmigration	clk-Emmigration^	Register-Preloadable-Line-4	wn=0.25u	wp=0.75u

x54	m55	m55^	INV	wn=0.25u	wp=0.75u
x55	m55^	42	m54	m53	m52	xm39	clk-Emmigration	clk-Emmigration^	Register-Preloadable-Line-4	wn=0.25u	wp=0.75u

x56	m51	m51^	INV	wn=0.25u	wp=0.75u
x57	m51^	43	m50	m49	m48	xm35	clk-Emmigration	clk-Emmigration^	Register-Preloadable-Line-4	wn=0.25u	wp=0.75u

x58	40	50	xm46	xm45	xm44	xm31	clk-Emmigration	clk-Emmigration^	Register-Preloadable-Line-4	wn=0.25u	wp=0.75u

x59	41	51	xm42	xm41	xm40	xm27	clk-Emmigration	clk-Emmigration^	Register-Preloadable-Line-4	wn=0.25u	wp=0.75u

x60	42	52	xm38	xm37	xm36	xm23	clk-Emmigration	clk-Emmigration^	Register-Preloadable-Line-4	wn=0.25u	wp=0.75u

x61	43	53	xm34	xm33	xm32	xm19	clk-Emmigration	clk-Emmigration^	Register-Preloadable-Line-4	wn=0.25u	wp=0.75u

x62	50	60	xm30	xm29	xm28	m15	clk-Emmigration	clk-Emmigration^	Register-Preloadable-Line-4	wn=0.25u	wp=0.75u

x63	51	61	xm26	xm25	xm24	m11	clk-Emmigration	clk-Emmigration^	Register-Preloadable-Line-4	wn=0.25u	wp=0.75u

x64	52	62	xm22	xm21	xm20	m7	clk-Emmigration	clk-Emmigration^	Register-Preloadable-Line-4	wn=0.25u	wp=0.75u

x65	53	63	xm18	xm17	xm16	m3	clk-Emmigration	clk-Emmigration^	Register-Preloadable-Line-4	wn=0.25u	wp=0.75u

x66	60	SPI-Out-Line1	m14	m13	m12	clk-Emmigration	clk-Emmigration^	Register-Preloadable-Line-3-Non-Preloadable-1	wn=0.25u	wp=0.75u

x67	61	SPI-Out-Line2	m10	m9	m8	clk-Emmigration	clk-Emmigration^	Register-Preloadable-Line-3-Non-Preloadable-1	wn=0.25u	wp=0.75u

x68	62	SPI-Out-Line3	m6	m5	m4	clk-Emmigration	clk-Emmigration^	Register-Preloadable-Line-3-Non-Preloadable-1	wn=0.25u	wp=0.75u

x69	63	SPI-Out-Line4	m2	m1	m0	clk-Emmigration	clk-Emmigration^	Register-Preloadable-Line-3-Non-Preloadable-1	wn=0.25u	wp=0.75u


************************************************************************************************Arrays

.subckt	Register-Preloadable-Line-3-Non-Preloadable-1	in	out	preload1	preload2	preload3	clk	clk^	wn=1u	wp=3u	le=0.18u
x1	in	1	preload1	clk	clk^	Register-Preloadable	wn='wn'	wp='wp'	le='le'
x2	1	2	preload2	clk	clk^	Register-Preloadable	wn='wn'	wp='wp'	le='le'
x3	2	3	preload3	clk	clk^	Register-Preloadable	wn='wn'	wp='wp'	le='le'
x4	3	out	clk	clk^	Register	wn='wn'	wp='wp'	le='le'
.ends

.subckt	Register-Preloadable-Line-4	in	out	preload1	preload2	preload3	preload4	clk	clk^	wn=1u	wp=3u	le=0.18u
x1	in	1	preload1	clk	clk^	Register-Preloadable	wn='wn'	wp='wp'	le='le'
x2	1	2	preload2	clk	clk^	Register-Preloadable	wn='wn'	wp='wp'	le='le'
x3	2	3	preload3	clk	clk^	Register-Preloadable	wn='wn'	wp='wp'	le='le'
x4	3	out	preload4	clk	clk^	Register-Preloadable	wn='wn'	wp='wp'	le='le'
.ends

.subckt	MUX-Array-64	in1-1	in1-2	in1-3	in1-4	in1-5	in1-6	in1-7	in1-8	in1-9	in1-10	in1-11	in1-12	in1-13	in1-14	in1-15	in1-16	in1-17	in1-18	in1-19	in1-20	in1-21	in1-22	in1-23	in1-24	in1-25	in1-26	in1-27	in1-28	in1-29	in1-30	in1-31	in1-32	in1-33	in1-34	in1-35	in1-36	in1-37	in1-38	in1-39	in1-40	in1-41	in1-42	in1-43	in1-44	in1-45	in1-46	in1-47	in1-48	in1-49	in1-50	in1-51	in1-52	in1-53	in1-54	in1-55	in1-56	in1-57	in1-58	in1-59	in1-60	in1-61	in1-62	in1-63	in1-64	in2-1	in2-2	in2-3	in2-4	in2-5	in2-6	in2-7	in2-8	in2-9	in2-10	in2-11	in2-12	in2-13	in2-14	in2-15	in2-16	in2-17	in2-18	in2-19	in2-20	in2-21	in2-22	in2-23	in2-24	in2-25	in2-26	in2-27	in2-28	in2-29	in2-30	in2-31	in2-32	in2-33	in2-34	in2-35	in2-36	in2-37	in2-38	in2-39	in2-40	in2-41	in2-42	in2-43	in2-44	in2-45	in2-46	in2-47	in2-48	in2-49	in2-50	in2-51	in2-52	in2-53	in2-54	in2-55	in2-56	in2-57	in2-58	in2-59	in2-60	in2-61	in2-62	in2-63	in2-64	out1	out2	out3	out4	out5	out6	out7	out8	out9	out10	out11	out12	out13	out14	out15	out16	out17	out18	out19	out20	out21	out22	out23	out24	out25	out26	out27	out28	out29	out30	out31	out32	out33	out34	out35	out36	out37	out38	out39	out40	out41	out42	out43	out44	out45	out46	out47	out48	out49	out50	out51	out52	out53	out54	out55	out56	out57	out58	out59	out60	out61	out62	out63	out64	control	wn=1u	wp=3u	le=0.18u
x1	in1-1	in1-2	in1-3	in1-4	in1-5	in1-6	in1-7	in1-8	in1-9	in1-10	in1-11	in1-12	in1-13	in1-14	in1-15	in1-16	in2-1	in2-2	in2-3	in2-4	in2-5	in2-6	in2-7	in2-8	in2-9	in2-10	in2-11	in2-12	in2-13	in2-14	in2-15	in2-16	out1	out2	out3	out4	out5	out6	out7	out8	out9	out10	out11	out12	out13	out14	out15	out16	control	MUX-Array-16	wn='wn'	wp='wp'	le='le'
x2	in1-17	in1-18	in1-19	in1-20	in1-21	in1-22	in1-23	in1-24	in1-25	in1-26	in1-27	in1-28	in1-29	in1-30	in1-31	in1-32	in2-17	in2-18	in2-19	in2-20	in2-21	in2-22	in2-23	in2-24	in2-25	in2-26	in2-27	in2-28	in2-29	in2-30	in2-31	in2-32	out17	out18	out19	out20	out21	out22	out23	out24	out25	out26	out27	out28	out29	out30	out31	out32	control	MUX-Array-16	wn='wn'	wp='wp'	le='le'
x3	in1-33	in1-34	in1-35	in1-36	in1-37	in1-38	in1-39	in1-40	in1-41	in1-42	in1-43	in1-44	in1-45	in1-46	in1-47	in1-48	in2-33	in2-34	in2-35	in2-36	in2-37	in2-38	in2-39	in2-40	in2-41	in2-42	in2-43	in2-44	in2-45	in2-46	in2-47	in2-48	out33	out34	out35	out36	out37	out38	out39	out40	out41	out42	out43	out44	out45	out46	out47	out48	control	MUX-Array-16	wn='wn'	wp='wp'	le='le'
x4	in1-49	in1-50	in1-51	in1-52	in1-53	in1-54	in1-55	in1-56	in1-57	in1-58	in1-59	in1-60	in1-61	in1-62	in1-63	in1-64	in2-49	in2-50	in2-51	in2-52	in2-53	in2-54	in2-55	in2-56	in2-57	in2-58	in2-59	in2-60	in2-61	in2-62	in2-63	in2-64	out49	out50	out51	out52	out53	out54	out55	out56	out57	out58	out59	out60	out61	out62	out63	out64	control	MUX-Array-16	wn='wn'	wp='wp'	le='le'
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

.subckt	CK-INV-Array-64	in1	in2	in3	in4	in5	in6	in7	in8	in9	in10	in11	in12	in13	in14	in15	in16	in17	in18	in19	in20	in21	in22	in23	in24	in25	in26	in27	in28	in29	in30	in31	in32	in33	in34	in35	in36	in37	in38	in39	in40	in41	in42	in43	in44	in45	in46	in47	in48	in49	in50	in51	in52	in53	in54	in55	in56	in57	in58	in59	in60	in61	in62	in63	in64	out1	out2	out3	out4	out5	out6	out7	out8	out9	out10	out11	out12	out13	out14	out15	out16	out17	out18	out19	out20	out21	out22	out23	out24	out25	out26	out27	out28	out29	out30	out31	out32	out33	out34	out35	out36	out37	out38	out39	out40	out41	out42	out43	out44	out45	out46	out47	out48	out49	out50	out51	out52	out53	out54	out55	out56	out57	out58	out59	out60	out61	out62	out63	out64	clk	clk^	clk-chromosome	clk-chromosome^	clk-fitness	clk-fitness^	wn=1u	wp=3u	le=0.18u
x1	in1	in2	in3	in4	in5	in6	in7	in8	in9	in10	in11	in12	in13	in14	in15	in16	out1	out2	out3	out4	out5	out6	out7	out8	out9	out10	out11	out12	out13	out14	out15	out16	clk	clk^	CK-INV-Array-16	wn='wn'	wp='wp'	le='le'
x2	in17	in18	in19	in20	in21	in22	in23	in24	in25	in26	in27	in28	in29	in30	in31	in32	out17	out18	out19	out20	out21	out22	out23	out24	out25	out26	out27	out28	out29	out30	out31	out32	clk-chromosome	clk-chromosome^	CK-INV-Array-16	wn='wn'	wp='wp'	le='le'
x3	in33	in34	in35	in36	in37	in38	in39	in40	in41	in42	in43	in44	in45	in46	in47	in48	out33	out34	out35	out36	out37	out38	out39	out40	out41	out42	out43	out44	out45	out46	out47	out48	clk	clk^	CK-INV-Array-16	wn='wn'	wp='wp'	le='le'
x4	in49	in50	in51	in52	in53	in54	in55	in56	in57	in58	in59	in60	in61	in62	in63	in64	out49	out50	out51	out52	out53	out54	out55	out56	out57	out58	out59	out60	out61	out62	out63	out64	clk-fitness	clk-fitness^	CK-INV-Array-16	wn='wn'	wp='wp'	le='le'
.ends

.subckt	CK-INV-Array-16	in1	in2	in3	in4	in5	in6	in7	in8	in9	in10	in11	in12	in13	in14	in15	in16	out1	out2	out3	out4	out5	out6	out7	out8	out9	out10	out11	out12	out13	out14	out15	out16	clk	clk^	wn=1u	wp=3u	le=0.18u
x1	in1	in2	in3	in4	out1	out2	out3	out4	clk	clk^	CK-INV-Array-4	wn='wn'	wp='wp'	le='le'
x2	in5	in6	in7	in8	out5	out6	out7	out8	clk	clk^	CK-INV-Array-4	wn='wn'	wp='wp'	le='le'
x3	in9	in10	in11	in12	out9	out10	out11	out12	clk	clk^	CK-INV-Array-4	wn='wn'	wp='wp'	le='le'
x4	in13	in14	in15	in16	out13	out14	out15	out16	clk	clk^	CK-INV-Array-4	wn='wn'	wp='wp'	le='le'
.ends

.subckt	CK-INV-Array-4	in1	in2	in3	in4	out1	out2	out3	out4	clk	clk^	wn=1u	wp=3u	le=0.18u
x1	in1	out1	clk	clk^	CK-INV	wn='wn'	wp='wp'	le='le'
x2	in2	out2	clk	clk^	CK-INV	wn='wn'	wp='wp'	le='le'
x3	in3	out3	clk	clk^	CK-INV	wn='wn'	wp='wp'	le='le'
x4	in4	out4	clk	clk^	CK-INV	wn='wn'	wp='wp'	le='le'
.ends

************************************************************************************************Components

***Multiplexer***
.subckt	MUX	in1	in2	out	control	wn=1u	wp=3u	le=0.18u
x1	in1	out	control	control^	TG	wn='wn'	wp='wp'	le='le'
x2	in2	out	control^	control	TG	wn='wn'	wp='wp'	le='le'
x3	control	control^	INV	wn='wn'	wp='wp'	le='le'
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

***2-Input NAND***
.subckt	NAND2	in1	in2	out	wn=1u	wp=3u	le=0.18u
m1	out	in1	vdd	vdd	mp18	w=wp	l=le
m2	out	in2	vdd	vdd	mp18	w=wp	l=le
m3	out	in1	a	0	mn18	w='2*wn'	l=le
m4	a	in2	0	0	mn18	w='2*wn'	l=le
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

***2-Input AND***
.subckt	AND2	in1	in2	out	out^	wn=1u	wp=3u	le=0.18u
x1	in1	in2	out^	NAND2	wn='wn'	wp='wp'	le='le'
x2	out^	out	INV	wn='wn'	wp='wp'	le='le'
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

***3-Input NOR***
.subckt	NOR3	in1	in2	in3	out	wn=1u	wp=3u	le=0.18u
m1	b	in3	vdd	vdd	mp18	w='3*wp'	l=le
m2	a	in2	b	vdd	mp18	w='3*wp'	l=le
m3	out	in1	a	vdd	mp18	w='3*wp'	l=le
m4	out	in1	0	0	mn18	w=wn	l=le
m5	out	in2	0	0	mn18	w=wn	l=le
m6	out	in3	0	0	mn18	w=wn	l=le
.ends

***2-Input XOR (Pass Transistor Logic)
.subckt	XOR2	in1	in2	in2^	out	wn=1u	wp=3u	le=0.18u
m1	out	in2	in1	vdd	mp18	w=wp	l=le
m2	in1	in2^	out	0	mn18	w=wn	l=le
m3	out	in1	in2	vdd	mp18	w=wp	l=le
m4	out	in1	in2^	0	mn18	w=wn	l=le
.ends

***Full Register with asyncronous loading
.subckt	Register-Preloadable	in	out	c	clk	clk^	wn=1u	wp=3u	le=0.18u
x1	in	a	clk^	clk	TG	wn='wn'	wp='wp'	le='le'
x2	a	b	INV	wn='wn'	wp='wp'	le='le'
x3	b	c	clk	clk^	TG	wn='wn'	wp='wp'	le='le'
x4	c	out	INV	wn='wn'	wp='wp'	le='le'
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

.ends	Emmigration