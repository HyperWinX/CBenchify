#include <time.h>

#define INIT() time_t cbenchify_tstart, cbenchify_tend; long double cbenchify_time;
#define BEGIN_TIMER() cbenchify_tstart = clock()
#define END_TIMER(str) \
		cbenchify_tend = clock(); \
		cbenchify_time = (long double)(cbenchify_tend - cbenchify_tstart) / CLOCKS_PER_SEC; \
		printf("%s: %lf%s\n", str, (long double)(cbenchify_tend - cbenchify_tstart) / CLOCKS_PER_SEC, cbenchify_time >= 1 ? "s\n" : "ms\n");
