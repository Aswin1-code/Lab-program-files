#!/bin/bash
echo -n "Enter the name of a country: "
read country
echo "The official language of $country is "
case $country in
india)
   echo -n "Indian"
;;
romania)
   echo -n "Romanian"
;;
italy)
   echo -n "Italian"
;;
china)
   echo -n "Chinese"
;;
*)
   echo -n "Unknown"
;;
esac
