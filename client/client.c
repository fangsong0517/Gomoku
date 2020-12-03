/*************************************************************************
	> File Name: client.c
	> Author:fangsong
	> Mail: fangsong517@gmail.com
	> Created Time: 2020年12月04日 星期五 00时47分02秒
 ************************************************************************/

#include "../common/my_socket.h"
#define IP "192.168.43.5"
#define PORT 8888
int main() {
    int fd_socket, sendlen = 0;
    SA server_addr;
    my_socketCli(&fd_socket, MY_TCP, IP, PORT, &server_addr);
    my_connect(fd_socket, (pSA)&server_addr, sizeof(SA));
    printf("client start\n");
    int msg[15] = {6, 6, 6};
    my_send(&sendlen, fd_socket, msg, 8);
    return 0;
}
