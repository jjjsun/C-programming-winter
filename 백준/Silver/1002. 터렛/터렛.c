#include <stdio.h>
#include <math.h>

int main() {
	int t, x1, x2, y1, y2, r1, r2, result;
	double d, s;
	scanf("%d", &t);
	while (t--) {
		scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
		d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
		s = r1 > r2 ? r1 - r2 : r2 - r1;
		if (d == 0 && r1 == r2)
			result = -1;
		else if (d < r1 + r2 && (s < d))
			result = 2;
		else if (d == r1 + r2 || d == s)
			result = 1;
		else
			result = 0;

		printf("%d\n", result);

	}
	return 0;
}