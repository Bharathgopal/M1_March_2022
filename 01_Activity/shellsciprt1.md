# Write a shell script to create a text file
* File must be named **TODO_YYYYMMDD_HHMM**
* Date must be captrured in every file in the first line 

## Implementation language
* Shell script

### Explaination
* Let the script be named mfilecreator.sh
* On running this file, a file named **TODO_YYYYMMDD_HHMM**
  * YYYY is year
  * MM is month
  * DD is date
  * HH is hour in 24 hour format
  * MM is minutes
* The files must contain the **YYYYMMDD** in the first line

*****Solution By Rohi-13*****

#!\bin\sh
# put current date as yyyy-mm-dd in $date
#YYYY is year
#MM is month
#DD is date
date=$ date "+%Y-%m-%d"
#put current time as hh-mm in $date
#HH is hour in 24 hour format
#MM is Minutes
#date +%T
date=$ date "+%H:%M"
******RUN IN TERMINAL******
rohini@rohini-Inspiron-3543:~$ chmod +x mfilecreator.sh 
rohini@rohini-Inspiron-3543:~$ bash TODO_YYYYMMDD_HHMM 
2022-03-24
14:15
rohini@rohini-Inspiron-3543:~$ 




