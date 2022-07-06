# 实现一个dsy(自命名)的shell

## main函数框架

加载配置文件，然后循环读入命令，当读到exit后就退出关闭会话

```
int main(int argc, char *argv[]) {
    // 加载类似.bashrc的配置文件

    // 循环读入命令
    dsy_loop();

    // 关闭会话，并清理内存
    return EXIT_SUCCESS;
}
```

## dsy_loop函数框架

### 操作：

   1. 应该有基础的提示，比如'>'在最右端提示输入命令
   2. 读入命令
   3. 执行命令
   4. 判断是否退出
   5. loop

```
int dsy_loop(void){
    do {
        puts(">");

        ins = read_instruction();
        stat = excute_instruction(ins);

    } while(isExit(stat));
    
}
```

## read_instruction函数框架

### 作用：读入一条命令，并把它存入结构体中，传到执行命令的函数中

### 操作：
   1. 读入一段命令
   2. 存入结构体
   3. 返回结构体



