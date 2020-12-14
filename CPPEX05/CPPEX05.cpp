#include <iostream>
#include <string>
using namespace std;
#include "getVolumeSurface.h"

/*void ErrorCheck(string what, double length) {
	while (true) {
		cout << what << "(cm)を入力：";
		cin >> length;
		if (length > 0) {
			break;
		}
		else {
			cout << "長さが0以下の荷物は存在しません。もう一度入力して下さい。" << endl;
		}
	}
}*/

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
		/*ErrorCheck("幅", boxes[i].x);
		ErrorCheck("高さ", boxes[i].y);
		ErrorCheck("奥行き", boxes[i].z);*/
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