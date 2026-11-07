*version 9.1 538318332
u 74
V? 5
D? 2
C? 2
R? 2
@libraries
@analysis
.TRAN 1 0 0 0
+0 0.1ns
+1 2.5ms
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
pageloc 1 0 1609 
@status
n 0 125:06:15:09:31:08;1752550268 e 
s 2832 125:09:29:16:37:04;1761734224 e 
*page 1 0 970 720 iA
@ports
port 6 GND_EARTH 390 240 h
@parts
part 31 VDC 460 200 h
a 0 sp 0 0 22 37 hln 100 PART=VDC
a 0 a 0:13 0 0 0 hln 100 PKGREF=V2
a 1 ap 9 0 24 7 hcn 100 REFDES=V2
a 1 u 13 0 -11 18 hcn 100 DC=4V
part 55 VSIN 270 180 h
a 0 a 0:13 0 0 0 hln 100 PKGREF=V4
a 1 ap 9 0 20 10 hcn 100 REFDES=V4
a 1 u 0 0 0 0 hcn 100 DC=0
a 1 u 0 0 0 0 hcn 100 VAMPL=16
a 1 u 0 0 0 0 hcn 100 FREQ=1000
a 1 u 0 0 0 0 hcn 100 VOFF=0
part 5 r 460 160 d
a 0 sp 0 0 0 10 hlb 100 PART=r
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=RC05
a 0 s 0:13 0 0 0 hln 100 GATE=
a 0 a 0:13 0 0 0 hln 100 PKGREF=R1
a 0 ap 9 0 15 0 hln 100 REFDES=R1
part 3 D1N4148 380 160 h
a 0 sp 11 0 15 25 hln 100 PART=D1N4148
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=DO-35
a 0 s 0:13 0 0 0 hln 100 GATE=
a 0 a 0:13 0 0 0 hln 100 PKGREF=D1
a 0 ap 9 0 15 0 hln 100 REFDES=D1
part 1 titleblk 970 720 h
a 1 s 13 0 350 10 hcn 100 PAGESIZE=A
a 1 s 13 0 180 60 hcn 100 PAGETITLE=
a 1 s 13 0 340 95 hrn 100 PAGECOUNT=1
a 1 s 13 0 300 95 hrn 100 PAGENO=1
@conn
w 47
a 0 up 0:33 0 0 0 hln 100 V=
s 460 240 390 240 21
s 390 240 270 240 25
a 0 up 33 0 330 239 hct 100 V=
s 270 220 270 240 56
w 59
a 0 up 0:33 0 0 0 hln 100 V=
s 270 160 270 180 53
s 380 160 270 160 70
w 73
s 410 160 460 160 72
@junction
j 460 240
+ p 31 -
+ w 47
j 460 200
+ p 31 +
+ p 5 2
j 390 240
+ s 6
+ w 47
j 270 220
+ p 55 -
+ w 47
j 270 180
+ p 55 +
+ w 59
j 380 160
+ p 3 1
+ w 59
j 460 160
+ p 5 1
+ w 73
j 410 160
+ p 3 2
+ w 73
@attributes
a 0 s 0:13 0 0 0 hln 100 PAGETITLE=
a 0 s 0:13 0 0 0 hln 100 PAGENO=1
a 0 s 0:13 0 0 0 hln 100 PAGESIZE=A
a 0 s 0:13 0 0 0 hln 100 PAGECOUNT=1
@graphics
