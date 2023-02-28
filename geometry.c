#include <stdio.h>

struct geometry{
    float x;
    float y;
    float number;
};

void circle(float num)
{
    float C,S;

    C = 2.0 * 3.14 * num;
    S = 3.14 * num * num;

    printf("C -> %.2f\n",C);
    printf("S -> %.2f\n",S);
}

int step(int x,int y)
{
    int result = 1;

    for(int n = 1;n <= y;n++){
        result *= x;
    }

    return result;
}

int main()
{
    int count = 0,counter = 0,counter_2 = 0,counter_3 = 0,counter_4 = 0,counter_5 = 0,counter_6 = 0;
    int whil_1 = 0,whil_2 = 0,whil_3 = 0,test,test_2;
    char arr[100],arr_2[100],arr_3[100],fill;
    float p2_pX,p3_p2X,p3_pX;
    float p2_pY,p3_p2Y,p3_pY;
    struct geometry p;
    struct geometry p_2;
    struct geometry p_3;

    while((fill = getchar()) != '\n'){
        arr[count] = fill;
        count++;
    }

    for(int n = 0;n < count;n++){
        if(arr[n] == ')'){
            counter_5++;
            test = n + 1;
        }

        if(arr[n] == '('){
            counter_6++;
            test = n + 1;
        }
    }

    test_2 = arr[6];

    if(arr[0] != 'c' || arr[1] != 'i' || arr[2] != 'r' || arr[3] != 'c' || arr[4] != 'l' || arr[5] != 'e' || test_2 < 40 || test_2 > 41){
        printf("Error at column 0: expected 'circle'\n");
    }else if(counter_5 > 1){
        printf("Error at column %d: expected ')'\n",test);
    }else if(counter_6 > 1){
        printf("Error at column %d: expected '('\n",test);
    }else if(arr[count - 1] != ')' || (arr[count - 2] == ')' && arr[count - 1] != ' ')){
        printf("Error at column %d: unexpected token\n",count);
    }else{
        while(arr[counter] != '.'){
            int x = arr[counter];
            if(x > 47 && x < 58)
                counter_2++;
                    
            counter++;
        }

        whil_1 = counter;
        counter += 2;

        while(arr[counter] != '.'){
            int x = arr[counter];
            if(x > 47 && x < 58)
                counter_3++;

            counter++;
        }

        whil_2 = counter;
        counter += 2;

        while(arr[counter] != '.'){
            int x = arr[counter];
            if(x > 47 && x < 58)
                counter_4++;

            counter++;
        }

        whil_3 = counter;

        for(int n = 0;n < whil_1;n++){
            int x = arr[n];
            if(x > 47 && x < 58){
                int y;
                if((int)arr[whil_1 + 1] > 47 && (int)arr[whil_1 + 1] < 58){
                    y = arr[whil_1 + 1];
                }else{
                    y = arr[whil_1 + 2];
                }
                p.x += (x - 48) * step(10,counter_2 - 1) + (y - 48) / 10.0;
                counter_2--;
            }
        }

        for(int n = whil_1 + 2;n < whil_2;n++){
            int x = arr[n];
            if(x > 47 && x < 58){
                int y;
                if((int)arr[whil_2 + 1] > 47 && (int)arr[whil_2 + 1] < 58){
                    y = arr[whil_2 + 1];
                }else{
                    y = arr[whil_2 + 2];
                }
                p.y += (x - 48) * step(10,counter_3 - 1) + (y - 48) / 10.0;
                counter_3--;
            }
        }

        for(int n = whil_2 + 2;n < whil_3;n++){
            int x = arr[n];
            if(x > 47 && x < 58){
                int y;
                if((int)arr[whil_3 + 1] > 47 && (int)arr[whil_3 + 1] < 58){
                    y = arr[whil_3 + 1];
                }else{
                    y = arr[whil_3 + 2];
                }
                p.number += (x - 48) * step(10,counter_4 - 1) + (y - 48) / 10.0;

                counter_4--;
            }
        }

        circle(p.number);
        printf("\n");
    
        count = counter = counter_2 = counter_3 = counter_4 = counter_5 = counter_6 = 0;
        whil_1 = whil_2 = whil_3 = test = test_2 = 0;

        while((fill = getchar()) != '\n'){
            arr_2[count] = fill;
            count++;
        }

        for(int n = 0;n < count;n++){
            if(arr_2[n] == ')'){
                counter_5++;
                test = n + 1;
            }

            if(arr_2[n] == '('){
                counter_6++;
                test = n + 1;
            }
        }

        test_2 = arr_2[6];

        if(arr_2[0] != 'c' || arr_2[1] != 'i' || arr_2[2] != 'r' || arr_2[3] != 'c' || arr_2[4] != 'l' || arr_2[5] != 'e' || test_2 < 40 || test_2 > 41){
            printf("Error at column 0: expected 'circle'\n");
        }else if(counter_5 > 1){
            printf("Error at column %d: expected ')'\n",test);
        }else if(counter_6 > 1){
            printf("Error at column %d: expected '('\n",test);
        }else if(arr_2[count - 1] != ')' || (arr[count - 2] == ')' && arr[count - 1] != ' ')){
            printf("Error at column %d: unexpected token\n",count);
        }else{
            while(arr_2[counter] != '.'){
                int x = arr_2[counter];
                if(x > 47 && x < 58)
                    counter_2++;
                        
                counter++;
            }

            whil_1 = counter;
            counter += 2;

            while(arr_2[counter] != '.'){
                int x = arr_2[counter];
                if(x > 47 && x < 58)
                    counter_3++;

                counter++;
            }

            whil_2 = counter;
            counter += 2;

            while(arr_2[counter] != '.'){
                int x = arr_2[counter];
                if(x > 47 && x < 58)
                    counter_4++;

                counter++;
            }

            whil_3 = counter;

            for(int n = 0;n < whil_1;n++){
                int x = arr_2[n];
                if(x > 47 && x < 58){
                    int y;
                    if((int)arr_2[whil_1 + 1] > 47 && (int)arr_2[whil_1 + 1] < 58){
                        y = arr_2[whil_1 + 1];
                    }else{
                        y = arr_2[whil_1 + 2];
                    }
                    p_2.x += (x - 48) * step(10,counter_2 - 1) + (y - 48) / 10.0;
                    counter_2--;
                }
            }

            for(int n = whil_1 + 2;n < whil_2;n++){
                int x = arr_2[n];
                if(x > 47 && x < 58){
                    int y;
                    if((int)arr_2[whil_2 + 1] > 47 && (int)arr_2[whil_2 + 1] < 58){
                        y = arr_2[whil_2 + 1];
                    }else{
                        y = arr_2[whil_2 + 2];
                    }
                    p_2.y += (x - 48) * step(10,counter_3 - 1) + (y - 48) / 10.0;
                    counter_3--;
                }
            }

            for(int n = whil_2 + 2;n < whil_3;n++){
                int x = arr_2[n];
                if(x > 47 && x < 58){
                    int y;
                    if((int)arr_2[whil_3 + 1] > 47 && (int)arr_2[whil_3 + 1] < 58){
                        y = arr_2[whil_3 + 1];
                    }else{
                        y = arr_2[whil_3 + 2];
                    }
                    p_2.number += (x - 48) * step(10,counter_4 - 1) + (y - 48) / 10.0;
                    counter_4--;
                }
            }

            circle(p_2.number);

            if(p_2.x > p.x){
                p2_pX = p_2.x - p.x;
            }else{
                p2_pX = p.x - p_2.x;
            }

            if(p_2.y > p.y){
                p2_pY = p_2.y - p.y;
            }else{
                p2_pY = p.y - p_2.y;
            }

            printf("intersects:\n");

            if(p.number + p_2.number > p2_pX && p.number + p_2.number > p2_pY)
                printf("1. circle\n\n");

        count = counter = counter_2 = counter_3 = counter_4 = counter_5 = counter_6 = 0;
        whil_1 = whil_2 = whil_3 = test = test_2 = 0;   

        while((fill = getchar()) != '\n'){
            arr_3[count] = fill;
            count++;
        }

        for(int n = 0;n < count;n++){
            if(arr_3[n] == ')'){
                counter_5++;
                test = n + 1;
            }

            if(arr_3[n] == '('){
                counter_6++;
                test = n + 1;
            }
        }

        test_2 = arr_3[6];

        if(arr_3[0] != 'c' || arr_3[1] != 'i' || arr_3[2] != 'r' || arr_3[3] != 'c' || arr_3[4] != 'l' || arr_3[5] != 'e' || test_2 < 40 || test_2 > 41){
            printf("Error at column 0: expected 'circle'\n");
        }else if(counter_5 > 1){
            printf("Error at column %d: expected ')'\n",test);
        }else if(counter_6 > 1){
            printf("Error at column %d: expected '('\n",test);
        }else if(arr_3[count - 1] != ')' || (arr[count - 2] == ')' && arr[count - 1] != ' ')){
            printf("Error at column %d: unexpected token\n",count);
        }else{
            while(arr_3[counter] != '.'){
                int x = arr_3[counter];
                if(x > 47 && x < 58)
                    counter_2++;
                        
                counter++;
            }

            whil_1 = counter;
            counter += 2;

            while(arr_3[counter] != '.'){
                int x = arr_3[counter];
                if(x > 47 && x < 58)
                    counter_3++;

                counter++;
            }

            whil_2 = counter;
            counter += 2;

            while(arr_3[counter] != '.'){
                int x = arr_3[counter];
                if(x > 47 && x < 58)
                    counter_4++;

                counter++;
            }

            whil_3 = counter;

            for(int n = 0;n < whil_1;n++){
                int x = arr_3[n];
                if(x > 47 && x < 58){
                    int y;
                    if((int)arr_3[whil_1 + 1] > 47 && (int)arr_3[whil_1 + 1] < 58){
                        y = arr_3[whil_1 + 1];
                    }else{
                        y = arr_3[whil_1 + 2];
                    }
                    p_3.x += (x - 48) * step(10,counter_2 - 1) + (y - 48) / 10.0;
                    counter_2--;
                }
            }

            for(int n = whil_1 + 2;n < whil_2;n++){
                int x = arr_3[n];
                if(x > 47 && x < 58){
                    int y;
                    if((int)arr_3[whil_2 + 1] > 47 && (int)arr_3[whil_2 + 1] < 58){
                        y = arr_3[whil_2 + 1];
                    }else{
                        y = arr_3[whil_2 + 2];
                    }
                    p_3.y += (x - 48) * step(10,counter_3 - 1) + (y - 48) / 10.0;
                    counter_3--;
                }
            }

            for(int n = whil_2 + 2;n < whil_3;n++){
                int x = arr[n];
                if(x > 47 && x < 58){
                    int y;
                    if((int)arr[whil_3 + 1] > 47 && (int)arr[whil_3 + 1] < 58){
                        y = arr[whil_3 + 1];
                    }else{
                        y = arr[whil_3 + 2];
                    }
                    p_3.number += (x - 48) * step(10,counter_4 - 1) + (y - 48) / 10.0;
                    counter_4--;
                }
            }

            circle(p_3.number);

            if(p_3.x > p.x){
                p3_pX = p_3.x - p.x;
            }else{
                p3_pX = p.x - p_3.x;
            }

            if(p_3.x > p_2.x){
                p3_p2X = p_3.x - p_2.x;
            }else{
                p3_p2X = p_2.x - p_3.x;
            }

            if(p_3.y > p.y){
                p3_pY = p_3.y - p.y;
            }else{
                p3_pY = p.y - p_3.y;
            }

            if(p_3.y > p_2.y){
                p3_p2Y = p_3.y - p_2.y;
            }else{
                p3_p2Y = p_2.y - p_3.y;
            }

            printf("intersects:\n");

            if(p.number + p_3.number > p3_pX && p.number + p_3.number > p3_pY)
                printf("1. circle\n");
            
            if(p_3.number + p_2.number > p3_p2X && p_3.number + p_2.number > p3_p2Y)
                printf("2. circle\n");
            }
        }
    }
    return 0;
}