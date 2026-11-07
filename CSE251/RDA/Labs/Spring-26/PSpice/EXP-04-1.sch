*version 9.1 976198304
u 59
U? 4
R? 5
V? 3
? 3
@libraries
@analysis
.TRAN 1 0 0 0
+0 0ns
+1 3ms
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
pageloc 1 0 3294 
@status
n 0 126:01:25:11:08:19;1771996099 e 
s 2832 126:01:25:11:08:30;1771996110 e 
*page 1 0 970 720 iA
@ports
port 10 GND_EARTH 530 330 h
@parts
part 5 r 460 100 h
a 0 sp 0 0 0 10 hlb 100 PART=r
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=RC05
a 0 s 0:13 0 0 0 hln 100 GATE=
a 0 a 0:13 0 0 0 hln 100 PKGREF=R1
a 0 ap 9 0 15 0 hln 100 REFDES=R1
part 6 r 460 170 h
a 0 sp 0 0 0 10 hlb 100 PART=r
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=RC05
a 0 s 0:13 0 0 0 hln 100 GATE=
a 0 a 0:13 0 0 0 hln 100 PKGREF=R2
a 0 ap 9 0 15 0 hln 100 REFDES=R2
part 35 r 550 100 h
a 0 sp 0 0 0 10 hlb 100 PART=r
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=RC05
a 0 s 0:13 0 0 0 hln 100 GATE=
a 0 a 0:13 0 0 0 hln 100 PKGREF=R4
a 0 ap 9 0 15 0 hln 100 REFDES=R4
a 0 u 13 0 15 25 hln 100 VALUE=2k
part 2 OPAMP 530 170 h
a 0 sp 11 0 50 60 hln 100 PART=OPAMP
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=
a 0 a 0:13 0 0 0 hln 100 PKGREF=U1
a 0 ap 9 0 14 0 hln 100 REFDES=U1
part 8 VDC 450 100 d
a 0 sp 0 0 22 37 hln 100 PART=VDC
a 0 a 0:13 0 0 0 hln 100 PKGREF=V1
a 1 ap 9 0 24 7 hcn 100 REFDES=V1
a 1 u 13 0 -11 18 hcn 100 DC=2V
part 11 VSIN 440 170 d
a 0 a 0:13 0 0 0 hln 100 PKGREF=V2
a 1 ap 9 0 20 10 hcn 100 REFDES=V2
a 1 u 0 0 0 0 hcn 100 VOFF=0
a 1 u 0 0 0 0 hcn 100 VAMPL=5
a 1 u 0 0 0 0 hcn 100 FREQ=1000
part 7 r 640 190 h
a 0 sp 0 0 0 10 hlb 100 PART=r
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=RC05
a 0 s 0:13 0 0 0 hln 100 GATE=
a 0 a 0:13 0 0 0 hln 100 PKGREF=R3
a 0 ap 9 0 15 0 hln 100 REFDES=R3
part 1 titleblk 970 720 h
a 1 s 13 0 350 10 hcn 100 PAGESIZE=A
a 1 s 13 0 180 60 hcn 100 PAGETITLE=
a 1 s 13 0 340 95 hrn 100 PAGECOUNT=1
a 1 s 13 0 300 95 hrn 100 PAGENO=1
part 56 nodeMarker 450 170 h
a 0 s 0 0 0 0 hln 100 PROBEVAR=R3:1
a 0 a 0 0 4 22 hlb 100 LABEL=1
part 58 nodeMarker 640 190 h
a 0 s 0 0 0 0 hln 100 PROBEVAR=
a 0 a 0 0 4 22 hlb 100 LABEL=2
@conn
w 13
a 0 up 0:33 0 0 0 hln 100 V=
s 450 100 460 100 12
a 0 up 33 0 455 99 hct 100 V=
w 19
a 0 up 0:33 0 0 0 hln 100 V=
s 500 100 520 100 18
s 500 170 520 170 16
s 520 170 530 170 22
s 520 100 520 170 20
a 0 up 33 0 522 135 hlt 100 V=
s 550 100 520 100 44
w 52
a 0 up 0:33 0 0 0 hln 100 V=
s 530 210 500 210 51
s 680 190 680 330 40
s 410 100 370 100 31
s 400 170 370 170 23
s 370 170 370 330 25
a 0 up 33 0 372 250 hlt 100 V=
s 370 330 500 330 29
s 370 100 370 170 33
s 680 330 530 330 42
s 500 330 530 330 55
s 500 210 500 330 53
w 15
a 0 up 0:33 0 0 0 hln 100 V=
s 440 170 450 170 14
a 0 up 33 0 450 169 hct 100 V=
s 450 170 460 170 57
w 47
a 0 up 0:33 0 0 0 hln 100 V=
s 590 100 630 100 46
s 640 190 630 190 37
s 630 190 610 190 50
s 630 100 630 190 48
a 0 up 33 0 632 145 hlt 100 V=
@junction
j 460 100
+ p 5 1
+ w 13
j 450 100
+ p 8 +
+ w 13
j 460 170
+ p 6 1
+ w 15
j 440 170
+ p 11 +
+ w 15
j 500 100
+ p 5 2
+ w 19
j 530 170
+ p 2 +
+ w 19
j 500 170
+ p 6 2
+ w 19
j 520 170
+ w 19
+ w 19
j 370 170
+ w 52
+ w 52
j 550 100
+ p 35 1
+ w 19
j 520 100
+ w 19
+ w 19
j 590 100
+ p 35 2
+ w 47
j 640 190
+ p 7 1
+ w 47
j 610 190
+ p 2 OUT
+ w 47
j 630 190
+ w 47
+ w 47
j 530 210
+ p 2 -
+ w 52
j 680 190
+ p 7 2
+ w 52
j 410 100
+ p 8 -
+ w 52
j 400 170
+ p 11 -
+ w 52
j 530 330
+ s 10
+ w 52
j 500 330
+ w 52
+ w 52
j 450 170
+ p 56 pin1
+ w 15
j 640 190
+ p 58 pin1
+ p 7 1
j 640 190
+ p 58 pin1
+ w 47
@attributes
a 0 s 0:13 0 0 0 hln 100 PAGETITLE=
a 0 s 0:13 0 0 0 hln 100 PAGENO=1
a 0 s 0:13 0 0 0 hln 100 PAGESIZE=A
a 0 s 0:13 0 0 0 hln 100 PAGECOUNT=1
@graphics
