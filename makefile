client1:
	gcc ./client/client.c ./common/*.c -o ./bin/client
server1:
	gcc ./server/server.c ./common/*.c -o ./bin/server
all:
	gcc ./client/client.c ./common/*.c -o ./bin/client
	gcc ./server/server.c ./common/*.c -o ./bin/server
clean:
	rm ./bin/server
	rm ./bin/client
