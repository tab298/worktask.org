//在个人中心的app里面添加如下代码的实现：
extern "C" int Gui_Init_UserBill(){}//在系统启动时，进行的初始化。

extern "C" int Gui_Uninit_UserBill(){}//

extern "C" int Gui_GetInf_UserBill(int MSG,  void* wParam,void* lParam){}//提供给其他模块调用获取个人中心里面的信息

extern "C" message_callback_t Gui_MsgCallBack_UserBill(Gui_Message MSG,  int wParam,int lParam){} //鼠标点击，或者按键信息的回调函数

extern "C" int Gui_Main_USERBILL(int argc, char *argv[]);//主函数的入口。
* android版本的基本框架已经搭建好了。不需要这个文件了
