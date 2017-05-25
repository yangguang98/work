#ifndef CONV_H
#define CONV_H
//xΪ��Ҫ�����������㣬yΪ���ݿ��еĲ�����
//N1Ϊx�ĳ��ȣ�N2Ϊy�ĳ��ȣ�zΪ���ص�ֵ
void conv(double *x, double *y, int lenX, int lenY, double *z) {
	int i, m;
	for (i = 0; i < lenX + lenY - 1; i++) {
		double temp = 0;
		for (m = 0; m < lenX; m++) {
			if ((i - m) >= 0 && (i - m) < lenY)
				temp += (*(x + m))*(*(y + (i - m)));
		}
		z[i] = temp;
	}
}

#endif
