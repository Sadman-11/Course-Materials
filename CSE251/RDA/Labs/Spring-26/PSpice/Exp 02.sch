*version 9.1 477227653
u 34
V? 2
R? 2
C? 2
D? 2
? 3
@libraries
@analysis
.TRAN 1 0 0 0
+0 0ns
+1 10ms
@targets
@attributes
@translators
a 0 u 13 0 0 0 hln 100 PCBOARDS=PCB
a 0 u 13 0 0 0 hln 100 PSPICE=PSPICE
a 0 u 13 0 0 0 hln 100 XILINX=XILINX
@setup
unconnectedPins 0
connectViaLabel 0
connectViaLocalLabels 0
NoStim4ExtIFPortsWarnings 1
AutoGenStim4ExtIFPorts 1
@index
pageloc 1 0 2146 
@status
c 126:03:22:09:16:08;1776827768
n 0 126:03:22:09:16:10;1776827770 e 
s 2832 126:03:22:09:26:15;1776828375 e 
*page 1 0 970 720 iA
@ports
port 5 GND_EARTH 390 310 h
@parts
part 6 D1N4148 300 230 h
a 0 sp 11 0 15 25 hln 100 PART=D1N4148
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=DO-35
a 0 s 0:13 0 0 0 hln 100 GATE=
a 0 a 0:13 0 0 0 hln 100 PKGREF=D1
a 0 ap 9 0 15 0 hln 100 REFDES=D1
part 3 r 390 250 d
a 0 sp 0 0 0 10 hlb 100 PART=r
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=RC05
a 0 s 0:13 0 0 0 hln 100 GATE=
a 0 a 0:13 0 0 0 hln 100 PKGREF=R1
a 0 ap 9 0 15 0 hln 100 REFDES=R1
part 2 VSIN 250 250 h
a 1 u 0 0 0 0 hcn 100 VAMPL=5
a 1 u 0 0 0 0 hcn 100 VOFF=0
a 1 u 0 0 0 0 hcn 100 FREQ=500
a 0 a 0:13 0 0 0 hln 100 PKGREF=V1
a 1 ap 9 0 20 10 hcn 100 REFDES=V1
part 4 c 440 260 d
a 0 sp 0 0 0 10 hlb 100 PART=c
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=CK05
a 0 s 0:13 0 0 0 hln 100 GATE=
a 0 a 0:13 0 0 0 hln 100 PKGREF=C1
a 0 ap 9 0 15 0 hln 100 REFDES=C1
a 0 u 13 0 15 25 hln 100 VALUE=4.7u
part 1 titleblk 970 720 h
a 1 s 13 0 350 10 hcn 100 PAGESIZE=A
a 1 s 13 0 180 60 hcn 100 PAGETITLE=
a 1 s 13 0 340 95 hrn 100 PAGECOUNT=1
a 1 s 13 0 300 95 hrn 100 PAGENO=1
part 32 nodeMarker 250 230 h
a 0 s 0 0 0 0 hln 100 PROBEVAR=
a 0 a 0 0 4 22 hlb 100 LABEL=1
part 33 nodeMarker 390 230 h
a 0 s 0 0 0 0 hln 100 PROBEVAR=
a 0 a 0 0 4 22 hlb 100 LABEL=2
@conn
w 20
a 0 up 0:33 0 0 0 hln 100 V=
s 440 290 440 310 19
s 440 310 390 310 21
s 390 290 390 310 23
s 390 310 250 310 26
a 0 up 33 0 320 309 hct 100 V=
s 250 310 250 290 28
w 8
a 0 up 0:33 0 0 0 hln 100 V=
s 250 250 250 230 7
s 250 230 300 230 9
a 0 up 33 0 275 229 hct 100 V=
w 12
a 0 up 0:33 0 0 0 hln 100 V=
s 330 230 390 230 11
a 0 up 33 0 360 229 hct 100 V=
s 390 230 390 250 13
s 390 230 440 230 15
s 440 230 440 260 17
@junction
j 250 250
+ p 2 +
+ w 8
j 300 230
+ p 6 1
+ w 8
j 330 230
+ p 6 2
+ w 12
j 390 250
+ p 3 1
+ w 12
j 390 230
+ w 12
+ w 12
j 440 260
+ p 4 1
+ w 12
j 440 290
+ p 4 2
+ w 20
j 390 290
+ p 3 2
+ w 20
j 390 310
+ w 20
+ w 20
j 250 290
+ p 2 -
+ w 20
j 390 310
+ s 5
+ w 20
j 250 230
+ p 32 pin1
+ w 8
j 390 230
+ p 33 pin1
+ w 12
@attributes
a 0 s 0:13 0 0 0 hln 100 PAGETITLE=
a 0 s 0:13 0 0 0 hln 100 PAGENO=1
a 0 s 0:13 0 0 0 hln 100 PAGESIZE=A
a 0 s 0:13 0 0 0 hln 100 PAGECOUNT=1
@graphics
