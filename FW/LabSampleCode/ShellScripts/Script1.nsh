#echo  -off
script2.nsh
if exist %cwd%Mytime.log then
     type Mytime.log
endif
echo "%H Thank you." "%V ByeBye" "%E :) " "%B Done"