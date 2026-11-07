*version 9.1 870842239
u 42
R? 2
V? 2
D? 2
@libraries
@analysis
.DC 1 0 0 0 1 1
+ 0 0 V1
+ 0 4 0
+ 0 5 50
+ 0 6 0.1
.LIB G:\My Drive\1EWU\Course Content\CSE251\CSE251 Lab Manual\PSpice\Exp 01 - 14 Jan 2026.lib
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
pageloc 1 0 1536 
@status
n 0 126:00:14:14:06:14;1768377974 e 
s 2832 126:00:14:14:06:15;1768377975 e 
*page 1 0 970 720 iA
@ports
port 5 GND_EARTH 550 310 h
@parts
part 2 r 610 260 d
a 0 sp 0 0 0 10 hlb 100 PART=r
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=RC05
a 0 s 0:13 0 0 0 hln 100 GATE=
a 0 a 0:13 0 0 0 hln 100 PKGREF=R1
a 0 ap 9 0 15 0 hln 100 REFDES=R1
part 3 VDC 450 260 h
a 0 sp 0 0 22 37 hln 100 PART=VDC
a 0 a 0:13 0 0 0 hln 100 PKGREF=V1
a 1 ap 9 0 24 7 hcn 100 REFDES=V1
a 1 u 13 0 -11 18 hcn 100 DC=20V
part 4 D1N4148 530 250 h
a 0 sp 11 0 15 25 hln 100 PART=D1N4148
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=DO-35
a 0 s 0:13 0 0 0 hln 100 GATE=
a 0 a 0:13 0 0 0 hln 100 PKGREF=D1
a 0 ap 9 0 15 0 hln 100 REFDES=D1
a 0 sp 0 0 15 25 hln 100 MODEL=D1N4148-X
part 1 titleblk 970 720 h
a 1 s 13 0 350 10 hcn 100 PAGESIZE=A
a 1 s 13 0 180 60 hcn 100 PAGETITLE=
a 1 s 13 0 300 95 hrn 100 PAGENO=1
a 1 s 13 0 340 95 hrn 100 PAGECOUNT=1
@conn
w 11
a 0 up 0:33 0 0 0 hln 100 V=
s 610 250 610 260 12
s 560 250 610 250 10
a 0 up 33 0 585 249 hct 100 V=
w 40
a 0 up 0:33 0 0 0 hln 100 V=
s 610 310 550 310 16
s 610 300 610 310 14
s 550 310 450 310 18
a 0 up 33 0 500 309 hct 100 V=
s 450 310 450 300 20
w 7
a 0 up 0:33 0 0 0 hln 100 V=
s 450 260 450 250 6
s 450 250 530 250 8
a 0 up 33 0 490 249 hct 100 V=
@junction
j 550 310
+ s 5
+ w 40
j 610 300
+ p 2 2
+ w 40
j 610 260
+ p 2 1
+ w 11
j 560 250
+ p 4 2
+ w 11
j 450 300
+ p 3 -
+ w 40
j 450 260
+ p 3 +
+ w 7
j 530 250
+ p 4 1
+ w 7
@attributes
a 0 s 0:13 0 0 0 hln 100 PAGETITLE=
a 0 s 0:13 0 0 0 hln 100 PAGENO=1
a 0 s 0:13 0 0 0 hln 100 PAGESIZE=A
a 0 s 0:13 0 0 0 hln 100 PAGECOUNT=1
@graphics
