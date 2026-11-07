*version 9.1 2512539135
u 207
U? 5
R? 17
V? 5
? 3
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
pageloc 1 0 2839 
@status
n 0 125:07:13:09:00:03;1755054003 e 
s 2832 125:07:13:09:00:04;1755054004 e 
c 125:07:13:08:59:59;1755053999
*page 1 0 970 720 iA
@ports
port 9 GND_ANALOG 420 250 h
port 6 GND_ANALOG 620 190 h
port 7 GND_ANALOG 360 170 u
port 206 GND_ANALOG 470 130 u
@parts
part 3 r 500 260 h
a 0 sp 0 0 0 10 hlb 100 PART=r
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=RC05
a 0 s 0:13 0 0 0 hln 100 GATE=
a 0 a 0:13 0 0 0 hln 100 PKGREF=R1
a 0 ap 9 0 15 0 hln 100 REFDES=R1
a 0 u 13 0 15 25 hln 100 VALUE=5k
part 4 r 420 210 h
a 0 sp 0 0 0 10 hlb 100 PART=r
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=RC05
a 0 s 0:13 0 0 0 hln 100 GATE=
a 0 a 0:13 0 0 0 hln 100 PKGREF=R2
a 0 ap 9 0 15 0 hln 100 REFDES=R2
part 5 r 570 190 h
a 0 sp 0 0 0 10 hlb 100 PART=r
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=RC05
a 0 s 0:13 0 0 0 hln 100 GATE=
a 0 a 0:13 0 0 0 hln 100 PKGREF=R3
a 0 ap 9 0 15 0 hln 100 REFDES=R3
part 2 OPAMP 480 170 h
a 0 sp 11 0 50 60 hln 100 PART=OPAMP
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=
a 0 a 0:13 0 0 0 hln 100 PKGREF=U1
a 0 ap 9 0 14 0 hln 100 REFDES=U1
part 8 VDC 410 170 d
a 0 sp 0 0 22 37 hln 100 PART=VDC
a 0 a 0:13 0 0 0 hln 100 PKGREF=V1
a 1 ap 9 0 24 7 hcn 100 REFDES=V1
a 1 u 13 0 -11 18 hcn 100 DC=1V
part 182 r 420 170 h
a 0 sp 0 0 0 10 hlb 100 PART=r
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=RC05
a 0 s 0:13 0 0 0 hln 100 GATE=
a 0 x 0:13 0 0 0 hln 100 PKGREF=R11
a 0 xp 9 0 15 0 hln 100 REFDES=R11
part 181 r 470 170 v
a 0 sp 0 0 0 10 hlb 100 PART=r
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=RC05
a 0 s 0:13 0 0 0 hln 100 GATE=
a 0 u 13 0 15 25 hln 100 VALUE=5k
a 0 x 0:13 0 0 0 hln 100 PKGREF=R22
a 0 xp 9 0 30 35 hln 100 REFDES=R22
part 1 titleblk 970 720 h
a 1 s 13 0 350 10 hcn 100 PAGESIZE=A
a 1 s 13 0 180 60 hcn 100 PAGETITLE=
a 1 s 13 0 340 95 hrn 100 PAGECOUNT=1
a 1 s 13 0 300 95 hrn 100 PAGENO=1
@conn
w 17
a 0 up 0:33 0 0 0 hln 100 V=
s 480 260 480 210 18
a 0 up 33 0 482 235 hlt 100 V=
s 500 260 480 260 16
s 480 210 460 210 24
w 29
a 0 up 0:33 0 0 0 hln 100 V=
s 420 210 420 250 43
a 0 up 33 0 422 230 hlt 100 V=
w 11
a 0 up 0:33 0 0 0 hln 100 V=
s 560 260 560 190 12
a 0 up 33 0 562 225 hlt 100 V=
s 540 260 560 260 10
s 560 190 570 190 14
w 110
a 0 up 0:33 0 0 0 hln 100 V=
s 620 190 610 190 108
a 0 up 33 0 615 189 hct 100 V=
w 200
s 480 170 470 170 199
s 470 170 460 170 201
w 205
s 370 170 360 170 204
w 185
s 410 170 420 170 189
@junction
j 480 210
+ p 2 -
+ w 17
j 500 260
+ p 3 1
+ w 17
j 460 210
+ p 4 2
+ w 17
j 420 210
+ p 4 1
+ w 29
j 420 250
+ s 9
+ w 29
j 560 190
+ p 2 OUT
+ w 11
j 540 260
+ p 3 2
+ w 11
j 570 190
+ p 5 1
+ w 11
j 610 190
+ p 5 2
+ w 110
j 620 190
+ s 6
+ w 110
j 480 170
+ p 2 +
+ w 200
j 470 170
+ p 181 1
+ w 200
j 460 170
+ p 182 2
+ w 200
j 370 170
+ p 8 -
+ w 205
j 360 170
+ s 7
+ w 205
j 410 170
+ p 8 +
+ w 185
j 420 170
+ p 182 1
+ w 185
j 470 130
+ s 206
+ p 181 2
@attributes
a 0 s 0:13 0 0 0 hln 100 PAGETITLE=
a 0 s 0:13 0 0 0 hln 100 PAGENO=1
a 0 s 0:13 0 0 0 hln 100 PAGESIZE=A
a 0 s 0:13 0 0 0 hln 100 PAGECOUNT=1
@graphics
