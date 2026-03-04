clear
 echo "Menu"
  echo "1. Lower to Upper "
   echo "2. Upper to Lower "
    echo "3. Quit"
     echo "Enter choice : \c"
      read choice
       case $choice in
	      1) echo "Enter the File :\c"
		        read f1
			if [ -f $f1 ]
			then
			   echo "Converting lower to upper"
		       	   echo " ${f1^^}"
                        else
			   echo "$f1 doesn't exist"
			fi
			
			;;

			
		     2) echo "Enter the File :\c"
		
			read f1
			
			echo "Converting upper to lower"
			
			echo "${f1,,}"
			
			;;


			
		     3|*)
		
			echo "Exit...."
			
			exit;;

														      esac
