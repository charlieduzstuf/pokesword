@echo off
rem Wrapper so asm-differ can invoke the objdump compatibility shim directly.
rem asm-differ builds its objdump command as [objdump_executable] + flags, with
rem no interpreter, so a .py cannot be pointed at directly on Windows.
python "%~dp0objdump_shim.py" %*
exit /b %ERRORLEVEL%
