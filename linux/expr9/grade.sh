echo "Enter the 7 subjects mark of the student"
read sub1 sub2 sub3 sub4 sub5 sub6 sub7 
sum1=`expr $sub1 + $sub2 + $sub3 + $sub4 + $sub5 + $sub6 + $sub7`
echo "Sum of the 7 subects are $sum1"
per=`expr $sum1 / 7`
echo "Percentage is $per"
if [ $per -ge 91 ]
then
   echo "First class 'O GRADE ' with Distinction"
elif [ $per -ge 81 -a $per -lt 90 ]
then
   echo "A+ grade"
elif [ $per -ge 71 -a $per -lt 80 ]
then
   echo "A grade"
elif [ $per -ge 61 -a $per -lt 70 ]
then
   echo "B+ grade"
elif [ $per -ge 50 -a $per -lt 60 ]
then
   echo "B grade"
elif [ $per -le 49 ]
then
   echo " Reapear "

elif [ $per -gt 100 ]
then
   echo " Invalid data "
else
   echo " Thank you ! Good Bye "
fi




   



