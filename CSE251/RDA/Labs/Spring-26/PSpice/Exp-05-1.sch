*version 9.1 1068779222
u 61
U? 2
R? 6
C? 2
V? 2
? 3
@libraries
@analysis
.TRAN 1 0 1 0
+0 45ms
+1 50.5ms
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
pageloc 1 0 2892 
@status
n 0 126:02:31:15:17:15;1774948635 e 
s 0 126:02:31:15:17:16;1774948636 e 
c 126:02:31:15:17:23;1774948643
*page 1 0 970 720 iA
@ports
port 5 GND_EARTH 260 190 h
@parts
part 3 r 210 220 h
a 0 sp 0 0 0 10 hlb 100 PART=r
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=RC05
a 0 s 0:13 0 0 0 hln 100 GATE=
a 0 a 0:13 0 0 0 hln 100 PKGREF=R1
a 0 ap 9 0 15 0 hln 100 REFDES=R1
part 2 OPAMP 280 180 h
a 0 sp 11 0 50 60 hln 100 PART=OPAMP
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=
a 0 a 0:13 0 0 0 hln 100 PKGREF=U1
a 0 ap 9 0 14 0 hln 100 REFDES=U1
part 6 VPULSE 190 220 h
a 0 a 0:13 0 0 0 hln 100 PKGREF=V1
a 1 ap 9 0 20 10 hcn 100 REFDES=V1
a 1 u 0 0 0 0 hcn 100 DC=0
a 1 u 0 0 0 0 hcn 100 V1=1
a 1 u 0 0 0 0 hcn 100 V2=-1
a 1 u 0 0 0 0 hcn 100 TD=0
a 1 u 0 0 0 0 hcn 100 TR=1n
a 1 u 0 0 0 0 hcn 100 TF=1n
a 1 u 0 0 0 0 hcn 100 PER=1.256628ms
a 1 u 0 0 0 0 hcn 100 PW=628.314us
part 4 c 300 280 h
a 0 u 13 0 15 25 hln 100 VALUE=0.1u
a 0 sp 0 0 0 10 hlb 100 PART=c
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=CK05
a 0 s 0:13 0 0 0 hln 100 GATE=
a 0 a 0:13 0 0 0 hln 100 PKGREF=C1
a 0 ap 9 0 15 0 hln 100 REFDES=C1
a 0 u 0 0 0 0 hln 100 IC=0
part 59 r 300 320 h
a 0 sp 0 0 0 10 hlb 100 PART=r
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=RC05
a 0 s 0:13 0 0 0 hln 100 GATE=
a 0 a 0:13 0 0 0 hln 100 PKGREF=R5
a 0 ap 9 0 15 0 hln 100 REFDES=R5
a 0 u 13 0 15 25 hln 100 VALUE=999999999999999M
part 1 titleblk 970 720 h
a 1 s 13 0 350 10 hcn 100 PAGESIZE=A
a 1 s 13 0 180 60 hcn 100 PAGETITLE=
a 1 s 13 0 300 95 hrn 100 PAGENO=1
a 1 s 13 0 340 95 hrn 100 PAGECOUNT=1
part 35 nodeMarker 190 220 h
a 0 s 0 0 0 0 hln 100 PROBEVAR=
a 0 a 0 0 4 22 hlb 100 LABEL=2
part 34 nodeMarker 370 200 h
a 0 s 0 0 0 0 hln 100 PROBEVAR=
a 0 a 0 0 4 22 hlb 100 LABEL=1
@conn
w 20
a 0 up 0:33 0 0 0 hln 100 V=
s 210 220 190 220 19
a 0 up 33 0 200 219 hct 100 V=
w 38
a 0 up 0:33 0 0 0 hln 100 V=
s 300 320 260 320 37
s 300 280 260 280 23
s 250 220 260 220 21
s 260 220 280 220 27
s 260 280 260 220 25
a 0 up 33 0 262 250 hlt 100 V=
s 260 320 260 280 39
w 60
a 0 up 0:33 0 0 0 hln 100 V=
s 260 190 260 180 7
s 260 180 280 180 9
s 100 180 260 180 17
a 0 up 33 0 180 179 hct 100 V=
s 100 280 100 180 15
s 190 280 100 280 13
s 190 260 190 280 11
w 12
a 0 up 0:33 0 0 0 hln 100 V=
s 340 320 370 320 41
s 330 280 370 280 28
s 370 280 370 200 30
a 0 up 33 0 372 240 hlt 100 V=
s 370 200 360 200 32
s 370 320 370 280 43
@junction
j 260 190
+ s 5
+ w 60
j 280 180
+ p 2 +
+ w 60
j 260 180
+ w 60
+ w 60
j 210 220
+ p 3 1
+ w 20
j 260 220
+ w 38
+ w 38
j 190 220
+ p 35 pin1
+ w 20
j 280 220
+ p 2 -
+ w 38
j 250 220
+ p 3 2
+ w 38
j 260 280
+ w 38
+ w 38
j 370 280
+ w 12
+ w 12
j 190 260
+ p 6 -
+ w 60
j 190 220
+ p 6 +
+ w 20
j 190 220
+ p 35 pin1
+ p 6 +
j 360 200
+ p 2 OUT
+ w 12
j 370 200
+ p 34 pin1
+ w 12
j 300 320
+ p 59 1
+ w 38
j 340 320
+ p 59 2
+ w 12
j 300 280
+ p 4 1
+ w 38
j 330 280
+ p 4 2
+ w 12
@attributes
a 0 s 0:13 0 0 0 hln 100 PAGETITLE=
a 0 s 0:13 0 0 0 hln 100 PAGENO=1
a 0 s 0:13 0 0 0 hln 100 PAGESIZE=A
a 0 s 0:13 0 0 0 hln 100 PAGECOUNT=1
@graphics
