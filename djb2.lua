-- based on:
-- https://raw.githubusercontent.com/leiradel/retroluxury/master/etc/luai/lua/djb2.lua

hash = function( str )
  local hash = 5381

  for i = 1, #str do
    hash = hash * 33 + str:byte( i )
  end
  return hash
end

for i = 0, #arg do
  print(string.format("%s %d", arg[i], hash(arg[i])))
end
