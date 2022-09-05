#include "gmock/gmock.h"
printf( "hello,world!!\n" );
int main( int argc, char **argv )
{
    testing::InitGoogleMock( &argc, argv );
    return RUN_ALL_TESTS();
}
