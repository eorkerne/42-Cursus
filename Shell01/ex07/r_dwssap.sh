FT_LINE1=3
FT_LINE2=8

cat /etc/passwd | grep -v "#" | sed -n "n;p" | cut -d : -f 1 | rev | sort -r | sed -n -e "${FT_LINE1},${FT_LINE2}p" | paste -sd ',' - | sed 's/$/./'
