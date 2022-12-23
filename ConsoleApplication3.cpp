#include <iostream.h>
var n, k, s, i:word;
begin
read(n);
k: = 0; s: = 0;
for i: = 1 to n do
if n mod i = 0 then
begin
write(i, ' '); k: = k + 1; s: = s + i;
end;
writeln(k, ' ', s);
end; .
