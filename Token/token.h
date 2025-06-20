#ifndef TOKEN_H
#define TOKEN_H

#include "ivsdkimport.h"

#define TOKEN_WAITFOR
#define TOKEN_PRECACHE
#define TOKEN_ENDFOR
#define TOKEN_THREADEVENT
#define TOKEN_THREADVARIABLE
#define TOKEN_INCLUDEANIMTREE

#include <string>

//std
using namespace std;

#define TOKEN_ATTRIBUTION string
#define TOKEN_LINE
#define TOKEN_VERSION

/***
* Praise The Lord!
* Programmed By : UncStatus++
*/

#define TOKEN_HINT

class Token : public IToken {
public:
	Token();
	virtual ~Token();

	int TokenId = NULL;

	string waitfor;
	string precache;
	string endfor;
	string threadevent;
	string threadvariable;
	string include_animtree;

	string hint;

	string LINE;
	string VERSION;
};


#endif