/*************************************************************************
	> File Name: server.c
	> Author:fangsong
	> Mail: fangsong517@gmail.com
	> Created Time: 2020年12月03日 星期四 23时20分11秒
 ************************************************************************/

#include "../common/my_socket.h"
#define IP "192.168.43.5"
#define PORT 8888
int main() {
    int fd_socket, fd_client;
    my_socketSer(&fd_socket, MY_TCP, IP, PORT);
    my_listen(fd_socket, 5);
    int len = 0, recvlen = 0;
    SA client_addr;
    while(1) {
        my_accept(&fd_client, fd_socket, (pSA)&client_addr, &len);
        int msg[150];
        my_recv(&recvlen, fd_client, msg, 1024);
        for(int i = 0; i < recvlen; i++) {
            printf("%d", msg[i]);
        }
        printf("\n");
    }

    return 0;
}
