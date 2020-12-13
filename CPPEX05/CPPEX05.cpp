#include <iostream>
using namespace std;
#include "getVolumeSurface.h"

int main()
{
	const int BoxCount = 3;
	BOX boxes[BoxCount];
	for (int i = 0; i < BoxCount; i++) {
		cout << "幅(cm)を入力：";
		cin >> boxes[i].x;
		cout << "高さ(cm)を入力：";
		cin >> boxes[i].y;
		cout << "奥行き(cm)を入力：";
		cin >> boxes[i].z;
		isSendable(&boxes[i]);

		if (boxes[i].send) {
			getVolumeSurface(&boxes[i]);
			cout << endl << boxes[i].packSize << "サイズで送れます" << endl << endl;
		}
		else {
			cout << endl << "宅急便では送れません" << endl << endl;
		}
	}
	return 0;
}