// Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

#!/ bin / bash
#Script to count vowels and consonants in a file

#Prompt the user to enter the filename
read - p "Enter the filename: " filename

#Check if file exists
    if[!-f "$filename"];
then echo "File '$filename' does not exist." exit 1 fi

#Read the file content
    content = $(cat "$filename")

#Initialize counters
        vowels = 0 consonants = 0

#Convert content to lowercase and iterate over each character
    for ((i = 0; i < ${#content}; i++));
do
    char = ${content : $i : 1}
#Ignore digits and special characters
    if [[$char = ~[a - zA - Z]]];
then
    lower_char = $(echo "$char" | tr 'A-Z' 'a-z') if [[$lower_char = ~[aeiou]]];
then((vowels++)) else((consonants++))
    fi
    fi
    done

#Display the result
    echo "Vowels: $vowels" echo "Consonants: $consonants"
