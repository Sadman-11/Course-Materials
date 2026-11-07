*version 9.1 701581732
u 52
V? 2
R? 6
E? 2
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
pageloc 1 0 3358 
@status
n 0 125:08:11:12:06:53;1757570813 e 
s 2832 125:08:11:12:06:54;1757570814 e 
*page 1 0 970 720 iA
@ports
port 9 GND_EARTH 440 330 h
port 13 BUBBLE 400 280 v
a 1 x 3 0 0 0 hcn 100 LABEL=vd-
port 12 BUBBLE 400 270 h
a 1 x 3 0 0 0 hcn 100 LABEL=vd+
port 10 BUBBLE 230 180 h
a 1 x 3 0 0 0 hcn 100 LABEL=vd+
port 11 BUBBLE 330 180 h
a 1 x 3 0 0 0 hcn 100 LABEL=vd-
@parts
part 6 r 440 210 d
a 0 u 13 0 15 25 hln 100 VALUE=60
a 0 sp 0 0 0 10 hlb 100 PART=r
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=RC05
a 0 s 0:13 0 0 0 hln 100 GATE=
a 0 x 0:13 0 0 0 hln 100 PKGREF=Ro
a 0 xp 9 0 15 0 hln 100 REFDES=Ro
part 3 r 260 190 h
a 0 u 13 0 15 25 hln 100 VALUE=3M
a 0 sp 0 0 0 10 hlb 100 PART=r
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=RC05
a 0 s 0:13 0 0 0 hln 100 GATE=
a 0 x 0:13 0 0 0 hln 100 PKGREF=Ri
a 0 xp 9 0 15 0 hln 100 REFDES=Ri
part 4 r 330 220 d
a 0 u 13 0 15 25 hln 100 VALUE=5k
a 0 sp 0 0 0 10 hlb 100 PART=r
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=RC05
a 0 s 0:13 0 0 0 hln 100 GATE=
a 0 a 0:13 0 0 0 hln 100 PKGREF=R2
a 0 ap 9 0 15 0 hln 100 REFDES=R2
part 5 r 360 190 h
a 0 u 13 0 15 25 hln 100 VALUE=40k
a 0 sp 0 0 0 10 hlb 100 PART=r
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=RC05
a 0 s 0:13 0 0 0 hln 100 GATE=
a 0 a 0:13 0 0 0 hln 100 PKGREF=R3
a 0 ap 9 0 15 0 hln 100 REFDES=R3
part 7 r 560 220 d
a 0 u 13 0 15 25 hln 100 VALUE=20k
a 0 sp 0 0 0 10 hlb 100 PART=r
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=RC05
a 0 s 0:13 0 0 0 hln 100 GATE=
a 0 a 0:13 0 0 0 hln 100 PKGREF=R5
a 0 ap 9 0 15 0 hln 100 REFDES=R5
part 8 E 400 270 h
a 0 s 11 0 10 34 hln 100 PART=E
a 0 a 0:13 0 0 0 hln 100 PKGREF=E1
a 1 ap 9 0 10 4 hln 100 REFDES=E1
a 0 u 0 0 0 10 hln 100 GAIN=300000
part 2 VDC 230 240 h
a 0 sp 0 0 22 37 hln 100 PART=VDC
a 0 a 0:13 0 0 0 hln 100 PKGREF=V1
a 1 ap 9 0 24 7 hcn 100 REFDES=V1
a 1 u 13 0 -11 18 hcn 100 DC=3V
part 1 titleblk 970 720 h
a 1 s 13 0 350 10 hcn 100 PAGESIZE=A
a 1 s 13 0 180 60 hcn 100 PAGETITLE=
a 1 s 13 0 300 95 hrn 100 PAGENO=1
a 1 s 13 0 340 95 hrn 100 PAGECOUNT=1
@conn
w 19
a 0 up 0:33 0 0 0 hln 100 V=
s 300 190 330 190 18
s 330 190 360 190 22
s 330 180 330 190 20
s 330 220 330 190 23
a 0 up 33 0 332 205 hlt 100 V=
w 34
a 0 up 0:33 0 0 0 hln 100 V=
s 440 270 440 250 33
a 0 up 33 0 442 260 hlt 100 V=
w 36
a 0 up 0:33 0 0 0 hln 100 V=
s 400 190 440 190 35
s 440 190 440 210 37
s 440 190 560 190 39
a 0 up 33 0 500 189 hct 100 V=
s 560 190 560 220 41
w 15
a 0 up 0:33 0 0 0 hln 100 V=
s 230 190 260 190 16
s 230 180 230 190 25
s 230 240 230 190 14
a 0 up 33 0 232 215 hlt 100 V=
w 44
a 0 up 0:33 0 0 0 hln 100 V=
s 560 260 560 330 43
s 230 330 330 330 29
s 440 280 440 330 31
s 560 330 440 330 45
a 0 up 33 0 500 329 hct 100 V=
s 330 330 440 330 49
s 330 260 330 330 47
s 230 280 230 330 27
@junction
j 360 190
+ p 5 1
+ w 19
j 300 190
+ p 3 2
+ w 19
j 330 180
+ s 11
+ w 19
j 330 190
+ w 19
+ w 19
j 330 220
+ p 4 1
+ w 19
j 440 250
+ p 6 2
+ w 34
j 400 190
+ p 5 2
+ w 36
j 440 210
+ p 6 1
+ w 36
j 440 190
+ w 36
+ w 36
j 440 330
+ s 9
+ w 44
j 330 260
+ p 4 2
+ w 44
j 330 330
+ w 44
+ w 44
j 230 280
+ p 2 -
+ w 44
j 560 220
+ p 7 1
+ w 36
j 560 260
+ p 7 2
+ w 44
j 400 270
+ s 12
+ p 8 1
j 400 280
+ s 13
+ p 8 2
j 440 280
+ p 8 4
+ w 44
j 440 270
+ p 8 3
+ w 34
j 260 190
+ p 3 1
+ w 15
j 230 180
+ s 10
+ w 15
j 230 240
+ p 2 +
+ w 15
j 230 190
+ w 15
+ w 15
@attributes
a 0 s 0:13 0 0 0 hln 100 PAGETITLE=
a 0 s 0:13 0 0 0 hln 100 PAGENO=1
a 0 s 0:13 0 0 0 hln 100 PAGESIZE=A
a 0 s 0:13 0 0 0 hln 100 PAGECOUNT=1
@graphics
