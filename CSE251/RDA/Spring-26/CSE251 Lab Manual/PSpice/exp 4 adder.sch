*version 9.1 596704568
u 48
U? 2
R? 6
V? 4
@libraries
@analysis
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
pageloc 1 0 2873 
@status
n 0 125:07:03:10:24:53;1754195093 e 
s 2832 125:07:03:10:24:53;1754195093 e 
*page 1 0 970 720 iA
@ports
port 21 GND_ANALOG 680 210 h
port 22 GND_ANALOG 330 280 h
port 23 GND_ANALOG 330 230 h
port 24 GND_ANALOG 330 180 h
port 43 GND_ANALOG 490 190 h
@parts
part 9 r 530 290 h
a 0 sp 0 0 0 10 hlb 100 PART=r
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=RC05
a 0 s 0:13 0 0 0 hln 100 GATE=
a 0 a 0:13 0 0 0 hln 100 PKGREF=R4
a 0 ap 9 0 15 0 hln 100 REFDES=R4
part 4 r 370 230 h
a 0 sp 0 0 0 10 hlb 100 PART=r
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=RC05
a 0 s 0:13 0 0 0 hln 100 GATE=
a 0 a 0:13 0 0 0 hln 100 PKGREF=R2
a 0 ap 9 0 15 0 hln 100 REFDES=R2
part 5 r 370 280 h
a 0 sp 0 0 0 10 hlb 100 PART=r
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=RC05
a 0 s 0:13 0 0 0 hln 100 GATE=
a 0 a 0:13 0 0 0 hln 100 PKGREF=R3
a 0 ap 9 0 15 0 hln 100 REFDES=R3
part 3 r 370 180 h
a 0 sp 0 0 0 10 hlb 100 PART=r
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=RC05
a 0 s 0:13 0 0 0 hln 100 GATE=
a 0 a 0:13 0 0 0 hln 100 PKGREF=R1
a 0 ap 9 0 15 0 hln 100 REFDES=R1
part 2 OPAMP 510 190 h
a 0 sp 11 0 50 60 hln 100 PART=OPAMP
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=
a 0 a 0:13 0 0 0 hln 100 PKGREF=U1
a 0 ap 9 0 14 0 hln 100 REFDES=U1
part 20 r 640 210 h
a 0 sp 0 0 0 10 hlb 100 PART=r
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=RC05
a 0 s 0:13 0 0 0 hln 100 GATE=
a 0 a 0:13 0 0 0 hln 100 PKGREF=R5
a 0 ap 9 0 15 0 hln 100 REFDES=R5
part 6 VDC 370 180 d
a 0 sp 0 0 22 37 hln 100 PART=VDC
a 0 a 0:13 0 0 0 hln 100 PKGREF=V1
a 1 ap 9 0 24 7 hcn 100 REFDES=V1
a 1 u 13 0 -11 18 hcn 100 DC=1V
part 7 VDC 370 230 d
a 0 sp 0 0 22 37 hln 100 PART=VDC
a 0 a 0:13 0 0 0 hln 100 PKGREF=V2
a 1 ap 9 0 24 7 hcn 100 REFDES=V2
a 1 u 13 0 -11 18 hcn 100 DC=2V
part 8 VDC 370 280 d
a 0 sp 0 0 22 37 hln 100 PART=VDC
a 0 a 0:13 0 0 0 hln 100 PKGREF=V3
a 1 ap 9 0 24 7 hcn 100 REFDES=V3
a 1 u 13 0 -11 18 hcn 100 DC=3V
part 1 titleblk 970 720 h
a 1 s 13 0 350 10 hcn 100 PAGESIZE=A
a 1 s 13 0 180 60 hcn 100 PAGETITLE=
a 1 s 13 0 300 95 hrn 100 PAGENO=1
a 1 s 13 0 340 95 hrn 100 PAGECOUNT=1
@conn
w 11
s 530 290 510 290 10
s 510 290 510 230 12
s 460 230 410 230 33
s 460 230 460 280 35
s 460 280 410 280 29
s 460 180 460 230 27
s 410 180 460 180 25
s 510 230 460 230 41
w 45
s 510 190 490 190 44
w 15
s 570 290 620 290 14
s 620 290 620 210 16
s 620 210 590 210 18
s 640 210 620 210 46
@junction
j 530 290
+ p 9 1
+ w 11
j 510 230
+ p 2 -
+ w 11
j 570 290
+ p 9 2
+ w 15
j 590 210
+ p 2 OUT
+ w 15
j 680 210
+ s 21
+ p 20 2
j 370 280
+ p 8 +
+ p 5 1
j 330 280
+ p 8 -
+ s 22
j 370 230
+ p 7 +
+ p 4 1
j 330 230
+ p 7 -
+ s 23
j 370 180
+ p 6 +
+ p 3 1
j 330 180
+ p 6 -
+ s 24
j 460 230
+ w 11
+ w 11
j 410 230
+ p 4 2
+ w 11
j 410 280
+ p 5 2
+ w 11
j 410 180
+ p 3 2
+ w 11
j 510 190
+ p 2 +
+ w 45
j 490 190
+ s 43
+ w 45
j 640 210
+ p 20 1
+ w 15
j 620 210
+ w 15
+ w 15
@attributes
a 0 s 0:13 0 0 0 hln 100 PAGETITLE=
a 0 s 0:13 0 0 0 hln 100 PAGENO=1
a 0 s 0:13 0 0 0 hln 100 PAGESIZE=A
a 0 s 0:13 0 0 0 hln 100 PAGECOUNT=1
@graphics
