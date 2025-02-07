# ft_printf

## 📌 Overview
This project is a custom implementation of the `printf` function in C. It mimics the behavior of the standard `printf` function and supports multiple format specifiers.

## 🚀 Features
- Supports conversion specifiers:
  - `%c` → Character
  - `%s` → String
  - `%d` / `%i` → Integer
  - `%u` → Unsigned integer
  - `%x` / `%X` → Hexadecimal (lowercase & uppercase)
  - `%p` → Pointer address
  - `%%` → Percent sign
- Efficient handling of format strings.
- Proper memory and error management.

## 📂 Project Structure
| File                        | Description                                                                 |
|-----------------------------|-----------------------------------------------------------------------------|
| **`ft_printf.c`**       | Function handling format parsing.         |
| **`ft_printf_char.h`**       | Header file containing function prototypes and necessary macros.            |
| **`ft_printf_hex.c`** | File handling hexadecimal format specifier.                      |
| **`ft_printf_int.c`** | File handling integer format specifiers.   |
| **`ft_printf_pointer.c`** | File handling pointer format specifier.   |
| **`ft_printf_str.c`** | File handling string format specifier.   |
| **`ft_printf_unsigned_int.c`** | File handling unsigned integer format specifier.   |
| **`ft_printf_utils.c`** | Utility functions used across the project.   |
| **`main.c`** | Main function.   |
| **`ft_printf.h`** | Header file with function prototypes and macros.                                   |
| **`Makefile`** | Compilation instructions.                       |

## 🛠️ Compilation & Usage
### Compile the library:
```sh
make
```

This will generate an object file that can be linked with other projects.

### Example usage
```code
#include "ft_printf.h"

int main()
{
    ft_printf("Hello, %s! The number is %d\n", "world", 42);
    return 0;
}
```

## 📌 Author 

**Pablo Alonso García**


---
