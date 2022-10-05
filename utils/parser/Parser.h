//
// Created by tidian on 04/10/22.
//

#ifndef PLS_LANGUAGE_PARSER_H
#define PLS_LANGUAGE_PARSER_H

#include <iostream>
#include <vector>

enum Tokens {
    NONE = 0,
    SETUP_STR, SETUP_EXEC_TYPE, SETUP_MODULE,
    COMA,
    OPEN_BRCKT, CLOSE_BRCKT, OPEN_SQR_BRCKT, CLOSE_SQR_BRCKT, OPEN_PRNTS, CLOSE_PRNTS,
    CREATE_METHOD, CREATE_METHOD_DICT, SET_METHOD, SET_METHOD_DICT, ADD_METHOD_DICT, DELETE_METHOD, DELETE_METHOD_DICT, DELETE_METHOD_INDEX,
    INT_LIT, STR_LIT, FLOAT_LIT, CHAR_LIT, BOOL_LIT,
    FUNCTION_DEF, IDENTIFIERS,
};

struct TokenType {
    Tokens T;
    int begin, end;
    std::string Value;
};

class Parser {
private:
    std::vector<TokenType> tokensVector;
    unsigned long long int tokenNumber;
    std::string toParseFilePath;
public:
    Tokens SetTokenType(std::string tokenValue);
    std::string getCharacterAt(int seekPos);
    TokenType GetNexToken(int seekPos);
    void AddTokenToList(TokenType T);
    inline std::vector<TokenType> GetTokenVector() const {return tokensVector;}
};


#endif //PLS_LANGUAGE_PARSER_H
