echo "Emitting C++ Interface"
flatc -I ../interface -o . --scoped-enums --reflect-names --gen-mutable --cpp-std c++17 -c ../interface/noodles.fbs
echo "Emitting Python Interface"
flatc -I ../interface -o . --reflect-names --gen-mutable -p ../interface/noodles.fbs
echo "Emitting Rust Interface"
flatc -I ../interface -o rust/src/generated --reflect-names --rust ../interface/noodles.fbs
echo "Emitting Javascript Interface"
flatc -I ../interface -o ts/ --reflect-names --ts ../interface/noodles.fbs
echo "Emitting JSON Schema"
flatc -o . --jsonschema ../interface/noodles_server.fbs
flatc -o . --jsonschema ../interface/noodles_client.fbs
