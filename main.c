#include <stdio.h>
#include "cbenchify.h"
#include <unistd.h>

int main(){
	INIT();
	BEGIN_TIMER();
	sleep(2);
	END_TIMER("test");
}
