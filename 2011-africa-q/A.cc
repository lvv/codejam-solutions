#include<scc/cj.h>
int main() {
	FORt(in) {
		int S(in); 
		vector<vint> R(2);
		FORi(S)  R[char(in) == 'R'] << int(in);
		int m = min (R[0].sz, R[1].sz);
		sort(R[0].rbb, R[0].ree);
		sort(R[1].rbb, R[1].ree);
		long s = accumulate(R[0].bb, R[0].bb + m ,0) +
		         accumulate(R[1].bb, R[1].bb + m ,0) +
			 - 2*m;
		__ "Case #", t+1,  ": ", s;
	}
}
