#include <stdio.h>

int	main(void) {
	int org[6]={1,1,2,2,2,8};
	int rr[6];
	for (int i = 0; i < 6; i++){
		scanf("%d", &rr[i]);
	}
	printf("%d %d %d %d %d %d", org[0] - rr[0], org[1] - rr[1], org[2] - rr[2], org[3] - rr[3], org[4] - rr[4], org[5] - rr[5]);
}