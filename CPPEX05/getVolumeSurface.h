struct BOX {
	double x;
	double y;
	double z;
	double sum;
	double packSize;
	bool send;
};

bool isSendable(BOX* box);

void getVolumeSurface(BOX* box);