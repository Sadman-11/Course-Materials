*version 9.1 146466965
u 59
V? 5
R? 3
D? 3
@libraries
@analysis
.TRAN 1 0 0 0
+0 0.1ns
+1 50ms
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
pageloc 1 0 3078 
@status
n 0 125:06:17:10:38:01;1752727081 e 
s 0 125:06:17:10:38:01;1752727081 e 
*page 1 0 970 720 iA
@ports
port 6 GND_EARTH 200 320 h
port 52 GND_EARTH 380 320 h
@parts
part 4 D1N4148 210 250 h
a 0 sp 11 0 15 25 hln 100 PART=D1N4148
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=DO-35
a 0 s 0:13 0 0 0 hln 100 GATE=
a 0 a 0:13 0 0 0 hln 100 PKGREF=D1
a 0 ap 9 0 15 0 hln 100 REFDES=D1
part 3 r 270 260 d
a 0 sp 0 0 0 10 hlb 100 PART=r
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=RC05
a 0 s 0:13 0 0 0 hln 100 GATE=
a 0 a 0:13 0 0 0 hln 100 PKGREF=R1
a 0 ap 9 0 15 0 hln 100 REFDES=R1
part 2 VSIN 140 260 h
a 1 u 0 0 0 0 hcn 100 VOFF=0
a 1 u 0 0 0 0 hcn 100 VAMPL=20
a 1 u 0 0 0 0 hcn 100 FREQ=100
a 0 a 0:13 0 0 0 hln 100 PKGREF=V1
a 1 ap 9 0 20 10 hcn 100 REFDES=V1
part 5 VDC 200 250 d
a 0 sp 0 0 22 37 hln 100 PART=VDC
a 0 a 0:13 0 0 0 hln 100 PKGREF=V2
a 1 ap 9 0 24 7 hcn 100 REFDES=V2
a 1 u 13 0 -11 18 hcn 100 DC=5V
part 49 r 450 260 d
a 0 sp 0 0 0 10 hlb 100 PART=r
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=RC05
a 0 s 0:13 0 0 0 hln 100 GATE=
a 0 a 0:13 0 0 0 hln 100 PKGREF=R2
a 0 ap 9 0 15 0 hln 100 REFDES=R2
part 50 VSIN 320 260 h
a 1 u 0 0 0 0 hcn 100 VOFF=0
a 1 u 0 0 0 0 hcn 100 VAMPL=20
a 1 u 0 0 0 0 hcn 100 FREQ=100
a 0 a 0:13 0 0 0 hln 100 PKGREF=V3
a 1 ap 9 0 20 10 hcn 100 REFDES=V3
part 48 D1N4148 420 250 u
a 0 sp 11 0 15 25 hln 100 PART=D1N4148
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=DO-35
a 0 s 0:13 0 0 0 hln 100 GATE=
a 0 a 0:13 0 0 0 hln 100 PKGREF=D2
a 0 ap 9 0 15 0 hln 100 REFDES=D2
part 51 VDC 380 250 d
a 0 sp 0 0 22 37 hln 100 PART=VDC
a 1 u 13 0 -11 18 hcn 100 DC=5V
a 0 a 0:13 0 0 0 hln 100 PKGREF=V4
a 1 ap 9 0 24 7 hcn 100 REFDES=V4
part 1 titleblk 970 720 h
a 1 s 13 0 350 10 hcn 100 PAGESIZE=A
a 1 s 13 0 180 60 hcn 100 PAGETITLE=
a 1 s 13 0 300 95 hrn 100 PAGENO=1
a 1 s 13 0 340 95 hrn 100 PAGECOUNT=1
@conn
w 18
a 0 up 0:33 0 0 0 hln 100 V=
s 140 320 140 300 23
s 200 320 140 320 21
s 270 320 200 320 19
a 0 up 33 0 235 319 hct 100 V=
s 270 300 270 320 17
w 14
a 0 up 0:33 0 0 0 hln 100 V=
s 270 250 270 260 15
s 240 250 270 250 13
a 0 up 33 0 255 249 hct 100 V=
w 12
a 0 up 0:33 0 0 0 hln 100 V=
s 200 250 210 250 11
a 0 up 33 0 205 249 hct 100 V=
w 8
a 0 up 0:33 0 0 0 hln 100 V=
s 140 250 160 250 9
a 0 up 33 0 150 249 hct 100 V=
s 140 260 140 250 7
w 31
s 320 320 320 300 30
s 450 320 380 320 34
a 0 up 33 0 415 319 hct 100 V=
s 450 300 450 320 36
s 380 320 320 320 53
w 45
s 320 250 340 250 44
a 0 up 33 0 330 249 hct 100 V=
s 320 260 320 250 46
w 39
s 450 250 450 260 38
s 420 250 450 250 56
w 55
s 390 250 380 250 54
@junction
j 140 300
+ p 2 -
+ w 18
j 200 320
+ s 6
+ w 18
j 270 300
+ p 3 2
+ w 18
j 270 260
+ p 3 1
+ w 14
j 240 250
+ p 4 2
+ w 14
j 210 250
+ p 4 1
+ w 12
j 200 250
+ p 5 +
+ w 12
j 160 250
+ p 5 -
+ w 8
j 140 260
+ p 2 +
+ w 8
j 450 300
+ p 49 2
+ w 31
j 450 260
+ p 49 1
+ w 39
j 320 300
+ p 50 -
+ w 31
j 320 260
+ p 50 +
+ w 45
j 340 250
+ p 51 -
+ w 45
j 380 320
+ s 52
+ w 31
j 420 250
+ p 48 1
+ w 39
j 390 250
+ p 48 2
+ w 55
j 380 250
+ p 51 +
+ w 55
@attributes
a 0 s 0:13 0 0 0 hln 100 PAGETITLE=
a 0 s 0:13 0 0 0 hln 100 PAGENO=1
a 0 s 0:13 0 0 0 hln 100 PAGESIZE=A
a 0 s 0:13 0 0 0 hln 100 PAGECOUNT=1
@graphics
