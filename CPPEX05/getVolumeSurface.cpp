#include "getVolumeSurface.h"

bool isSendable(BOX* box) {
	box->sum = box->x + box->y + box->z;
	if (box->sum > 160) {
		box->send = false;
	}
	else {
		box->send = true;
	}
	return box->send;
}

void getVolumeSurface(BOX* box) {
	if (box->sum <= 60) {
		box->packSize = 60;
	}
	else if (box->sum <= 80) {
		box->packSize = 80;
	}
	else if (box->sum <= 100) {
		box->packSize = 100;
	}
	else if (box->sum <= 120) {
		box->packSize = 120;
	}
	else if (box->sum <= 140) {
		box->packSize = 140;
	}
	else if (box->sum <= 160) {
		box->packSize = 160;
	}
	return;
}