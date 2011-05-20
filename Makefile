g++FLAGS_DEBUG    :=  -ggdb3 -O0 -D_GLIBCXX_DEBUG
g++FLAGS_CHECK    :=  $(g++FLAGS_DEBUG)  -fdelete-null-pointer-checks -fstack-protector -ftrapv -fbounds-check  -fsignaling-nans 

CXXFLAGS:= -Wall -std=gnu++0x -I/home/lvv/p/ 

At As Bt Bs Ct Cs Dt Ds: CXXFLAGS += $(g++FLAGS_CHECK)
Al Bl Cl Dl : CXXFLAGS += -O3

.PHONY: At As Al Bt Bs Bl Ct Cs Cl Dt Ds Dl

#### A
At:  A
	./A < A-test.in | tee  out
As:  A
	./A < $(wildcard A-small-*.in) | tee out
Al:  A
	./A < $(wildcard A-large-*.in) | tee out
A.zip:	A.cc 
	-rm -f A.zip
	zip A.zip A.cc ~/p/scc/{simple,cj,matrix}.h


#### B
Bt:  B
	./B < B-test.in | tee out
Bs:  B
	./B < $(wildcard B-small-*.in) | tee out
Bl:  B
	./B < $(wildcard B-large-*.in) | tee out
B.zip:	B.cc 
	-rm -f B.zip
	zip B.zip B.cc ~/p/scc/{simple,cj,matrix}.h

#### C
Ct:  C
	./C < C-test.in | tee out
Cs:  C
	./C < $(wildcard C-small-*.in) | tee out
Cl:  C
	./C < $(wildcard C-large-*.in) | tee out

#### D
Dt:  D
	./D < D-test.in | tee out
Ds:  D
	./D < $(wildcard D-small-*.in) | tee out
Dl:  D
	./D < $(wildcard D-large-*.in) | tee out



