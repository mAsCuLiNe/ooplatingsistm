//execTest8: execute one 500 byte file
//EXPECTED: normal exit
int main(){
  int result = 0;
  char* filename = "../test/exitFile300Byte";
  result = Exec(filename, 0, 0, 0);
  Exit(result);
}
