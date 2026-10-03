@echo off
python "%~dp0tail.py" %*
exit /b %ERRORLEVEL%
