#include<scc/cj.h>
#include<lvv/lvv.h>
int main() {
	FORt(in) {
		int N(in);
		vS R = in(N);
		
		// WP
		vdouble WP(N);
		vint WPw(N,0);
		vint WPl(N,0);
		FORi(N) { 
			FORj(N) {
				WPw[i]  += (R[i][j] == '1');
				WPl[i]  += (R[i][j] == '0');
			}
			WP[i] = WPw[i] / double (WPw[i]+WPl[i]);
		}

		// OWP
		vdouble OWP(N,0.0);
		FORi(N) { 
			// avg of O
			int cnt =0;
			FORj(N) {
				if (R[i][j] != '.')  {
					int w = WPw[j] - (R[j][i]=='1');
					int l = WPl[j] - (R[j][i]=='0');
					double WPj = w / double(w+l);
					cnt ++;
					OWP[i] += WPj;
				}
			}
			OWP[i] /= cnt;
		}

		// OOWP
		vdouble OOWP(N,0.0);
		FORi(N) { 
			int cnt=0;
			FORj(N) {
				if (R[i][j] != '.') {
					cnt ++;
					OOWP[i] += OWP[j];
				}
			}
			OOWP[i] /= cnt;
		}

		__ "Case #", t+1, ":";
		cout << setprecision(13);
		FORi(N) { 
			__ 0.25 * WPw[i]  / double (WPl[i] + WPw[i])  + 
			   0.50 * OWP[i] + 
			   0.25 * OOWP[i];
		}
	}
}
