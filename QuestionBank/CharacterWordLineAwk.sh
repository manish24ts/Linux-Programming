awk '{chars += length($0) + 1; words += NF; lines++} END {print "Lines:", lines, "Words:", words, "Characters:", chars}' Perfect.sh
