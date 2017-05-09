void io_hlt(void);

void HariMain(void)
{

fin:
	io_hlt(); //执行naskfunc.nas中的_io_hlt函数
	goto fin;

}
