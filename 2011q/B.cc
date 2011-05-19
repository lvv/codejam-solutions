#include <scc/cj.h>    // http://volnitsky.com/project/scc
int main() {
	FORt(in) {
		vS  C = in(in);  
		vS  D = in(in);
		int N(in);    S  s(N, '+');  cin >> s;

		for (size_t i=1;  i<s.sz;  i++) {
			for (auto c:C) {
				if (
					(s[i] == c[0]  &&  s[i-1] == c[1] ) ||
					(s[i] == c[1]  &&  s[i-1] == c[0] ) 
				)  {
					s.replace(i-1,2,1,c[2]);
					i--;
				}
			}

			for (auto d:D) {
				size_t  p0 = find(s.bb, s.ee,  d[0]) - s.bb;
				size_t  p1 = find(s.bb, s.ee,  d[1]) - s.bb;
				size_t  p  = max(p0,p1);
				if (p0 <=i  &&  p1 <= i) {
					s.erase(0,p+1);
					i=0;
				}
			}
		}

		_ "Case #",  t+1,  ": ";   outln(", ","[]") << s;
		/*_ "Case #",  t+1,  ": [";
		FORi(s.sz)  _ s[i], i<int(s.sz)-1 ? ", " : "";
		__"]";*/
	}
}
