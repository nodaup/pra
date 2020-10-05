/*
2.27
(a) int i = -1, &r =0;          非法，引用需要绑定到对象上     
(b) int *const p2 = &i2;        如果i2为int型则合法，否则非法
(c) const int i = -1, &r =0;    合法，初始化常量引用允许用任意表达式作为初始值   
(d) const int *const p3 = &i2;  如果i2为int或const int型则合法，否则非法
(e) const int *p1 = &i2;        如果i2为int或const int型则合法，否则非法    
(f) const int &const r2;        非法，const r2为对const int的引用，引用必须初始化
(g) const int i2 = i, &r = i;   如果i为int或const int型则合法，否则非法

2.28
(a) int i, *const cp;               (b) int *p1, *const p2;
(c) const int ic, &r = ic;          (d) const int *const p3;
(e) const int *p;
(a) cp不合法，const指针本质是一个const对象，const对象必须初始化
(b) p2不合法，理由同上
(c) ic不合法，const对象必须初始化
(d) p3不合法，定义一个指向int型常量对象的const指针，const指针必须初始化
(e) 定义一个指向int型常量对象的指针

*/