add_test( arrayStackTest.IsEmptyInitially /home/nohelia/2022/s_vi/object_technology/labs/lab03/stack/build/arrayStack [==[--gtest_filter=arrayStackTest.IsEmptyInitially]==] --gtest_also_run_disabled_tests)
set_tests_properties( arrayStackTest.IsEmptyInitially PROPERTIES WORKING_DIRECTORY /home/nohelia/2022/s_vi/object_technology/labs/lab03/stack/build)
add_test( arrayStackTest.IsEmptyFinal /home/nohelia/2022/s_vi/object_technology/labs/lab03/stack/build/arrayStack [==[--gtest_filter=arrayStackTest.IsEmptyFinal]==] --gtest_also_run_disabled_tests)
set_tests_properties( arrayStackTest.IsEmptyFinal PROPERTIES WORKING_DIRECTORY /home/nohelia/2022/s_vi/object_technology/labs/lab03/stack/build)
add_test( arrayStackTest.staskPop /home/nohelia/2022/s_vi/object_technology/labs/lab03/stack/build/arrayStack [==[--gtest_filter=arrayStackTest.staskPop]==] --gtest_also_run_disabled_tests)
set_tests_properties( arrayStackTest.staskPop PROPERTIES WORKING_DIRECTORY /home/nohelia/2022/s_vi/object_technology/labs/lab03/stack/build)
add_test( arrayStackTest.stackTop /home/nohelia/2022/s_vi/object_technology/labs/lab03/stack/build/arrayStack [==[--gtest_filter=arrayStackTest.stackTop]==] --gtest_also_run_disabled_tests)
set_tests_properties( arrayStackTest.stackTop PROPERTIES WORKING_DIRECTORY /home/nohelia/2022/s_vi/object_technology/labs/lab03/stack/build)
set( arrayStack_TESTS arrayStackTest.IsEmptyInitially arrayStackTest.IsEmptyFinal arrayStackTest.staskPop arrayStackTest.stackTop)
