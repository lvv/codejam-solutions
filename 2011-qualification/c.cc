#include<scc/simple.h>
#include<lvv/lvv.h>


int main() {
	int T(in);
	for (int case_=1;  case_<=T;  case_++) {
		cout << "Case #" << case_ << ": ";
		long N(in);
		vlong C(N); cin >> C;
		long bad_sum = 0;
		size_t min_i = min_element(C.bb, C.ee) - C.bb;

		long sum = 0;

		for (size_t i=0;  i<N;  i++) {
			if (i==min_i)  continue;
			bad_sum ^= C[i];
			sum += C[i];
		}

		if (bad_sum != C[min_i])	cout << "NO";
		else				cout << sum;
		cout << endl;
	}
}
