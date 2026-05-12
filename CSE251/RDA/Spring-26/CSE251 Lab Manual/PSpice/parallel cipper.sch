*version 9.1 3053509277
u 28
V? 3
R? 2
D? 2
@libraries
@analysis
.TRAN 1 0 0 0
+0 0ns
+1 0.1s
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
pageloc 1 0 1810 
@status
n 0 126:01:01:12:52:12;1769928732 e 
s 2832 126:01:01:12:52:12;1769928732 e 
*page 1 0 970 720 iA
@ports
port 6 GND_EARTH 320 350 h
@parts
part 3 r 310 220 h
a 0 sp 0 0 0 10 hlb 100 PART=r
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=RC05
a 0 s 0:13 0 0 0 hln 100 GATE=
a 0 a 0:13 0 0 0 hln 100 PKGREF=R1
a 0 ap 9 0 15 0 hln 100 REFDES=R1
part 4 D1N4148 390 240 d
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=DO-35
a 0 s 0:13 0 0 0 hln 100 GATE=
a 0 a 0:13 0 0 0 hln 100 PKGREF=D1
a 0 ap 9 0 15 0 hln 100 REFDES=D1
a 0 sp 11 0 0 25 hln 100 PART=D1N4148
part 5 VDC 390 320 u
a 0 sp 0 0 22 37 hln 100 PART=VDC
a 0 a 0:13 0 0 0 hln 100 PKGREF=V2
a 1 ap 9 0 24 7 hcn 100 REFDES=V2
a 1 u 13 0 -11 18 hcn 100 DC=2V
part 2 VSIN 260 260 h
a 0 a 0:13 0 0 0 hln 100 PKGREF=V1
a 1 ap 9 0 20 10 hcn 100 REFDES=V1
a 1 u 0 0 0 0 hcn 100 VOFF=0
a 1 u 0 0 0 0 hcn 100 VAMPL=6
a 1 u 0 0 0 0 hcn 100 FREQ=50
part 1 titleblk 970 720 h
a 1 s 13 0 350 10 hcn 100 PAGESIZE=A
a 1 s 13 0 180 60 hcn 100 PAGETITLE=
a 1 s 13 0 300 95 hrn 100 PAGENO=1
a 1 s 13 0 340 95 hrn 100 PAGECOUNT=1
@conn
w 16
a 0 up 0:33 0 0 0 hln 100 V=
s 390 320 390 350 15
s 390 350 320 350 17
a 0 up 33 0 355 349 hct 100 V=
s 320 350 260 350 19
s 260 350 260 300 21
w 8
a 0 up 0:33 0 0 0 hln 100 V=
s 260 260 260 220 7
s 260 220 310 220 9
a 0 up 33 0 285 219 hct 100 V=
w 12
a 0 up 0:33 0 0 0 hln 100 V=
s 350 220 390 220 11
a 0 up 33 0 370 219 hct 100 V=
s 390 220 390 240 13
w 27
a 0 up 0:33 0 0 0 hln 100 V=
s 390 270 390 280 25
a 0 up 33 0 392 275 hlt 100 V=
@junction
j 390 320
+ p 5 +
+ w 16
j 320 350
+ s 6
+ w 16
j 260 300
+ p 2 -
+ w 16
j 260 260
+ p 2 +
+ w 8
j 310 220
+ p 3 1
+ w 8
j 350 220
+ p 3 2
+ w 12
j 390 240
+ p 4 1
+ w 12
j 390 270
+ p 4 2
+ w 27
j 390 280
+ p 5 -
+ w 27
@attributes
a 0 s 0:13 0 0 0 hln 100 PAGETITLE=
a 0 s 0:13 0 0 0 hln 100 PAGENO=1
a 0 s 0:13 0 0 0 hln 100 PAGESIZE=A
a 0 s 0:13 0 0 0 hln 100 PAGECOUNT=1
@graphics
