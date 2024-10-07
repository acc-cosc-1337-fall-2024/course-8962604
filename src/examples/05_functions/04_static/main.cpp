#include "static.h"
int main()
{
    use_non_static_local_variable();
    use_non_static_local_variable();
    use_non_static_local_variable();

    use_static_local_variable1();
    use_static_local_variable1();
    use_static_local_variable1();

    return 0;
}