//
// Tomás Oliveira e Silva, AED, November 2021
//
// matched-parenthesis verification
//

#include <iostream>
#include "aStack.h"

using std::cout;
using std::cerr;
using std::endl;

int check_parenthesis(const char *s)
{
  // put your code here (20 lines of code should be enough)
  aStack<int> stack;

  for (int i = 0; s[i] != '\0'; i++) {
    if (s[i] == '(') {
      stack.push(i);
    }
    else if (s[i] == ')') {
      if (stack.size() > 0){
        cout << "  '(' at position " << stack.pop() << " and matching ')' at position " << i << endl;
      }else{
        cout << "  Unmatched ')' at position " << i << endl;
        return -1;
      }
    }    
  }
  
  if (stack.is_empty()){
    return 0;
  }else{
    while (!stack.is_empty()){
      cout << "  Unmatched '(' at position " << stack.pop() << endl;
    }
  }
  return -1;
  
}

int main(int argc,char **argv)
{
  if(argc == 1)
  {
    cerr << "usage: " << argv[0] << " [arguments...]" << endl;
    cerr << "example: " << argv[0] << " 'abc(def)ghi' 'x)(y'" << endl;
    return 1;
  }
  for(int i = 1;i < argc;i++)
  {
    cout << argv[i] << endl;
    if(check_parenthesis(argv[i]) == 0)
      cout << "  good" << endl;
    else
      cout << "  bad" << endl;
  }
  return 0;
}
