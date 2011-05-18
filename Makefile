g++FLAGS_DEBUG    :=  -ggdb3 -O0 -D_GLIBCXX_DEBUG
g++FLAGS_CHECK    :=  $(g++FLAGS_DEBUG)  -fdelete-null-pointer-checks -fstack-protector -ftrapv -fbounds-check  -fsignaling-nans 

CXXFLAGS:= -Wall -std=gnu++0x -I/home/lvv/p/ 

At As Bt Bs Ct Cs Dt Ds: CXXFLAGS += $(g++FLAGS_CHECK)
Al Bl Cl Dl : CXXFLAGS += -O3

.PHONY: At As Al Bt Bs Bl Ct Cs Cl Dt Ds Dl

#### A
At:  A
	./A < A-test.in
As:  A
	./A < A-small-attempt0.in
Al:  A
	./A < A-large.in


#### B
Bt:  B
	./B < B-test.in
Bs:  B
	./B < B-small-attempt0.in
Bl:  B
	./B < B-large.in
B.zip:	B.cc 
	zip B.zip B.cc *.h

#### C
Ct:  C
	./C < C-test.in
Cs:  C
	./C < C-small-attempt0.in
Cl:  C
	./C < C-large.in

#### D
Dt:  D
	./D < D-test.in
Ds:  D
	./D < D-small-attempt0.in
Dl:  D
	./D < D-large.in



