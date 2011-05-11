#include <scc/cj.h>    // http://volnitsky.com/project/scc
int main() {
	int T(in);
	for (int t=1;  t<=T;  t++) {
		int C(in);  vS  vC(C);		cin >> vC;
		int D(in);  vS  vD(D);		cin >> vD;
		int N(in);  S   s(N, '+');	cin >> s;

		FOR(i, 1, s.size()) {
			for (auto c:vC) {
				if (
					(s[i] == c[0]  &&  s[i-1] == c[1] ) ||
					(s[i] == c[1]  &&  s[i-1] == c[0] ) 
				)  {
					s.replace(i-1,2,1,c[2]);
					i--;
				}
			}

			for (auto d:vD) {
				size_t  p0 = find(s.bb, s.ee,  d[0]) - s.bb;
				size_t  p1 = find(s.bb, s.ee,  d[1]) - s.bb;
				size_t  p  = max(p0,p1);
				if (p0 <=i  &&  p1 <= i) {
					s.erase(0,p+1);
					i=0;
				}
			}
		}

		_ "Case #",  t,  ": [";
		FORi((int)s.size()-1) _ s[i], ", ";
		__ s.back(), "]";
	}
}
