#include "gtest/gtest.h"

#include "callme/client.h"

TEST(client_test, instantiation) {
    callme::client client("127.0.0.1", 8080);
    client.call("sum", 2, 3);
}
