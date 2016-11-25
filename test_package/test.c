#include <nanomsg/nn.h>
#include <nanomsg/pipeline.h>

int main(int argc, char *argv[])
{
	int sock;

	sock = nn_socket(AF_SP, NN_PUSH);
	nn_shutdown(sock, 0);

	return 0;
}
