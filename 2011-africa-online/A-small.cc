#include<scc/cj.h>
int main() {
	cout << std::fixed << std::setprecision(15) << std::showpoint;
	FORt(in) {
		long double eps = 1e-15;
		vector<long double> V=in(in);   sort(V.bb, V.ee);
		__ "Case #", t+1, ":";
		for (long double step=1.L/3.L;  V.sz && step > eps;  step /= 3.L)  {
			auto e = remove_if (
				V.bb, V.ee,
				[&](long double x)->bool {
						long double H = long(x/step);
						long double R = x - H;
						return  (is_odd(long(x/step)) || R==0.L) && (__ x);
				}
			);
			V.erase(e,V.ee);
		}
		if(V.sz)  outln("\n","") << V;
	}
}
