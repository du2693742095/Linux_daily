#include "func.h"

int main(int argc, char *argv[])
{
    // 加载类似.bashrc的配置文件

    // 循环读入命令
    dsy_loop();

    // 关闭会话，并清理内存
    return 0;
}

