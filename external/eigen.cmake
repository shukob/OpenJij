include (ExternalProject)

ExternalProject_Add(eigen
    PREFIX ${PROJECT_SOURCE_DIR}/build/eigen
    URL "http://bitbucket.org/eigen/eigen/get/3.3.7.tar.gz"

    # configure is unnecessary
    CONFIGURE_COMMAND ""

    # build is unnecessary
    BUILD_COMMAND ""

    # install is unnecessary
    INSTALL_COMMAND ""

    # test is unnecessary
    TEST_COMMAND ""
)

# get directory generated by unzipping downloaded file
ExternalProject_Get_Property(eigen SOURCE_DIR)

add_library(eigen_lib INTERFACE)
target_include_directories(eigen_lib INTERFACE ${SOURCE_DIR})