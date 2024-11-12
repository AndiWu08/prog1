#include <conio.h>
#include <stdio.h>

int main() {
      // define required variables
      char c;
      double result = 0.0;
      double currentDigit = 0.0;
      char operator = '+';

      // defines if operator or digit is expected, 0 == digit, 1 == operator
      const int EXPECTS_DIGIT = 0;
      const int EXPECTS_OPERATOR =1;
      int expected_input = EXPECTS_DIGIT;

      printf("\n CALCULATOR\n");
      printf("\n valid inputs are: + - * / = and digits 0..9\n");

      while (1)
      {
            c = _getch();  // Ein einzelnes Zeichen einlesen

            switch (c) 
            {
                  case '+':
                  case '-':
                  case '*':
                  case '/':
                        // if not an operator is entered -> beep and break
                        if (expected_input != EXPECTS_OPERATOR)
                        {
                              printf("\a");
                              break;
                        }

                        printf("%c ", c);
                        operator = c;
                        expected_input = EXPECTS_DIGIT;
                        break;
                  case '0':
                  case '1':
                  case '2':
                  case '3':
                  case '4':
                  case '5':
                  case '6':
                  case '7':
                  case '8':
                  case '9':
                        // if not a digit is entered -> beep and break
                        if (expected_input != EXPECTS_DIGIT)
                        {
                              printf("\a");
                              break;
                        }
                        
                        printf("%c ", c);
                        // get number out of char
                        currentDigit = (c - '0'); 
                        switch (operator)
                        {
                              case '+':
                                    result += currentDigit;
                                    break;
                              case '-':
                                    result -= currentDigit;
                                    break;
                              case '*':
                                    result *= currentDigit;
                                    break;
                              case '/':
                                    result /= currentDigit;
                                    break;
                        }
                        expected_input = EXPECTS_OPERATOR;
                        break;
                  case '=':
                        printf("\n = %f ", result);
                        expected_input = EXPECTS_OPERATOR;
                        break;
                  
                  default:  // Wenn eine andere Taste gedrückt wird
                        printf("\a");
            }
      }    
}
