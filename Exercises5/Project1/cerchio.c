#include "cerchio.h"

bool nel_cerchio(const struct punto* p, const struct cerchio* c)
{
	if (p == NULL || c == NULL) {
		return false;
	}
	int distp = 0;
	distp = sqrt((pow(p->x, 2) - pow(c->x, 2)) + (pow(p->y, 2) - pow(c->y, 2)));
	if (distp <= c->r)
	{
		return true;
	}
	else
		return false;
}
