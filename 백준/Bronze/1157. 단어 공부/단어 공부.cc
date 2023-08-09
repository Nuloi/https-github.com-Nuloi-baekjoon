#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>
#include <string.h>

int main()
{
	long long a[26] = { 0 },c;
	char b[1000000]; 
	int count = 0;
	int chck = 0;
	scanf("%s", b);
    c=strlen(b);
	for (int i = 0; i < c; i++)
	{
		if (b[i] == 'a' || b[i] == 'A') { a[0] += 1; }
		else if (b[i] == 'b' || b[i] == 'B') { a[1] += 1; }
		else if (b[i] == 'c' || b[i] == 'C') { a[2] += 1; }
		else if (b[i] == 'd' || b[i] == 'D') { a[3] += 1; }
		else if (b[i] == 'e' || b[i] == 'E') { a[4] += 1; }
		else if (b[i] == 'f' || b[i] == 'F') { a[5] += 1; }
		else if (b[i] == 'g' || b[i] == 'G') { a[6] += 1; }
		else if (b[i] == 'h' || b[i] == 'H') { a[7] += 1; }
		else if (b[i] == 'i' || b[i] == 'I') { a[8] += 1; }
		else if (b[i] == 'j' || b[i] == 'J') { a[9] += 1; }
		else if (b[i] == 'k' || b[i] == 'K') { a[10] += 1; }
		else if (b[i] == 'l' || b[i] == 'L') { a[11] += 1; }
		else if (b[i] == 'm' || b[i] == 'M') { a[12] += 1; }
		else if (b[i] == 'n' || b[i] == 'N') { a[13] += 1; }
		else if (b[i] == 'o' || b[i] == 'O') { a[14] += 1; }
		else if (b[i] == 'p' || b[i] == 'P') { a[15] += 1; }
		else if (b[i] == 'q' || b[i] == 'Q') { a[16] += 1; }
		else if (b[i] == 'r' || b[i] == 'R') { a[17] += 1; }
		else if (b[i] == 's' || b[i] == 'S') { a[18] += 1; }
		else if (b[i] == 't' || b[i] == 'T') { a[19] += 1; }
		else if (b[i] == 'u' || b[i] == 'U') { a[20] += 1; }
		else if (b[i] == 'v' || b[i] == 'V') { a[21] += 1; }
		else if (b[i] == 'w' || b[i] == 'W') { a[22] += 1; }
		else if (b[i] == 'x' || b[i] == 'X') { a[23] += 1; }
		else if (b[i] == 'y' || b[i] == 'Y') { a[24] += 1; }
		else if (b[i] == 'z' || b[i] == 'Z') { a[25] += 1; }
	}
	int max = a[0];
	for (int i = 0; i < 26; i++)
	{
		if (max <= a[i]) { max = a[i]; count = i; }
	}
	for (int i = 0; i < 26; i++)
	{
		if (max==a[i]&&i!=count) {
			printf("?"); 
			chck = 1;
			break;
		}
	}
	if (chck==0)
	{
		printf("%c", count + 65);
	}
}