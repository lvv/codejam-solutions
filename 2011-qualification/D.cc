#include <scc/cj.h>    // http://volnitsky.com/project/scc
int main() {
	FORt(in) {
		int	N(in);
		vint	V = in(N);
		vint	Vs(V); 	sort(V.bb, V.ee);
		int	cnt=0;
		FORi(N)    cnt += V[i] != Vs[i];
		__ "Case #", t+1, ": ", cnt;
	}
}
