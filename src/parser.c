#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 304
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 132
#define ALIAS_COUNT 0
#define TOKEN_COUNT 68
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 9
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 19

enum {
  anon_sym_LF = 1,
  anon_sym_COLON_LBRACK = 2,
  anon_sym_RBRACK = 3,
  sym_shisho_ellipsis = 4,
  anon_sym_DOT_DOT_DOT = 5,
  sym_shisho_metavariable_name = 6,
  aux_sym_from_instruction_token1 = 7,
  aux_sym_from_instruction_token2 = 8,
  aux_sym_run_instruction_token1 = 9,
  aux_sym_cmd_instruction_token1 = 10,
  aux_sym_label_instruction_token1 = 11,
  aux_sym_expose_instruction_token1 = 12,
  aux_sym_env_instruction_token1 = 13,
  aux_sym_add_instruction_token1 = 14,
  aux_sym_copy_instruction_token1 = 15,
  aux_sym_entrypoint_instruction_token1 = 16,
  aux_sym_volume_instruction_token1 = 17,
  aux_sym_user_instruction_token1 = 18,
  anon_sym_COLON = 19,
  aux_sym__user_name_or_group_token1 = 20,
  aux_sym_workdir_instruction_token1 = 21,
  aux_sym_arg_instruction_token1 = 22,
  aux_sym_arg_instruction_token2 = 23,
  anon_sym_EQ = 24,
  aux_sym_onbuild_instruction_token1 = 25,
  aux_sym_stopsignal_instruction_token1 = 26,
  aux_sym__stopsignal_value_token1 = 27,
  aux_sym_healthcheck_instruction_token1 = 28,
  anon_sym_NONE = 29,
  aux_sym_shell_instruction_token1 = 30,
  aux_sym_maintainer_instruction_token1 = 31,
  aux_sym_maintainer_instruction_token2 = 32,
  aux_sym_cross_build_instruction_token1 = 33,
  aux_sym_path_token1 = 34,
  aux_sym_path_token2 = 35,
  anon_sym_DOLLAR = 36,
  anon_sym_LBRACE = 37,
  aux_sym_expansion_token1 = 38,
  anon_sym_RBRACE = 39,
  sym_variable = 40,
  aux_sym__spaced_env_pair_token1 = 41,
  aux_sym__env_key_token1 = 42,
  aux_sym_expose_port_token1 = 43,
  anon_sym_SLASHtcp = 44,
  anon_sym_SLASHudp = 45,
  aux_sym_label_pair_token1 = 46,
  aux_sym_image_name_token1 = 47,
  aux_sym_image_tag_value_token1 = 48,
  anon_sym_AT = 49,
  aux_sym_image_digest_value_token1 = 50,
  anon_sym_DASH_DASH = 51,
  sym_param_name = 52,
  sym_param_value = 53,
  aux_sym_image_alias_token1 = 54,
  anon_sym_LBRACK = 55,
  anon_sym_COMMA = 56,
  aux_sym_shell_fragment_token1 = 57,
  aux_sym_shell_fragment_token2 = 58,
  sym_line_continuation = 59,
  anon_sym_POUND = 60,
  anon_sym_DQUOTE = 61,
  aux_sym_double_quoted_string_token1 = 62,
  aux_sym_unquoted_string_token1 = 63,
  anon_sym_BSLASH = 64,
  sym_escape_sequence = 65,
  sym__non_newline_whitespace = 66,
  sym_comment = 67,
  sym_source_file = 68,
  sym_shisho_metavariable = 69,
  sym_shisho_ellipsis_metavariable = 70,
  sym__instruction = 71,
  sym_from_instruction = 72,
  sym_run_instruction = 73,
  sym_cmd_instruction = 74,
  sym_label_instruction = 75,
  sym_expose_instruction = 76,
  sym_env_instruction = 77,
  sym_add_instruction = 78,
  sym_copy_instruction = 79,
  sym_entrypoint_instruction = 80,
  sym_volume_instruction = 81,
  sym_user_instruction = 82,
  aux_sym__user_name_or_group = 83,
  sym_workdir_instruction = 84,
  sym_arg_instruction = 85,
  sym_onbuild_instruction = 86,
  sym_stopsignal_instruction = 87,
  aux_sym__stopsignal_value = 88,
  sym_healthcheck_instruction = 89,
  sym_shell_instruction = 90,
  sym_maintainer_instruction = 91,
  sym_cross_build_instruction = 92,
  sym_path = 93,
  sym_expansion = 94,
  sym_env_pair = 95,
  sym__spaced_env_pair = 96,
  sym__env_key = 97,
  sym_expose_port = 98,
  sym_label_pair = 99,
  sym_image_spec = 100,
  sym_image_name = 101,
  sym_image_tag = 102,
  sym_image_tag_value = 103,
  sym_image_digest = 104,
  sym_image_digest_value = 105,
  sym_param = 106,
  sym_image_alias = 107,
  sym_string_array = 108,
  sym_shell_command = 109,
  sym_shell_fragment = 110,
  sym__comment_line = 111,
  sym__anon_comment = 112,
  sym_double_quoted_string = 113,
  sym_unquoted_string = 114,
  aux_sym_source_file_repeat1 = 115,
  aux_sym_label_instruction_repeat1 = 116,
  aux_sym_expose_instruction_repeat1 = 117,
  aux_sym_env_instruction_repeat1 = 118,
  aux_sym_volume_instruction_repeat1 = 119,
  aux_sym_healthcheck_instruction_repeat1 = 120,
  aux_sym_path_repeat1 = 121,
  aux_sym_image_name_repeat1 = 122,
  aux_sym_image_tag_value_repeat1 = 123,
  aux_sym_image_digest_value_repeat1 = 124,
  aux_sym_image_alias_repeat1 = 125,
  aux_sym_string_array_repeat1 = 126,
  aux_sym_shell_command_repeat1 = 127,
  aux_sym_shell_command_repeat2 = 128,
  aux_sym_shell_fragment_repeat1 = 129,
  aux_sym_double_quoted_string_repeat1 = 130,
  aux_sym_unquoted_string_repeat1 = 131,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_COLON_LBRACK] = ":[",
  [anon_sym_RBRACK] = "]",
  [sym_shisho_ellipsis] = "shisho_ellipsis",
  [anon_sym_DOT_DOT_DOT] = "...",
  [sym_shisho_metavariable_name] = "shisho_metavariable_name",
  [aux_sym_from_instruction_token1] = "FROM",
  [aux_sym_from_instruction_token2] = "AS",
  [aux_sym_run_instruction_token1] = "RUN",
  [aux_sym_cmd_instruction_token1] = "CMD",
  [aux_sym_label_instruction_token1] = "LABEL",
  [aux_sym_expose_instruction_token1] = "EXPOSE",
  [aux_sym_env_instruction_token1] = "ENV",
  [aux_sym_add_instruction_token1] = "ADD",
  [aux_sym_copy_instruction_token1] = "COPY",
  [aux_sym_entrypoint_instruction_token1] = "ENTRYPOINT",
  [aux_sym_volume_instruction_token1] = "VOLUME",
  [aux_sym_user_instruction_token1] = "USER",
  [anon_sym_COLON] = ":",
  [aux_sym__user_name_or_group_token1] = "_user_name_or_group_token1",
  [aux_sym_workdir_instruction_token1] = "WORKDIR",
  [aux_sym_arg_instruction_token1] = "ARG",
  [aux_sym_arg_instruction_token2] = "unquoted_string",
  [anon_sym_EQ] = "=",
  [aux_sym_onbuild_instruction_token1] = "ONBUILD",
  [aux_sym_stopsignal_instruction_token1] = "STOPSIGNAL",
  [aux_sym__stopsignal_value_token1] = "_stopsignal_value_token1",
  [aux_sym_healthcheck_instruction_token1] = "HEALTHCHECK",
  [anon_sym_NONE] = "NONE",
  [aux_sym_shell_instruction_token1] = "SHELL",
  [aux_sym_maintainer_instruction_token1] = "MAINTAINER",
  [aux_sym_maintainer_instruction_token2] = "maintainer_instruction_token2",
  [aux_sym_cross_build_instruction_token1] = "CROSS_BUILD",
  [aux_sym_path_token1] = "path_token1",
  [aux_sym_path_token2] = "path_token2",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_LBRACE] = "{",
  [aux_sym_expansion_token1] = "variable",
  [anon_sym_RBRACE] = "}",
  [sym_variable] = "variable",
  [aux_sym__spaced_env_pair_token1] = "_spaced_env_pair_token1",
  [aux_sym__env_key_token1] = "unquoted_string",
  [aux_sym_expose_port_token1] = "expose_port_token1",
  [anon_sym_SLASHtcp] = "/tcp",
  [anon_sym_SLASHudp] = "/udp",
  [aux_sym_label_pair_token1] = "unquoted_string",
  [aux_sym_image_name_token1] = "image_name_token1",
  [aux_sym_image_tag_value_token1] = "image_tag_value_token1",
  [anon_sym_AT] = "@",
  [aux_sym_image_digest_value_token1] = "image_digest_value_token1",
  [anon_sym_DASH_DASH] = "--",
  [sym_param_name] = "param_name",
  [sym_param_value] = "param_value",
  [aux_sym_image_alias_token1] = "image_alias_token1",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [aux_sym_shell_fragment_token1] = "shell_fragment_token1",
  [aux_sym_shell_fragment_token2] = "shell_fragment_token2",
  [sym_line_continuation] = "line_continuation",
  [anon_sym_POUND] = "#",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_double_quoted_string_token1] = "double_quoted_string_token1",
  [aux_sym_unquoted_string_token1] = "unquoted_string_token1",
  [anon_sym_BSLASH] = "\\ ",
  [sym_escape_sequence] = "escape_sequence",
  [sym__non_newline_whitespace] = "_non_newline_whitespace",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_shisho_metavariable] = "shisho_metavariable",
  [sym_shisho_ellipsis_metavariable] = "shisho_ellipsis_metavariable",
  [sym__instruction] = "_instruction",
  [sym_from_instruction] = "from_instruction",
  [sym_run_instruction] = "run_instruction",
  [sym_cmd_instruction] = "cmd_instruction",
  [sym_label_instruction] = "label_instruction",
  [sym_expose_instruction] = "expose_instruction",
  [sym_env_instruction] = "env_instruction",
  [sym_add_instruction] = "add_instruction",
  [sym_copy_instruction] = "copy_instruction",
  [sym_entrypoint_instruction] = "entrypoint_instruction",
  [sym_volume_instruction] = "volume_instruction",
  [sym_user_instruction] = "user_instruction",
  [aux_sym__user_name_or_group] = "_user_name_or_group",
  [sym_workdir_instruction] = "workdir_instruction",
  [sym_arg_instruction] = "arg_instruction",
  [sym_onbuild_instruction] = "onbuild_instruction",
  [sym_stopsignal_instruction] = "stopsignal_instruction",
  [aux_sym__stopsignal_value] = "_stopsignal_value",
  [sym_healthcheck_instruction] = "healthcheck_instruction",
  [sym_shell_instruction] = "shell_instruction",
  [sym_maintainer_instruction] = "maintainer_instruction",
  [sym_cross_build_instruction] = "cross_build_instruction",
  [sym_path] = "path",
  [sym_expansion] = "expansion",
  [sym_env_pair] = "env_pair",
  [sym__spaced_env_pair] = "env_pair",
  [sym__env_key] = "_env_key",
  [sym_expose_port] = "expose_port",
  [sym_label_pair] = "label_pair",
  [sym_image_spec] = "image_spec",
  [sym_image_name] = "image_name",
  [sym_image_tag] = "image_tag",
  [sym_image_tag_value] = "image_tag_value",
  [sym_image_digest] = "image_digest",
  [sym_image_digest_value] = "image_digest_value",
  [sym_param] = "param",
  [sym_image_alias] = "image_alias",
  [sym_string_array] = "string_array",
  [sym_shell_command] = "shell_command",
  [sym_shell_fragment] = "shell_fragment",
  [sym__comment_line] = "_comment_line",
  [sym__anon_comment] = "comment",
  [sym_double_quoted_string] = "double_quoted_string",
  [sym_unquoted_string] = "unquoted_string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_label_instruction_repeat1] = "label_instruction_repeat1",
  [aux_sym_expose_instruction_repeat1] = "expose_instruction_repeat1",
  [aux_sym_env_instruction_repeat1] = "env_instruction_repeat1",
  [aux_sym_volume_instruction_repeat1] = "volume_instruction_repeat1",
  [aux_sym_healthcheck_instruction_repeat1] = "healthcheck_instruction_repeat1",
  [aux_sym_path_repeat1] = "path_repeat1",
  [aux_sym_image_name_repeat1] = "image_name_repeat1",
  [aux_sym_image_tag_value_repeat1] = "image_tag_value_repeat1",
  [aux_sym_image_digest_value_repeat1] = "image_digest_value_repeat1",
  [aux_sym_image_alias_repeat1] = "image_alias_repeat1",
  [aux_sym_string_array_repeat1] = "string_array_repeat1",
  [aux_sym_shell_command_repeat1] = "shell_command_repeat1",
  [aux_sym_shell_command_repeat2] = "shell_command_repeat2",
  [aux_sym_shell_fragment_repeat1] = "shell_fragment_repeat1",
  [aux_sym_double_quoted_string_repeat1] = "double_quoted_string_repeat1",
  [aux_sym_unquoted_string_repeat1] = "unquoted_string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_COLON_LBRACK] = anon_sym_COLON_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_shisho_ellipsis] = sym_shisho_ellipsis,
  [anon_sym_DOT_DOT_DOT] = anon_sym_DOT_DOT_DOT,
  [sym_shisho_metavariable_name] = sym_shisho_metavariable_name,
  [aux_sym_from_instruction_token1] = aux_sym_from_instruction_token1,
  [aux_sym_from_instruction_token2] = aux_sym_from_instruction_token2,
  [aux_sym_run_instruction_token1] = aux_sym_run_instruction_token1,
  [aux_sym_cmd_instruction_token1] = aux_sym_cmd_instruction_token1,
  [aux_sym_label_instruction_token1] = aux_sym_label_instruction_token1,
  [aux_sym_expose_instruction_token1] = aux_sym_expose_instruction_token1,
  [aux_sym_env_instruction_token1] = aux_sym_env_instruction_token1,
  [aux_sym_add_instruction_token1] = aux_sym_add_instruction_token1,
  [aux_sym_copy_instruction_token1] = aux_sym_copy_instruction_token1,
  [aux_sym_entrypoint_instruction_token1] = aux_sym_entrypoint_instruction_token1,
  [aux_sym_volume_instruction_token1] = aux_sym_volume_instruction_token1,
  [aux_sym_user_instruction_token1] = aux_sym_user_instruction_token1,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym__user_name_or_group_token1] = aux_sym__user_name_or_group_token1,
  [aux_sym_workdir_instruction_token1] = aux_sym_workdir_instruction_token1,
  [aux_sym_arg_instruction_token1] = aux_sym_arg_instruction_token1,
  [aux_sym_arg_instruction_token2] = sym_unquoted_string,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_onbuild_instruction_token1] = aux_sym_onbuild_instruction_token1,
  [aux_sym_stopsignal_instruction_token1] = aux_sym_stopsignal_instruction_token1,
  [aux_sym__stopsignal_value_token1] = aux_sym__stopsignal_value_token1,
  [aux_sym_healthcheck_instruction_token1] = aux_sym_healthcheck_instruction_token1,
  [anon_sym_NONE] = anon_sym_NONE,
  [aux_sym_shell_instruction_token1] = aux_sym_shell_instruction_token1,
  [aux_sym_maintainer_instruction_token1] = aux_sym_maintainer_instruction_token1,
  [aux_sym_maintainer_instruction_token2] = aux_sym_maintainer_instruction_token2,
  [aux_sym_cross_build_instruction_token1] = aux_sym_cross_build_instruction_token1,
  [aux_sym_path_token1] = aux_sym_path_token1,
  [aux_sym_path_token2] = aux_sym_path_token2,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [aux_sym_expansion_token1] = sym_variable,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_variable] = sym_variable,
  [aux_sym__spaced_env_pair_token1] = aux_sym__spaced_env_pair_token1,
  [aux_sym__env_key_token1] = sym_unquoted_string,
  [aux_sym_expose_port_token1] = aux_sym_expose_port_token1,
  [anon_sym_SLASHtcp] = anon_sym_SLASHtcp,
  [anon_sym_SLASHudp] = anon_sym_SLASHudp,
  [aux_sym_label_pair_token1] = sym_unquoted_string,
  [aux_sym_image_name_token1] = aux_sym_image_name_token1,
  [aux_sym_image_tag_value_token1] = aux_sym_image_tag_value_token1,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym_image_digest_value_token1] = aux_sym_image_digest_value_token1,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [sym_param_name] = sym_param_name,
  [sym_param_value] = sym_param_value,
  [aux_sym_image_alias_token1] = aux_sym_image_alias_token1,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_shell_fragment_token1] = aux_sym_shell_fragment_token1,
  [aux_sym_shell_fragment_token2] = aux_sym_shell_fragment_token2,
  [sym_line_continuation] = sym_line_continuation,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_double_quoted_string_token1] = aux_sym_double_quoted_string_token1,
  [aux_sym_unquoted_string_token1] = aux_sym_unquoted_string_token1,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym__non_newline_whitespace] = sym__non_newline_whitespace,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_shisho_metavariable] = sym_shisho_metavariable,
  [sym_shisho_ellipsis_metavariable] = sym_shisho_ellipsis_metavariable,
  [sym__instruction] = sym__instruction,
  [sym_from_instruction] = sym_from_instruction,
  [sym_run_instruction] = sym_run_instruction,
  [sym_cmd_instruction] = sym_cmd_instruction,
  [sym_label_instruction] = sym_label_instruction,
  [sym_expose_instruction] = sym_expose_instruction,
  [sym_env_instruction] = sym_env_instruction,
  [sym_add_instruction] = sym_add_instruction,
  [sym_copy_instruction] = sym_copy_instruction,
  [sym_entrypoint_instruction] = sym_entrypoint_instruction,
  [sym_volume_instruction] = sym_volume_instruction,
  [sym_user_instruction] = sym_user_instruction,
  [aux_sym__user_name_or_group] = aux_sym__user_name_or_group,
  [sym_workdir_instruction] = sym_workdir_instruction,
  [sym_arg_instruction] = sym_arg_instruction,
  [sym_onbuild_instruction] = sym_onbuild_instruction,
  [sym_stopsignal_instruction] = sym_stopsignal_instruction,
  [aux_sym__stopsignal_value] = aux_sym__stopsignal_value,
  [sym_healthcheck_instruction] = sym_healthcheck_instruction,
  [sym_shell_instruction] = sym_shell_instruction,
  [sym_maintainer_instruction] = sym_maintainer_instruction,
  [sym_cross_build_instruction] = sym_cross_build_instruction,
  [sym_path] = sym_path,
  [sym_expansion] = sym_expansion,
  [sym_env_pair] = sym_env_pair,
  [sym__spaced_env_pair] = sym_env_pair,
  [sym__env_key] = sym__env_key,
  [sym_expose_port] = sym_expose_port,
  [sym_label_pair] = sym_label_pair,
  [sym_image_spec] = sym_image_spec,
  [sym_image_name] = sym_image_name,
  [sym_image_tag] = sym_image_tag,
  [sym_image_tag_value] = sym_image_tag_value,
  [sym_image_digest] = sym_image_digest,
  [sym_image_digest_value] = sym_image_digest_value,
  [sym_param] = sym_param,
  [sym_image_alias] = sym_image_alias,
  [sym_string_array] = sym_string_array,
  [sym_shell_command] = sym_shell_command,
  [sym_shell_fragment] = sym_shell_fragment,
  [sym__comment_line] = sym__comment_line,
  [sym__anon_comment] = sym_comment,
  [sym_double_quoted_string] = sym_double_quoted_string,
  [sym_unquoted_string] = sym_unquoted_string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_label_instruction_repeat1] = aux_sym_label_instruction_repeat1,
  [aux_sym_expose_instruction_repeat1] = aux_sym_expose_instruction_repeat1,
  [aux_sym_env_instruction_repeat1] = aux_sym_env_instruction_repeat1,
  [aux_sym_volume_instruction_repeat1] = aux_sym_volume_instruction_repeat1,
  [aux_sym_healthcheck_instruction_repeat1] = aux_sym_healthcheck_instruction_repeat1,
  [aux_sym_path_repeat1] = aux_sym_path_repeat1,
  [aux_sym_image_name_repeat1] = aux_sym_image_name_repeat1,
  [aux_sym_image_tag_value_repeat1] = aux_sym_image_tag_value_repeat1,
  [aux_sym_image_digest_value_repeat1] = aux_sym_image_digest_value_repeat1,
  [aux_sym_image_alias_repeat1] = aux_sym_image_alias_repeat1,
  [aux_sym_string_array_repeat1] = aux_sym_string_array_repeat1,
  [aux_sym_shell_command_repeat1] = aux_sym_shell_command_repeat1,
  [aux_sym_shell_command_repeat2] = aux_sym_shell_command_repeat2,
  [aux_sym_shell_fragment_repeat1] = aux_sym_shell_fragment_repeat1,
  [aux_sym_double_quoted_string_repeat1] = aux_sym_double_quoted_string_repeat1,
  [aux_sym_unquoted_string_repeat1] = aux_sym_unquoted_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_shisho_ellipsis] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_shisho_metavariable_name] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_from_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_from_instruction_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_run_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_cmd_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_label_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_expose_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_env_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_add_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_copy_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_entrypoint_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_volume_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_user_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__user_name_or_group_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_workdir_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_arg_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_arg_instruction_token2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_onbuild_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_stopsignal_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__stopsignal_value_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_healthcheck_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NONE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_shell_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_maintainer_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_maintainer_instruction_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_cross_build_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_path_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_path_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_expansion_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__spaced_env_pair_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__env_key_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_expose_port_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASHtcp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASHudp] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_label_pair_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_image_name_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_tag_value_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_image_digest_value_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym_param_name] = {
    .visible = true,
    .named = true,
  },
  [sym_param_value] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_image_alias_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_shell_fragment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_shell_fragment_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_line_continuation] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_double_quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_unquoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym__non_newline_whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_shisho_metavariable] = {
    .visible = true,
    .named = true,
  },
  [sym_shisho_ellipsis_metavariable] = {
    .visible = true,
    .named = true,
  },
  [sym__instruction] = {
    .visible = false,
    .named = true,
  },
  [sym_from_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_run_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_cmd_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_label_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_expose_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_env_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_add_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_copy_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_entrypoint_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_volume_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_user_instruction] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__user_name_or_group] = {
    .visible = false,
    .named = false,
  },
  [sym_workdir_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_arg_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_onbuild_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_stopsignal_instruction] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__stopsignal_value] = {
    .visible = false,
    .named = false,
  },
  [sym_healthcheck_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_shell_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_maintainer_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_cross_build_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_path] = {
    .visible = true,
    .named = true,
  },
  [sym_expansion] = {
    .visible = true,
    .named = true,
  },
  [sym_env_pair] = {
    .visible = true,
    .named = true,
  },
  [sym__spaced_env_pair] = {
    .visible = true,
    .named = true,
  },
  [sym__env_key] = {
    .visible = false,
    .named = true,
  },
  [sym_expose_port] = {
    .visible = true,
    .named = true,
  },
  [sym_label_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_image_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_image_name] = {
    .visible = true,
    .named = true,
  },
  [sym_image_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_image_tag_value] = {
    .visible = true,
    .named = true,
  },
  [sym_image_digest] = {
    .visible = true,
    .named = true,
  },
  [sym_image_digest_value] = {
    .visible = true,
    .named = true,
  },
  [sym_param] = {
    .visible = true,
    .named = true,
  },
  [sym_image_alias] = {
    .visible = true,
    .named = true,
  },
  [sym_string_array] = {
    .visible = true,
    .named = true,
  },
  [sym_shell_command] = {
    .visible = true,
    .named = true,
  },
  [sym_shell_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym__comment_line] = {
    .visible = false,
    .named = true,
  },
  [sym__anon_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_double_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_unquoted_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_label_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expose_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_env_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_volume_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_healthcheck_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_path_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_name_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_tag_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_digest_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_alias_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_shell_command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_shell_command_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_shell_fragment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_double_quoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_unquoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_as = 1,
  field_default = 2,
  field_digest = 3,
  field_group = 4,
  field_key = 5,
  field_name = 6,
  field_tag = 7,
  field_user = 8,
  field_value = 9,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_as] = "as",
  [field_default] = "default",
  [field_digest] = "digest",
  [field_group] = "group",
  [field_key] = "key",
  [field_name] = "name",
  [field_tag] = "tag",
  [field_user] = "user",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 1},
  [6] = {.index = 5, .length = 2},
  [7] = {.index = 7, .length = 2},
  [8] = {.index = 9, .length = 3},
  [9] = {.index = 12, .length = 1},
  [10] = {.index = 13, .length = 2},
  [11] = {.index = 15, .length = 2},
  [12] = {.index = 17, .length = 2},
  [13] = {.index = 17, .length = 2},
  [14] = {.index = 17, .length = 2},
  [15] = {.index = 17, .length = 2},
  [16] = {.index = 19, .length = 2},
  [17] = {.index = 21, .length = 2},
  [18] = {.index = 23, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_name, 1, .inherited = true},
    {field_value, 1, .inherited = true},
  [3] =
    {field_user, 1},
  [4] =
    {field_name, 1},
  [5] =
    {field_name, 0},
    {field_tag, 1},
  [7] =
    {field_digest, 1},
    {field_name, 0},
  [9] =
    {field_digest, 2},
    {field_name, 0},
    {field_tag, 1},
  [12] =
    {field_as, 3},
  [13] =
    {field_key, 0},
    {field_value, 2},
  [15] =
    {field_name, 0},
    {field_value, 2},
  [17] =
    {field_group, 3},
    {field_user, 1},
  [19] =
    {field_default, 3},
    {field_name, 1},
  [21] =
    {field_name, 1},
    {field_value, 3},
  [23] =
    {field_as, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [4] = {
    [1] = sym_unquoted_string,
  },
  [13] = {
    [3] = sym_unquoted_string,
  },
  [14] = {
    [1] = sym_unquoted_string,
  },
  [15] = {
    [1] = sym_unquoted_string,
    [3] = sym_unquoted_string,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym__user_name_or_group, 2,
    aux_sym__user_name_or_group,
    sym_unquoted_string,
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(178);
      if (lookahead == '"') ADVANCE(273);
      if (lookahead == '#') ADVANCE(272);
      if (lookahead == '$') ADVANCE(230);
      if (lookahead == ',') ADVANCE(263);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == ':') ADVANCE(207);
      if (lookahead == '=') ADVANCE(212);
      if (lookahead == '@') ADVANCE(251);
      if (lookahead == '[') ADVANCE(262);
      if (lookahead == '\\') ADVANCE(225);
      if (lookahead == ']') ADVANCE(187);
      if (lookahead == '{') ADVANCE(231);
      if (lookahead == '}') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(175)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(192);
      if (lookahead != 0) ADVANCE(224);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(270);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == ' ') ADVANCE(284);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == 'U') ADVANCE(174);
      if (lookahead == 'u') ADVANCE(170);
      if (lookahead == 'x') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(287);
      if (lookahead != 0) ADVANCE(285);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead != 0) ADVANCE(269);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(179);
      if (lookahead == '$') ADVANCE(230);
      if (lookahead == '/') ADVANCE(77);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == '=') ADVANCE(212);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(179);
      if (lookahead == '$') ADVANCE(230);
      if (lookahead == '/') ADVANCE(77);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(179);
      if (lookahead == '$') ADVANCE(230);
      if (lookahead == ':') ADVANCE(207);
      if (lookahead == '=') ADVANCE(212);
      if (lookahead == '@') ADVANCE(251);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(152);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(179);
      if (lookahead == '$') ADVANCE(230);
      if (lookahead == ':') ADVANCE(207);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(179);
      if (lookahead == '$') ADVANCE(230);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(152);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(179);
      if (lookahead == '$') ADVANCE(230);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(215);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(179);
      if (lookahead == '$') ADVANCE(230);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(179);
      if (lookahead == '$') ADVANCE(230);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(179);
      if (lookahead == '$') ADVANCE(230);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(179);
      if (lookahead == '$') ADVANCE(230);
      if (lookahead == ':') ADVANCE(206);
      if (lookahead == '@') ADVANCE(251);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (lookahead != 0) ADVANCE(246);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(179);
      if (lookahead == '$') ADVANCE(230);
      if (lookahead == ':') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(179);
      if (lookahead == '$') ADVANCE(230);
      if (lookahead == ':') ADVANCE(279);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(283);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(179);
      if (lookahead == '$') ADVANCE(230);
      if (lookahead == ':') ADVANCE(279);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(283);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(179);
      if (lookahead == '$') ADVANCE(230);
      if (lookahead == '@') ADVANCE(251);
      if (lookahead == '\\') ADVANCE(247);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (lookahead != 0 &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(250);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(179);
      if (lookahead == '$') ADVANCE(230);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(253);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(179);
      if (lookahead == '$') ADVANCE(230);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(152);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(179);
      if (lookahead == '$') ADVANCE(230);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(179);
      if (lookahead == '$') ADVANCE(230);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(179);
      if (lookahead == '$') ADVANCE(230);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(179);
      if (lookahead == '$') ADVANCE(230);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(283);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(179);
      if (lookahead == '$') ADVANCE(230);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(246);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(179);
      if (lookahead == '$') ADVANCE(230);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (lookahead != 0) ADVANCE(229);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(179);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(179);
      if (lookahead == ':') ADVANCE(206);
      if (lookahead == '@') ADVANCE(251);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(152);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(179);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(152);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(179);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '[') ADVANCE(268);
      END_STATE();
    case 31:
      if (lookahead == '\n') SKIP(35)
      if (lookahead == '"') ADVANCE(273);
      if (lookahead == '$') ADVANCE(230);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (lookahead != 0) ADVANCE(275);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(180);
      if (lookahead == '\r') SKIP(32)
      if (lookahead == '$') ADVANCE(230);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(288);
      if (lookahead != 0) ADVANCE(229);
      END_STATE();
    case 33:
      if (lookahead == '"') ADVANCE(273);
      if (lookahead == '$') ADVANCE(230);
      if (lookahead == ':') ADVANCE(278);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (lookahead != 0) ADVANCE(283);
      END_STATE();
    case 34:
      if (lookahead == '"') ADVANCE(273);
      if (lookahead == '$') ADVANCE(230);
      if (lookahead == ':') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      END_STATE();
    case 35:
      if (lookahead == '"') ADVANCE(273);
      if (lookahead == '$') ADVANCE(230);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      END_STATE();
    case 36:
      if (lookahead == '#') ADVANCE(272);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '[') ADVANCE(262);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 37:
      if (lookahead == '$') ADVANCE(230);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == ':') ADVANCE(227);
      if (lookahead == '\\') ADVANCE(225);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (lookahead != 0) ADVANCE(224);
      END_STATE();
    case 38:
      if (lookahead == '$') ADVANCE(230);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == '\\') ADVANCE(225);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      if (lookahead != 0) ADVANCE(224);
      END_STATE();
    case 39:
      if (lookahead == '$') ADVANCE(230);
      if (lookahead == '-') ADVANCE(244);
      if (lookahead == ':') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(246);
      END_STATE();
    case 40:
      if (lookahead == '$') ADVANCE(230);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == ':') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(192);
      END_STATE();
    case 41:
      if (lookahead == '$') ADVANCE(230);
      if (lookahead == ':') ADVANCE(226);
      if (lookahead == '[') ADVANCE(262);
      if (lookahead == '\\') ADVANCE(225);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(224);
      END_STATE();
    case 42:
      if (lookahead == '$') ADVANCE(230);
      if (lookahead == ':') ADVANCE(226);
      if (lookahead == '\\') ADVANCE(225);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(42)
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(224);
      END_STATE();
    case 43:
      if (lookahead == '$') ADVANCE(230);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(43)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(215);
      END_STATE();
    case 44:
      if (lookahead == '$') ADVANCE(230);
      if (lookahead == ':') ADVANCE(252);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 45:
      if (lookahead == '$') ADVANCE(230);
      if (lookahead == ':') ADVANCE(248);
      if (lookahead == '\\') ADVANCE(247);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      if (lookahead != 0 &&
          lookahead != '@' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(250);
      END_STATE();
    case 46:
      if (lookahead == '$') ADVANCE(230);
      if (lookahead == ':') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 47:
      if (lookahead == '$') ADVANCE(230);
      if (lookahead == ':') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      END_STATE();
    case 48:
      if (lookahead == '$') ADVANCE(230);
      if (lookahead == ':') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(246);
      END_STATE();
    case 49:
      if (lookahead == '$') ADVANCE(230);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(289);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(49)
      if (lookahead != 0) ADVANCE(229);
      END_STATE();
    case 50:
      if (lookahead == '-') ADVANCE(255);
      END_STATE();
    case 51:
      if (lookahead == '.') ADVANCE(70);
      END_STATE();
    case 52:
      if (lookahead == '.') ADVANCE(191);
      END_STATE();
    case 53:
      if (lookahead == '.') ADVANCE(51);
      END_STATE();
    case 54:
      if (lookahead == '.') ADVANCE(52);
      END_STATE();
    case 55:
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(55)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 56:
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(56)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 57:
      if (lookahead == ':') ADVANCE(259);
      if (lookahead == '\\') ADVANCE(258);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(59)
      if (lookahead != 0) ADVANCE(260);
      END_STATE();
    case 58:
      if (lookahead == ':') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(88);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(125);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(127);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(150);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(97);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(78);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(79);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(129);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(161);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(105);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(153);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(134);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(58)
      END_STATE();
    case 59:
      if (lookahead == ':') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(59)
      END_STATE();
    case 60:
      if (lookahead == ':') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(59)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 61:
      if (lookahead == ':') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(61)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 62:
      if (lookahead == '=') ADVANCE(212);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(237);
      END_STATE();
    case 63:
      if (lookahead == 'E') ADVANCE(217);
      END_STATE();
    case 64:
      if (lookahead == 'N') ADVANCE(63);
      END_STATE();
    case 65:
      if (lookahead == 'O') ADVANCE(64);
      END_STATE();
    case 66:
      if (lookahead == '[') ADVANCE(182);
      END_STATE();
    case 67:
      if (lookahead == '[') ADVANCE(181);
      END_STATE();
    case 68:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '{') ADVANCE(231);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(68)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 69:
      if (lookahead == '\\') ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(234);
      END_STATE();
    case 70:
      if (lookahead == ']') ADVANCE(188);
      END_STATE();
    case 71:
      if (lookahead == '_') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 72:
      if (lookahead == '_') ADVANCE(85);
      END_STATE();
    case 73:
      if (lookahead == 'c') ADVANCE(75);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(76);
      END_STATE();
    case 75:
      if (lookahead == 'p') ADVANCE(240);
      END_STATE();
    case 76:
      if (lookahead == 'p') ADVANCE(241);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(73);
      if (lookahead == 'u') ADVANCE(74);
      END_STATE();
    case 78:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(84);
      END_STATE();
    case 79:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 80:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 81:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(119);
      END_STATE();
    case 82:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(109);
      END_STATE();
    case 83:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(162);
      END_STATE();
    case 84:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(100);
      END_STATE();
    case 85:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(164);
      END_STATE();
    case 86:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(114);
      END_STATE();
    case 87:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(106);
      END_STATE();
    case 88:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(89);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 89:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(201);
      END_STATE();
    case 90:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(197);
      END_STATE();
    case 91:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(213);
      END_STATE();
    case 92:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(223);
      END_STATE();
    case 93:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(110);
      END_STATE();
    case 94:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 95:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 96:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 97:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 98:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 99:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 100:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 101:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 102:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(210);
      END_STATE();
    case 103:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(132);
      END_STATE();
    case 104:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(87);
      END_STATE();
    case 105:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(98);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(138);
      END_STATE();
    case 106:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(96);
      END_STATE();
    case 107:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 108:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(130);
      END_STATE();
    case 109:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(133);
      END_STATE();
    case 110:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(147);
      END_STATE();
    case 111:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 112:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 113:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 114:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(216);
      END_STATE();
    case 115:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(93);
      END_STATE();
    case 116:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(157);
      END_STATE();
    case 117:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(198);
      END_STATE();
    case 118:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(218);
      END_STATE();
    case 119:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(214);
      END_STATE();
    case 120:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(163);
      END_STATE();
    case 121:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(91);
      END_STATE();
    case 122:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(92);
      END_STATE();
    case 123:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(118);
      END_STATE();
    case 124:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(193);
      END_STATE();
    case 125:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(90);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(141);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(137);
      END_STATE();
    case 126:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(95);
      END_STATE();
    case 127:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(159);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(143);
      END_STATE();
    case 128:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(196);
      END_STATE();
    case 129:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 130:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(160);
      END_STATE();
    case 131:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(158);
      END_STATE();
    case 132:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 133:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(101);
      END_STATE();
    case 134:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 135:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 136:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(145);
      END_STATE();
    case 137:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 138:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(142);
      END_STATE();
    case 139:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 140:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 141:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(165);
      END_STATE();
    case 142:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(155);
      END_STATE();
    case 143:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(139);
      END_STATE();
    case 144:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(140);
      END_STATE();
    case 145:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 146:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(205);
      END_STATE();
    case 147:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(209);
      END_STATE();
    case 148:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(219);
      END_STATE();
    case 149:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 150:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 151:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(72);
      END_STATE();
    case 152:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(194);
      END_STATE();
    case 153:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(99);
      END_STATE();
    case 154:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(151);
      END_STATE();
    case 155:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(107);
      END_STATE();
    case 156:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(94);
      END_STATE();
    case 157:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(104);
      END_STATE();
    case 158:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(203);
      END_STATE();
    case 159:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(149);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(200);
      END_STATE();
    case 160:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(82);
      END_STATE();
    case 161:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(128);
      END_STATE();
    case 162:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(112);
      END_STATE();
    case 163:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(126);
      END_STATE();
    case 164:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(113);
      END_STATE();
    case 165:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(202);
      END_STATE();
    case 166:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(144);
      END_STATE();
    case 167:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(285);
      END_STATE();
    case 168:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(167);
      END_STATE();
    case 169:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(168);
      END_STATE();
    case 170:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(169);
      END_STATE();
    case 171:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(170);
      END_STATE();
    case 172:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(171);
      END_STATE();
    case 173:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      END_STATE();
    case 174:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(173);
      END_STATE();
    case 175:
      if (eof) ADVANCE(178);
      if (lookahead == '"') ADVANCE(273);
      if (lookahead == '#') ADVANCE(272);
      if (lookahead == '$') ADVANCE(230);
      if (lookahead == ',') ADVANCE(263);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == ':') ADVANCE(226);
      if (lookahead == '[') ADVANCE(262);
      if (lookahead == '\\') ADVANCE(225);
      if (lookahead == ']') ADVANCE(187);
      if (lookahead == '{') ADVANCE(231);
      if (lookahead == '}') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(175)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(192);
      if (lookahead != 0) ADVANCE(224);
      END_STATE();
    case 176:
      if (eof) ADVANCE(178);
      if (lookahead == '"') ADVANCE(273);
      if (lookahead == '#') ADVANCE(290);
      if (lookahead == '$') ADVANCE(230);
      if (lookahead == ',') ADVANCE(263);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == '=') ADVANCE(212);
      if (lookahead == 'N') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(187);
      if (lookahead == '}') ADVANCE(235);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(88);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(125);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(127);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(150);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(97);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(78);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(79);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(129);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(161);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(105);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(153);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(134);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(177)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      END_STATE();
    case 177:
      if (eof) ADVANCE(178);
      if (lookahead == '"') ADVANCE(273);
      if (lookahead == '#') ADVANCE(290);
      if (lookahead == '$') ADVANCE(230);
      if (lookahead == ',') ADVANCE(263);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == 'N') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(187);
      if (lookahead == '}') ADVANCE(235);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(88);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(125);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(127);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(150);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(97);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(78);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(79);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(129);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(161);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(105);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(153);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(134);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(177)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(180);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(288);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_COLON_LBRACK);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_COLON_LBRACK);
      if (lookahead == '.') ADVANCE(53);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_COLON_LBRACK);
      if (lookahead == '.') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(268);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_COLON_LBRACK);
      if (lookahead == '.') ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(283);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_COLON_LBRACK);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(283);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_COLON_LBRACK);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(260);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_shisho_ellipsis);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_shisho_ellipsis);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(283);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_shisho_ellipsis);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(268);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_shisho_metavariable_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_from_instruction_token1);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_from_instruction_token2);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_from_instruction_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(246);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_run_instruction_token1);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_cmd_instruction_token1);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_label_instruction_token1);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_expose_instruction_token1);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_env_instruction_token1);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_add_instruction_token1);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_copy_instruction_token1);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_entrypoint_instruction_token1);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_volume_instruction_token1);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_user_instruction_token1);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '[') ADVANCE(182);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym__user_name_or_group_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_workdir_instruction_token1);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_arg_instruction_token1);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_arg_instruction_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_onbuild_instruction_token1);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token1);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym__stopsignal_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(215);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_healthcheck_instruction_token1);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_NONE);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_shell_instruction_token1);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token1);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead != 0) ADVANCE(222);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead == '\\') ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(222);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(222);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_cross_build_instruction_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_path_token1);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '\n') ADVANCE(270);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '[') ADVANCE(182);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '[') ADVANCE(181);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(229);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(229);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == '\n') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(234);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == '\\') ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(234);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(234);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym__spaced_env_pair_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym__env_key_token1);
      if (lookahead == '_') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_expose_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_SLASHtcp);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_SLASHudp);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_label_pair_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(246);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead == '-') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(246);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(246);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(246);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_image_tag_value_token1);
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(250);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_image_tag_value_token1);
      if (lookahead == '[') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@' &&
          lookahead != ']') ADVANCE(250);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_image_tag_value_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(250);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_image_tag_value_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(250);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_image_digest_value_token1);
      if (lookahead == '[') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_image_digest_value_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_image_digest_value_token1);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(246);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_param_name);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_param_value);
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(260);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_param_value);
      if (lookahead == '[') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(260);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_param_value);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(260);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_image_alias_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead == '.') ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(268);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead == '.') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(268);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead == '[') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(268);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead == ']') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(268);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(268);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token2);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_line_continuation);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_line_continuation);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(234);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(275);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(275);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '.') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(283);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '.') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(283);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '[') ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(283);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '[') ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(283);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == ']') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(283);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '_') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(283);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(283);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(283);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(285);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(286);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym__non_newline_whitespace);
      if (lookahead == '\n') ADVANCE(180);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(288);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym__non_newline_whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(289);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(290);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 176},
  [2] = {.lex_state = 176},
  [3] = {.lex_state = 176},
  [4] = {.lex_state = 58},
  [5] = {.lex_state = 176},
  [6] = {.lex_state = 36},
  [7] = {.lex_state = 36},
  [8] = {.lex_state = 36},
  [9] = {.lex_state = 36},
  [10] = {.lex_state = 36},
  [11] = {.lex_state = 33},
  [12] = {.lex_state = 33},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 176},
  [15] = {.lex_state = 33},
  [16] = {.lex_state = 33},
  [17] = {.lex_state = 39},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 41},
  [21] = {.lex_state = 10},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 16},
  [24] = {.lex_state = 55},
  [25] = {.lex_state = 16},
  [26] = {.lex_state = 10},
  [27] = {.lex_state = 176},
  [28] = {.lex_state = 17},
  [29] = {.lex_state = 176},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 17},
  [32] = {.lex_state = 14},
  [33] = {.lex_state = 14},
  [34] = {.lex_state = 48},
  [35] = {.lex_state = 36},
  [36] = {.lex_state = 37},
  [37] = {.lex_state = 176},
  [38] = {.lex_state = 27},
  [39] = {.lex_state = 27},
  [40] = {.lex_state = 43},
  [41] = {.lex_state = 18},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 176},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 56},
  [46] = {.lex_state = 8},
  [47] = {.lex_state = 42},
  [48] = {.lex_state = 16},
  [49] = {.lex_state = 16},
  [50] = {.lex_state = 46},
  [51] = {.lex_state = 17},
  [52] = {.lex_state = 44},
  [53] = {.lex_state = 45},
  [54] = {.lex_state = 176},
  [55] = {.lex_state = 17},
  [56] = {.lex_state = 18},
  [57] = {.lex_state = 46},
  [58] = {.lex_state = 24},
  [59] = {.lex_state = 14},
  [60] = {.lex_state = 15},
  [61] = {.lex_state = 176},
  [62] = {.lex_state = 31},
  [63] = {.lex_state = 24},
  [64] = {.lex_state = 31},
  [65] = {.lex_state = 31},
  [66] = {.lex_state = 28},
  [67] = {.lex_state = 14},
  [68] = {.lex_state = 37},
  [69] = {.lex_state = 15},
  [70] = {.lex_state = 40},
  [71] = {.lex_state = 31},
  [72] = {.lex_state = 5},
  [73] = {.lex_state = 19},
  [74] = {.lex_state = 40},
  [75] = {.lex_state = 32},
  [76] = {.lex_state = 32},
  [77] = {.lex_state = 31},
  [78] = {.lex_state = 176},
  [79] = {.lex_state = 37},
  [80] = {.lex_state = 38},
  [81] = {.lex_state = 37},
  [82] = {.lex_state = 31},
  [83] = {.lex_state = 19},
  [84] = {.lex_state = 32},
  [85] = {.lex_state = 31},
  [86] = {.lex_state = 40},
  [87] = {.lex_state = 26},
  [88] = {.lex_state = 23},
  [89] = {.lex_state = 5},
  [90] = {.lex_state = 5},
  [91] = {.lex_state = 18},
  [92] = {.lex_state = 10},
  [93] = {.lex_state = 10},
  [94] = {.lex_state = 23},
  [95] = {.lex_state = 49},
  [96] = {.lex_state = 49},
  [97] = {.lex_state = 18},
  [98] = {.lex_state = 10},
  [99] = {.lex_state = 10},
  [100] = {.lex_state = 10},
  [101] = {.lex_state = 26},
  [102] = {.lex_state = 36},
  [103] = {.lex_state = 49},
  [104] = {.lex_state = 26},
  [105] = {.lex_state = 10},
  [106] = {.lex_state = 7},
  [107] = {.lex_state = 5},
  [108] = {.lex_state = 24},
  [109] = {.lex_state = 24},
  [110] = {.lex_state = 27},
  [111] = {.lex_state = 31},
  [112] = {.lex_state = 38},
  [113] = {.lex_state = 31},
  [114] = {.lex_state = 32},
  [115] = {.lex_state = 27},
  [116] = {.lex_state = 27},
  [117] = {.lex_state = 30},
  [118] = {.lex_state = 38},
  [119] = {.lex_state = 19},
  [120] = {.lex_state = 19},
  [121] = {.lex_state = 30},
  [122] = {.lex_state = 27},
  [123] = {.lex_state = 38},
  [124] = {.lex_state = 27},
  [125] = {.lex_state = 32},
  [126] = {.lex_state = 5},
  [127] = {.lex_state = 176},
  [128] = {.lex_state = 15},
  [129] = {.lex_state = 38},
  [130] = {.lex_state = 5},
  [131] = {.lex_state = 5},
  [132] = {.lex_state = 57},
  [133] = {.lex_state = 32},
  [134] = {.lex_state = 60},
  [135] = {.lex_state = 60},
  [136] = {.lex_state = 60},
  [137] = {.lex_state = 176},
  [138] = {.lex_state = 48},
  [139] = {.lex_state = 26},
  [140] = {.lex_state = 26},
  [141] = {.lex_state = 32},
  [142] = {.lex_state = 60},
  [143] = {.lex_state = 49},
  [144] = {.lex_state = 37},
  [145] = {.lex_state = 23},
  [146] = {.lex_state = 23},
  [147] = {.lex_state = 49},
  [148] = {.lex_state = 48},
  [149] = {.lex_state = 37},
  [150] = {.lex_state = 176},
  [151] = {.lex_state = 61},
  [152] = {.lex_state = 57},
  [153] = {.lex_state = 57},
  [154] = {.lex_state = 176},
  [155] = {.lex_state = 32},
  [156] = {.lex_state = 7},
  [157] = {.lex_state = 57},
  [158] = {.lex_state = 68},
  [159] = {.lex_state = 40},
  [160] = {.lex_state = 68},
  [161] = {.lex_state = 176},
  [162] = {.lex_state = 68},
  [163] = {.lex_state = 176},
  [164] = {.lex_state = 68},
  [165] = {.lex_state = 68},
  [166] = {.lex_state = 68},
  [167] = {.lex_state = 68},
  [168] = {.lex_state = 40},
  [169] = {.lex_state = 68},
  [170] = {.lex_state = 68},
  [171] = {.lex_state = 68},
  [172] = {.lex_state = 7},
  [173] = {.lex_state = 68},
  [174] = {.lex_state = 40},
  [175] = {.lex_state = 5},
  [176] = {.lex_state = 7},
  [177] = {.lex_state = 7},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 7},
  [180] = {.lex_state = 68},
  [181] = {.lex_state = 32},
  [182] = {.lex_state = 5},
  [183] = {.lex_state = 40},
  [184] = {.lex_state = 40},
  [185] = {.lex_state = 40},
  [186] = {.lex_state = 38},
  [187] = {.lex_state = 40},
  [188] = {.lex_state = 68},
  [189] = {.lex_state = 62},
  [190] = {.lex_state = 38},
  [191] = {.lex_state = 5},
  [192] = {.lex_state = 5},
  [193] = {.lex_state = 14},
  [194] = {.lex_state = 62},
  [195] = {.lex_state = 40},
  [196] = {.lex_state = 7},
  [197] = {.lex_state = 32},
  [198] = {.lex_state = 176},
  [199] = {.lex_state = 40},
  [200] = {.lex_state = 176},
  [201] = {.lex_state = 5},
  [202] = {.lex_state = 5},
  [203] = {.lex_state = 5},
  [204] = {.lex_state = 5},
  [205] = {.lex_state = 5},
  [206] = {.lex_state = 5},
  [207] = {.lex_state = 49},
  [208] = {.lex_state = 5},
  [209] = {.lex_state = 176},
  [210] = {.lex_state = 5},
  [211] = {.lex_state = 49},
  [212] = {.lex_state = 49},
  [213] = {.lex_state = 5},
  [214] = {.lex_state = 176},
  [215] = {.lex_state = 5},
  [216] = {.lex_state = 5},
  [217] = {.lex_state = 5},
  [218] = {.lex_state = 176},
  [219] = {.lex_state = 40},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 176},
  [222] = {.lex_state = 40},
  [223] = {.lex_state = 5},
  [224] = {.lex_state = 176},
  [225] = {.lex_state = 221},
  [226] = {.lex_state = 176},
  [227] = {.lex_state = 221},
  [228] = {.lex_state = 69},
  [229] = {.lex_state = 176},
  [230] = {.lex_state = 176},
  [231] = {.lex_state = 176},
  [232] = {.lex_state = 5},
  [233] = {.lex_state = 176},
  [234] = {.lex_state = 176},
  [235] = {.lex_state = 5},
  [236] = {.lex_state = 176},
  [237] = {.lex_state = 49},
  [238] = {.lex_state = 176},
  [239] = {.lex_state = 176},
  [240] = {.lex_state = 5},
  [241] = {.lex_state = 176},
  [242] = {.lex_state = 49},
  [243] = {.lex_state = 176},
  [244] = {.lex_state = 176},
  [245] = {.lex_state = 176},
  [246] = {.lex_state = 5},
  [247] = {.lex_state = 176},
  [248] = {.lex_state = 176},
  [249] = {.lex_state = 176},
  [250] = {.lex_state = 5},
  [251] = {.lex_state = 176},
  [252] = {.lex_state = 176},
  [253] = {.lex_state = 5},
  [254] = {.lex_state = 176},
  [255] = {.lex_state = 176},
  [256] = {.lex_state = 5},
  [257] = {.lex_state = 176},
  [258] = {.lex_state = 176},
  [259] = {.lex_state = 176},
  [260] = {.lex_state = 176},
  [261] = {.lex_state = 176},
  [262] = {.lex_state = 5},
  [263] = {.lex_state = 176},
  [264] = {.lex_state = 5},
  [265] = {.lex_state = 176},
  [266] = {.lex_state = 5},
  [267] = {.lex_state = 176},
  [268] = {.lex_state = 5},
  [269] = {.lex_state = 40},
  [270] = {.lex_state = 69},
  [271] = {.lex_state = 176},
  [272] = {.lex_state = 40},
  [273] = {.lex_state = 5},
  [274] = {.lex_state = 40},
  [275] = {.lex_state = 69},
  [276] = {.lex_state = 176},
  [277] = {.lex_state = 40},
  [278] = {.lex_state = 5},
  [279] = {.lex_state = 40},
  [280] = {.lex_state = 69},
  [281] = {.lex_state = 176},
  [282] = {.lex_state = 40},
  [283] = {.lex_state = 5},
  [284] = {.lex_state = 40},
  [285] = {.lex_state = 69},
  [286] = {.lex_state = 40},
  [287] = {.lex_state = 5},
  [288] = {.lex_state = 40},
  [289] = {.lex_state = 69},
  [290] = {.lex_state = 40},
  [291] = {.lex_state = 5},
  [292] = {.lex_state = 69},
  [293] = {.lex_state = 40},
  [294] = {.lex_state = 69},
  [295] = {.lex_state = 69},
  [296] = {.lex_state = 69},
  [297] = {.lex_state = 69},
  [298] = {.lex_state = 69},
  [299] = {.lex_state = 69},
  [300] = {.lex_state = 5},
  [301] = {.lex_state = 5},
  [302] = {.lex_state = 5},
  [303] = {.lex_state = 221},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_shisho_ellipsis] = ACTIONS(1),
    [sym_shisho_metavariable_name] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_path_token1] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [sym_param_name] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_line_continuation] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(220),
    [sym_shisho_metavariable] = STATE(235),
    [sym_shisho_ellipsis_metavariable] = STATE(235),
    [sym__instruction] = STATE(235),
    [sym_from_instruction] = STATE(235),
    [sym_run_instruction] = STATE(235),
    [sym_cmd_instruction] = STATE(235),
    [sym_label_instruction] = STATE(235),
    [sym_expose_instruction] = STATE(235),
    [sym_env_instruction] = STATE(235),
    [sym_add_instruction] = STATE(235),
    [sym_copy_instruction] = STATE(235),
    [sym_entrypoint_instruction] = STATE(235),
    [sym_volume_instruction] = STATE(235),
    [sym_user_instruction] = STATE(235),
    [sym_workdir_instruction] = STATE(235),
    [sym_arg_instruction] = STATE(235),
    [sym_onbuild_instruction] = STATE(235),
    [sym_stopsignal_instruction] = STATE(235),
    [sym_healthcheck_instruction] = STATE(235),
    [sym_shell_instruction] = STATE(235),
    [sym_maintainer_instruction] = STATE(235),
    [sym_cross_build_instruction] = STATE(235),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_COLON_LBRACK] = ACTIONS(7),
    [sym_shisho_ellipsis] = ACTIONS(9),
    [aux_sym_from_instruction_token1] = ACTIONS(11),
    [aux_sym_run_instruction_token1] = ACTIONS(13),
    [aux_sym_cmd_instruction_token1] = ACTIONS(15),
    [aux_sym_label_instruction_token1] = ACTIONS(17),
    [aux_sym_expose_instruction_token1] = ACTIONS(19),
    [aux_sym_env_instruction_token1] = ACTIONS(21),
    [aux_sym_add_instruction_token1] = ACTIONS(23),
    [aux_sym_copy_instruction_token1] = ACTIONS(25),
    [aux_sym_entrypoint_instruction_token1] = ACTIONS(27),
    [aux_sym_volume_instruction_token1] = ACTIONS(29),
    [aux_sym_user_instruction_token1] = ACTIONS(31),
    [aux_sym_workdir_instruction_token1] = ACTIONS(33),
    [aux_sym_arg_instruction_token1] = ACTIONS(35),
    [aux_sym_onbuild_instruction_token1] = ACTIONS(37),
    [aux_sym_stopsignal_instruction_token1] = ACTIONS(39),
    [aux_sym_healthcheck_instruction_token1] = ACTIONS(41),
    [aux_sym_shell_instruction_token1] = ACTIONS(43),
    [aux_sym_maintainer_instruction_token1] = ACTIONS(45),
    [aux_sym_cross_build_instruction_token1] = ACTIONS(47),
    [sym_line_continuation] = ACTIONS(3),
    [sym_comment] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 25,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(57), 1,
      aux_sym_from_instruction_token1,
    ACTIONS(60), 1,
      aux_sym_run_instruction_token1,
    ACTIONS(63), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(66), 1,
      aux_sym_label_instruction_token1,
    ACTIONS(69), 1,
      aux_sym_expose_instruction_token1,
    ACTIONS(72), 1,
      aux_sym_env_instruction_token1,
    ACTIONS(75), 1,
      aux_sym_add_instruction_token1,
    ACTIONS(78), 1,
      aux_sym_copy_instruction_token1,
    ACTIONS(81), 1,
      aux_sym_entrypoint_instruction_token1,
    ACTIONS(84), 1,
      aux_sym_volume_instruction_token1,
    ACTIONS(87), 1,
      aux_sym_user_instruction_token1,
    ACTIONS(90), 1,
      aux_sym_workdir_instruction_token1,
    ACTIONS(93), 1,
      aux_sym_arg_instruction_token1,
    ACTIONS(96), 1,
      aux_sym_onbuild_instruction_token1,
    ACTIONS(99), 1,
      aux_sym_stopsignal_instruction_token1,
    ACTIONS(102), 1,
      aux_sym_healthcheck_instruction_token1,
    ACTIONS(105), 1,
      aux_sym_shell_instruction_token1,
    ACTIONS(108), 1,
      aux_sym_maintainer_instruction_token1,
    ACTIONS(111), 1,
      aux_sym_cross_build_instruction_token1,
    STATE(2), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(54), 2,
      sym_shisho_ellipsis,
      sym_comment,
    STATE(235), 22,
      sym_shisho_metavariable,
      sym_shisho_ellipsis_metavariable,
      sym__instruction,
      sym_from_instruction,
      sym_run_instruction,
      sym_cmd_instruction,
      sym_label_instruction,
      sym_expose_instruction,
      sym_env_instruction,
      sym_add_instruction,
      sym_copy_instruction,
      sym_entrypoint_instruction,
      sym_volume_instruction,
      sym_user_instruction,
      sym_workdir_instruction,
      sym_arg_instruction,
      sym_onbuild_instruction,
      sym_stopsignal_instruction,
      sym_healthcheck_instruction,
      sym_shell_instruction,
      sym_maintainer_instruction,
      sym_cross_build_instruction,
  [98] = 25,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(7), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(11), 1,
      aux_sym_from_instruction_token1,
    ACTIONS(13), 1,
      aux_sym_run_instruction_token1,
    ACTIONS(15), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(17), 1,
      aux_sym_label_instruction_token1,
    ACTIONS(19), 1,
      aux_sym_expose_instruction_token1,
    ACTIONS(21), 1,
      aux_sym_env_instruction_token1,
    ACTIONS(23), 1,
      aux_sym_add_instruction_token1,
    ACTIONS(25), 1,
      aux_sym_copy_instruction_token1,
    ACTIONS(27), 1,
      aux_sym_entrypoint_instruction_token1,
    ACTIONS(29), 1,
      aux_sym_volume_instruction_token1,
    ACTIONS(31), 1,
      aux_sym_user_instruction_token1,
    ACTIONS(33), 1,
      aux_sym_workdir_instruction_token1,
    ACTIONS(35), 1,
      aux_sym_arg_instruction_token1,
    ACTIONS(37), 1,
      aux_sym_onbuild_instruction_token1,
    ACTIONS(39), 1,
      aux_sym_stopsignal_instruction_token1,
    ACTIONS(41), 1,
      aux_sym_healthcheck_instruction_token1,
    ACTIONS(43), 1,
      aux_sym_shell_instruction_token1,
    ACTIONS(45), 1,
      aux_sym_maintainer_instruction_token1,
    ACTIONS(47), 1,
      aux_sym_cross_build_instruction_token1,
    ACTIONS(114), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(9), 2,
      sym_shisho_ellipsis,
      sym_comment,
    STATE(235), 22,
      sym_shisho_metavariable,
      sym_shisho_ellipsis_metavariable,
      sym__instruction,
      sym_from_instruction,
      sym_run_instruction,
      sym_cmd_instruction,
      sym_label_instruction,
      sym_expose_instruction,
      sym_env_instruction,
      sym_add_instruction,
      sym_copy_instruction,
      sym_entrypoint_instruction,
      sym_volume_instruction,
      sym_user_instruction,
      sym_workdir_instruction,
      sym_arg_instruction,
      sym_onbuild_instruction,
      sym_stopsignal_instruction,
      sym_healthcheck_instruction,
      sym_shell_instruction,
      sym_maintainer_instruction,
      sym_cross_build_instruction,
  [196] = 22,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(11), 1,
      aux_sym_from_instruction_token1,
    ACTIONS(13), 1,
      aux_sym_run_instruction_token1,
    ACTIONS(15), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(17), 1,
      aux_sym_label_instruction_token1,
    ACTIONS(19), 1,
      aux_sym_expose_instruction_token1,
    ACTIONS(21), 1,
      aux_sym_env_instruction_token1,
    ACTIONS(23), 1,
      aux_sym_add_instruction_token1,
    ACTIONS(25), 1,
      aux_sym_copy_instruction_token1,
    ACTIONS(27), 1,
      aux_sym_entrypoint_instruction_token1,
    ACTIONS(29), 1,
      aux_sym_volume_instruction_token1,
    ACTIONS(31), 1,
      aux_sym_user_instruction_token1,
    ACTIONS(33), 1,
      aux_sym_workdir_instruction_token1,
    ACTIONS(35), 1,
      aux_sym_arg_instruction_token1,
    ACTIONS(37), 1,
      aux_sym_onbuild_instruction_token1,
    ACTIONS(39), 1,
      aux_sym_stopsignal_instruction_token1,
    ACTIONS(41), 1,
      aux_sym_healthcheck_instruction_token1,
    ACTIONS(43), 1,
      aux_sym_shell_instruction_token1,
    ACTIONS(45), 1,
      aux_sym_maintainer_instruction_token1,
    ACTIONS(47), 1,
      aux_sym_cross_build_instruction_token1,
    ACTIONS(116), 1,
      anon_sym_COLON_LBRACK,
    STATE(205), 21,
      sym_shisho_metavariable,
      sym__instruction,
      sym_from_instruction,
      sym_run_instruction,
      sym_cmd_instruction,
      sym_label_instruction,
      sym_expose_instruction,
      sym_env_instruction,
      sym_add_instruction,
      sym_copy_instruction,
      sym_entrypoint_instruction,
      sym_volume_instruction,
      sym_user_instruction,
      sym_workdir_instruction,
      sym_arg_instruction,
      sym_onbuild_instruction,
      sym_stopsignal_instruction,
      sym_healthcheck_instruction,
      sym_shell_instruction,
      sym_maintainer_instruction,
      sym_cross_build_instruction,
  [283] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(118), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(49), 22,
      ts_builtin_sym_end,
      sym_shisho_ellipsis,
      aux_sym_from_instruction_token1,
      aux_sym_run_instruction_token1,
      aux_sym_cmd_instruction_token1,
      aux_sym_label_instruction_token1,
      aux_sym_expose_instruction_token1,
      aux_sym_env_instruction_token1,
      aux_sym_add_instruction_token1,
      aux_sym_copy_instruction_token1,
      aux_sym_entrypoint_instruction_token1,
      aux_sym_volume_instruction_token1,
      aux_sym_user_instruction_token1,
      aux_sym_workdir_instruction_token1,
      aux_sym_arg_instruction_token1,
      aux_sym_onbuild_instruction_token1,
      aux_sym_stopsignal_instruction_token1,
      aux_sym_healthcheck_instruction_token1,
      aux_sym_shell_instruction_token1,
      aux_sym_maintainer_instruction_token1,
      aux_sym_cross_build_instruction_token1,
      sym_comment,
  [314] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(120), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(122), 1,
      sym_shisho_ellipsis,
    ACTIONS(124), 1,
      aux_sym_shell_fragment_token1,
    ACTIONS(126), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(128), 1,
      anon_sym_POUND,
    STATE(117), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(291), 1,
      sym__anon_comment,
    STATE(7), 2,
      sym__comment_line,
      aux_sym_shell_command_repeat1,
    STATE(283), 3,
      sym_shisho_metavariable,
      sym_shisho_ellipsis_metavariable,
      sym_shell_fragment,
  [348] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(120), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(124), 1,
      aux_sym_shell_fragment_token1,
    ACTIONS(126), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(128), 1,
      anon_sym_POUND,
    ACTIONS(130), 1,
      sym_shisho_ellipsis,
    STATE(117), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(291), 1,
      sym__anon_comment,
    STATE(35), 2,
      sym__comment_line,
      aux_sym_shell_command_repeat1,
    STATE(264), 3,
      sym_shisho_metavariable,
      sym_shisho_ellipsis_metavariable,
      sym_shell_fragment,
  [382] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(120), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(124), 1,
      aux_sym_shell_fragment_token1,
    ACTIONS(126), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(132), 1,
      sym_shisho_ellipsis,
    ACTIONS(134), 1,
      anon_sym_LBRACK,
    STATE(117), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(216), 2,
      sym_string_array,
      sym_shell_command,
    STATE(192), 3,
      sym_shisho_metavariable,
      sym_shisho_ellipsis_metavariable,
      sym_shell_fragment,
  [413] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(120), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(124), 1,
      aux_sym_shell_fragment_token1,
    ACTIONS(126), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(132), 1,
      sym_shisho_ellipsis,
    ACTIONS(134), 1,
      anon_sym_LBRACK,
    STATE(117), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(215), 2,
      sym_string_array,
      sym_shell_command,
    STATE(192), 3,
      sym_shisho_metavariable,
      sym_shisho_ellipsis_metavariable,
      sym_shell_fragment,
  [444] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(120), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(124), 1,
      aux_sym_shell_fragment_token1,
    ACTIONS(126), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(132), 1,
      sym_shisho_ellipsis,
    ACTIONS(134), 1,
      anon_sym_LBRACK,
    STATE(117), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(210), 2,
      sym_string_array,
      sym_shell_command,
    STATE(192), 3,
      sym_shisho_metavariable,
      sym_shisho_ellipsis_metavariable,
      sym_shell_fragment,
  [475] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(136), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(138), 1,
      anon_sym_DOLLAR,
    ACTIONS(140), 1,
      anon_sym_DQUOTE,
    ACTIONS(142), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(144), 1,
      anon_sym_BSLASH,
    STATE(58), 2,
      sym_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(278), 3,
      sym_shisho_metavariable,
      sym_double_quoted_string,
      sym_unquoted_string,
  [503] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(140), 1,
      anon_sym_DQUOTE,
    ACTIONS(146), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(148), 1,
      anon_sym_DOLLAR,
    ACTIONS(150), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(152), 1,
      anon_sym_BSLASH,
    STATE(23), 2,
      sym_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(124), 3,
      sym_shisho_metavariable,
      sym_double_quoted_string,
      sym_unquoted_string,
  [531] = 8,
    ACTIONS(154), 1,
      anon_sym_LF,
    ACTIONS(156), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(159), 1,
      sym_shisho_ellipsis,
    ACTIONS(162), 1,
      anon_sym_DOLLAR,
    ACTIONS(165), 1,
      aux_sym_expose_port_token1,
    ACTIONS(168), 1,
      sym_line_continuation,
    STATE(89), 1,
      sym_shisho_metavariable,
    STATE(13), 4,
      sym_shisho_ellipsis_metavariable,
      sym_expansion,
      sym_expose_port,
      aux_sym_expose_instruction_repeat1,
  [559] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(15), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(170), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(172), 1,
      sym_shisho_ellipsis,
    ACTIONS(174), 1,
      anon_sym_NONE,
    ACTIONS(176), 1,
      anon_sym_DASH_DASH,
    STATE(204), 1,
      sym_cmd_instruction,
    STATE(29), 4,
      sym_shisho_metavariable,
      sym_shisho_ellipsis_metavariable,
      sym_param,
      aux_sym_healthcheck_instruction_repeat1,
  [587] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(178), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(180), 1,
      anon_sym_DOLLAR,
    ACTIONS(182), 1,
      anon_sym_DQUOTE,
    ACTIONS(184), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(186), 1,
      anon_sym_BSLASH,
    STATE(31), 2,
      sym_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(126), 3,
      sym_shisho_metavariable,
      sym_double_quoted_string,
      sym_unquoted_string,
  [615] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(136), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(138), 1,
      anon_sym_DOLLAR,
    ACTIONS(140), 1,
      anon_sym_DQUOTE,
    ACTIONS(142), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(144), 1,
      anon_sym_BSLASH,
    STATE(58), 2,
      sym_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(223), 3,
      sym_shisho_metavariable,
      sym_double_quoted_string,
      sym_unquoted_string,
  [643] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(116), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(188), 1,
      anon_sym_DOLLAR,
    ACTIONS(190), 1,
      aux_sym_image_name_token1,
    ACTIONS(192), 1,
      anon_sym_DASH_DASH,
    STATE(34), 1,
      sym_param,
    STATE(196), 1,
      sym_image_spec,
    STATE(33), 2,
      sym_expansion,
      aux_sym_image_name_repeat1,
    STATE(66), 2,
      sym_shisho_metavariable,
      sym_image_name,
  [673] = 8,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(194), 1,
      anon_sym_LF,
    ACTIONS(196), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(198), 1,
      sym_shisho_ellipsis,
    ACTIONS(200), 1,
      anon_sym_DOLLAR,
    ACTIONS(202), 1,
      aux_sym_expose_port_token1,
    STATE(89), 1,
      sym_shisho_metavariable,
    STATE(13), 4,
      sym_shisho_ellipsis_metavariable,
      sym_expansion,
      sym_expose_port,
      aux_sym_expose_instruction_repeat1,
  [701] = 7,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(204), 1,
      anon_sym_LF,
    ACTIONS(206), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(209), 1,
      sym_shisho_ellipsis,
    ACTIONS(212), 1,
      aux_sym__env_key_token1,
    STATE(234), 2,
      sym_shisho_metavariable,
      sym__env_key,
    STATE(19), 3,
      sym_shisho_ellipsis_metavariable,
      sym_env_pair,
      aux_sym_env_instruction_repeat1,
  [726] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(134), 1,
      anon_sym_LBRACK,
    ACTIONS(215), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(217), 1,
      sym_shisho_ellipsis,
    ACTIONS(219), 1,
      aux_sym_path_token1,
    ACTIONS(221), 1,
      anon_sym_DOLLAR,
    STATE(75), 1,
      sym_expansion,
    STATE(208), 1,
      sym_string_array,
    STATE(155), 2,
      sym_shisho_ellipsis_metavariable,
      sym_path,
  [755] = 6,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(223), 1,
      anon_sym_LF,
    ACTIONS(225), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(229), 1,
      anon_sym_DOLLAR,
    ACTIONS(227), 2,
      sym_shisho_ellipsis,
      aux_sym__stopsignal_value_token1,
    STATE(26), 4,
      sym_shisho_metavariable,
      sym_shisho_ellipsis_metavariable,
      aux_sym__stopsignal_value,
      sym_expansion,
  [778] = 3,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(231), 3,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_AT,
    ACTIONS(233), 6,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      aux_sym_from_instruction_token2,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [795] = 7,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(235), 1,
      anon_sym_LF,
    ACTIONS(239), 1,
      anon_sym_DOLLAR,
    ACTIONS(241), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(243), 1,
      anon_sym_BSLASH,
    STATE(25), 2,
      sym_expansion,
      aux_sym_unquoted_string_repeat1,
    ACTIONS(237), 3,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      aux_sym_label_pair_token1,
  [820] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(245), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(247), 1,
      sym_shisho_ellipsis,
    ACTIONS(249), 1,
      aux_sym__env_key_token1,
    STATE(213), 1,
      sym__spaced_env_pair,
    STATE(194), 2,
      sym_shisho_metavariable,
      sym__env_key,
    STATE(30), 3,
      sym_shisho_ellipsis_metavariable,
      sym_env_pair,
      aux_sym_env_instruction_repeat1,
  [845] = 7,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(251), 1,
      anon_sym_LF,
    ACTIONS(255), 1,
      anon_sym_DOLLAR,
    ACTIONS(258), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(261), 1,
      anon_sym_BSLASH,
    STATE(25), 2,
      sym_expansion,
      aux_sym_unquoted_string_repeat1,
    ACTIONS(253), 3,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      aux_sym_label_pair_token1,
  [870] = 6,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(264), 1,
      anon_sym_LF,
    ACTIONS(266), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(272), 1,
      anon_sym_DOLLAR,
    ACTIONS(269), 2,
      sym_shisho_ellipsis,
      aux_sym__stopsignal_value_token1,
    STATE(26), 4,
      sym_shisho_metavariable,
      sym_shisho_ellipsis_metavariable,
      aux_sym__stopsignal_value,
      sym_expansion,
  [893] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(196), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(275), 1,
      sym_shisho_ellipsis,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(279), 1,
      aux_sym_expose_port_token1,
    STATE(89), 1,
      sym_shisho_metavariable,
    STATE(18), 4,
      sym_shisho_ellipsis_metavariable,
      sym_expansion,
      sym_expose_port,
      aux_sym_expose_instruction_repeat1,
  [918] = 7,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(251), 1,
      anon_sym_LF,
    ACTIONS(281), 1,
      anon_sym_DOLLAR,
    ACTIONS(284), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(287), 1,
      anon_sym_BSLASH,
    STATE(28), 2,
      sym_expansion,
      aux_sym_unquoted_string_repeat1,
    ACTIONS(253), 3,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      aux_sym__env_key_token1,
  [943] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(15), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(170), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(176), 1,
      anon_sym_DASH_DASH,
    ACTIONS(290), 1,
      sym_shisho_ellipsis,
    STATE(250), 1,
      sym_cmd_instruction,
    STATE(37), 4,
      sym_shisho_metavariable,
      sym_shisho_ellipsis_metavariable,
      sym_param,
      aux_sym_healthcheck_instruction_repeat1,
  [968] = 7,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(292), 1,
      anon_sym_LF,
    ACTIONS(294), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(296), 1,
      sym_shisho_ellipsis,
    ACTIONS(298), 1,
      aux_sym__env_key_token1,
    STATE(234), 2,
      sym_shisho_metavariable,
      sym__env_key,
    STATE(19), 3,
      sym_shisho_ellipsis_metavariable,
      sym_env_pair,
      aux_sym_env_instruction_repeat1,
  [993] = 7,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(235), 1,
      anon_sym_LF,
    ACTIONS(300), 1,
      anon_sym_DOLLAR,
    ACTIONS(302), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(304), 1,
      anon_sym_BSLASH,
    STATE(28), 2,
      sym_expansion,
      aux_sym_unquoted_string_repeat1,
    ACTIONS(237), 3,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      aux_sym__env_key_token1,
  [1018] = 6,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(308), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(310), 1,
      anon_sym_DOLLAR,
    ACTIONS(313), 1,
      aux_sym_image_name_token1,
    STATE(32), 2,
      sym_expansion,
      aux_sym_image_name_repeat1,
    ACTIONS(306), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [1040] = 6,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(318), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(320), 1,
      anon_sym_DOLLAR,
    ACTIONS(322), 1,
      aux_sym_image_name_token1,
    STATE(32), 2,
      sym_expansion,
      aux_sym_image_name_repeat1,
    ACTIONS(316), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [1062] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(116), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(188), 1,
      anon_sym_DOLLAR,
    ACTIONS(190), 1,
      aux_sym_image_name_token1,
    STATE(176), 1,
      sym_image_spec,
    STATE(33), 2,
      sym_expansion,
      aux_sym_image_name_repeat1,
    STATE(66), 2,
      sym_shisho_metavariable,
      sym_image_name,
  [1086] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(326), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(328), 1,
      anon_sym_POUND,
    STATE(291), 1,
      sym__anon_comment,
    STATE(35), 2,
      sym__comment_line,
      aux_sym_shell_command_repeat1,
    ACTIONS(324), 3,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      aux_sym_shell_fragment_token1,
  [1108] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(331), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(333), 1,
      aux_sym_path_token1,
    ACTIONS(335), 1,
      anon_sym_DOLLAR,
    ACTIONS(337), 1,
      anon_sym_DASH_DASH,
    STATE(81), 1,
      sym_param,
    STATE(95), 1,
      sym_expansion,
    STATE(212), 2,
      sym_shisho_metavariable,
      sym_path,
  [1134] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(339), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(342), 1,
      sym_shisho_ellipsis,
    ACTIONS(345), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(347), 1,
      anon_sym_DASH_DASH,
    STATE(37), 4,
      sym_shisho_metavariable,
      sym_shisho_ellipsis_metavariable,
      sym_param,
      aux_sym_healthcheck_instruction_repeat1,
  [1156] = 7,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(350), 1,
      anon_sym_LF,
    ACTIONS(352), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(355), 1,
      sym_shisho_ellipsis,
    ACTIONS(358), 1,
      aux_sym_label_pair_token1,
    STATE(214), 1,
      sym_shisho_metavariable,
    STATE(38), 3,
      sym_shisho_ellipsis_metavariable,
      sym_label_pair,
      aux_sym_label_instruction_repeat1,
  [1180] = 7,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(361), 1,
      anon_sym_LF,
    ACTIONS(363), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(365), 1,
      sym_shisho_ellipsis,
    ACTIONS(367), 1,
      aux_sym_label_pair_token1,
    STATE(214), 1,
      sym_shisho_metavariable,
    STATE(38), 3,
      sym_shisho_ellipsis_metavariable,
      sym_label_pair,
      aux_sym_label_instruction_repeat1,
  [1204] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(225), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(371), 1,
      anon_sym_DOLLAR,
    ACTIONS(369), 2,
      sym_shisho_ellipsis,
      aux_sym__stopsignal_value_token1,
    STATE(21), 4,
      sym_shisho_metavariable,
      sym_shisho_ellipsis_metavariable,
      aux_sym__stopsignal_value,
      sym_expansion,
  [1224] = 6,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(375), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(377), 1,
      anon_sym_DOLLAR,
    ACTIONS(380), 1,
      aux_sym_image_tag_value_token1,
    ACTIONS(373), 2,
      anon_sym_LF,
      anon_sym_AT,
    STATE(41), 2,
      sym_expansion,
      aux_sym_image_tag_value_repeat1,
  [1245] = 4,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(383), 1,
      anon_sym_LF,
    ACTIONS(387), 2,
      anon_sym_SLASHtcp,
      anon_sym_SLASHudp,
    ACTIONS(385), 4,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [1262] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(170), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(389), 1,
      anon_sym_RBRACK,
    ACTIONS(391), 1,
      sym_shisho_ellipsis,
    ACTIONS(393), 1,
      anon_sym_DQUOTE,
    STATE(150), 3,
      sym_shisho_metavariable,
      sym_shisho_ellipsis_metavariable,
      sym_double_quoted_string,
  [1283] = 3,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(395), 1,
      anon_sym_LF,
    ACTIONS(397), 6,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      anon_sym_COLON,
      aux_sym__user_name_or_group_token1,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [1298] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(363), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(399), 1,
      sym_shisho_ellipsis,
    ACTIONS(401), 1,
      aux_sym_label_pair_token1,
    STATE(214), 1,
      sym_shisho_metavariable,
    STATE(39), 3,
      sym_shisho_ellipsis_metavariable,
      sym_label_pair,
      aux_sym_label_instruction_repeat1,
  [1319] = 3,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(403), 1,
      anon_sym_LF,
    ACTIONS(405), 6,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      anon_sym_COLON,
      aux_sym__user_name_or_group_token1,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [1334] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(215), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(219), 1,
      aux_sym_path_token1,
    ACTIONS(221), 1,
      anon_sym_DOLLAR,
    ACTIONS(407), 1,
      sym_shisho_ellipsis,
    STATE(75), 1,
      sym_expansion,
    STATE(197), 2,
      sym_shisho_ellipsis_metavariable,
      sym_path,
  [1357] = 3,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(395), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(397), 5,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      anon_sym_DOLLAR,
      aux_sym_label_pair_token1,
      aux_sym_unquoted_string_token1,
  [1372] = 3,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(403), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(405), 5,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      anon_sym_DOLLAR,
      aux_sym_label_pair_token1,
      aux_sym_unquoted_string_token1,
  [1387] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(116), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(409), 1,
      anon_sym_DOLLAR,
    ACTIONS(411), 1,
      aux_sym_image_alias_token1,
    STATE(88), 2,
      sym_expansion,
      aux_sym_image_alias_repeat1,
    STATE(273), 2,
      sym_shisho_metavariable,
      sym_image_alias,
  [1408] = 3,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(395), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(397), 5,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      anon_sym_DOLLAR,
      aux_sym__env_key_token1,
      aux_sym_unquoted_string_token1,
  [1423] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(116), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(413), 1,
      anon_sym_DOLLAR,
    ACTIONS(415), 1,
      aux_sym_image_digest_value_token1,
    STATE(83), 2,
      sym_expansion,
      aux_sym_image_digest_value_repeat1,
    STATE(179), 2,
      sym_shisho_metavariable,
      sym_image_digest_value,
  [1444] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(116), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(417), 1,
      anon_sym_DOLLAR,
    ACTIONS(419), 1,
      aux_sym_image_tag_value_token1,
    STATE(56), 2,
      sym_expansion,
      aux_sym_image_tag_value_repeat1,
    STATE(156), 2,
      sym_shisho_metavariable,
      sym_image_tag_value,
  [1465] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(233), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(231), 6,
      anon_sym_RBRACK,
      sym_shisho_ellipsis,
      aux_sym_cmd_instruction_token1,
      anon_sym_EQ,
      anon_sym_DASH_DASH,
      anon_sym_COMMA,
  [1480] = 3,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(403), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(405), 5,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      anon_sym_DOLLAR,
      aux_sym__env_key_token1,
      aux_sym_unquoted_string_token1,
  [1495] = 6,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(423), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(425), 1,
      anon_sym_DOLLAR,
    ACTIONS(427), 1,
      aux_sym_image_tag_value_token1,
    ACTIONS(421), 2,
      anon_sym_LF,
      anon_sym_AT,
    STATE(41), 2,
      sym_expansion,
      aux_sym_image_tag_value_repeat1,
  [1516] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(116), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(409), 1,
      anon_sym_DOLLAR,
    ACTIONS(411), 1,
      aux_sym_image_alias_token1,
    STATE(88), 2,
      sym_expansion,
      aux_sym_image_alias_repeat1,
    STATE(268), 2,
      sym_shisho_metavariable,
      sym_image_alias,
  [1537] = 5,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(235), 1,
      anon_sym_LF,
    ACTIONS(429), 1,
      anon_sym_DOLLAR,
    ACTIONS(431), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
    STATE(63), 2,
      sym_expansion,
      aux_sym_unquoted_string_repeat1,
  [1555] = 3,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(395), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
    ACTIONS(397), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_image_name_token1,
  [1569] = 7,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(200), 1,
      anon_sym_DOLLAR,
    ACTIONS(433), 1,
      anon_sym_LF,
    ACTIONS(435), 1,
      anon_sym_COLON,
    ACTIONS(437), 1,
      aux_sym__user_name_or_group_token1,
    STATE(69), 1,
      aux_sym__user_name_or_group,
    STATE(128), 1,
      sym_expansion,
  [1591] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(439), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(441), 5,
      anon_sym_RBRACK,
      sym_shisho_ellipsis,
      aux_sym_cmd_instruction_token1,
      anon_sym_DASH_DASH,
      anon_sym_COMMA,
  [1605] = 6,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(443), 1,
      anon_sym_DOLLAR,
    ACTIONS(445), 1,
      anon_sym_DQUOTE,
    ACTIONS(447), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(449), 1,
      sym_escape_sequence,
    STATE(82), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1625] = 5,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(251), 1,
      anon_sym_LF,
    ACTIONS(451), 1,
      anon_sym_DOLLAR,
    ACTIONS(454), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
    STATE(63), 2,
      sym_expansion,
      aux_sym_unquoted_string_repeat1,
  [1643] = 6,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(457), 1,
      anon_sym_DOLLAR,
    ACTIONS(460), 1,
      anon_sym_DQUOTE,
    ACTIONS(462), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(465), 1,
      sym_escape_sequence,
    STATE(64), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1663] = 6,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(443), 1,
      anon_sym_DOLLAR,
    ACTIONS(468), 1,
      anon_sym_DQUOTE,
    ACTIONS(470), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(472), 1,
      sym_escape_sequence,
    STATE(64), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1683] = 7,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(474), 1,
      anon_sym_LF,
    ACTIONS(476), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(478), 1,
      anon_sym_COLON,
    ACTIONS(480), 1,
      anon_sym_AT,
    STATE(106), 1,
      sym_image_tag,
    STATE(177), 1,
      sym_image_digest,
  [1705] = 3,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(403), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
    ACTIONS(405), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_image_name_token1,
  [1719] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(116), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(482), 1,
      aux_sym_path_token1,
    ACTIONS(484), 1,
      anon_sym_DOLLAR,
    STATE(101), 1,
      sym_expansion,
    STATE(256), 2,
      sym_shisho_metavariable,
      sym_path,
  [1739] = 6,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(488), 1,
      aux_sym__user_name_or_group_token1,
    ACTIONS(491), 1,
      anon_sym_DOLLAR,
    STATE(69), 1,
      aux_sym__user_name_or_group,
    STATE(128), 1,
      sym_expansion,
    ACTIONS(486), 2,
      anon_sym_LF,
      anon_sym_COLON,
  [1759] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(116), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(494), 1,
      aux_sym__user_name_or_group_token1,
    STATE(93), 1,
      aux_sym__user_name_or_group,
    STATE(128), 1,
      sym_expansion,
    STATE(287), 1,
      sym_shisho_metavariable,
  [1781] = 6,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(443), 1,
      anon_sym_DOLLAR,
    ACTIONS(496), 1,
      anon_sym_DQUOTE,
    ACTIONS(498), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(500), 1,
      sym_escape_sequence,
    STATE(65), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1801] = 3,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(441), 1,
      anon_sym_LF,
    ACTIONS(439), 5,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      anon_sym_DOLLAR,
      aux_sym__env_key_token1,
      aux_sym_expose_port_token1,
  [1815] = 6,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(502), 1,
      anon_sym_LF,
    ACTIONS(504), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(506), 1,
      anon_sym_DOLLAR,
    ACTIONS(509), 1,
      aux_sym_image_digest_value_token1,
    STATE(73), 2,
      sym_expansion,
      aux_sym_image_digest_value_repeat1,
  [1835] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(116), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(494), 1,
      aux_sym__user_name_or_group_token1,
    STATE(105), 1,
      aux_sym__user_name_or_group,
    STATE(128), 1,
      sym_expansion,
    STATE(300), 1,
      sym_shisho_metavariable,
  [1857] = 5,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(514), 1,
      aux_sym_path_token2,
    ACTIONS(516), 1,
      anon_sym_DOLLAR,
    ACTIONS(512), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
    STATE(76), 2,
      sym_expansion,
      aux_sym_path_repeat1,
  [1875] = 5,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(516), 1,
      anon_sym_DOLLAR,
    ACTIONS(520), 1,
      aux_sym_path_token2,
    ACTIONS(518), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
    STATE(84), 2,
      sym_expansion,
      aux_sym_path_repeat1,
  [1893] = 6,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(443), 1,
      anon_sym_DOLLAR,
    ACTIONS(470), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(472), 1,
      sym_escape_sequence,
    ACTIONS(522), 1,
      anon_sym_DQUOTE,
    STATE(64), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1913] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(170), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(393), 1,
      anon_sym_DQUOTE,
    ACTIONS(524), 1,
      sym_shisho_ellipsis,
    STATE(161), 3,
      sym_shisho_metavariable,
      sym_shisho_ellipsis_metavariable,
      sym_double_quoted_string,
  [1931] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(116), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(482), 1,
      aux_sym_path_token1,
    ACTIONS(484), 1,
      anon_sym_DOLLAR,
    STATE(101), 1,
      sym_expansion,
    STATE(302), 2,
      sym_shisho_metavariable,
      sym_path,
  [1951] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(333), 1,
      aux_sym_path_token1,
    ACTIONS(335), 1,
      anon_sym_DOLLAR,
    ACTIONS(526), 1,
      anon_sym_DASH_DASH,
    STATE(95), 1,
      sym_expansion,
    STATE(123), 1,
      sym_param,
    STATE(211), 1,
      sym_path,
  [1973] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(331), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(333), 1,
      aux_sym_path_token1,
    ACTIONS(335), 1,
      anon_sym_DOLLAR,
    STATE(95), 1,
      sym_expansion,
    STATE(237), 2,
      sym_shisho_metavariable,
      sym_path,
  [1993] = 6,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(443), 1,
      anon_sym_DOLLAR,
    ACTIONS(470), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(472), 1,
      sym_escape_sequence,
    ACTIONS(528), 1,
      anon_sym_DQUOTE,
    STATE(64), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [2013] = 6,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(530), 1,
      anon_sym_LF,
    ACTIONS(532), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(534), 1,
      anon_sym_DOLLAR,
    ACTIONS(536), 1,
      aux_sym_image_digest_value_token1,
    STATE(73), 2,
      sym_expansion,
      aux_sym_image_digest_value_repeat1,
  [2033] = 5,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(540), 1,
      aux_sym_path_token2,
    ACTIONS(543), 1,
      anon_sym_DOLLAR,
    ACTIONS(538), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
    STATE(84), 2,
      sym_expansion,
      aux_sym_path_repeat1,
  [2051] = 6,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(443), 1,
      anon_sym_DOLLAR,
    ACTIONS(546), 1,
      anon_sym_DQUOTE,
    ACTIONS(548), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(550), 1,
      sym_escape_sequence,
    STATE(77), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [2071] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(116), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(494), 1,
      aux_sym__user_name_or_group_token1,
    STATE(60), 1,
      aux_sym__user_name_or_group,
    STATE(128), 1,
      sym_expansion,
    STATE(193), 1,
      sym_shisho_metavariable,
  [2093] = 5,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(552), 1,
      anon_sym_LF,
    ACTIONS(554), 1,
      aux_sym_path_token2,
    ACTIONS(556), 1,
      anon_sym_DOLLAR,
    STATE(104), 2,
      sym_expansion,
      aux_sym_path_repeat1,
  [2110] = 5,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(558), 1,
      anon_sym_LF,
    ACTIONS(560), 1,
      anon_sym_DOLLAR,
    ACTIONS(562), 1,
      aux_sym_image_alias_token1,
    STATE(94), 2,
      sym_expansion,
      aux_sym_image_alias_repeat1,
  [2127] = 3,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(383), 1,
      anon_sym_LF,
    ACTIONS(385), 4,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [2140] = 3,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(564), 1,
      anon_sym_LF,
    ACTIONS(566), 4,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [2153] = 3,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(403), 2,
      anon_sym_LF,
      anon_sym_AT,
    ACTIONS(405), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_image_tag_value_token1,
  [2166] = 3,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(231), 1,
      anon_sym_LF,
    ACTIONS(233), 4,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      aux_sym__stopsignal_value_token1,
      anon_sym_DOLLAR,
  [2179] = 6,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(200), 1,
      anon_sym_DOLLAR,
    ACTIONS(437), 1,
      aux_sym__user_name_or_group_token1,
    ACTIONS(568), 1,
      anon_sym_LF,
    STATE(69), 1,
      aux_sym__user_name_or_group,
    STATE(128), 1,
      sym_expansion,
  [2198] = 5,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(570), 1,
      anon_sym_LF,
    ACTIONS(572), 1,
      anon_sym_DOLLAR,
    ACTIONS(575), 1,
      aux_sym_image_alias_token1,
    STATE(94), 2,
      sym_expansion,
      aux_sym_image_alias_repeat1,
  [2215] = 5,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(578), 1,
      aux_sym_path_token2,
    ACTIONS(580), 1,
      anon_sym_DOLLAR,
    ACTIONS(582), 1,
      sym__non_newline_whitespace,
    STATE(96), 2,
      sym_expansion,
      aux_sym_path_repeat1,
  [2232] = 5,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(552), 1,
      sym__non_newline_whitespace,
    ACTIONS(580), 1,
      anon_sym_DOLLAR,
    ACTIONS(584), 1,
      aux_sym_path_token2,
    STATE(103), 2,
      sym_expansion,
      aux_sym_path_repeat1,
  [2249] = 3,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(395), 2,
      anon_sym_LF,
      anon_sym_AT,
    ACTIONS(397), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_image_tag_value_token1,
  [2262] = 3,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(403), 1,
      anon_sym_LF,
    ACTIONS(405), 4,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      aux_sym__stopsignal_value_token1,
      anon_sym_DOLLAR,
  [2275] = 3,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(441), 1,
      anon_sym_LF,
    ACTIONS(439), 4,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      aux_sym__stopsignal_value_token1,
      anon_sym_DOLLAR,
  [2288] = 3,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(395), 1,
      anon_sym_LF,
    ACTIONS(397), 4,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      aux_sym__stopsignal_value_token1,
      anon_sym_DOLLAR,
  [2301] = 5,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(556), 1,
      anon_sym_DOLLAR,
    ACTIONS(582), 1,
      anon_sym_LF,
    ACTIONS(586), 1,
      aux_sym_path_token2,
    STATE(87), 2,
      sym_expansion,
      aux_sym_path_repeat1,
  [2318] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(590), 2,
      aux_sym_shell_fragment_token2,
      anon_sym_POUND,
    ACTIONS(588), 3,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      aux_sym_shell_fragment_token1,
  [2331] = 5,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(592), 1,
      aux_sym_path_token2,
    ACTIONS(595), 1,
      anon_sym_DOLLAR,
    ACTIONS(598), 1,
      sym__non_newline_whitespace,
    STATE(103), 2,
      sym_expansion,
      aux_sym_path_repeat1,
  [2348] = 5,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(598), 1,
      anon_sym_LF,
    ACTIONS(600), 1,
      aux_sym_path_token2,
    ACTIONS(603), 1,
      anon_sym_DOLLAR,
    STATE(104), 2,
      sym_expansion,
      aux_sym_path_repeat1,
  [2365] = 6,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(200), 1,
      anon_sym_DOLLAR,
    ACTIONS(437), 1,
      aux_sym__user_name_or_group_token1,
    ACTIONS(606), 1,
      anon_sym_LF,
    STATE(69), 1,
      aux_sym__user_name_or_group,
    STATE(128), 1,
      sym_expansion,
  [2384] = 5,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(480), 1,
      anon_sym_AT,
    ACTIONS(608), 1,
      anon_sym_LF,
    ACTIONS(610), 1,
      aux_sym_from_instruction_token2,
    STATE(172), 1,
      sym_image_digest,
  [2400] = 3,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(231), 1,
      anon_sym_LF,
    ACTIONS(233), 3,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      aux_sym__env_key_token1,
  [2412] = 3,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(397), 1,
      anon_sym_DOLLAR,
    ACTIONS(395), 3,
      anon_sym_LF,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [2424] = 3,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(405), 1,
      anon_sym_DOLLAR,
    ACTIONS(403), 3,
      anon_sym_LF,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [2436] = 3,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(441), 1,
      anon_sym_LF,
    ACTIONS(439), 3,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      aux_sym_label_pair_token1,
  [2448] = 3,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(403), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(405), 3,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [2460] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(482), 1,
      aux_sym_path_token1,
    ACTIONS(484), 1,
      anon_sym_DOLLAR,
    STATE(101), 1,
      sym_expansion,
    STATE(301), 1,
      sym_path,
  [2476] = 3,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(395), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(397), 3,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [2488] = 2,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(397), 4,
      anon_sym_LF,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
      sym__non_newline_whitespace,
  [2498] = 3,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(231), 1,
      anon_sym_LF,
    ACTIONS(233), 3,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      aux_sym_label_pair_token1,
  [2510] = 3,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(612), 1,
      anon_sym_LF,
    ACTIONS(614), 3,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      aux_sym_label_pair_token1,
  [2522] = 4,
    ACTIONS(616), 1,
      anon_sym_LF,
    ACTIONS(620), 1,
      sym_line_continuation,
    STATE(121), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(618), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [2536] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(482), 1,
      aux_sym_path_token1,
    ACTIONS(484), 1,
      anon_sym_DOLLAR,
    STATE(101), 1,
      sym_expansion,
    STATE(206), 1,
      sym_path,
  [2552] = 3,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(403), 2,
      anon_sym_LF,
      aux_sym_image_digest_value_token1,
    ACTIONS(405), 2,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
  [2564] = 3,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(395), 2,
      anon_sym_LF,
      aux_sym_image_digest_value_token1,
    ACTIONS(397), 2,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
  [2576] = 4,
    ACTIONS(622), 1,
      anon_sym_LF,
    ACTIONS(627), 1,
      sym_line_continuation,
    STATE(121), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(624), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [2590] = 3,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(629), 1,
      anon_sym_LF,
    ACTIONS(631), 3,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      aux_sym_label_pair_token1,
  [2602] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(333), 1,
      aux_sym_path_token1,
    ACTIONS(335), 1,
      anon_sym_DOLLAR,
    STATE(95), 1,
      sym_expansion,
    STATE(242), 1,
      sym_path,
  [2618] = 3,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(633), 1,
      anon_sym_LF,
    ACTIONS(635), 3,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      aux_sym_label_pair_token1,
  [2630] = 2,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(405), 4,
      anon_sym_LF,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
      sym__non_newline_whitespace,
  [2640] = 3,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(637), 1,
      anon_sym_LF,
    ACTIONS(639), 3,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      aux_sym__env_key_token1,
  [2652] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(641), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(643), 3,
      sym_shisho_ellipsis,
      aux_sym_cmd_instruction_token1,
      anon_sym_DASH_DASH,
  [2664] = 3,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(645), 2,
      anon_sym_LF,
      anon_sym_COLON,
    ACTIONS(647), 2,
      aux_sym__user_name_or_group_token1,
      anon_sym_DOLLAR,
  [2676] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(482), 1,
      aux_sym_path_token1,
    ACTIONS(484), 1,
      anon_sym_DOLLAR,
    STATE(101), 1,
      sym_expansion,
    STATE(253), 1,
      sym_path,
  [2692] = 3,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(612), 1,
      anon_sym_LF,
    ACTIONS(614), 3,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      aux_sym__env_key_token1,
  [2704] = 3,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(629), 1,
      anon_sym_LF,
    ACTIONS(631), 3,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      aux_sym__env_key_token1,
  [2716] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(649), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(651), 1,
      sym_param_value,
    STATE(149), 1,
      sym_shisho_metavariable,
  [2729] = 4,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(653), 1,
      anon_sym_LF,
    ACTIONS(655), 1,
      sym__non_newline_whitespace,
    STATE(141), 1,
      aux_sym_volume_instruction_repeat1,
  [2742] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(657), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(659), 1,
      sym_param_name,
    STATE(281), 1,
      sym_shisho_metavariable,
  [2755] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(657), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(661), 1,
      sym_param_name,
    STATE(276), 1,
      sym_shisho_metavariable,
  [2768] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(657), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(663), 1,
      sym_param_name,
    STATE(271), 1,
      sym_shisho_metavariable,
  [2781] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(665), 1,
      anon_sym_RBRACK,
    ACTIONS(667), 1,
      anon_sym_COMMA,
    STATE(154), 1,
      aux_sym_string_array_repeat1,
  [2794] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(233), 1,
      aux_sym_image_name_token1,
    ACTIONS(231), 2,
      anon_sym_COLON_LBRACK,
      anon_sym_DOLLAR,
  [2805] = 3,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(403), 1,
      anon_sym_LF,
    ACTIONS(405), 2,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
  [2816] = 3,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(395), 1,
      anon_sym_LF,
    ACTIONS(397), 2,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
  [2827] = 4,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(669), 1,
      anon_sym_LF,
    ACTIONS(671), 1,
      sym__non_newline_whitespace,
    STATE(141), 1,
      aux_sym_volume_instruction_repeat1,
  [2840] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(657), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(674), 1,
      sym_param_name,
    STATE(230), 1,
      sym_shisho_metavariable,
  [2853] = 3,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(403), 1,
      sym__non_newline_whitespace,
    ACTIONS(405), 2,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
  [2864] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(233), 1,
      aux_sym_path_token1,
    ACTIONS(231), 2,
      anon_sym_COLON_LBRACK,
      anon_sym_DOLLAR,
  [2875] = 3,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(403), 1,
      anon_sym_LF,
    ACTIONS(405), 2,
      anon_sym_DOLLAR,
      aux_sym_image_alias_token1,
  [2886] = 3,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(395), 1,
      anon_sym_LF,
    ACTIONS(397), 2,
      anon_sym_DOLLAR,
      aux_sym_image_alias_token1,
  [2897] = 3,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(395), 1,
      sym__non_newline_whitespace,
    ACTIONS(397), 2,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
  [2908] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(641), 1,
      aux_sym_image_name_token1,
    ACTIONS(643), 2,
      anon_sym_COLON_LBRACK,
      anon_sym_DOLLAR,
  [2919] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(641), 1,
      aux_sym_path_token1,
    ACTIONS(643), 2,
      anon_sym_COLON_LBRACK,
      anon_sym_DOLLAR,
  [2930] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(667), 1,
      anon_sym_COMMA,
    ACTIONS(676), 1,
      anon_sym_RBRACK,
    STATE(137), 1,
      aux_sym_string_array_repeat1,
  [2943] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(116), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(678), 1,
      aux_sym_arg_instruction_token2,
    STATE(191), 1,
      sym_shisho_metavariable,
  [2956] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(680), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(682), 1,
      sym_param_value,
    STATE(186), 1,
      sym_shisho_metavariable,
  [2969] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(684), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(686), 1,
      sym_param_value,
    STATE(127), 1,
      sym_shisho_metavariable,
  [2982] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(688), 1,
      anon_sym_RBRACK,
    ACTIONS(690), 1,
      anon_sym_COMMA,
    STATE(154), 1,
      aux_sym_string_array_repeat1,
  [2995] = 4,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(655), 1,
      sym__non_newline_whitespace,
    ACTIONS(693), 1,
      anon_sym_LF,
    STATE(133), 1,
      aux_sym_volume_instruction_repeat1,
  [3008] = 3,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(697), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(695), 2,
      anon_sym_LF,
      anon_sym_AT,
  [3019] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(699), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(701), 1,
      sym_param_value,
    STATE(148), 1,
      sym_shisho_metavariable,
  [3032] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(703), 1,
      anon_sym_LBRACE,
    ACTIONS(705), 1,
      sym_variable,
  [3042] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(707), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(709), 1,
      sym_shisho_metavariable_name,
  [3052] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(711), 1,
      anon_sym_LBRACE,
    ACTIONS(713), 1,
      sym_variable,
  [3062] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(688), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [3070] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(715), 1,
      anon_sym_LBRACE,
    ACTIONS(717), 1,
      sym_variable,
  [3080] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(629), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [3088] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(719), 1,
      anon_sym_LBRACE,
    ACTIONS(721), 1,
      sym_variable,
  [3098] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(723), 1,
      anon_sym_LBRACE,
    ACTIONS(725), 1,
      sym_variable,
  [3108] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(727), 1,
      anon_sym_LBRACE,
    ACTIONS(729), 1,
      sym_variable,
  [3118] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(731), 1,
      anon_sym_LBRACE,
    ACTIONS(733), 1,
      sym_variable,
  [3128] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(709), 1,
      sym_shisho_metavariable_name,
    ACTIONS(735), 1,
      anon_sym_DOT_DOT_DOT,
  [3138] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(737), 1,
      anon_sym_LBRACE,
    ACTIONS(739), 1,
      sym_variable,
  [3148] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(741), 1,
      anon_sym_LBRACE,
    ACTIONS(743), 1,
      sym_variable,
  [3158] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(745), 1,
      anon_sym_LBRACE,
    ACTIONS(747), 1,
      sym_variable,
  [3168] = 3,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(749), 1,
      anon_sym_LF,
    ACTIONS(751), 1,
      aux_sym_from_instruction_token2,
  [3178] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(753), 1,
      anon_sym_LBRACE,
    ACTIONS(755), 1,
      sym_variable,
  [3188] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(757), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(759), 1,
      sym_shisho_metavariable_name,
  [3198] = 3,
    ACTIONS(761), 1,
      anon_sym_LF,
    ACTIONS(763), 1,
      sym_line_continuation,
    STATE(182), 1,
      aux_sym_shell_command_repeat2,
  [3208] = 3,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(765), 1,
      anon_sym_LF,
    ACTIONS(767), 1,
      aux_sym_from_instruction_token2,
  [3218] = 3,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(769), 1,
      anon_sym_LF,
    ACTIONS(771), 1,
      aux_sym_from_instruction_token2,
  [3228] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(134), 1,
      anon_sym_LBRACK,
    STATE(203), 1,
      sym_string_array,
  [3238] = 3,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(773), 1,
      anon_sym_LF,
    ACTIONS(775), 1,
      aux_sym_from_instruction_token2,
  [3248] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(777), 1,
      anon_sym_LBRACE,
    ACTIONS(779), 1,
      sym_variable,
  [3258] = 2,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(439), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
  [3266] = 3,
    ACTIONS(781), 1,
      anon_sym_LF,
    ACTIONS(783), 1,
      sym_line_continuation,
    STATE(182), 1,
      aux_sym_shell_command_repeat2,
  [3276] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(707), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(786), 1,
      sym_shisho_metavariable_name,
  [3286] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(735), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(788), 1,
      sym_shisho_metavariable_name,
  [3296] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(790), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(792), 1,
      sym_shisho_metavariable_name,
  [3306] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(641), 1,
      aux_sym_path_token1,
    ACTIONS(643), 1,
      anon_sym_DOLLAR,
  [3316] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(786), 1,
      sym_shisho_metavariable_name,
    ACTIONS(794), 1,
      anon_sym_DOT_DOT_DOT,
  [3326] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(796), 1,
      anon_sym_LBRACE,
    ACTIONS(798), 1,
      sym_variable,
  [3336] = 2,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(231), 2,
      anon_sym_EQ,
      aux_sym__spaced_env_pair_token1,
  [3344] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(231), 1,
      anon_sym_DOLLAR,
    ACTIONS(233), 1,
      aux_sym_path_token1,
  [3354] = 3,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(800), 1,
      anon_sym_LF,
    ACTIONS(802), 1,
      anon_sym_EQ,
  [3364] = 3,
    ACTIONS(763), 1,
      sym_line_continuation,
    ACTIONS(804), 1,
      anon_sym_LF,
    STATE(175), 1,
      aux_sym_shell_command_repeat2,
  [3374] = 3,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(806), 1,
      anon_sym_LF,
    ACTIONS(808), 1,
      anon_sym_COLON,
  [3384] = 3,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(810), 1,
      anon_sym_EQ,
    ACTIONS(812), 1,
      aux_sym__spaced_env_pair_token1,
  [3394] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(735), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(786), 1,
      sym_shisho_metavariable_name,
  [3404] = 3,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(814), 1,
      anon_sym_LF,
    ACTIONS(816), 1,
      aux_sym_from_instruction_token2,
  [3414] = 2,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(669), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
  [3422] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(612), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [3430] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(709), 1,
      sym_shisho_metavariable_name,
  [3437] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(818), 1,
      anon_sym_RBRACK,
  [3444] = 2,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(820), 1,
      anon_sym_LF,
  [3451] = 2,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(822), 1,
      anon_sym_LF,
  [3458] = 2,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(824), 1,
      anon_sym_LF,
  [3465] = 2,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(826), 1,
      anon_sym_LF,
  [3472] = 2,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(828), 1,
      anon_sym_LF,
  [3479] = 2,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(830), 1,
      anon_sym_LF,
  [3486] = 2,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(231), 1,
      sym__non_newline_whitespace,
  [3493] = 2,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(832), 1,
      anon_sym_LF,
  [3500] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(834), 1,
      anon_sym_DOT_DOT_DOT,
  [3507] = 2,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(836), 1,
      anon_sym_LF,
  [3514] = 2,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(838), 1,
      sym__non_newline_whitespace,
  [3521] = 2,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(840), 1,
      sym__non_newline_whitespace,
  [3528] = 2,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(842), 1,
      anon_sym_LF,
  [3535] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(844), 1,
      anon_sym_EQ,
  [3542] = 2,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(846), 1,
      anon_sym_LF,
  [3549] = 2,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(848), 1,
      anon_sym_LF,
  [3556] = 2,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(850), 1,
      anon_sym_LF,
  [3563] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(852), 1,
      anon_sym_RBRACK,
  [3570] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(854), 1,
      sym_shisho_metavariable_name,
  [3577] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(856), 1,
      ts_builtin_sym_end,
  [3584] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(858), 1,
      anon_sym_RBRACK,
  [3591] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(860), 1,
      sym_shisho_metavariable_name,
  [3598] = 2,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(862), 1,
      anon_sym_LF,
  [3605] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(864), 1,
      anon_sym_RBRACK,
  [3612] = 2,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(866), 1,
      aux_sym_maintainer_instruction_token2,
  [3619] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(868), 1,
      anon_sym_RBRACE,
  [3626] = 2,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(870), 1,
      aux_sym_maintainer_instruction_token2,
  [3633] = 2,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(872), 1,
      aux_sym_expansion_token1,
  [3640] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(874), 1,
      anon_sym_RBRACK,
  [3647] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(876), 1,
      anon_sym_EQ,
  [3654] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(878), 1,
      anon_sym_RBRACK,
  [3661] = 2,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(880), 1,
      anon_sym_LF,
  [3668] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(882), 1,
      anon_sym_RBRACE,
  [3675] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(810), 1,
      anon_sym_EQ,
  [3682] = 2,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(884), 1,
      anon_sym_LF,
  [3689] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(886), 1,
      anon_sym_RBRACK,
  [3696] = 2,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(888), 1,
      sym__non_newline_whitespace,
  [3703] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(890), 1,
      anon_sym_RBRACK,
  [3710] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(892), 1,
      anon_sym_RBRACE,
  [3717] = 2,
    ACTIONS(439), 1,
      sym_line_continuation,
    ACTIONS(441), 1,
      anon_sym_LF,
  [3724] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(894), 1,
      anon_sym_RBRACK,
  [3731] = 2,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(896), 1,
      sym__non_newline_whitespace,
  [3738] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(898), 1,
      anon_sym_RBRACK,
  [3745] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(900), 1,
      anon_sym_RBRACE,
  [3752] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(902), 1,
      anon_sym_RBRACK,
  [3759] = 2,
    ACTIONS(231), 1,
      anon_sym_LF,
    ACTIONS(233), 1,
      sym_line_continuation,
  [3766] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(904), 1,
      anon_sym_RBRACK,
  [3773] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(906), 1,
      anon_sym_RBRACE,
  [3780] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(908), 1,
      anon_sym_RBRACK,
  [3787] = 2,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(910), 1,
      anon_sym_LF,
  [3794] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(912), 1,
      anon_sym_RBRACE,
  [3801] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(914), 1,
      anon_sym_RBRACK,
  [3808] = 2,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(916), 1,
      anon_sym_LF,
  [3815] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(918), 1,
      anon_sym_RBRACE,
  [3822] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(920), 1,
      anon_sym_RBRACK,
  [3829] = 2,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(922), 1,
      anon_sym_LF,
  [3836] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(924), 1,
      anon_sym_RBRACE,
  [3843] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(926), 1,
      anon_sym_RBRACK,
  [3850] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(928), 1,
      anon_sym_RBRACE,
  [3857] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(930), 1,
      anon_sym_RBRACE,
  [3864] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(932), 1,
      anon_sym_RBRACK,
  [3871] = 2,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(934), 1,
      anon_sym_LF,
  [3878] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(936), 1,
      anon_sym_RBRACE,
  [3885] = 2,
    ACTIONS(938), 1,
      anon_sym_LF,
    ACTIONS(940), 1,
      sym_line_continuation,
  [3892] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(942), 1,
      anon_sym_RBRACE,
  [3899] = 2,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(944), 1,
      anon_sym_LF,
  [3906] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(946), 1,
      anon_sym_RBRACE,
  [3913] = 2,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(948), 1,
      anon_sym_LF,
  [3920] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(950), 1,
      sym_shisho_metavariable_name,
  [3927] = 2,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(952), 1,
      aux_sym_expansion_token1,
  [3934] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(954), 1,
      anon_sym_EQ,
  [3941] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(786), 1,
      sym_shisho_metavariable_name,
  [3948] = 2,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(956), 1,
      anon_sym_LF,
  [3955] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(958), 1,
      sym_shisho_metavariable_name,
  [3962] = 2,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(960), 1,
      aux_sym_expansion_token1,
  [3969] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(962), 1,
      anon_sym_EQ,
  [3976] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(964), 1,
      sym_shisho_metavariable_name,
  [3983] = 2,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(966), 1,
      anon_sym_LF,
  [3990] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(968), 1,
      sym_shisho_metavariable_name,
  [3997] = 2,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(970), 1,
      aux_sym_expansion_token1,
  [4004] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(972), 1,
      anon_sym_EQ,
  [4011] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(974), 1,
      sym_shisho_metavariable_name,
  [4018] = 2,
    ACTIONS(781), 1,
      anon_sym_LF,
    ACTIONS(976), 1,
      sym_line_continuation,
  [4025] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(978), 1,
      sym_shisho_metavariable_name,
  [4032] = 2,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(980), 1,
      aux_sym_expansion_token1,
  [4039] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(982), 1,
      sym_shisho_metavariable_name,
  [4046] = 2,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(984), 1,
      anon_sym_LF,
  [4053] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(986), 1,
      sym_shisho_metavariable_name,
  [4060] = 2,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(988), 1,
      aux_sym_expansion_token1,
  [4067] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(990), 1,
      sym_shisho_metavariable_name,
  [4074] = 2,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(992), 1,
      anon_sym_LF,
  [4081] = 2,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(994), 1,
      aux_sym_expansion_token1,
  [4088] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(996), 1,
      sym_shisho_metavariable_name,
  [4095] = 2,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(998), 1,
      aux_sym_expansion_token1,
  [4102] = 2,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(1000), 1,
      aux_sym_expansion_token1,
  [4109] = 2,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(1002), 1,
      aux_sym_expansion_token1,
  [4116] = 2,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(1004), 1,
      aux_sym_expansion_token1,
  [4123] = 2,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(1006), 1,
      aux_sym_expansion_token1,
  [4130] = 2,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(1008), 1,
      aux_sym_expansion_token1,
  [4137] = 2,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(1010), 1,
      anon_sym_LF,
  [4144] = 2,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(1012), 1,
      anon_sym_LF,
  [4151] = 2,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(1014), 1,
      anon_sym_LF,
  [4158] = 2,
    ACTIONS(168), 1,
      sym_line_continuation,
    ACTIONS(1016), 1,
      aux_sym_maintainer_instruction_token2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 98,
  [SMALL_STATE(4)] = 196,
  [SMALL_STATE(5)] = 283,
  [SMALL_STATE(6)] = 314,
  [SMALL_STATE(7)] = 348,
  [SMALL_STATE(8)] = 382,
  [SMALL_STATE(9)] = 413,
  [SMALL_STATE(10)] = 444,
  [SMALL_STATE(11)] = 475,
  [SMALL_STATE(12)] = 503,
  [SMALL_STATE(13)] = 531,
  [SMALL_STATE(14)] = 559,
  [SMALL_STATE(15)] = 587,
  [SMALL_STATE(16)] = 615,
  [SMALL_STATE(17)] = 643,
  [SMALL_STATE(18)] = 673,
  [SMALL_STATE(19)] = 701,
  [SMALL_STATE(20)] = 726,
  [SMALL_STATE(21)] = 755,
  [SMALL_STATE(22)] = 778,
  [SMALL_STATE(23)] = 795,
  [SMALL_STATE(24)] = 820,
  [SMALL_STATE(25)] = 845,
  [SMALL_STATE(26)] = 870,
  [SMALL_STATE(27)] = 893,
  [SMALL_STATE(28)] = 918,
  [SMALL_STATE(29)] = 943,
  [SMALL_STATE(30)] = 968,
  [SMALL_STATE(31)] = 993,
  [SMALL_STATE(32)] = 1018,
  [SMALL_STATE(33)] = 1040,
  [SMALL_STATE(34)] = 1062,
  [SMALL_STATE(35)] = 1086,
  [SMALL_STATE(36)] = 1108,
  [SMALL_STATE(37)] = 1134,
  [SMALL_STATE(38)] = 1156,
  [SMALL_STATE(39)] = 1180,
  [SMALL_STATE(40)] = 1204,
  [SMALL_STATE(41)] = 1224,
  [SMALL_STATE(42)] = 1245,
  [SMALL_STATE(43)] = 1262,
  [SMALL_STATE(44)] = 1283,
  [SMALL_STATE(45)] = 1298,
  [SMALL_STATE(46)] = 1319,
  [SMALL_STATE(47)] = 1334,
  [SMALL_STATE(48)] = 1357,
  [SMALL_STATE(49)] = 1372,
  [SMALL_STATE(50)] = 1387,
  [SMALL_STATE(51)] = 1408,
  [SMALL_STATE(52)] = 1423,
  [SMALL_STATE(53)] = 1444,
  [SMALL_STATE(54)] = 1465,
  [SMALL_STATE(55)] = 1480,
  [SMALL_STATE(56)] = 1495,
  [SMALL_STATE(57)] = 1516,
  [SMALL_STATE(58)] = 1537,
  [SMALL_STATE(59)] = 1555,
  [SMALL_STATE(60)] = 1569,
  [SMALL_STATE(61)] = 1591,
  [SMALL_STATE(62)] = 1605,
  [SMALL_STATE(63)] = 1625,
  [SMALL_STATE(64)] = 1643,
  [SMALL_STATE(65)] = 1663,
  [SMALL_STATE(66)] = 1683,
  [SMALL_STATE(67)] = 1705,
  [SMALL_STATE(68)] = 1719,
  [SMALL_STATE(69)] = 1739,
  [SMALL_STATE(70)] = 1759,
  [SMALL_STATE(71)] = 1781,
  [SMALL_STATE(72)] = 1801,
  [SMALL_STATE(73)] = 1815,
  [SMALL_STATE(74)] = 1835,
  [SMALL_STATE(75)] = 1857,
  [SMALL_STATE(76)] = 1875,
  [SMALL_STATE(77)] = 1893,
  [SMALL_STATE(78)] = 1913,
  [SMALL_STATE(79)] = 1931,
  [SMALL_STATE(80)] = 1951,
  [SMALL_STATE(81)] = 1973,
  [SMALL_STATE(82)] = 1993,
  [SMALL_STATE(83)] = 2013,
  [SMALL_STATE(84)] = 2033,
  [SMALL_STATE(85)] = 2051,
  [SMALL_STATE(86)] = 2071,
  [SMALL_STATE(87)] = 2093,
  [SMALL_STATE(88)] = 2110,
  [SMALL_STATE(89)] = 2127,
  [SMALL_STATE(90)] = 2140,
  [SMALL_STATE(91)] = 2153,
  [SMALL_STATE(92)] = 2166,
  [SMALL_STATE(93)] = 2179,
  [SMALL_STATE(94)] = 2198,
  [SMALL_STATE(95)] = 2215,
  [SMALL_STATE(96)] = 2232,
  [SMALL_STATE(97)] = 2249,
  [SMALL_STATE(98)] = 2262,
  [SMALL_STATE(99)] = 2275,
  [SMALL_STATE(100)] = 2288,
  [SMALL_STATE(101)] = 2301,
  [SMALL_STATE(102)] = 2318,
  [SMALL_STATE(103)] = 2331,
  [SMALL_STATE(104)] = 2348,
  [SMALL_STATE(105)] = 2365,
  [SMALL_STATE(106)] = 2384,
  [SMALL_STATE(107)] = 2400,
  [SMALL_STATE(108)] = 2412,
  [SMALL_STATE(109)] = 2424,
  [SMALL_STATE(110)] = 2436,
  [SMALL_STATE(111)] = 2448,
  [SMALL_STATE(112)] = 2460,
  [SMALL_STATE(113)] = 2476,
  [SMALL_STATE(114)] = 2488,
  [SMALL_STATE(115)] = 2498,
  [SMALL_STATE(116)] = 2510,
  [SMALL_STATE(117)] = 2522,
  [SMALL_STATE(118)] = 2536,
  [SMALL_STATE(119)] = 2552,
  [SMALL_STATE(120)] = 2564,
  [SMALL_STATE(121)] = 2576,
  [SMALL_STATE(122)] = 2590,
  [SMALL_STATE(123)] = 2602,
  [SMALL_STATE(124)] = 2618,
  [SMALL_STATE(125)] = 2630,
  [SMALL_STATE(126)] = 2640,
  [SMALL_STATE(127)] = 2652,
  [SMALL_STATE(128)] = 2664,
  [SMALL_STATE(129)] = 2676,
  [SMALL_STATE(130)] = 2692,
  [SMALL_STATE(131)] = 2704,
  [SMALL_STATE(132)] = 2716,
  [SMALL_STATE(133)] = 2729,
  [SMALL_STATE(134)] = 2742,
  [SMALL_STATE(135)] = 2755,
  [SMALL_STATE(136)] = 2768,
  [SMALL_STATE(137)] = 2781,
  [SMALL_STATE(138)] = 2794,
  [SMALL_STATE(139)] = 2805,
  [SMALL_STATE(140)] = 2816,
  [SMALL_STATE(141)] = 2827,
  [SMALL_STATE(142)] = 2840,
  [SMALL_STATE(143)] = 2853,
  [SMALL_STATE(144)] = 2864,
  [SMALL_STATE(145)] = 2875,
  [SMALL_STATE(146)] = 2886,
  [SMALL_STATE(147)] = 2897,
  [SMALL_STATE(148)] = 2908,
  [SMALL_STATE(149)] = 2919,
  [SMALL_STATE(150)] = 2930,
  [SMALL_STATE(151)] = 2943,
  [SMALL_STATE(152)] = 2956,
  [SMALL_STATE(153)] = 2969,
  [SMALL_STATE(154)] = 2982,
  [SMALL_STATE(155)] = 2995,
  [SMALL_STATE(156)] = 3008,
  [SMALL_STATE(157)] = 3019,
  [SMALL_STATE(158)] = 3032,
  [SMALL_STATE(159)] = 3042,
  [SMALL_STATE(160)] = 3052,
  [SMALL_STATE(161)] = 3062,
  [SMALL_STATE(162)] = 3070,
  [SMALL_STATE(163)] = 3080,
  [SMALL_STATE(164)] = 3088,
  [SMALL_STATE(165)] = 3098,
  [SMALL_STATE(166)] = 3108,
  [SMALL_STATE(167)] = 3118,
  [SMALL_STATE(168)] = 3128,
  [SMALL_STATE(169)] = 3138,
  [SMALL_STATE(170)] = 3148,
  [SMALL_STATE(171)] = 3158,
  [SMALL_STATE(172)] = 3168,
  [SMALL_STATE(173)] = 3178,
  [SMALL_STATE(174)] = 3188,
  [SMALL_STATE(175)] = 3198,
  [SMALL_STATE(176)] = 3208,
  [SMALL_STATE(177)] = 3218,
  [SMALL_STATE(178)] = 3228,
  [SMALL_STATE(179)] = 3238,
  [SMALL_STATE(180)] = 3248,
  [SMALL_STATE(181)] = 3258,
  [SMALL_STATE(182)] = 3266,
  [SMALL_STATE(183)] = 3276,
  [SMALL_STATE(184)] = 3286,
  [SMALL_STATE(185)] = 3296,
  [SMALL_STATE(186)] = 3306,
  [SMALL_STATE(187)] = 3316,
  [SMALL_STATE(188)] = 3326,
  [SMALL_STATE(189)] = 3336,
  [SMALL_STATE(190)] = 3344,
  [SMALL_STATE(191)] = 3354,
  [SMALL_STATE(192)] = 3364,
  [SMALL_STATE(193)] = 3374,
  [SMALL_STATE(194)] = 3384,
  [SMALL_STATE(195)] = 3394,
  [SMALL_STATE(196)] = 3404,
  [SMALL_STATE(197)] = 3414,
  [SMALL_STATE(198)] = 3422,
  [SMALL_STATE(199)] = 3430,
  [SMALL_STATE(200)] = 3437,
  [SMALL_STATE(201)] = 3444,
  [SMALL_STATE(202)] = 3451,
  [SMALL_STATE(203)] = 3458,
  [SMALL_STATE(204)] = 3465,
  [SMALL_STATE(205)] = 3472,
  [SMALL_STATE(206)] = 3479,
  [SMALL_STATE(207)] = 3486,
  [SMALL_STATE(208)] = 3493,
  [SMALL_STATE(209)] = 3500,
  [SMALL_STATE(210)] = 3507,
  [SMALL_STATE(211)] = 3514,
  [SMALL_STATE(212)] = 3521,
  [SMALL_STATE(213)] = 3528,
  [SMALL_STATE(214)] = 3535,
  [SMALL_STATE(215)] = 3542,
  [SMALL_STATE(216)] = 3549,
  [SMALL_STATE(217)] = 3556,
  [SMALL_STATE(218)] = 3563,
  [SMALL_STATE(219)] = 3570,
  [SMALL_STATE(220)] = 3577,
  [SMALL_STATE(221)] = 3584,
  [SMALL_STATE(222)] = 3591,
  [SMALL_STATE(223)] = 3598,
  [SMALL_STATE(224)] = 3605,
  [SMALL_STATE(225)] = 3612,
  [SMALL_STATE(226)] = 3619,
  [SMALL_STATE(227)] = 3626,
  [SMALL_STATE(228)] = 3633,
  [SMALL_STATE(229)] = 3640,
  [SMALL_STATE(230)] = 3647,
  [SMALL_STATE(231)] = 3654,
  [SMALL_STATE(232)] = 3661,
  [SMALL_STATE(233)] = 3668,
  [SMALL_STATE(234)] = 3675,
  [SMALL_STATE(235)] = 3682,
  [SMALL_STATE(236)] = 3689,
  [SMALL_STATE(237)] = 3696,
  [SMALL_STATE(238)] = 3703,
  [SMALL_STATE(239)] = 3710,
  [SMALL_STATE(240)] = 3717,
  [SMALL_STATE(241)] = 3724,
  [SMALL_STATE(242)] = 3731,
  [SMALL_STATE(243)] = 3738,
  [SMALL_STATE(244)] = 3745,
  [SMALL_STATE(245)] = 3752,
  [SMALL_STATE(246)] = 3759,
  [SMALL_STATE(247)] = 3766,
  [SMALL_STATE(248)] = 3773,
  [SMALL_STATE(249)] = 3780,
  [SMALL_STATE(250)] = 3787,
  [SMALL_STATE(251)] = 3794,
  [SMALL_STATE(252)] = 3801,
  [SMALL_STATE(253)] = 3808,
  [SMALL_STATE(254)] = 3815,
  [SMALL_STATE(255)] = 3822,
  [SMALL_STATE(256)] = 3829,
  [SMALL_STATE(257)] = 3836,
  [SMALL_STATE(258)] = 3843,
  [SMALL_STATE(259)] = 3850,
  [SMALL_STATE(260)] = 3857,
  [SMALL_STATE(261)] = 3864,
  [SMALL_STATE(262)] = 3871,
  [SMALL_STATE(263)] = 3878,
  [SMALL_STATE(264)] = 3885,
  [SMALL_STATE(265)] = 3892,
  [SMALL_STATE(266)] = 3899,
  [SMALL_STATE(267)] = 3906,
  [SMALL_STATE(268)] = 3913,
  [SMALL_STATE(269)] = 3920,
  [SMALL_STATE(270)] = 3927,
  [SMALL_STATE(271)] = 3934,
  [SMALL_STATE(272)] = 3941,
  [SMALL_STATE(273)] = 3948,
  [SMALL_STATE(274)] = 3955,
  [SMALL_STATE(275)] = 3962,
  [SMALL_STATE(276)] = 3969,
  [SMALL_STATE(277)] = 3976,
  [SMALL_STATE(278)] = 3983,
  [SMALL_STATE(279)] = 3990,
  [SMALL_STATE(280)] = 3997,
  [SMALL_STATE(281)] = 4004,
  [SMALL_STATE(282)] = 4011,
  [SMALL_STATE(283)] = 4018,
  [SMALL_STATE(284)] = 4025,
  [SMALL_STATE(285)] = 4032,
  [SMALL_STATE(286)] = 4039,
  [SMALL_STATE(287)] = 4046,
  [SMALL_STATE(288)] = 4053,
  [SMALL_STATE(289)] = 4060,
  [SMALL_STATE(290)] = 4067,
  [SMALL_STATE(291)] = 4074,
  [SMALL_STATE(292)] = 4081,
  [SMALL_STATE(293)] = 4088,
  [SMALL_STATE(294)] = 4095,
  [SMALL_STATE(295)] = 4102,
  [SMALL_STATE(296)] = 4109,
  [SMALL_STATE(297)] = 4116,
  [SMALL_STATE(298)] = 4123,
  [SMALL_STATE(299)] = 4130,
  [SMALL_STATE(300)] = 4137,
  [SMALL_STATE(301)] = 4144,
  [SMALL_STATE(302)] = 4151,
  [SMALL_STATE(303)] = 4158,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(159),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(235),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(45),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(27),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(24),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(36),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(80),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(86),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(118),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(151),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(40),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(178),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(227),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(225),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 2),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(168),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(13),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(180),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(42),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_instruction, 2),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 2),
  [206] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 2), SHIFT_REPEAT(195),
  [209] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 2), SHIFT_REPEAT(19),
  [212] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 2), SHIFT_REPEAT(234),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_instruction, 2),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shisho_metavariable, 3),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shisho_metavariable, 3),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_string, 1),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_string, 1),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [255] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(160),
  [258] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(25),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(25),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stopsignal_value, 2),
  [266] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stopsignal_value, 2), SHIFT_REPEAT(185),
  [269] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stopsignal_value, 2), SHIFT_REPEAT(26),
  [272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stopsignal_value, 2), SHIFT_REPEAT(158),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [281] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(170),
  [284] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(28),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(28),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 2),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [310] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(188),
  [313] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(32),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 1),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 1),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat1, 2),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2),
  [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2), SHIFT_REPEAT(303),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [339] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2), SHIFT_REPEAT(187),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2), SHIFT_REPEAT(37),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2),
  [347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2), SHIFT_REPEAT(134),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 2),
  [352] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2), SHIFT_REPEAT(183),
  [355] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2), SHIFT_REPEAT(38),
  [358] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2), SHIFT_REPEAT(214),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_instruction, 2),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_value_repeat1, 2),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_value_repeat1, 2),
  [377] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_tag_value_repeat1, 2), SHIFT_REPEAT(166),
  [380] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_tag_value_repeat1, 2), SHIFT_REPEAT(41),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 1),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 1),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 2),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 2),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 4),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 4),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_tag_value, 1),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_tag_value, 1),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 2, .production_id = 4),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shisho_ellipsis_metavariable, 4),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shisho_ellipsis_metavariable, 4),
  [443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [451] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(171),
  [454] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(63),
  [457] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(162),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2),
  [462] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(64),
  [465] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(64),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_name_or_group, 2),
  [488] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__user_name_or_group, 2), SHIFT_REPEAT(128),
  [491] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__user_name_or_group, 2), SHIFT_REPEAT(180),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_value_repeat1, 2),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_value_repeat1, 2),
  [506] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_digest_value_repeat1, 2), SHIFT_REPEAT(165),
  [509] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_value_repeat1, 2), SHIFT_REPEAT(73),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [520] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_digest_value, 1),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_digest_value, 1),
  [534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [540] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(84),
  [543] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(169),
  [546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [550] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 1),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 2),
  [566] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 2),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 4, .production_id = 15),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2),
  [572] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(164),
  [575] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(94),
  [578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [580] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [584] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [586] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [588] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment_line, 2),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_line, 2),
  [592] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(103),
  [595] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(173),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [600] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(104),
  [603] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(167),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 4, .production_id = 13),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 6),
  [610] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 6),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 2),
  [614] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 2),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_fragment, 1),
  [618] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_fragment, 1),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [624] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2), SHIFT_REPEAT(121),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_pair, 3, .production_id = 10),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_pair, 3, .production_id = 10),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 3, .production_id = 11),
  [639] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 3, .production_id = 11),
  [641] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param, 4, .production_id = 17),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, .production_id = 17),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_name_or_group, 1),
  [647] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__user_name_or_group, 1),
  [649] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [651] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 3),
  [655] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [669] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2),
  [671] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2), SHIFT_REPEAT(47),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [680] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [682] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [684] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [686] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_array_repeat1, 2),
  [690] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_array_repeat1, 2), SHIFT_REPEAT(78),
  [693] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 2),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_tag, 2),
  [697] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_tag, 2),
  [699] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [701] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [751] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 2),
  [763] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 3),
  [767] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 7),
  [771] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 7),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_digest, 2),
  [775] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_digest, 2),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat2, 2),
  [783] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 2), SHIFT_REPEAT(6),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 2, .production_id = 5),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 1),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 2, .production_id = 3),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 2),
  [816] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cross_build_instruction, 2),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_maintainer_instruction, 2),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_instruction, 2),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 2),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_onbuild_instruction, 2),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workdir_instruction, 2),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_volume_instruction, 2),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entrypoint_instruction, 2),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 2, .production_id = 2),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_instruction, 2),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 2),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 3),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [856] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__spaced_env_pair, 3, .production_id = 11),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [866] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [870] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [872] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 2),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 3),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [916] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_instruction, 5),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_instruction, 5),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 4),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [938] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat2, 3),
  [940] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 3),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [944] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anon_comment, 2),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 5, .production_id = 18),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [952] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 4, .production_id = 9),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [960] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [966] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 4, .production_id = 16),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [970] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [976] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 2),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [980] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [984] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 4, .production_id = 14),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [988] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [994] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [998] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [1000] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [1002] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [1004] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [1006] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [1008] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [1010] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 4, .production_id = 12),
  [1012] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_instruction, 4),
  [1014] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_instruction, 4),
  [1016] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_dockerfile(void) {
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
