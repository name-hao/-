#include"student.h"
//����ĺ�����Ϊ��ͷ�ļ��ж��壬������LNK2005�Ĵ���
ostream& operator<<(ostream& out, const Student& stu)
{
	stu.show_info(out);
	return out;
}