#include <scc/cj.h>    // http://volnitsky.com/project/scc
int main() {
	int T(in);
	for(int t=1; t<=T; t++) {
		int	N(in);
		vint	V(N);	cin >> V;
		vint	Vs(V); 	sort(V.bb, V.ee);
		int	cnt=0;
		FORi(N)  cnt += V[i] != Vs[i];
		__ "Case #", t, ": ", cnt;
	}
}
