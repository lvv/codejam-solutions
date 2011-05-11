#include <scc/cj.h>    // http://volnitsky.com/project/scc
int main() {
	int	T(in);
	for (int t=1;  t<=T;  t++) {
		int	N(in);
		vint	pos	{1,1};
		vint	time	{0,0};
		int	now	{0};

		for (int n=0;  n<N*2;  n+=2) {
			int  r= char(in)!='O';
			int  p(in);
			int  need_time = abs(pos[r]-p);
			if (time[r] + need_time >= now)    now = time[r] + need_time;
			time[r] = ++now;
			pos[r] = p;
		}			
		__ "Case #",  t, ": ", now;
	}
}
