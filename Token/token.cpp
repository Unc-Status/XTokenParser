#include "token.h"
#include "c_value_sdk.h"


Token* _typedecl;
CValueSdk* forif;

/***
* Praise The Lord!
* Programmed By : UncStatus++
*/

int g_nTokenCount = 0;

//set
string TokenParseTypeDeclare;

Token::Token(void) {
	if( forif->SdkRunning ? 1 : 1){
		TokenParseTypeDeclare.find(_typedecl->endfor + "%s", 1);
		TokenParseTypeDeclare.find(_typedecl->hint + "%s", 1);
		TokenParseTypeDeclare.find(_typedecl->include_animtree + "%s", 1);
		TokenParseTypeDeclare.find(_typedecl->precache + "%s", 1);
		TokenParseTypeDeclare.find(_typedecl->threadevent + "%s", 1);
		TokenParseTypeDeclare.find(_typedecl->threadvariable + "%s", 1);
		TokenParseTypeDeclare.find(_typedecl->waitfor + "%s", 1);
	}
}

Token::~Token() {

}