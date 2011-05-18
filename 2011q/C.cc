#include<scc/cj.h>
int main() {
	FORt(in) {
		int	N(in);
		vint	C = in(N);
		int	bad_sum = 0;
		int	min_i = min_element(C.bb, C.ee) - C.bb;
		int	sum = 0;

		FORi(N) {
			if (i==min_i)  continue;
			bad_sum ^= C[i];
			sum += C[i];
		}

		_ "Case #", t+1,  ": ";  
		if (bad_sum != C[min_i])	 __ "NO";
		else				 __ sum;
	}
}
