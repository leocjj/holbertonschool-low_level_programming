#!/bin/bash
#./c 'file_to_create'  'command_to_append'
echo '#!/bin/bash' > $1
echo 'File created: ' $1
echo $2 >> $1
echo 'File created with: ' $2 ; chmod u+x $1
echo 'Number of lines of the file: '; wc -l $1
echo 'Header of the file: '; head -n 1 $1
echo 'Execution result: '
./$1
