if(EXISTS "/home/nohelia/2022/s_vi/object_technology/labs/lab03/stack/list_gtest/build/list[1]_tests.cmake")
  include("/home/nohelia/2022/s_vi/object_technology/labs/lab03/stack/list_gtest/build/list[1]_tests.cmake")
else()
  add_test(list_NOT_BUILT list_NOT_BUILT)
endif()
