//
//  main.c
//  Adam
//
//  Created by Auston Salvana on 6/30/15.
//  Copyright (c) 2015 ASolo. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    char response[100];
    
    printf("what's good\n");
    
    fgets(response, 100, stdin);
    
    if (strcmp(response, "Adam\n") == 0) {
        
        printf("Fine. Be that way!");
        
    }
    else if (strncmp(response, "!\n", 100) == 0){
        printf("Woah, chill out!");
    }
    else if (strncmp(response, "?\n", 100) == 0){
        printf("Sure.");
    }
    else if (strcmp(response, "exit\n") == 0){
        return 0;
    }
    else{
    
        printf("Whatever.");
    }
    
    return 0;
}
