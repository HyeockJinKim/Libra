
// Generated from circuit_specification.g4 by ANTLR 4.7.1


#include "circuit_specificationLexer.h"


using namespace antlr4;


circuit_specificationLexer::circuit_specificationLexer(CharStream *input) : Lexer(input) {
  _interpreter = new atn::LexerATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

circuit_specificationLexer::~circuit_specificationLexer() {
  delete _interpreter;
}

std::string circuit_specificationLexer::getGrammarFileName() const {
  return "circuit_specification.g4";
}

const std::vector<std::string>& circuit_specificationLexer::getRuleNames() const {
  return _ruleNames;
}

const std::vector<std::string>& circuit_specificationLexer::getChannelNames() const {
  return _channelNames;
}

const std::vector<std::string>& circuit_specificationLexer::getModeNames() const {
  return _modeNames;
}

const std::vector<std::string>& circuit_specificationLexer::getTokenNames() const {
  return _tokenNames;
}

dfa::Vocabulary& circuit_specificationLexer::getVocabulary() const {
  return _vocabulary;
}

const std::vector<uint16_t> circuit_specificationLexer::getSerializedATN() const {
  return _serializedATN;
}

const atn::ATN& circuit_specificationLexer::getATN() const {
  return _atn;
}




// Static vars and initialization.
std::vector<dfa::DFA> circuit_specificationLexer::_decisionToDFA;
atn::PredictionContextCache circuit_specificationLexer::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN circuit_specificationLexer::_atn;
std::vector<uint16_t> circuit_specificationLexer::_serializedATN;

std::vector<std::string> circuit_specificationLexer::_ruleNames = {
  u8"T__0", u8"T__1", u8"T__2", u8"T__3", u8"T__4", u8"T__5", u8"NEWLINE", 
  u8"INT"
};

std::vector<std::string> circuit_specificationLexer::_channelNames = {
  "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
};

std::vector<std::string> circuit_specificationLexer::_modeNames = {
  u8"DEFAULT_MODE"
};

std::vector<std::string> circuit_specificationLexer::_literalNames = {
  "", u8"'*'", u8"'/'", u8"'+'", u8"'-'", u8"'('", u8"')'"
};

std::vector<std::string> circuit_specificationLexer::_symbolicNames = {
  "", "", "", "", "", "", "", u8"NEWLINE", u8"INT"
};

dfa::Vocabulary circuit_specificationLexer::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> circuit_specificationLexer::_tokenNames;

circuit_specificationLexer::Initializer::Initializer() {
  // This code could be in a static initializer lambda, but VS doesn't allow access to private class members from there.
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x2, 0xa, 0x29, 0x8, 0x1, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 
    0x4, 0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
    0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 
    0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x6, 0x8, 0x21, 0xa, 0x8, 0xd, 0x8, 
    0xe, 0x8, 0x22, 0x3, 0x9, 0x6, 0x9, 0x26, 0xa, 0x9, 0xd, 0x9, 0xe, 0x9, 
    0x27, 0x2, 0x2, 0xa, 0x3, 0x3, 0x5, 0x4, 0x7, 0x5, 0x9, 0x6, 0xb, 0x7, 
    0xd, 0x8, 0xf, 0x9, 0x11, 0xa, 0x3, 0x2, 0x4, 0x4, 0x2, 0xc, 0xc, 0xf, 
    0xf, 0x3, 0x2, 0x32, 0x3b, 0x2, 0x2a, 0x2, 0x3, 0x3, 0x2, 0x2, 0x2, 
    0x2, 0x5, 0x3, 0x2, 0x2, 0x2, 0x2, 0x7, 0x3, 0x2, 0x2, 0x2, 0x2, 0x9, 
    0x3, 0x2, 0x2, 0x2, 0x2, 0xb, 0x3, 0x2, 0x2, 0x2, 0x2, 0xd, 0x3, 0x2, 
    0x2, 0x2, 0x2, 0xf, 0x3, 0x2, 0x2, 0x2, 0x2, 0x11, 0x3, 0x2, 0x2, 0x2, 
    0x3, 0x13, 0x3, 0x2, 0x2, 0x2, 0x5, 0x15, 0x3, 0x2, 0x2, 0x2, 0x7, 0x17, 
    0x3, 0x2, 0x2, 0x2, 0x9, 0x19, 0x3, 0x2, 0x2, 0x2, 0xb, 0x1b, 0x3, 0x2, 
    0x2, 0x2, 0xd, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xf, 0x20, 0x3, 0x2, 0x2, 0x2, 
    0x11, 0x25, 0x3, 0x2, 0x2, 0x2, 0x13, 0x14, 0x7, 0x2c, 0x2, 0x2, 0x14, 
    0x4, 0x3, 0x2, 0x2, 0x2, 0x15, 0x16, 0x7, 0x31, 0x2, 0x2, 0x16, 0x6, 
    0x3, 0x2, 0x2, 0x2, 0x17, 0x18, 0x7, 0x2d, 0x2, 0x2, 0x18, 0x8, 0x3, 
    0x2, 0x2, 0x2, 0x19, 0x1a, 0x7, 0x2f, 0x2, 0x2, 0x1a, 0xa, 0x3, 0x2, 
    0x2, 0x2, 0x1b, 0x1c, 0x7, 0x2a, 0x2, 0x2, 0x1c, 0xc, 0x3, 0x2, 0x2, 
    0x2, 0x1d, 0x1e, 0x7, 0x2b, 0x2, 0x2, 0x1e, 0xe, 0x3, 0x2, 0x2, 0x2, 
    0x1f, 0x21, 0x9, 0x2, 0x2, 0x2, 0x20, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x21, 
    0x22, 0x3, 0x2, 0x2, 0x2, 0x22, 0x20, 0x3, 0x2, 0x2, 0x2, 0x22, 0x23, 
    0x3, 0x2, 0x2, 0x2, 0x23, 0x10, 0x3, 0x2, 0x2, 0x2, 0x24, 0x26, 0x9, 
    0x3, 0x2, 0x2, 0x25, 0x24, 0x3, 0x2, 0x2, 0x2, 0x26, 0x27, 0x3, 0x2, 
    0x2, 0x2, 0x27, 0x25, 0x3, 0x2, 0x2, 0x2, 0x27, 0x28, 0x3, 0x2, 0x2, 
    0x2, 0x28, 0x12, 0x3, 0x2, 0x2, 0x2, 0x5, 0x2, 0x22, 0x27, 0x2, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

circuit_specificationLexer::Initializer circuit_specificationLexer::_init;
