/*
 * Author       : JJLi
 * Date         : 2024/05/04
 */
#include <unistd.h>
#include "server/webserver.h"

int main() {
    /* 守护进程 后台运�?? */
    //daemon(1, 0); 

    WebServer server(
        1316, 3, 60000, false,             /* �?�? ET模式 timeoutMs 优雅退�?  */
        3306, "root", "root", "webserver", /* Mysql配置 */
        12, 6, true, 1, 1024);             /* 连接池数�? 线程池数�? 日志开�? 日志等级 日志异�?�队列�?�量 */
    server.Start();
} 
  