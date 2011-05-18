#include <scc/cj.h>    // http://volnitsky.com/project/scc
int main() {
	FORt(in) {
		vint	pos	{1,1}, 	time	{0,0};
		int	now	{0};
		REP (in) {
			int  r= char(in)!='O';
			int  p(in);
			int  need_time = abs(pos[r]-p);
			if (time[r] + need_time >= now)    now = time[r] + need_time;
			time[r] = ++now;
			pos[r] = p;
		}			
		__ "Case #",  t+1, ": ", now;
	}
}
