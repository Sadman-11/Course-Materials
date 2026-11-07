*version 9.1 2131965056
u 33
V? 3
D? 2
C? 2
R? 2
@libraries
@analysis
.DC 1 0 0 0 1 1
+ 0 0 V2
+ 0 4 0
+ 0 5 25
+ 0 6 0.001
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
pageloc 1 0 1522 
@status
n 0 125:09:29:15:53:44;1761731624 e 
s 2832 125:09:29:15:53:44;1761731624 e 
*page 1 0 970 720 iA
@ports
port 6 GND_EARTH 390 230 h
@parts
part 3 D1N4148 300 160 h
a 0 sp 11 0 15 25 hln 100 PART=D1N4148
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=DO-35
a 0 s 0:13 0 0 0 hln 100 GATE=
a 0 a 0:13 0 0 0 hln 100 PKGREF=D1
a 0 ap 9 0 15 0 hln 100 REFDES=D1
part 29 VDC 270 180 h
a 0 sp 0 0 22 37 hln 100 PART=VDC
a 0 a 0:13 0 0 0 hln 100 PKGREF=V2
a 1 ap 9 0 24 7 hcn 100 REFDES=V2
part 5 r 460 170 d
a 0 sp 0 0 0 10 hlb 100 PART=r
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=RC05
a 0 s 0:13 0 0 0 hln 100 GATE=
a 0 a 0:13 0 0 0 hln 100 PKGREF=R1
a 0 ap 9 0 15 0 hln 100 REFDES=R1
a 0 u 13 0 15 25 hln 100 VALUE=10k
part 1 titleblk 970 720 h
a 1 s 13 0 350 10 hcn 100 PAGESIZE=A
a 1 s 13 0 180 60 hcn 100 PAGETITLE=
a 1 s 13 0 340 95 hrn 100 PAGECOUNT=1
a 1 s 13 0 300 95 hrn 100 PAGENO=1
@conn
w 12
a 0 up 0:33 0 0 0 hln 100 V=
s 330 160 460 160 11
a 0 up 33 0 425 159 hct 100 V=
s 460 160 460 170 17
w 20
a 0 up 0:33 0 0 0 hln 100 V=
s 460 210 460 230 19
s 460 230 390 230 21
s 390 230 270 230 25
a 0 up 33 0 330 229 hct 100 V=
s 270 230 270 220 27
s 270 220 270 210 30
w 8
a 0 up 0:33 0 0 0 hln 100 V=
s 270 160 300 160 9
a 0 up 33 0 285 159 hct 100 V=
s 270 160 270 180 31
@junction
j 300 160
+ p 3 1
+ w 8
j 330 160
+ p 3 2
+ w 12
j 460 170
+ p 5 1
+ w 12
j 460 210
+ p 5 2
+ w 20
j 390 230
+ s 6
+ w 20
j 270 220
+ p 29 -
+ w 20
j 270 180
+ p 29 +
+ w 8
@attributes
a 0 s 0:13 0 0 0 hln 100 PAGETITLE=
a 0 s 0:13 0 0 0 hln 100 PAGENO=1
a 0 s 0:13 0 0 0 hln 100 PAGESIZE=A
a 0 s 0:13 0 0 0 hln 100 PAGECOUNT=1
@graphics
