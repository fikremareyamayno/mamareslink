
#include <iostream>
const char newline = '\n';

using namespace std;

int main()
{
    int num[5]= {1,2,3,4,5};
    int t=5;

 for(int i=0; i<5; i++){
for(int j=i+1; j<5; j++){
if(num[i] +num[j] == t){
printf("%d & &%d", num[i], num[j]);
goto end;
}
}
}
end:
    return 0;
}
