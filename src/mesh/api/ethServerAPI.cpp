#include "configuration.h"
#include <Arduino.h>

#if HAS_ETHERNET

#include "ethServerAPI.h"

static ethServerPort *apiPort;

void initApiServer(int port)
{
    // Start API server on port 4403
    if (!apiPort) {
        apiPort = new ethServerPort(port);
        LOG_INFO("API server listening on TCP port %d\n", port);
        apiPort->init();
    }
}

ethServerAPI::ethServerAPI(EthernetClient &_client) : ServerAPI(_client)
{
    LOG_INFO("Incoming ethernet connection\n");
}

ethServerPort::ethServerPort(int port) : APIServerPort(port), port(port)
{
    // Constructor implementation
}

void ethServerPort::init()
{
    // Implementation of the init function
    // Initialize the Ethernet server here
    begin();
}

void ethServerPort::begin(uint16_t port)
{
    // Implementation of the begin function
    // Initialize the Ethernet server with the specified port
    EthernetServer::begin();
}

#endif