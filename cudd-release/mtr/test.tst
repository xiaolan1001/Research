# TestMtr Version #0.6, Release date 2/6/12
# /home/summer/research/cudd-release/mtr/.libs/testmtr -p 2 ./mtr/test.groups
N=0x556fbfa1eec0 C=0x556fbfa1ef80 Y=0x0        E=0x0        P=0x0        F=0 L=0 S=0
N=0x556fbfa1ef80 C=0x0        Y=0x556fbfa1efc0 E=0x0        P=0x556fbfa1eec0 F=3 L=0 S=0
N=0x556fbfa1efc0 C=0x0        Y=0x556fbfa1ef00 E=0x556fbfa1ef80 P=0x556fbfa1eec0 F=4 L=0 S=0
N=0x556fbfa1ef00 C=0x0        Y=0x556fbfa1ef40 E=0x556fbfa1efc0 P=0x556fbfa1eec0 F=1 L=0 S=0
N=0x556fbfa1ef40 C=0x0        Y=0x0        E=0x556fbfa1ef00 P=0x556fbfa1eec0 F=2 L=0 S=0
#------------------------
N=0x556fbfa1eec0 C=0x0        Y=0x0        E=0x0        P=0x0        F=0 L=0 S=12
#  (0,11)

N=0x556fbfa1eec0 C=0x556fbfa1ef80 Y=0x0        E=0x0        P=0x0        F=0 L=0 S=12
N=0x556fbfa1ef80 C=0x0        Y=0x556fbfa1efc0 E=0x0        P=0x556fbfa1eec0 F=0 L=0 S=6
N=0x556fbfa1efc0 C=0x0        Y=0x0        E=0x556fbfa1ef80 P=0x556fbfa1eec0 F=0 L=6 S=6
#  (0(0,5)(6,11)11)

N=0x556fbfa1eec0 C=0x556fbfa1f040 Y=0x0        E=0x0        P=0x0        F=0 L=0 S=12
N=0x556fbfa1f040 C=0x556fbfa1ef80 Y=0x0        E=0x0        P=0x556fbfa1eec0 F=4 L=0 S=12
N=0x556fbfa1ef80 C=0x556fbfa1ef00 Y=0x556fbfa1efc0 E=0x0        P=0x556fbfa1f040 F=0 L=0 S=6
N=0x556fbfa1ef00 C=0x0        Y=0x556fbfa1ef40 E=0x0        P=0x556fbfa1ef80 F=0 L=0 S=2
N=0x556fbfa1ef40 C=0x0        Y=0x556fbfa1f000 E=0x556fbfa1ef00 P=0x556fbfa1ef80 F=0 L=2 S=2
N=0x556fbfa1f000 C=0x0        Y=0x0        E=0x556fbfa1ef40 P=0x556fbfa1ef80 F=0 L=4 S=2
N=0x556fbfa1efc0 C=0x0        Y=0x0        E=0x556fbfa1ef80 P=0x556fbfa1f040 F=0 L=6 S=6
#  (0(0(0(0,1)(2,3)(4,5)5)(6,11)11|F)11)

#  (0(0(0,1)(2,3)(4,5)5)(6,11)11|F)
N=0x556fbfa1eec0 C=0x556fbfa1f040 Y=0x0        E=0x0        P=0x0        F=0 L=0 S=12
N=0x556fbfa1f040 C=0x556fbfa1ef00 Y=0x0        E=0x0        P=0x556fbfa1eec0 F=4 L=0 S=12
N=0x556fbfa1ef00 C=0x0        Y=0x556fbfa1ef40 E=0x0        P=0x556fbfa1f040 F=0 L=0 S=2
N=0x556fbfa1ef40 C=0x0        Y=0x556fbfa1f000 E=0x556fbfa1ef00 P=0x556fbfa1f040 F=0 L=2 S=2
N=0x556fbfa1f000 C=0x0        Y=0x556fbfa1efc0 E=0x556fbfa1ef40 P=0x556fbfa1f040 F=0 L=4 S=2
N=0x556fbfa1efc0 C=0x0        Y=0x0        E=0x556fbfa1f000 P=0x556fbfa1f040 F=0 L=6 S=6
#  (0(0(0,1)(2,3)(4,5)(6,11)11|F)11)

N=0x556fbfa1eec0 C=0x556fbfa1f040 Y=0x0        E=0x0        P=0x0        F=0 L=0 S=12
N=0x556fbfa1f040 C=0x556fbfa1ef00 Y=0x0        E=0x0        P=0x556fbfa1eec0 F=4 L=0 S=12
N=0x556fbfa1ef00 C=0x0        Y=0x556fbfa1ef40 E=0x0        P=0x556fbfa1f040 F=0 L=0 S=2
N=0x556fbfa1ef40 C=0x0        Y=0x556fbfa1efc0 E=0x556fbfa1ef00 P=0x556fbfa1f040 F=0 L=2 S=2
N=0x556fbfa1efc0 C=0x0        Y=0x556fbfa1f000 E=0x556fbfa1ef40 P=0x556fbfa1f040 F=0 L=4 S=6
N=0x556fbfa1f000 C=0x0        Y=0x0        E=0x556fbfa1efc0 P=0x556fbfa1f040 F=0 L=10 S=2
#  (0(0(0,1)(2,3)(4,9)(10,11)11|F)11)
#------------------------
N=0x556fbfa1eec0 C=0x0        Y=0x0        E=0x0        P=0x0        F=0 L=0 S=4
#  (0,3)

N=0x556fbfa1eec0 C=0x556fbfa1f040 Y=0x0        E=0x0        P=0x0        F=0 L=0 S=4
N=0x556fbfa1f040 C=0x0        Y=0x556fbfa1ef00 E=0x0        P=0x556fbfa1eec0 F=4 L=0 S=2
N=0x556fbfa1ef00 C=0x0        Y=0x0        E=0x556fbfa1f040 P=0x556fbfa1eec0 F=4 L=2 S=2
#  (0(0,1|F)(2,3|F)3)

#------------------------
N=0x556fbfa1eec0 C=0x556fbfa1f040 Y=0x0        E=0x0        P=0x0        F=0 L=0 S=12
N=0x556fbfa1f040 C=0x556fbfa1ef40 Y=0x556fbfa1ef00 E=0x0        P=0x556fbfa1eec0 F=0 L=0 S=6
N=0x556fbfa1ef40 C=0x0        Y=0x556fbfa1efc0 E=0x0        P=0x556fbfa1f040 F=0 L=0 S=2
N=0x556fbfa1efc0 C=0x0        Y=0x556fbfa1f000 E=0x556fbfa1ef40 P=0x556fbfa1f040 F=0 L=2 S=2
N=0x556fbfa1f000 C=0x0        Y=0x0        E=0x556fbfa1efc0 P=0x556fbfa1f040 F=0 L=4 S=2
N=0x556fbfa1ef00 C=0x0        Y=0x0        E=0x556fbfa1f040 P=0x556fbfa1eec0 F=4 L=6 S=6
#  (0(0(0,1)(2,3)(4,5)5)(6,11|F)11)

