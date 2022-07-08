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
   1. 读入一段命令存在buff中
   2. 读取buff，拆分以后按指令类型装入结构体
   3. 返回结构体

   - 读取结构体：

```c
struct ins read_instruction{
    read(STDIN, buf, sizeof(buf));

    instruction = malloc(sizeof ins);
    instruction = analyze_ins(buf);
    
    return instruction;
}
```

    - 分析结构体：
    1. 构建哈希表，分为指令、参数、地址，指令在第一位，然后有-的为参数，/开头的为地址
    2. 按照表中的数据将字符串拆分。
    3. 判断传入的参数是否有误

    例如：ls -la /home ，应该拆分为ls l a /home

```c
struct ins analyze_ins(char *instruction){
    int i = 0;
    char *buf[];
    int type = 0;       // 表示读取出来的字符的性质，
                        //1为指令，2为参数，3为地址，默认0为未知

    // 循环将字符串读取完
    while(instruction[i] != '\n'){
        // 将字符串按指令、参数、地址拆分
        
    }
    switch(type)
}
```
