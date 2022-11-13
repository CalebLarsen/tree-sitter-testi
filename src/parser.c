#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 14
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 11
#define ALIAS_COUNT 0
#define TOKEN_COUNT 4
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 2
#define PRODUCTION_ID_COUNT 3

enum {
  aux_sym_letter_token1 = 1,
  aux_sym_letter_token2 = 2,
  anon_sym_COMMA = 3,
  sym_source_file = 4,
  sym_letter = 5,
  sym_id = 6,
  sym_IdList = 7,
  sym__Id = 8,
  aux_sym_id_repeat1 = 9,
  aux_sym_IdList_repeat1 = 10,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_letter_token1] = "letter_token1",
  [aux_sym_letter_token2] = "letter_token2",
  [anon_sym_COMMA] = ",",
  [sym_source_file] = "source_file",
  [sym_letter] = "letter",
  [sym_id] = "id",
  [sym_IdList] = "IdList",
  [sym__Id] = "_Id",
  [aux_sym_id_repeat1] = "id_repeat1",
  [aux_sym_IdList_repeat1] = "IdList_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_letter_token1] = aux_sym_letter_token1,
  [aux_sym_letter_token2] = aux_sym_letter_token2,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_source_file] = sym_source_file,
  [sym_letter] = sym_letter,
  [sym_id] = sym_id,
  [sym_IdList] = sym_IdList,
  [sym__Id] = sym__Id,
  [aux_sym_id_repeat1] = aux_sym_id_repeat1,
  [aux_sym_IdList_repeat1] = aux_sym_IdList_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_letter_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_letter_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_letter] = {
    .visible = true,
    .named = true,
  },
  [sym_id] = {
    .visible = true,
    .named = true,
  },
  [sym_IdList] = {
    .visible = true,
    .named = true,
  },
  [sym__Id] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_id_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_IdList_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_ids = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_ids] = "ids",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_ids, 0},
  [1] =
    {field_ids, 0},
    {field_ids, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(1);
      if (lookahead == ',') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(3);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(aux_sym_letter_token1);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(aux_sym_letter_token2);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_letter_token1] = ACTIONS(1),
    [aux_sym_letter_token2] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(11),
    [sym_letter] = STATE(2),
    [sym_id] = STATE(8),
    [sym_IdList] = STATE(12),
    [sym__Id] = STATE(8),
    [aux_sym_IdList_repeat1] = STATE(3),
    [aux_sym_letter_token1] = ACTIONS(3),
    [aux_sym_letter_token2] = ACTIONS(3),
  },
  [2] = {
    [sym_letter] = STATE(4),
    [aux_sym_id_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_letter_token1] = ACTIONS(3),
    [aux_sym_letter_token2] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(5),
  },
  [3] = {
    [sym_letter] = STATE(2),
    [sym_id] = STATE(10),
    [sym__Id] = STATE(10),
    [aux_sym_IdList_repeat1] = STATE(5),
    [aux_sym_letter_token1] = ACTIONS(3),
    [aux_sym_letter_token2] = ACTIONS(3),
  },
  [4] = {
    [sym_letter] = STATE(6),
    [aux_sym_id_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(7),
    [aux_sym_letter_token1] = ACTIONS(3),
    [aux_sym_letter_token2] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(7),
  },
  [5] = {
    [sym_letter] = STATE(2),
    [sym_id] = STATE(13),
    [sym__Id] = STATE(13),
    [aux_sym_IdList_repeat1] = STATE(5),
    [aux_sym_letter_token1] = ACTIONS(9),
    [aux_sym_letter_token2] = ACTIONS(9),
  },
  [6] = {
    [sym_letter] = STATE(6),
    [aux_sym_id_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(12),
    [aux_sym_letter_token1] = ACTIONS(14),
    [aux_sym_letter_token2] = ACTIONS(14),
    [anon_sym_COMMA] = ACTIONS(12),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(17), 4,
      ts_builtin_sym_end,
      aux_sym_letter_token1,
      aux_sym_letter_token2,
      anon_sym_COMMA,
  [7] = 2,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      anon_sym_COMMA,
  [14] = 1,
    ACTIONS(23), 2,
      aux_sym_letter_token1,
      aux_sym_letter_token2,
  [19] = 2,
    ACTIONS(21), 1,
      anon_sym_COMMA,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
  [26] = 1,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
  [30] = 1,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
  [34] = 1,
    ACTIONS(21), 1,
      anon_sym_COMMA,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 7,
  [SMALL_STATE(9)] = 14,
  [SMALL_STATE(10)] = 19,
  [SMALL_STATE(11)] = 26,
  [SMALL_STATE(12)] = 30,
  [SMALL_STATE(13)] = 34,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 1),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 2),
  [9] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_IdList_repeat1, 2), SHIFT_REPEAT(7),
  [12] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_id_repeat1, 2),
  [14] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_id_repeat1, 2), SHIFT_REPEAT(7),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_letter, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_IdList, 1, .production_id = 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_IdList_repeat1, 2),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_IdList, 2, .production_id = 2),
  [27] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_testi(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
