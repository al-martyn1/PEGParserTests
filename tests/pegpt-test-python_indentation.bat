@set TEST_NAME=pegpt-test-python_indentation
@call "%~dp0\.find_test_exe.bat" %TEST_NAME%
@echo FOUND_EXE: %FOUND_EXE%
@set TEST_EXE=%FOUND_EXE%

%TEST_EXE% > %TEST_NAME%.log 2>&1
