/** @file module1.h
 * @brief Brief description of module1 
 *
 * Follows the detailed description for module1
 * It is separated from the brief one by a blank line.
 * Typically includes a more extensive explanation of what the module 
 * does. 
 * Note that Doxygens tags are words preceeded by either 
 * a backslash @\ or by an at symbol @@.
 * @see https://www.doxygen.nl/manual/index.html 
 * 
 * 
 * @author Paulo Pedreiras
 * @date 16 Feb 2024
 * @bug No known bugs.
 */

#ifndef module1_h
#define module1_h

/**
 * @brief brief description of elem typedef struct.
 * 
 *
 * Then it may follow a detailed explanation of the elem structure.
 */ 
typedef struct 
{
    int struct_element_a; /**< Some info for this elem struct member */
    char struct_element_b;/**< Some info for this elem struct member */
} elem;


/**
 * @brief Brief decription of function1 prototype.
 *
 * Here it goes the long description of fucntion 1.
 * Description of what the function does. Usually this part describes 
 * whatr the fiunction does and its interface, namelly input 
 * arguments and return value.
 * Verbatim text can also be used:
 * @verbatim 
 * This is my email:pbrp@ua.pt
 * @endverbatim
 * You can also include an example of usage:
 * @code
 * res = function1(param1, param2);
 * printf("res=%d\n",res);
 * @endcode
 * You can uset HTML tags e.g. to make <b>bold text</b>
 * @param[in] arg1 Description of the first parameter of the function.
 * @param[in] arg2 Description of the second parameter of the function.
 * @return Describe the function return value 
 */
int function1(int arg1, int arg2);

#endif
