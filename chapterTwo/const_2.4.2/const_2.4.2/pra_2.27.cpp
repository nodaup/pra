/*
2.27
(a) int i = -1, &r =0;          �Ƿ���������Ҫ�󶨵�������     
(b) int *const p2 = &i2;        ���i2Ϊint����Ϸ�������Ƿ�
(c) const int i = -1, &r =0;    �Ϸ�����ʼ����������������������ʽ��Ϊ��ʼֵ   
(d) const int *const p3 = &i2;  ���i2Ϊint��const int����Ϸ�������Ƿ�
(e) const int *p1 = &i2;        ���i2Ϊint��const int����Ϸ�������Ƿ�    
(f) const int &const r2;        �Ƿ���const r2Ϊ��const int�����ã����ñ����ʼ��
(g) const int i2 = i, &r = i;   ���iΪint��const int����Ϸ�������Ƿ�

2.28
(a) int i, *const cp;               (b) int *p1, *const p2;
(c) const int ic, &r = ic;          (d) const int *const p3;
(e) const int *p;
(a) cp���Ϸ���constָ�뱾����һ��const����const��������ʼ��
(b) p2���Ϸ�������ͬ��
(c) ic���Ϸ���const��������ʼ��
(d) p3���Ϸ�������һ��ָ��int�ͳ��������constָ�룬constָ������ʼ��
(e) ����һ��ָ��int�ͳ��������ָ��

*/