#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 301
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
      if (eof) ADVANCE(177);
      if (lookahead == '"') ADVANCE(272);
      if (lookahead == '#') ADVANCE(271);
      if (lookahead == '$') ADVANCE(229);
      if (lookahead == ',') ADVANCE(262);
      if (lookahead == '-') ADVANCE(49);
      if (lookahead == ':') ADVANCE(206);
      if (lookahead == '=') ADVANCE(211);
      if (lookahead == '@') ADVANCE(250);
      if (lookahead == '[') ADVANCE(261);
      if (lookahead == '\\') ADVANCE(224);
      if (lookahead == ']') ADVANCE(186);
      if (lookahead == '{') ADVANCE(230);
      if (lookahead == '}') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(174)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(191);
      if (lookahead != 0) ADVANCE(223);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(269);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(269);
      if (lookahead == ' ') ADVANCE(283);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(269);
      if (lookahead == 'U') ADVANCE(173);
      if (lookahead == 'u') ADVANCE(169);
      if (lookahead == 'x') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(286);
      if (lookahead != 0) ADVANCE(284);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(269);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '$') ADVANCE(229);
      if (lookahead == '/') ADVANCE(76);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == '=') ADVANCE(211);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '$') ADVANCE(229);
      if (lookahead == '/') ADVANCE(76);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '$') ADVANCE(229);
      if (lookahead == ':') ADVANCE(206);
      if (lookahead == '=') ADVANCE(211);
      if (lookahead == '@') ADVANCE(250);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '$') ADVANCE(229);
      if (lookahead == ':') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '$') ADVANCE(229);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '$') ADVANCE(229);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(214);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '$') ADVANCE(229);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '$') ADVANCE(229);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '$') ADVANCE(229);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '$') ADVANCE(229);
      if (lookahead == ':') ADVANCE(205);
      if (lookahead == '@') ADVANCE(250);
      if (lookahead == '\\') ADVANCE(242);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '$') ADVANCE(229);
      if (lookahead == ':') ADVANCE(205);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '$') ADVANCE(229);
      if (lookahead == ':') ADVANCE(278);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(282);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '$') ADVANCE(229);
      if (lookahead == ':') ADVANCE(278);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(282);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '$') ADVANCE(229);
      if (lookahead == '@') ADVANCE(250);
      if (lookahead == '\\') ADVANCE(246);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(248);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (lookahead != 0 &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(249);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '$') ADVANCE(229);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '$') ADVANCE(229);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '$') ADVANCE(229);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '$') ADVANCE(229);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '$') ADVANCE(229);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '$') ADVANCE(229);
      if (lookahead == '\\') ADVANCE(242);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(245);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '$') ADVANCE(229);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(282);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '$') ADVANCE(229);
      if (lookahead == '\\') ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (lookahead != 0) ADVANCE(228);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == ':') ADVANCE(205);
      if (lookahead == '@') ADVANCE(250);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '[') ADVANCE(267);
      END_STATE();
    case 31:
      if (lookahead == '\n') SKIP(35)
      if (lookahead == '"') ADVANCE(272);
      if (lookahead == '$') ADVANCE(229);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(273);
      if (lookahead != 0) ADVANCE(274);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(179);
      if (lookahead == '\r') SKIP(32)
      if (lookahead == '$') ADVANCE(229);
      if (lookahead == '\\') ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(287);
      if (lookahead != 0) ADVANCE(228);
      END_STATE();
    case 33:
      if (lookahead == '"') ADVANCE(272);
      if (lookahead == '$') ADVANCE(229);
      if (lookahead == ':') ADVANCE(277);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (lookahead != 0) ADVANCE(282);
      END_STATE();
    case 34:
      if (lookahead == '"') ADVANCE(272);
      if (lookahead == '$') ADVANCE(229);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      END_STATE();
    case 35:
      if (lookahead == '"') ADVANCE(272);
      if (lookahead == '$') ADVANCE(229);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      END_STATE();
    case 36:
      if (lookahead == '#') ADVANCE(271);
      if (lookahead == ':') ADVANCE(265);
      if (lookahead == '[') ADVANCE(261);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (lookahead != 0) ADVANCE(267);
      END_STATE();
    case 37:
      if (lookahead == '$') ADVANCE(229);
      if (lookahead == '-') ADVANCE(49);
      if (lookahead == ':') ADVANCE(226);
      if (lookahead == '\\') ADVANCE(224);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (lookahead != 0) ADVANCE(223);
      END_STATE();
    case 38:
      if (lookahead == '$') ADVANCE(229);
      if (lookahead == '-') ADVANCE(243);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(242);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(245);
      END_STATE();
    case 39:
      if (lookahead == '$') ADVANCE(229);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(191);
      END_STATE();
    case 40:
      if (lookahead == '$') ADVANCE(229);
      if (lookahead == ':') ADVANCE(225);
      if (lookahead == '[') ADVANCE(261);
      if (lookahead == '\\') ADVANCE(224);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(223);
      END_STATE();
    case 41:
      if (lookahead == '$') ADVANCE(229);
      if (lookahead == ':') ADVANCE(225);
      if (lookahead == '\\') ADVANCE(224);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(223);
      END_STATE();
    case 42:
      if (lookahead == '$') ADVANCE(229);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(42)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(214);
      END_STATE();
    case 43:
      if (lookahead == '$') ADVANCE(229);
      if (lookahead == ':') ADVANCE(247);
      if (lookahead == '\\') ADVANCE(246);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      if (lookahead != 0 &&
          lookahead != '@' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(249);
      END_STATE();
    case 44:
      if (lookahead == '$') ADVANCE(229);
      if (lookahead == ':') ADVANCE(251);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 45:
      if (lookahead == '$') ADVANCE(229);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 46:
      if (lookahead == '$') ADVANCE(229);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      END_STATE();
    case 47:
      if (lookahead == '$') ADVANCE(229);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(242);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(245);
      END_STATE();
    case 48:
      if (lookahead == '$') ADVANCE(229);
      if (lookahead == '\\') ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(288);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(48)
      if (lookahead != 0) ADVANCE(228);
      END_STATE();
    case 49:
      if (lookahead == '-') ADVANCE(254);
      END_STATE();
    case 50:
      if (lookahead == '.') ADVANCE(69);
      END_STATE();
    case 51:
      if (lookahead == '.') ADVANCE(190);
      END_STATE();
    case 52:
      if (lookahead == '.') ADVANCE(50);
      END_STATE();
    case 53:
      if (lookahead == '.') ADVANCE(51);
      END_STATE();
    case 54:
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(54)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 55:
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(55)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 56:
      if (lookahead == ':') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(257);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(58)
      if (lookahead != 0) ADVANCE(259);
      END_STATE();
    case 57:
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(87);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(124);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(126);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(149);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(96);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(77);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(78);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(128);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(160);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(104);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(152);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(133);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(57)
      END_STATE();
    case 58:
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(58)
      END_STATE();
    case 59:
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(58)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 60:
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(60)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 61:
      if (lookahead == '=') ADVANCE(211);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(236);
      END_STATE();
    case 62:
      if (lookahead == 'E') ADVANCE(216);
      END_STATE();
    case 63:
      if (lookahead == 'N') ADVANCE(62);
      END_STATE();
    case 64:
      if (lookahead == 'O') ADVANCE(63);
      END_STATE();
    case 65:
      if (lookahead == '[') ADVANCE(181);
      END_STATE();
    case 66:
      if (lookahead == '[') ADVANCE(180);
      END_STATE();
    case 67:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '{') ADVANCE(230);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(67)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 68:
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(233);
      END_STATE();
    case 69:
      if (lookahead == ']') ADVANCE(187);
      END_STATE();
    case 70:
      if (lookahead == '_') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 71:
      if (lookahead == '_') ADVANCE(84);
      END_STATE();
    case 72:
      if (lookahead == 'c') ADVANCE(74);
      END_STATE();
    case 73:
      if (lookahead == 'd') ADVANCE(75);
      END_STATE();
    case 74:
      if (lookahead == 'p') ADVANCE(239);
      END_STATE();
    case 75:
      if (lookahead == 'p') ADVANCE(240);
      END_STATE();
    case 76:
      if (lookahead == 't') ADVANCE(72);
      if (lookahead == 'u') ADVANCE(73);
      END_STATE();
    case 77:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 78:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 79:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(115);
      END_STATE();
    case 80:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(118);
      END_STATE();
    case 81:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 82:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(161);
      END_STATE();
    case 83:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(99);
      END_STATE();
    case 84:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(163);
      END_STATE();
    case 85:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(113);
      END_STATE();
    case 86:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(105);
      END_STATE();
    case 87:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(88);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 88:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(200);
      END_STATE();
    case 89:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(196);
      END_STATE();
    case 90:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(212);
      END_STATE();
    case 91:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(222);
      END_STATE();
    case 92:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(109);
      END_STATE();
    case 93:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 94:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 95:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 96:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 97:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 98:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 99:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 100:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 101:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(209);
      END_STATE();
    case 102:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(131);
      END_STATE();
    case 103:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(86);
      END_STATE();
    case 104:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(97);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(137);
      END_STATE();
    case 105:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(95);
      END_STATE();
    case 106:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 107:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(129);
      END_STATE();
    case 108:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(132);
      END_STATE();
    case 109:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(146);
      END_STATE();
    case 110:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(130);
      END_STATE();
    case 111:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 112:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 113:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(215);
      END_STATE();
    case 114:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(92);
      END_STATE();
    case 115:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(156);
      END_STATE();
    case 116:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(197);
      END_STATE();
    case 117:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(217);
      END_STATE();
    case 118:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(213);
      END_STATE();
    case 119:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(162);
      END_STATE();
    case 120:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(90);
      END_STATE();
    case 121:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(91);
      END_STATE();
    case 122:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(117);
      END_STATE();
    case 123:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(192);
      END_STATE();
    case 124:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(89);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(140);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(136);
      END_STATE();
    case 125:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(94);
      END_STATE();
    case 126:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(158);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(142);
      END_STATE();
    case 127:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(195);
      END_STATE();
    case 128:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 129:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(159);
      END_STATE();
    case 130:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(157);
      END_STATE();
    case 131:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 132:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 133:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 134:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(123);
      END_STATE();
    case 135:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 136:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(153);
      END_STATE();
    case 137:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 138:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(155);
      END_STATE();
    case 139:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 140:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(164);
      END_STATE();
    case 141:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(154);
      END_STATE();
    case 142:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(138);
      END_STATE();
    case 143:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(139);
      END_STATE();
    case 144:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 145:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(204);
      END_STATE();
    case 146:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(208);
      END_STATE();
    case 147:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(218);
      END_STATE();
    case 148:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(165);
      END_STATE();
    case 149:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 150:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(71);
      END_STATE();
    case 151:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(193);
      END_STATE();
    case 152:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(98);
      END_STATE();
    case 153:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(150);
      END_STATE();
    case 154:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(106);
      END_STATE();
    case 155:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(93);
      END_STATE();
    case 156:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(103);
      END_STATE();
    case 157:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(202);
      END_STATE();
    case 158:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(148);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(199);
      END_STATE();
    case 159:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(81);
      END_STATE();
    case 160:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(127);
      END_STATE();
    case 161:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(111);
      END_STATE();
    case 162:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(125);
      END_STATE();
    case 163:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(112);
      END_STATE();
    case 164:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(201);
      END_STATE();
    case 165:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(143);
      END_STATE();
    case 166:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(284);
      END_STATE();
    case 167:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(166);
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
      if (eof) ADVANCE(177);
      if (lookahead == '"') ADVANCE(272);
      if (lookahead == '#') ADVANCE(271);
      if (lookahead == '$') ADVANCE(229);
      if (lookahead == ',') ADVANCE(262);
      if (lookahead == '-') ADVANCE(49);
      if (lookahead == ':') ADVANCE(225);
      if (lookahead == '[') ADVANCE(261);
      if (lookahead == '\\') ADVANCE(224);
      if (lookahead == ']') ADVANCE(186);
      if (lookahead == '{') ADVANCE(230);
      if (lookahead == '}') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(174)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(191);
      if (lookahead != 0) ADVANCE(223);
      END_STATE();
    case 175:
      if (eof) ADVANCE(177);
      if (lookahead == '"') ADVANCE(272);
      if (lookahead == '#') ADVANCE(289);
      if (lookahead == '$') ADVANCE(229);
      if (lookahead == ',') ADVANCE(262);
      if (lookahead == '-') ADVANCE(49);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == '=') ADVANCE(211);
      if (lookahead == 'N') ADVANCE(64);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(186);
      if (lookahead == '}') ADVANCE(234);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(87);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(124);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(126);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(149);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(96);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(77);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(78);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(128);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(160);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(104);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(152);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(133);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(176)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      END_STATE();
    case 176:
      if (eof) ADVANCE(177);
      if (lookahead == '"') ADVANCE(272);
      if (lookahead == '#') ADVANCE(289);
      if (lookahead == '$') ADVANCE(229);
      if (lookahead == ',') ADVANCE(262);
      if (lookahead == '-') ADVANCE(49);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == 'N') ADVANCE(64);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(186);
      if (lookahead == '}') ADVANCE(234);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(87);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(124);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(126);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(149);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(96);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(77);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(78);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(128);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(160);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(104);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(152);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(133);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(176)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(178);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(179);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(287);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_COLON_LBRACK);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_COLON_LBRACK);
      if (lookahead == '.') ADVANCE(52);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_COLON_LBRACK);
      if (lookahead == '.') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(267);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_COLON_LBRACK);
      if (lookahead == '.') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(282);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_COLON_LBRACK);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(282);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_COLON_LBRACK);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(259);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_shisho_ellipsis);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_shisho_ellipsis);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(282);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_shisho_ellipsis);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(267);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_shisho_metavariable_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_from_instruction_token1);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_from_instruction_token2);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_from_instruction_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(245);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_run_instruction_token1);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_cmd_instruction_token1);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_label_instruction_token1);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_expose_instruction_token1);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_env_instruction_token1);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_add_instruction_token1);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_copy_instruction_token1);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_entrypoint_instruction_token1);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_volume_instruction_token1);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_user_instruction_token1);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '[') ADVANCE(181);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym__user_name_or_group_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_workdir_instruction_token1);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_arg_instruction_token1);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_arg_instruction_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_onbuild_instruction_token1);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token1);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym__stopsignal_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(214);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_healthcheck_instruction_token1);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_NONE);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_shell_instruction_token1);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token1);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead == '\n') ADVANCE(269);
      if (lookahead != 0) ADVANCE(221);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead == '\\') ADVANCE(219);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(221);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(221);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_cross_build_instruction_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_path_token1);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '\n') ADVANCE(269);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '[') ADVANCE(181);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '[') ADVANCE(180);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead == '\n') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(228);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(228);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(233);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(233);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(233);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym__spaced_env_pair_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(236);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym__env_key_token1);
      if (lookahead == '_') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_expose_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_SLASHtcp);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_SLASHudp);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_label_pair_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead == '\n') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(245);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead == '-') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(245);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(245);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(245);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_image_tag_value_token1);
      if (lookahead == '\n') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(249);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_image_tag_value_token1);
      if (lookahead == '[') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@' &&
          lookahead != ']') ADVANCE(249);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_image_tag_value_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(249);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_image_tag_value_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(249);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_image_digest_value_token1);
      if (lookahead == '[') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_image_digest_value_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_image_digest_value_token1);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(245);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_param_name);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_param_value);
      if (lookahead == '\n') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(259);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_param_value);
      if (lookahead == '[') ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(259);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_param_value);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(259);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_image_alias_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead == '.') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(267);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead == '.') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(267);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead == '[') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(267);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead == ']') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(267);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(267);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token2);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_line_continuation);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_line_continuation);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(233);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(274);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(274);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '.') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(282);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '.') ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(282);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '[') ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(282);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '[') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(282);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == ']') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(282);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '_') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(282);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(282);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(282);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(284);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(285);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym__non_newline_whitespace);
      if (lookahead == '\n') ADVANCE(179);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(287);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym__non_newline_whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(288);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(289);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 175},
  [2] = {.lex_state = 175},
  [3] = {.lex_state = 175},
  [4] = {.lex_state = 57},
  [5] = {.lex_state = 175},
  [6] = {.lex_state = 36},
  [7] = {.lex_state = 36},
  [8] = {.lex_state = 38},
  [9] = {.lex_state = 36},
  [10] = {.lex_state = 36},
  [11] = {.lex_state = 36},
  [12] = {.lex_state = 175},
  [13] = {.lex_state = 33},
  [14] = {.lex_state = 33},
  [15] = {.lex_state = 33},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 33},
  [19] = {.lex_state = 10},
  [20] = {.lex_state = 54},
  [21] = {.lex_state = 40},
  [22] = {.lex_state = 16},
  [23] = {.lex_state = 175},
  [24] = {.lex_state = 16},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 17},
  [27] = {.lex_state = 175},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 10},
  [30] = {.lex_state = 17},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 47},
  [33] = {.lex_state = 14},
  [34] = {.lex_state = 36},
  [35] = {.lex_state = 37},
  [36] = {.lex_state = 27},
  [37] = {.lex_state = 175},
  [38] = {.lex_state = 37},
  [39] = {.lex_state = 14},
  [40] = {.lex_state = 27},
  [41] = {.lex_state = 42},
  [42] = {.lex_state = 18},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 45},
  [46] = {.lex_state = 17},
  [47] = {.lex_state = 18},
  [48] = {.lex_state = 175},
  [49] = {.lex_state = 45},
  [50] = {.lex_state = 55},
  [51] = {.lex_state = 17},
  [52] = {.lex_state = 175},
  [53] = {.lex_state = 41},
  [54] = {.lex_state = 16},
  [55] = {.lex_state = 16},
  [56] = {.lex_state = 43},
  [57] = {.lex_state = 44},
  [58] = {.lex_state = 8},
  [59] = {.lex_state = 19},
  [60] = {.lex_state = 31},
  [61] = {.lex_state = 31},
  [62] = {.lex_state = 175},
  [63] = {.lex_state = 5},
  [64] = {.lex_state = 175},
  [65] = {.lex_state = 39},
  [66] = {.lex_state = 25},
  [67] = {.lex_state = 37},
  [68] = {.lex_state = 31},
  [69] = {.lex_state = 37},
  [70] = {.lex_state = 37},
  [71] = {.lex_state = 37},
  [72] = {.lex_state = 31},
  [73] = {.lex_state = 25},
  [74] = {.lex_state = 37},
  [75] = {.lex_state = 19},
  [76] = {.lex_state = 14},
  [77] = {.lex_state = 31},
  [78] = {.lex_state = 15},
  [79] = {.lex_state = 15},
  [80] = {.lex_state = 39},
  [81] = {.lex_state = 32},
  [82] = {.lex_state = 39},
  [83] = {.lex_state = 28},
  [84] = {.lex_state = 32},
  [85] = {.lex_state = 37},
  [86] = {.lex_state = 31},
  [87] = {.lex_state = 32},
  [88] = {.lex_state = 14},
  [89] = {.lex_state = 37},
  [90] = {.lex_state = 31},
  [91] = {.lex_state = 36},
  [92] = {.lex_state = 26},
  [93] = {.lex_state = 5},
  [94] = {.lex_state = 48},
  [95] = {.lex_state = 48},
  [96] = {.lex_state = 10},
  [97] = {.lex_state = 26},
  [98] = {.lex_state = 5},
  [99] = {.lex_state = 23},
  [100] = {.lex_state = 48},
  [101] = {.lex_state = 23},
  [102] = {.lex_state = 10},
  [103] = {.lex_state = 18},
  [104] = {.lex_state = 26},
  [105] = {.lex_state = 10},
  [106] = {.lex_state = 10},
  [107] = {.lex_state = 18},
  [108] = {.lex_state = 10},
  [109] = {.lex_state = 10},
  [110] = {.lex_state = 31},
  [111] = {.lex_state = 7},
  [112] = {.lex_state = 19},
  [113] = {.lex_state = 27},
  [114] = {.lex_state = 31},
  [115] = {.lex_state = 27},
  [116] = {.lex_state = 15},
  [117] = {.lex_state = 27},
  [118] = {.lex_state = 5},
  [119] = {.lex_state = 30},
  [120] = {.lex_state = 5},
  [121] = {.lex_state = 19},
  [122] = {.lex_state = 175},
  [123] = {.lex_state = 5},
  [124] = {.lex_state = 30},
  [125] = {.lex_state = 25},
  [126] = {.lex_state = 25},
  [127] = {.lex_state = 32},
  [128] = {.lex_state = 32},
  [129] = {.lex_state = 27},
  [130] = {.lex_state = 27},
  [131] = {.lex_state = 5},
  [132] = {.lex_state = 175},
  [133] = {.lex_state = 175},
  [134] = {.lex_state = 47},
  [135] = {.lex_state = 59},
  [136] = {.lex_state = 26},
  [137] = {.lex_state = 26},
  [138] = {.lex_state = 59},
  [139] = {.lex_state = 56},
  [140] = {.lex_state = 48},
  [141] = {.lex_state = 32},
  [142] = {.lex_state = 60},
  [143] = {.lex_state = 32},
  [144] = {.lex_state = 48},
  [145] = {.lex_state = 37},
  [146] = {.lex_state = 7},
  [147] = {.lex_state = 56},
  [148] = {.lex_state = 47},
  [149] = {.lex_state = 37},
  [150] = {.lex_state = 59},
  [151] = {.lex_state = 32},
  [152] = {.lex_state = 56},
  [153] = {.lex_state = 23},
  [154] = {.lex_state = 47},
  [155] = {.lex_state = 23},
  [156] = {.lex_state = 175},
  [157] = {.lex_state = 67},
  [158] = {.lex_state = 5},
  [159] = {.lex_state = 175},
  [160] = {.lex_state = 175},
  [161] = {.lex_state = 67},
  [162] = {.lex_state = 5},
  [163] = {.lex_state = 7},
  [164] = {.lex_state = 7},
  [165] = {.lex_state = 175},
  [166] = {.lex_state = 67},
  [167] = {.lex_state = 67},
  [168] = {.lex_state = 67},
  [169] = {.lex_state = 7},
  [170] = {.lex_state = 67},
  [171] = {.lex_state = 67},
  [172] = {.lex_state = 67},
  [173] = {.lex_state = 67},
  [174] = {.lex_state = 67},
  [175] = {.lex_state = 67},
  [176] = {.lex_state = 67},
  [177] = {.lex_state = 39},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 39},
  [180] = {.lex_state = 14},
  [181] = {.lex_state = 39},
  [182] = {.lex_state = 7},
  [183] = {.lex_state = 39},
  [184] = {.lex_state = 7},
  [185] = {.lex_state = 39},
  [186] = {.lex_state = 39},
  [187] = {.lex_state = 39},
  [188] = {.lex_state = 61},
  [189] = {.lex_state = 39},
  [190] = {.lex_state = 32},
  [191] = {.lex_state = 32},
  [192] = {.lex_state = 67},
  [193] = {.lex_state = 61},
  [194] = {.lex_state = 5},
  [195] = {.lex_state = 5},
  [196] = {.lex_state = 39},
  [197] = {.lex_state = 5},
  [198] = {.lex_state = 5},
  [199] = {.lex_state = 48},
  [200] = {.lex_state = 5},
  [201] = {.lex_state = 220},
  [202] = {.lex_state = 220},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 39},
  [205] = {.lex_state = 5},
  [206] = {.lex_state = 5},
  [207] = {.lex_state = 5},
  [208] = {.lex_state = 175},
  [209] = {.lex_state = 5},
  [210] = {.lex_state = 5},
  [211] = {.lex_state = 5},
  [212] = {.lex_state = 5},
  [213] = {.lex_state = 5},
  [214] = {.lex_state = 5},
  [215] = {.lex_state = 5},
  [216] = {.lex_state = 5},
  [217] = {.lex_state = 5},
  [218] = {.lex_state = 5},
  [219] = {.lex_state = 5},
  [220] = {.lex_state = 175},
  [221] = {.lex_state = 5},
  [222] = {.lex_state = 39},
  [223] = {.lex_state = 175},
  [224] = {.lex_state = 5},
  [225] = {.lex_state = 175},
  [226] = {.lex_state = 220},
  [227] = {.lex_state = 5},
  [228] = {.lex_state = 175},
  [229] = {.lex_state = 5},
  [230] = {.lex_state = 175},
  [231] = {.lex_state = 175},
  [232] = {.lex_state = 175},
  [233] = {.lex_state = 5},
  [234] = {.lex_state = 48},
  [235] = {.lex_state = 175},
  [236] = {.lex_state = 48},
  [237] = {.lex_state = 175},
  [238] = {.lex_state = 175},
  [239] = {.lex_state = 175},
  [240] = {.lex_state = 175},
  [241] = {.lex_state = 175},
  [242] = {.lex_state = 175},
  [243] = {.lex_state = 175},
  [244] = {.lex_state = 5},
  [245] = {.lex_state = 175},
  [246] = {.lex_state = 175},
  [247] = {.lex_state = 175},
  [248] = {.lex_state = 175},
  [249] = {.lex_state = 175},
  [250] = {.lex_state = 175},
  [251] = {.lex_state = 175},
  [252] = {.lex_state = 68},
  [253] = {.lex_state = 175},
  [254] = {.lex_state = 175},
  [255] = {.lex_state = 175},
  [256] = {.lex_state = 175},
  [257] = {.lex_state = 175},
  [258] = {.lex_state = 5},
  [259] = {.lex_state = 175},
  [260] = {.lex_state = 5},
  [261] = {.lex_state = 175},
  [262] = {.lex_state = 5},
  [263] = {.lex_state = 175},
  [264] = {.lex_state = 5},
  [265] = {.lex_state = 175},
  [266] = {.lex_state = 5},
  [267] = {.lex_state = 39},
  [268] = {.lex_state = 39},
  [269] = {.lex_state = 68},
  [270] = {.lex_state = 175},
  [271] = {.lex_state = 5},
  [272] = {.lex_state = 39},
  [273] = {.lex_state = 39},
  [274] = {.lex_state = 68},
  [275] = {.lex_state = 175},
  [276] = {.lex_state = 5},
  [277] = {.lex_state = 39},
  [278] = {.lex_state = 39},
  [279] = {.lex_state = 68},
  [280] = {.lex_state = 175},
  [281] = {.lex_state = 39},
  [282] = {.lex_state = 39},
  [283] = {.lex_state = 68},
  [284] = {.lex_state = 5},
  [285] = {.lex_state = 39},
  [286] = {.lex_state = 39},
  [287] = {.lex_state = 68},
  [288] = {.lex_state = 48},
  [289] = {.lex_state = 39},
  [290] = {.lex_state = 68},
  [291] = {.lex_state = 68},
  [292] = {.lex_state = 68},
  [293] = {.lex_state = 68},
  [294] = {.lex_state = 68},
  [295] = {.lex_state = 68},
  [296] = {.lex_state = 68},
  [297] = {.lex_state = 48},
  [298] = {.lex_state = 39},
  [299] = {.lex_state = 5},
  [300] = {.lex_state = 175},
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
    [sym_source_file] = STATE(203),
    [sym_shisho_metavariable] = STATE(217),
    [sym_shisho_ellipsis_metavariable] = STATE(217),
    [sym__instruction] = STATE(217),
    [sym_from_instruction] = STATE(217),
    [sym_run_instruction] = STATE(217),
    [sym_cmd_instruction] = STATE(217),
    [sym_label_instruction] = STATE(217),
    [sym_expose_instruction] = STATE(217),
    [sym_env_instruction] = STATE(217),
    [sym_add_instruction] = STATE(217),
    [sym_copy_instruction] = STATE(217),
    [sym_entrypoint_instruction] = STATE(217),
    [sym_volume_instruction] = STATE(217),
    [sym_user_instruction] = STATE(217),
    [sym_workdir_instruction] = STATE(217),
    [sym_arg_instruction] = STATE(217),
    [sym_onbuild_instruction] = STATE(217),
    [sym_stopsignal_instruction] = STATE(217),
    [sym_healthcheck_instruction] = STATE(217),
    [sym_shell_instruction] = STATE(217),
    [sym_maintainer_instruction] = STATE(217),
    [sym_cross_build_instruction] = STATE(217),
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
    STATE(217), 22,
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
    STATE(217), 22,
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
    STATE(266), 21,
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
    STATE(119), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(224), 1,
      sym__anon_comment,
    STATE(7), 2,
      sym__comment_line,
      aux_sym_shell_command_repeat1,
    STATE(227), 3,
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
    STATE(119), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(224), 1,
      sym__anon_comment,
    STATE(34), 2,
      sym__comment_line,
      aux_sym_shell_command_repeat1,
    STATE(210), 3,
      sym_shisho_metavariable,
      sym_shisho_ellipsis_metavariable,
      sym_shell_fragment,
  [382] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(132), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(134), 1,
      anon_sym_DOLLAR,
    ACTIONS(136), 1,
      aux_sym_image_name_token1,
    ACTIONS(138), 1,
      anon_sym_DASH_DASH,
    STATE(169), 1,
      sym_image_spec,
    STATE(32), 2,
      sym_shisho_ellipsis_metavariable,
      sym_param,
    STATE(33), 2,
      sym_expansion,
      aux_sym_image_name_repeat1,
    STATE(83), 2,
      sym_shisho_metavariable,
      sym_image_name,
  [413] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(120), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(124), 1,
      aux_sym_shell_fragment_token1,
    ACTIONS(126), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(140), 1,
      sym_shisho_ellipsis,
    ACTIONS(142), 1,
      anon_sym_LBRACK,
    STATE(119), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(229), 2,
      sym_string_array,
      sym_shell_command,
    STATE(194), 3,
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
    ACTIONS(140), 1,
      sym_shisho_ellipsis,
    ACTIONS(142), 1,
      anon_sym_LBRACK,
    STATE(119), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(200), 2,
      sym_string_array,
      sym_shell_command,
    STATE(194), 3,
      sym_shisho_metavariable,
      sym_shisho_ellipsis_metavariable,
      sym_shell_fragment,
  [475] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(120), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(124), 1,
      aux_sym_shell_fragment_token1,
    ACTIONS(126), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(140), 1,
      sym_shisho_ellipsis,
    ACTIONS(142), 1,
      anon_sym_LBRACK,
    STATE(119), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(284), 2,
      sym_string_array,
      sym_shell_command,
    STATE(194), 3,
      sym_shisho_metavariable,
      sym_shisho_ellipsis_metavariable,
      sym_shell_fragment,
  [506] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(15), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(144), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(146), 1,
      sym_shisho_ellipsis,
    ACTIONS(148), 1,
      anon_sym_NONE,
    ACTIONS(150), 1,
      anon_sym_DASH_DASH,
    STATE(264), 1,
      sym_cmd_instruction,
    STATE(23), 4,
      sym_shisho_metavariable,
      sym_shisho_ellipsis_metavariable,
      sym_param,
      aux_sym_healthcheck_instruction_repeat1,
  [534] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(152), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(154), 1,
      anon_sym_DOLLAR,
    ACTIONS(156), 1,
      anon_sym_DQUOTE,
    ACTIONS(158), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(160), 1,
      anon_sym_BSLASH,
    STATE(30), 2,
      sym_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(130), 3,
      sym_shisho_metavariable,
      sym_double_quoted_string,
      sym_unquoted_string,
  [562] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(156), 1,
      anon_sym_DQUOTE,
    ACTIONS(162), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(164), 1,
      anon_sym_DOLLAR,
    ACTIONS(166), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(168), 1,
      anon_sym_BSLASH,
    STATE(73), 2,
      sym_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(213), 3,
      sym_shisho_metavariable,
      sym_double_quoted_string,
      sym_unquoted_string,
  [590] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(156), 1,
      anon_sym_DQUOTE,
    ACTIONS(162), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(164), 1,
      anon_sym_DOLLAR,
    ACTIONS(166), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(168), 1,
      anon_sym_BSLASH,
    STATE(73), 2,
      sym_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(219), 3,
      sym_shisho_metavariable,
      sym_double_quoted_string,
      sym_unquoted_string,
  [618] = 8,
    ACTIONS(170), 1,
      anon_sym_LF,
    ACTIONS(172), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(174), 1,
      sym_shisho_ellipsis,
    ACTIONS(176), 1,
      anon_sym_DOLLAR,
    ACTIONS(178), 1,
      aux_sym_expose_port_token1,
    ACTIONS(180), 1,
      sym_line_continuation,
    STATE(93), 1,
      sym_shisho_metavariable,
    STATE(17), 4,
      sym_shisho_ellipsis_metavariable,
      sym_expansion,
      sym_expose_port,
      aux_sym_expose_instruction_repeat1,
  [646] = 8,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(182), 1,
      anon_sym_LF,
    ACTIONS(184), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(187), 1,
      sym_shisho_ellipsis,
    ACTIONS(190), 1,
      anon_sym_DOLLAR,
    ACTIONS(193), 1,
      aux_sym_expose_port_token1,
    STATE(93), 1,
      sym_shisho_metavariable,
    STATE(17), 4,
      sym_shisho_ellipsis_metavariable,
      sym_expansion,
      sym_expose_port,
      aux_sym_expose_instruction_repeat1,
  [674] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(196), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(198), 1,
      anon_sym_DOLLAR,
    ACTIONS(200), 1,
      anon_sym_DQUOTE,
    ACTIONS(202), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(204), 1,
      anon_sym_BSLASH,
    STATE(24), 2,
      sym_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(131), 3,
      sym_shisho_metavariable,
      sym_double_quoted_string,
      sym_unquoted_string,
  [702] = 6,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(206), 1,
      anon_sym_LF,
    ACTIONS(208), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(212), 1,
      anon_sym_DOLLAR,
    ACTIONS(210), 2,
      sym_shisho_ellipsis,
      aux_sym__stopsignal_value_token1,
    STATE(29), 4,
      sym_shisho_metavariable,
      sym_shisho_ellipsis_metavariable,
      aux_sym__stopsignal_value,
      sym_expansion,
  [725] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(214), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(216), 1,
      sym_shisho_ellipsis,
    ACTIONS(218), 1,
      aux_sym__env_key_token1,
    STATE(299), 1,
      sym__spaced_env_pair,
    STATE(193), 2,
      sym_shisho_metavariable,
      sym__env_key,
    STATE(25), 3,
      sym_shisho_ellipsis_metavariable,
      sym_env_pair,
      aux_sym_env_instruction_repeat1,
  [750] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(142), 1,
      anon_sym_LBRACK,
    ACTIONS(220), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(222), 1,
      sym_shisho_ellipsis,
    ACTIONS(224), 1,
      aux_sym_path_token1,
    ACTIONS(226), 1,
      anon_sym_DOLLAR,
    STATE(87), 1,
      sym_expansion,
    STATE(276), 1,
      sym_string_array,
    STATE(143), 2,
      sym_shisho_ellipsis_metavariable,
      sym_path,
  [779] = 7,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(228), 1,
      anon_sym_LF,
    ACTIONS(232), 1,
      anon_sym_DOLLAR,
    ACTIONS(235), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(238), 1,
      anon_sym_BSLASH,
    STATE(22), 2,
      sym_expansion,
      aux_sym_unquoted_string_repeat1,
    ACTIONS(230), 3,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      aux_sym__env_key_token1,
  [804] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(15), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(144), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(150), 1,
      anon_sym_DASH_DASH,
    ACTIONS(241), 1,
      sym_shisho_ellipsis,
    STATE(233), 1,
      sym_cmd_instruction,
    STATE(37), 4,
      sym_shisho_metavariable,
      sym_shisho_ellipsis_metavariable,
      sym_param,
      aux_sym_healthcheck_instruction_repeat1,
  [829] = 7,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(243), 1,
      anon_sym_LF,
    ACTIONS(247), 1,
      anon_sym_DOLLAR,
    ACTIONS(249), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(251), 1,
      anon_sym_BSLASH,
    STATE(22), 2,
      sym_expansion,
      aux_sym_unquoted_string_repeat1,
    ACTIONS(245), 3,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      aux_sym__env_key_token1,
  [854] = 7,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(253), 1,
      anon_sym_LF,
    ACTIONS(255), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(257), 1,
      sym_shisho_ellipsis,
    ACTIONS(259), 1,
      aux_sym__env_key_token1,
    STATE(240), 2,
      sym_shisho_metavariable,
      sym__env_key,
    STATE(31), 3,
      sym_shisho_ellipsis_metavariable,
      sym_env_pair,
      aux_sym_env_instruction_repeat1,
  [879] = 7,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(228), 1,
      anon_sym_LF,
    ACTIONS(261), 1,
      anon_sym_DOLLAR,
    ACTIONS(264), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(267), 1,
      anon_sym_BSLASH,
    STATE(26), 2,
      sym_expansion,
      aux_sym_unquoted_string_repeat1,
    ACTIONS(230), 3,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      aux_sym_label_pair_token1,
  [904] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(172), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(270), 1,
      sym_shisho_ellipsis,
    ACTIONS(272), 1,
      anon_sym_DOLLAR,
    ACTIONS(274), 1,
      aux_sym_expose_port_token1,
    STATE(93), 1,
      sym_shisho_metavariable,
    STATE(16), 4,
      sym_shisho_ellipsis_metavariable,
      sym_expansion,
      sym_expose_port,
      aux_sym_expose_instruction_repeat1,
  [929] = 3,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(276), 3,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_AT,
    ACTIONS(278), 6,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      aux_sym_from_instruction_token2,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [946] = 6,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(280), 1,
      anon_sym_LF,
    ACTIONS(282), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(288), 1,
      anon_sym_DOLLAR,
    ACTIONS(285), 2,
      sym_shisho_ellipsis,
      aux_sym__stopsignal_value_token1,
    STATE(29), 4,
      sym_shisho_metavariable,
      sym_shisho_ellipsis_metavariable,
      aux_sym__stopsignal_value,
      sym_expansion,
  [969] = 7,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(243), 1,
      anon_sym_LF,
    ACTIONS(291), 1,
      anon_sym_DOLLAR,
    ACTIONS(293), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(295), 1,
      anon_sym_BSLASH,
    STATE(26), 2,
      sym_expansion,
      aux_sym_unquoted_string_repeat1,
    ACTIONS(245), 3,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      aux_sym_label_pair_token1,
  [994] = 7,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(297), 1,
      anon_sym_LF,
    ACTIONS(299), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(302), 1,
      sym_shisho_ellipsis,
    ACTIONS(305), 1,
      aux_sym__env_key_token1,
    STATE(240), 2,
      sym_shisho_metavariable,
      sym__env_key,
    STATE(31), 3,
      sym_shisho_ellipsis_metavariable,
      sym_env_pair,
      aux_sym_env_instruction_repeat1,
  [1019] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(116), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(134), 1,
      anon_sym_DOLLAR,
    ACTIONS(136), 1,
      aux_sym_image_name_token1,
    STATE(163), 1,
      sym_image_spec,
    STATE(33), 2,
      sym_expansion,
      aux_sym_image_name_repeat1,
    STATE(83), 2,
      sym_shisho_metavariable,
      sym_image_name,
  [1043] = 6,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(310), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(312), 1,
      anon_sym_DOLLAR,
    ACTIONS(314), 1,
      aux_sym_image_name_token1,
    STATE(39), 2,
      sym_expansion,
      aux_sym_image_name_repeat1,
    ACTIONS(308), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [1065] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(318), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(320), 1,
      anon_sym_POUND,
    STATE(224), 1,
      sym__anon_comment,
    STATE(34), 2,
      sym__comment_line,
      aux_sym_shell_command_repeat1,
    ACTIONS(316), 3,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      aux_sym_shell_fragment_token1,
  [1087] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(323), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(325), 1,
      aux_sym_path_token1,
    ACTIONS(327), 1,
      anon_sym_DOLLAR,
    ACTIONS(329), 1,
      anon_sym_DASH_DASH,
    STATE(71), 1,
      sym_param,
    STATE(95), 1,
      sym_expansion,
    STATE(288), 2,
      sym_shisho_metavariable,
      sym_path,
  [1113] = 7,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(331), 1,
      anon_sym_LF,
    ACTIONS(333), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(336), 1,
      sym_shisho_ellipsis,
    ACTIONS(339), 1,
      aux_sym_label_pair_token1,
    STATE(300), 1,
      sym_shisho_metavariable,
    STATE(36), 3,
      sym_shisho_ellipsis_metavariable,
      sym_label_pair,
      aux_sym_label_instruction_repeat1,
  [1137] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(342), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(345), 1,
      sym_shisho_ellipsis,
    ACTIONS(348), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(350), 1,
      anon_sym_DASH_DASH,
    STATE(37), 4,
      sym_shisho_metavariable,
      sym_shisho_ellipsis_metavariable,
      sym_param,
      aux_sym_healthcheck_instruction_repeat1,
  [1159] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(323), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(325), 1,
      aux_sym_path_token1,
    ACTIONS(327), 1,
      anon_sym_DOLLAR,
    ACTIONS(329), 1,
      anon_sym_DASH_DASH,
    STATE(69), 1,
      sym_param,
    STATE(95), 1,
      sym_expansion,
    STATE(297), 2,
      sym_shisho_metavariable,
      sym_path,
  [1185] = 6,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(355), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(357), 1,
      anon_sym_DOLLAR,
    ACTIONS(360), 1,
      aux_sym_image_name_token1,
    STATE(39), 2,
      sym_expansion,
      aux_sym_image_name_repeat1,
    ACTIONS(353), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [1207] = 7,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(363), 1,
      anon_sym_LF,
    ACTIONS(365), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(367), 1,
      sym_shisho_ellipsis,
    ACTIONS(369), 1,
      aux_sym_label_pair_token1,
    STATE(300), 1,
      sym_shisho_metavariable,
    STATE(36), 3,
      sym_shisho_ellipsis_metavariable,
      sym_label_pair,
      aux_sym_label_instruction_repeat1,
  [1231] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(208), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(373), 1,
      anon_sym_DOLLAR,
    ACTIONS(371), 2,
      sym_shisho_ellipsis,
      aux_sym__stopsignal_value_token1,
    STATE(19), 4,
      sym_shisho_metavariable,
      sym_shisho_ellipsis_metavariable,
      aux_sym__stopsignal_value,
      sym_expansion,
  [1251] = 6,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(377), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(379), 1,
      anon_sym_DOLLAR,
    ACTIONS(382), 1,
      aux_sym_image_tag_value_token1,
    ACTIONS(375), 2,
      anon_sym_LF,
      anon_sym_AT,
    STATE(42), 2,
      sym_expansion,
      aux_sym_image_tag_value_repeat1,
  [1272] = 4,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(385), 1,
      anon_sym_LF,
    ACTIONS(389), 2,
      anon_sym_SLASHtcp,
      anon_sym_SLASHudp,
    ACTIONS(387), 4,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [1289] = 3,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(391), 1,
      anon_sym_LF,
    ACTIONS(393), 6,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      anon_sym_COLON,
      aux_sym__user_name_or_group_token1,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [1304] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(116), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(395), 1,
      anon_sym_DOLLAR,
    ACTIONS(397), 1,
      aux_sym_image_alias_token1,
    STATE(101), 2,
      sym_expansion,
      aux_sym_image_alias_repeat1,
    STATE(197), 2,
      sym_shisho_metavariable,
      sym_image_alias,
  [1325] = 3,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(391), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(393), 5,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      anon_sym_DOLLAR,
      aux_sym_label_pair_token1,
      aux_sym_unquoted_string_token1,
  [1340] = 6,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(401), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(403), 1,
      anon_sym_DOLLAR,
    ACTIONS(405), 1,
      aux_sym_image_tag_value_token1,
    ACTIONS(399), 2,
      anon_sym_LF,
      anon_sym_AT,
    STATE(42), 2,
      sym_expansion,
      aux_sym_image_tag_value_repeat1,
  [1361] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(144), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(407), 1,
      anon_sym_RBRACK,
    ACTIONS(409), 1,
      sym_shisho_ellipsis,
    ACTIONS(411), 1,
      anon_sym_DQUOTE,
    STATE(156), 3,
      sym_shisho_metavariable,
      sym_shisho_ellipsis_metavariable,
      sym_double_quoted_string,
  [1382] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(116), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(395), 1,
      anon_sym_DOLLAR,
    ACTIONS(397), 1,
      aux_sym_image_alias_token1,
    STATE(101), 2,
      sym_expansion,
      aux_sym_image_alias_repeat1,
    STATE(212), 2,
      sym_shisho_metavariable,
      sym_image_alias,
  [1403] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(365), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(413), 1,
      sym_shisho_ellipsis,
    ACTIONS(415), 1,
      aux_sym_label_pair_token1,
    STATE(300), 1,
      sym_shisho_metavariable,
    STATE(40), 3,
      sym_shisho_ellipsis_metavariable,
      sym_label_pair,
      aux_sym_label_instruction_repeat1,
  [1424] = 3,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(417), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(419), 5,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      anon_sym_DOLLAR,
      aux_sym_label_pair_token1,
      aux_sym_unquoted_string_token1,
  [1439] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(278), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(276), 6,
      anon_sym_RBRACK,
      sym_shisho_ellipsis,
      aux_sym_cmd_instruction_token1,
      anon_sym_EQ,
      anon_sym_DASH_DASH,
      anon_sym_COMMA,
  [1454] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(220), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(224), 1,
      aux_sym_path_token1,
    ACTIONS(226), 1,
      anon_sym_DOLLAR,
    ACTIONS(421), 1,
      sym_shisho_ellipsis,
    STATE(87), 1,
      sym_expansion,
    STATE(191), 2,
      sym_shisho_ellipsis_metavariable,
      sym_path,
  [1477] = 3,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(417), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(419), 5,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      anon_sym_DOLLAR,
      aux_sym__env_key_token1,
      aux_sym_unquoted_string_token1,
  [1492] = 3,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(391), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(393), 5,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      anon_sym_DOLLAR,
      aux_sym__env_key_token1,
      aux_sym_unquoted_string_token1,
  [1507] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(116), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(423), 1,
      anon_sym_DOLLAR,
    ACTIONS(425), 1,
      aux_sym_image_tag_value_token1,
    STATE(47), 2,
      sym_expansion,
      aux_sym_image_tag_value_repeat1,
    STATE(146), 2,
      sym_shisho_metavariable,
      sym_image_tag_value,
  [1528] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(116), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(427), 1,
      anon_sym_DOLLAR,
    ACTIONS(429), 1,
      aux_sym_image_digest_value_token1,
    STATE(75), 2,
      sym_expansion,
      aux_sym_image_digest_value_repeat1,
    STATE(182), 2,
      sym_shisho_metavariable,
      sym_image_digest_value,
  [1549] = 3,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(417), 1,
      anon_sym_LF,
    ACTIONS(419), 6,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      anon_sym_COLON,
      aux_sym__user_name_or_group_token1,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [1564] = 6,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(431), 1,
      anon_sym_LF,
    ACTIONS(433), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(435), 1,
      anon_sym_DOLLAR,
    ACTIONS(438), 1,
      aux_sym_image_digest_value_token1,
    STATE(59), 2,
      sym_expansion,
      aux_sym_image_digest_value_repeat1,
  [1584] = 6,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(441), 1,
      anon_sym_DOLLAR,
    ACTIONS(444), 1,
      anon_sym_DQUOTE,
    ACTIONS(446), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(449), 1,
      sym_escape_sequence,
    STATE(60), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1604] = 6,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(452), 1,
      anon_sym_DOLLAR,
    ACTIONS(454), 1,
      anon_sym_DQUOTE,
    ACTIONS(456), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(458), 1,
      sym_escape_sequence,
    STATE(60), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1624] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(460), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(462), 5,
      anon_sym_RBRACK,
      sym_shisho_ellipsis,
      aux_sym_cmd_instruction_token1,
      anon_sym_DASH_DASH,
      anon_sym_COMMA,
  [1638] = 3,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(462), 1,
      anon_sym_LF,
    ACTIONS(460), 5,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      anon_sym_DOLLAR,
      aux_sym__env_key_token1,
      aux_sym_expose_port_token1,
  [1652] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(144), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(411), 1,
      anon_sym_DQUOTE,
    ACTIONS(464), 1,
      sym_shisho_ellipsis,
    STATE(159), 3,
      sym_shisho_metavariable,
      sym_shisho_ellipsis_metavariable,
      sym_double_quoted_string,
  [1670] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(116), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(272), 1,
      anon_sym_DOLLAR,
    ACTIONS(466), 1,
      aux_sym__user_name_or_group_token1,
    STATE(78), 1,
      aux_sym__user_name_or_group,
    STATE(116), 1,
      sym_expansion,
    STATE(180), 1,
      sym_shisho_metavariable,
  [1692] = 5,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(228), 1,
      anon_sym_LF,
    ACTIONS(468), 1,
      anon_sym_DOLLAR,
    ACTIONS(471), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
    STATE(66), 2,
      sym_expansion,
      aux_sym_unquoted_string_repeat1,
  [1710] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(116), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(474), 1,
      aux_sym_path_token1,
    ACTIONS(476), 1,
      anon_sym_DOLLAR,
    STATE(92), 1,
      sym_expansion,
    STATE(207), 2,
      sym_shisho_metavariable,
      sym_path,
  [1730] = 6,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(452), 1,
      anon_sym_DOLLAR,
    ACTIONS(478), 1,
      anon_sym_DQUOTE,
    ACTIONS(480), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(482), 1,
      sym_escape_sequence,
    STATE(72), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1750] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(323), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(325), 1,
      aux_sym_path_token1,
    ACTIONS(327), 1,
      anon_sym_DOLLAR,
    STATE(95), 1,
      sym_expansion,
    STATE(236), 2,
      sym_shisho_metavariable,
      sym_path,
  [1770] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(116), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(474), 1,
      aux_sym_path_token1,
    ACTIONS(476), 1,
      anon_sym_DOLLAR,
    STATE(92), 1,
      sym_expansion,
    STATE(271), 2,
      sym_shisho_metavariable,
      sym_path,
  [1790] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(323), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(325), 1,
      aux_sym_path_token1,
    ACTIONS(327), 1,
      anon_sym_DOLLAR,
    STATE(95), 1,
      sym_expansion,
    STATE(234), 2,
      sym_shisho_metavariable,
      sym_path,
  [1810] = 6,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(452), 1,
      anon_sym_DOLLAR,
    ACTIONS(456), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(458), 1,
      sym_escape_sequence,
    ACTIONS(484), 1,
      anon_sym_DQUOTE,
    STATE(60), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1830] = 5,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(243), 1,
      anon_sym_LF,
    ACTIONS(486), 1,
      anon_sym_DOLLAR,
    ACTIONS(488), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
    STATE(66), 2,
      sym_expansion,
      aux_sym_unquoted_string_repeat1,
  [1848] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(116), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(474), 1,
      aux_sym_path_token1,
    ACTIONS(476), 1,
      anon_sym_DOLLAR,
    STATE(92), 1,
      sym_expansion,
    STATE(206), 2,
      sym_shisho_metavariable,
      sym_path,
  [1868] = 6,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(490), 1,
      anon_sym_LF,
    ACTIONS(492), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(494), 1,
      anon_sym_DOLLAR,
    ACTIONS(496), 1,
      aux_sym_image_digest_value_token1,
    STATE(59), 2,
      sym_expansion,
      aux_sym_image_digest_value_repeat1,
  [1888] = 3,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(391), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
    ACTIONS(393), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_image_name_token1,
  [1902] = 6,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(452), 1,
      anon_sym_DOLLAR,
    ACTIONS(498), 1,
      anon_sym_DQUOTE,
    ACTIONS(500), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(502), 1,
      sym_escape_sequence,
    STATE(86), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1922] = 7,
    ACTIONS(176), 1,
      anon_sym_DOLLAR,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(504), 1,
      anon_sym_LF,
    ACTIONS(506), 1,
      anon_sym_COLON,
    ACTIONS(508), 1,
      aux_sym__user_name_or_group_token1,
    STATE(79), 1,
      aux_sym__user_name_or_group,
    STATE(116), 1,
      sym_expansion,
  [1944] = 6,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(512), 1,
      aux_sym__user_name_or_group_token1,
    ACTIONS(515), 1,
      anon_sym_DOLLAR,
    STATE(79), 1,
      aux_sym__user_name_or_group,
    STATE(116), 1,
      sym_expansion,
    ACTIONS(510), 2,
      anon_sym_LF,
      anon_sym_COLON,
  [1964] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(116), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(272), 1,
      anon_sym_DOLLAR,
    ACTIONS(466), 1,
      aux_sym__user_name_or_group_token1,
    STATE(108), 1,
      aux_sym__user_name_or_group,
    STATE(116), 1,
      sym_expansion,
    STATE(214), 1,
      sym_shisho_metavariable,
  [1986] = 5,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(520), 1,
      aux_sym_path_token2,
    ACTIONS(523), 1,
      anon_sym_DOLLAR,
    ACTIONS(518), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
    STATE(81), 2,
      sym_expansion,
      aux_sym_path_repeat1,
  [2004] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(116), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(272), 1,
      anon_sym_DOLLAR,
    ACTIONS(466), 1,
      aux_sym__user_name_or_group_token1,
    STATE(106), 1,
      aux_sym__user_name_or_group,
    STATE(116), 1,
      sym_expansion,
    STATE(215), 1,
      sym_shisho_metavariable,
  [2026] = 7,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(526), 1,
      anon_sym_LF,
    ACTIONS(528), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(530), 1,
      anon_sym_COLON,
    ACTIONS(532), 1,
      anon_sym_AT,
    STATE(111), 1,
      sym_image_tag,
    STATE(164), 1,
      sym_image_digest,
  [2048] = 5,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(536), 1,
      aux_sym_path_token2,
    ACTIONS(538), 1,
      anon_sym_DOLLAR,
    ACTIONS(534), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
    STATE(81), 2,
      sym_expansion,
      aux_sym_path_repeat1,
  [2066] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(116), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(474), 1,
      aux_sym_path_token1,
    ACTIONS(476), 1,
      anon_sym_DOLLAR,
    STATE(92), 1,
      sym_expansion,
    STATE(216), 2,
      sym_shisho_metavariable,
      sym_path,
  [2086] = 6,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(452), 1,
      anon_sym_DOLLAR,
    ACTIONS(456), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(458), 1,
      sym_escape_sequence,
    ACTIONS(540), 1,
      anon_sym_DQUOTE,
    STATE(60), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [2106] = 5,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(538), 1,
      anon_sym_DOLLAR,
    ACTIONS(544), 1,
      aux_sym_path_token2,
    ACTIONS(542), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
    STATE(84), 2,
      sym_expansion,
      aux_sym_path_repeat1,
  [2124] = 3,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(417), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
    ACTIONS(419), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_image_name_token1,
  [2138] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(116), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(474), 1,
      aux_sym_path_token1,
    ACTIONS(476), 1,
      anon_sym_DOLLAR,
    STATE(92), 1,
      sym_expansion,
    STATE(218), 2,
      sym_shisho_metavariable,
      sym_path,
  [2158] = 6,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(452), 1,
      anon_sym_DOLLAR,
    ACTIONS(546), 1,
      anon_sym_DQUOTE,
    ACTIONS(548), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(550), 1,
      sym_escape_sequence,
    STATE(61), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [2178] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(554), 2,
      aux_sym_shell_fragment_token2,
      anon_sym_POUND,
    ACTIONS(552), 3,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      aux_sym_shell_fragment_token1,
  [2191] = 5,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(556), 1,
      anon_sym_LF,
    ACTIONS(558), 1,
      aux_sym_path_token2,
    ACTIONS(560), 1,
      anon_sym_DOLLAR,
    STATE(104), 2,
      sym_expansion,
      aux_sym_path_repeat1,
  [2208] = 3,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(385), 1,
      anon_sym_LF,
    ACTIONS(387), 4,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [2221] = 5,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(562), 1,
      aux_sym_path_token2,
    ACTIONS(565), 1,
      anon_sym_DOLLAR,
    ACTIONS(568), 1,
      sym__non_newline_whitespace,
    STATE(94), 2,
      sym_expansion,
      aux_sym_path_repeat1,
  [2238] = 5,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(556), 1,
      sym__non_newline_whitespace,
    ACTIONS(570), 1,
      aux_sym_path_token2,
    ACTIONS(572), 1,
      anon_sym_DOLLAR,
    STATE(100), 2,
      sym_expansion,
      aux_sym_path_repeat1,
  [2255] = 3,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(417), 1,
      anon_sym_LF,
    ACTIONS(419), 4,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      aux_sym__stopsignal_value_token1,
      anon_sym_DOLLAR,
  [2268] = 5,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(568), 1,
      anon_sym_LF,
    ACTIONS(574), 1,
      aux_sym_path_token2,
    ACTIONS(577), 1,
      anon_sym_DOLLAR,
    STATE(97), 2,
      sym_expansion,
      aux_sym_path_repeat1,
  [2285] = 3,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(580), 1,
      anon_sym_LF,
    ACTIONS(582), 4,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [2298] = 5,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(584), 1,
      anon_sym_LF,
    ACTIONS(586), 1,
      anon_sym_DOLLAR,
    ACTIONS(589), 1,
      aux_sym_image_alias_token1,
    STATE(99), 2,
      sym_expansion,
      aux_sym_image_alias_repeat1,
  [2315] = 5,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(572), 1,
      anon_sym_DOLLAR,
    ACTIONS(592), 1,
      aux_sym_path_token2,
    ACTIONS(594), 1,
      sym__non_newline_whitespace,
    STATE(94), 2,
      sym_expansion,
      aux_sym_path_repeat1,
  [2332] = 5,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(596), 1,
      anon_sym_LF,
    ACTIONS(598), 1,
      anon_sym_DOLLAR,
    ACTIONS(600), 1,
      aux_sym_image_alias_token1,
    STATE(99), 2,
      sym_expansion,
      aux_sym_image_alias_repeat1,
  [2349] = 3,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(276), 1,
      anon_sym_LF,
    ACTIONS(278), 4,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      aux_sym__stopsignal_value_token1,
      anon_sym_DOLLAR,
  [2362] = 3,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(391), 2,
      anon_sym_LF,
      anon_sym_AT,
    ACTIONS(393), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_image_tag_value_token1,
  [2375] = 5,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(560), 1,
      anon_sym_DOLLAR,
    ACTIONS(594), 1,
      anon_sym_LF,
    ACTIONS(602), 1,
      aux_sym_path_token2,
    STATE(97), 2,
      sym_expansion,
      aux_sym_path_repeat1,
  [2392] = 3,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(462), 1,
      anon_sym_LF,
    ACTIONS(460), 4,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      aux_sym__stopsignal_value_token1,
      anon_sym_DOLLAR,
  [2405] = 6,
    ACTIONS(176), 1,
      anon_sym_DOLLAR,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(508), 1,
      aux_sym__user_name_or_group_token1,
    ACTIONS(604), 1,
      anon_sym_LF,
    STATE(79), 1,
      aux_sym__user_name_or_group,
    STATE(116), 1,
      sym_expansion,
  [2424] = 3,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(417), 2,
      anon_sym_LF,
      anon_sym_AT,
    ACTIONS(419), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_image_tag_value_token1,
  [2437] = 6,
    ACTIONS(176), 1,
      anon_sym_DOLLAR,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(508), 1,
      aux_sym__user_name_or_group_token1,
    ACTIONS(606), 1,
      anon_sym_LF,
    STATE(79), 1,
      aux_sym__user_name_or_group,
    STATE(116), 1,
      sym_expansion,
  [2456] = 3,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(391), 1,
      anon_sym_LF,
    ACTIONS(393), 4,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      aux_sym__stopsignal_value_token1,
      anon_sym_DOLLAR,
  [2469] = 3,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(417), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(419), 3,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [2481] = 5,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(532), 1,
      anon_sym_AT,
    ACTIONS(608), 1,
      anon_sym_LF,
    ACTIONS(610), 1,
      aux_sym_from_instruction_token2,
    STATE(184), 1,
      sym_image_digest,
  [2497] = 3,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(417), 2,
      anon_sym_LF,
      aux_sym_image_digest_value_token1,
    ACTIONS(419), 2,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
  [2509] = 3,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(462), 1,
      anon_sym_LF,
    ACTIONS(460), 3,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      aux_sym_label_pair_token1,
  [2521] = 3,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(391), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(393), 3,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [2533] = 3,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(612), 1,
      anon_sym_LF,
    ACTIONS(614), 3,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      aux_sym_label_pair_token1,
  [2545] = 3,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(616), 2,
      anon_sym_LF,
      anon_sym_COLON,
    ACTIONS(618), 2,
      aux_sym__user_name_or_group_token1,
      anon_sym_DOLLAR,
  [2557] = 3,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(620), 1,
      anon_sym_LF,
    ACTIONS(622), 3,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      aux_sym_label_pair_token1,
  [2569] = 3,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(620), 1,
      anon_sym_LF,
    ACTIONS(622), 3,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      aux_sym__env_key_token1,
  [2581] = 4,
    ACTIONS(624), 1,
      anon_sym_LF,
    ACTIONS(628), 1,
      sym_line_continuation,
    STATE(124), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(626), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [2595] = 3,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(276), 1,
      anon_sym_LF,
    ACTIONS(278), 3,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      aux_sym__env_key_token1,
  [2607] = 3,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(391), 2,
      anon_sym_LF,
      aux_sym_image_digest_value_token1,
    ACTIONS(393), 2,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
  [2619] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(630), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(632), 3,
      sym_shisho_ellipsis,
      aux_sym_cmd_instruction_token1,
      anon_sym_DASH_DASH,
  [2631] = 3,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(612), 1,
      anon_sym_LF,
    ACTIONS(614), 3,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      aux_sym__env_key_token1,
  [2643] = 4,
    ACTIONS(634), 1,
      anon_sym_LF,
    ACTIONS(639), 1,
      sym_line_continuation,
    STATE(124), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(636), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [2657] = 3,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(419), 1,
      anon_sym_DOLLAR,
    ACTIONS(417), 3,
      anon_sym_LF,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [2669] = 3,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(393), 1,
      anon_sym_DOLLAR,
    ACTIONS(391), 3,
      anon_sym_LF,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [2681] = 2,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(419), 4,
      anon_sym_LF,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
      sym__non_newline_whitespace,
  [2691] = 2,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(393), 4,
      anon_sym_LF,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
      sym__non_newline_whitespace,
  [2701] = 3,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(276), 1,
      anon_sym_LF,
    ACTIONS(278), 3,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      aux_sym_label_pair_token1,
  [2713] = 3,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(641), 1,
      anon_sym_LF,
    ACTIONS(643), 3,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      aux_sym_label_pair_token1,
  [2725] = 3,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(645), 1,
      anon_sym_LF,
    ACTIONS(647), 3,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      aux_sym__env_key_token1,
  [2737] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(649), 1,
      anon_sym_RBRACK,
    ACTIONS(651), 1,
      anon_sym_COMMA,
    STATE(133), 1,
      aux_sym_string_array_repeat1,
  [2750] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(653), 1,
      anon_sym_RBRACK,
    ACTIONS(655), 1,
      anon_sym_COMMA,
    STATE(133), 1,
      aux_sym_string_array_repeat1,
  [2763] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(278), 1,
      aux_sym_image_name_token1,
    ACTIONS(276), 2,
      anon_sym_COLON_LBRACK,
      anon_sym_DOLLAR,
  [2774] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(658), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(660), 1,
      sym_param_name,
    STATE(275), 1,
      sym_shisho_metavariable,
  [2787] = 3,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(391), 1,
      anon_sym_LF,
    ACTIONS(393), 2,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
  [2798] = 3,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(417), 1,
      anon_sym_LF,
    ACTIONS(419), 2,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
  [2809] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(658), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(662), 1,
      sym_param_name,
    STATE(270), 1,
      sym_shisho_metavariable,
  [2822] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(664), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(666), 1,
      sym_param_value,
    STATE(145), 1,
      sym_shisho_metavariable,
  [2835] = 3,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(391), 1,
      sym__non_newline_whitespace,
    ACTIONS(393), 2,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
  [2846] = 4,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(668), 1,
      anon_sym_LF,
    ACTIONS(670), 1,
      sym__non_newline_whitespace,
    STATE(141), 1,
      aux_sym_volume_instruction_repeat1,
  [2859] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(116), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(673), 1,
      aux_sym_arg_instruction_token2,
    STATE(158), 1,
      sym_shisho_metavariable,
  [2872] = 4,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(675), 1,
      anon_sym_LF,
    ACTIONS(677), 1,
      sym__non_newline_whitespace,
    STATE(151), 1,
      aux_sym_volume_instruction_repeat1,
  [2885] = 3,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(417), 1,
      sym__non_newline_whitespace,
    ACTIONS(419), 2,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
  [2896] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(630), 1,
      aux_sym_path_token1,
    ACTIONS(632), 2,
      anon_sym_COLON_LBRACK,
      anon_sym_DOLLAR,
  [2907] = 3,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(681), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(679), 2,
      anon_sym_LF,
      anon_sym_AT,
  [2918] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(683), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(685), 1,
      sym_param_value,
    STATE(148), 1,
      sym_shisho_metavariable,
  [2931] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(630), 1,
      aux_sym_image_name_token1,
    ACTIONS(632), 2,
      anon_sym_COLON_LBRACK,
      anon_sym_DOLLAR,
  [2942] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(278), 1,
      aux_sym_path_token1,
    ACTIONS(276), 2,
      anon_sym_COLON_LBRACK,
      anon_sym_DOLLAR,
  [2953] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(658), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(687), 1,
      sym_param_name,
    STATE(248), 1,
      sym_shisho_metavariable,
  [2966] = 4,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(677), 1,
      sym__non_newline_whitespace,
    ACTIONS(689), 1,
      anon_sym_LF,
    STATE(141), 1,
      aux_sym_volume_instruction_repeat1,
  [2979] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(691), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(693), 1,
      sym_param_value,
    STATE(122), 1,
      sym_shisho_metavariable,
  [2992] = 3,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(391), 1,
      anon_sym_LF,
    ACTIONS(393), 2,
      anon_sym_DOLLAR,
      aux_sym_image_alias_token1,
  [3003] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(460), 1,
      aux_sym_image_name_token1,
    ACTIONS(462), 2,
      anon_sym_COLON_LBRACK,
      anon_sym_DOLLAR,
  [3014] = 3,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(417), 1,
      anon_sym_LF,
    ACTIONS(419), 2,
      anon_sym_DOLLAR,
      aux_sym_image_alias_token1,
  [3025] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(651), 1,
      anon_sym_COMMA,
    ACTIONS(695), 1,
      anon_sym_RBRACK,
    STATE(132), 1,
      aux_sym_string_array_repeat1,
  [3038] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(697), 1,
      anon_sym_LBRACE,
    ACTIONS(699), 1,
      sym_variable,
  [3048] = 3,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(701), 1,
      anon_sym_LF,
    ACTIONS(703), 1,
      anon_sym_EQ,
  [3058] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(653), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [3066] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(612), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [3074] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(705), 1,
      anon_sym_LBRACE,
    ACTIONS(707), 1,
      sym_variable,
  [3084] = 3,
    ACTIONS(709), 1,
      anon_sym_LF,
    ACTIONS(711), 1,
      sym_line_continuation,
    STATE(195), 1,
      aux_sym_shell_command_repeat2,
  [3094] = 3,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(713), 1,
      anon_sym_LF,
    ACTIONS(715), 1,
      aux_sym_from_instruction_token2,
  [3104] = 3,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(717), 1,
      anon_sym_LF,
    ACTIONS(719), 1,
      aux_sym_from_instruction_token2,
  [3114] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(620), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [3122] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(721), 1,
      anon_sym_LBRACE,
    ACTIONS(723), 1,
      sym_variable,
  [3132] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(725), 1,
      anon_sym_LBRACE,
    ACTIONS(727), 1,
      sym_variable,
  [3142] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(729), 1,
      anon_sym_LBRACE,
    ACTIONS(731), 1,
      sym_variable,
  [3152] = 3,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(733), 1,
      anon_sym_LF,
    ACTIONS(735), 1,
      aux_sym_from_instruction_token2,
  [3162] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(737), 1,
      anon_sym_LBRACE,
    ACTIONS(739), 1,
      sym_variable,
  [3172] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(741), 1,
      anon_sym_LBRACE,
    ACTIONS(743), 1,
      sym_variable,
  [3182] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(745), 1,
      anon_sym_LBRACE,
    ACTIONS(747), 1,
      sym_variable,
  [3192] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(749), 1,
      anon_sym_LBRACE,
    ACTIONS(751), 1,
      sym_variable,
  [3202] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(753), 1,
      anon_sym_LBRACE,
    ACTIONS(755), 1,
      sym_variable,
  [3212] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(757), 1,
      anon_sym_LBRACE,
    ACTIONS(759), 1,
      sym_variable,
  [3222] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(761), 1,
      anon_sym_LBRACE,
    ACTIONS(763), 1,
      sym_variable,
  [3232] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(765), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(767), 1,
      sym_shisho_metavariable_name,
  [3242] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(142), 1,
      anon_sym_LBRACK,
    STATE(262), 1,
      sym_string_array,
  [3252] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(769), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(771), 1,
      sym_shisho_metavariable_name,
  [3262] = 3,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(773), 1,
      anon_sym_LF,
    ACTIONS(775), 1,
      anon_sym_COLON,
  [3272] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(769), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(777), 1,
      sym_shisho_metavariable_name,
  [3282] = 3,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(779), 1,
      anon_sym_LF,
    ACTIONS(781), 1,
      aux_sym_from_instruction_token2,
  [3292] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(783), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(785), 1,
      sym_shisho_metavariable_name,
  [3302] = 3,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(787), 1,
      anon_sym_LF,
    ACTIONS(789), 1,
      aux_sym_from_instruction_token2,
  [3312] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(791), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(793), 1,
      sym_shisho_metavariable_name,
  [3322] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(777), 1,
      sym_shisho_metavariable_name,
    ACTIONS(795), 1,
      anon_sym_DOT_DOT_DOT,
  [3332] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(777), 1,
      sym_shisho_metavariable_name,
    ACTIONS(783), 1,
      anon_sym_DOT_DOT_DOT,
  [3342] = 2,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(276), 2,
      anon_sym_EQ,
      aux_sym__spaced_env_pair_token1,
  [3350] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(771), 1,
      sym_shisho_metavariable_name,
    ACTIONS(797), 1,
      anon_sym_DOT_DOT_DOT,
  [3360] = 2,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(460), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
  [3368] = 2,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(668), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
  [3376] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(799), 1,
      anon_sym_LBRACE,
    ACTIONS(801), 1,
      sym_variable,
  [3386] = 3,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(803), 1,
      anon_sym_EQ,
    ACTIONS(805), 1,
      aux_sym__spaced_env_pair_token1,
  [3396] = 3,
    ACTIONS(711), 1,
      sym_line_continuation,
    ACTIONS(807), 1,
      anon_sym_LF,
    STATE(162), 1,
      aux_sym_shell_command_repeat2,
  [3406] = 3,
    ACTIONS(809), 1,
      anon_sym_LF,
    ACTIONS(811), 1,
      sym_line_continuation,
    STATE(195), 1,
      aux_sym_shell_command_repeat2,
  [3416] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(771), 1,
      sym_shisho_metavariable_name,
    ACTIONS(783), 1,
      anon_sym_DOT_DOT_DOT,
  [3426] = 2,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(814), 1,
      anon_sym_LF,
  [3433] = 2,
    ACTIONS(460), 1,
      sym_line_continuation,
    ACTIONS(462), 1,
      anon_sym_LF,
  [3440] = 2,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(276), 1,
      sym__non_newline_whitespace,
  [3447] = 2,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(816), 1,
      anon_sym_LF,
  [3454] = 2,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(818), 1,
      aux_sym_maintainer_instruction_token2,
  [3461] = 2,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(820), 1,
      aux_sym_maintainer_instruction_token2,
  [3468] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(822), 1,
      ts_builtin_sym_end,
  [3475] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(824), 1,
      sym_shisho_metavariable_name,
  [3482] = 2,
    ACTIONS(276), 1,
      anon_sym_LF,
    ACTIONS(278), 1,
      sym_line_continuation,
  [3489] = 2,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(826), 1,
      anon_sym_LF,
  [3496] = 2,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(828), 1,
      anon_sym_LF,
  [3503] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(830), 1,
      anon_sym_RBRACK,
  [3510] = 2,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(832), 1,
      anon_sym_LF,
  [3517] = 2,
    ACTIONS(834), 1,
      anon_sym_LF,
    ACTIONS(836), 1,
      sym_line_continuation,
  [3524] = 2,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(838), 1,
      anon_sym_LF,
  [3531] = 2,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(840), 1,
      anon_sym_LF,
  [3538] = 2,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(842), 1,
      anon_sym_LF,
  [3545] = 2,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(844), 1,
      anon_sym_LF,
  [3552] = 2,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(846), 1,
      anon_sym_LF,
  [3559] = 2,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(848), 1,
      anon_sym_LF,
  [3566] = 2,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(850), 1,
      anon_sym_LF,
  [3573] = 2,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(852), 1,
      anon_sym_LF,
  [3580] = 2,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(854), 1,
      anon_sym_LF,
  [3587] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(856), 1,
      anon_sym_RBRACK,
  [3594] = 2,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(858), 1,
      anon_sym_LF,
  [3601] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(771), 1,
      sym_shisho_metavariable_name,
  [3608] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(860), 1,
      anon_sym_RBRACK,
  [3615] = 2,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(862), 1,
      anon_sym_LF,
  [3622] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(864), 1,
      anon_sym_RBRACE,
  [3629] = 2,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(866), 1,
      aux_sym_maintainer_instruction_token2,
  [3636] = 2,
    ACTIONS(809), 1,
      anon_sym_LF,
    ACTIONS(868), 1,
      sym_line_continuation,
  [3643] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(870), 1,
      anon_sym_RBRACK,
  [3650] = 2,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(872), 1,
      anon_sym_LF,
  [3657] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(874), 1,
      anon_sym_RBRACK,
  [3664] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(876), 1,
      anon_sym_RBRACE,
  [3671] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(878), 1,
      anon_sym_RBRACE,
  [3678] = 2,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(880), 1,
      anon_sym_LF,
  [3685] = 2,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(882), 1,
      sym__non_newline_whitespace,
  [3692] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(884), 1,
      anon_sym_RBRACK,
  [3699] = 2,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(886), 1,
      sym__non_newline_whitespace,
  [3706] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(888), 1,
      anon_sym_RBRACK,
  [3713] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(890), 1,
      anon_sym_RBRACE,
  [3720] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(892), 1,
      anon_sym_RBRACK,
  [3727] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(803), 1,
      anon_sym_EQ,
  [3734] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(894), 1,
      anon_sym_RBRACK,
  [3741] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(896), 1,
      anon_sym_RBRACE,
  [3748] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(898), 1,
      anon_sym_RBRACK,
  [3755] = 2,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(900), 1,
      anon_sym_LF,
  [3762] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(902), 1,
      anon_sym_RBRACK,
  [3769] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(904), 1,
      anon_sym_RBRACE,
  [3776] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(906), 1,
      anon_sym_RBRACK,
  [3783] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(908), 1,
      anon_sym_EQ,
  [3790] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(910), 1,
      anon_sym_RBRACK,
  [3797] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(912), 1,
      anon_sym_RBRACE,
  [3804] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(914), 1,
      anon_sym_RBRACK,
  [3811] = 2,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(916), 1,
      aux_sym_expansion_token1,
  [3818] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(918), 1,
      anon_sym_RBRACE,
  [3825] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(920), 1,
      anon_sym_RBRACK,
  [3832] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(922), 1,
      anon_sym_RBRACK,
  [3839] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(924), 1,
      anon_sym_RBRACE,
  [3846] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(926), 1,
      anon_sym_RBRACK,
  [3853] = 2,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(928), 1,
      anon_sym_LF,
  [3860] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(930), 1,
      anon_sym_RBRACE,
  [3867] = 2,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(932), 1,
      anon_sym_LF,
  [3874] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(934), 1,
      anon_sym_RBRACE,
  [3881] = 2,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(936), 1,
      anon_sym_LF,
  [3888] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(938), 1,
      anon_sym_RBRACE,
  [3895] = 2,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(940), 1,
      anon_sym_LF,
  [3902] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(942), 1,
      anon_sym_RBRACE,
  [3909] = 2,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(944), 1,
      anon_sym_LF,
  [3916] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(946), 1,
      sym_shisho_metavariable_name,
  [3923] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(777), 1,
      sym_shisho_metavariable_name,
  [3930] = 2,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(948), 1,
      aux_sym_expansion_token1,
  [3937] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(950), 1,
      anon_sym_EQ,
  [3944] = 2,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(952), 1,
      anon_sym_LF,
  [3951] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(954), 1,
      sym_shisho_metavariable_name,
  [3958] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(956), 1,
      sym_shisho_metavariable_name,
  [3965] = 2,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(958), 1,
      aux_sym_expansion_token1,
  [3972] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(960), 1,
      anon_sym_EQ,
  [3979] = 2,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(962), 1,
      anon_sym_LF,
  [3986] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(964), 1,
      sym_shisho_metavariable_name,
  [3993] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(966), 1,
      sym_shisho_metavariable_name,
  [4000] = 2,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(968), 1,
      aux_sym_expansion_token1,
  [4007] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(970), 1,
      anon_sym_DOT_DOT_DOT,
  [4014] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(972), 1,
      sym_shisho_metavariable_name,
  [4021] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(974), 1,
      sym_shisho_metavariable_name,
  [4028] = 2,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(976), 1,
      aux_sym_expansion_token1,
  [4035] = 2,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(978), 1,
      anon_sym_LF,
  [4042] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(980), 1,
      sym_shisho_metavariable_name,
  [4049] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(982), 1,
      sym_shisho_metavariable_name,
  [4056] = 2,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(984), 1,
      aux_sym_expansion_token1,
  [4063] = 2,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(986), 1,
      sym__non_newline_whitespace,
  [4070] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(988), 1,
      sym_shisho_metavariable_name,
  [4077] = 2,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(990), 1,
      aux_sym_expansion_token1,
  [4084] = 2,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(992), 1,
      aux_sym_expansion_token1,
  [4091] = 2,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(994), 1,
      aux_sym_expansion_token1,
  [4098] = 2,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(996), 1,
      aux_sym_expansion_token1,
  [4105] = 2,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(998), 1,
      aux_sym_expansion_token1,
  [4112] = 2,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(1000), 1,
      aux_sym_expansion_token1,
  [4119] = 2,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(1002), 1,
      aux_sym_expansion_token1,
  [4126] = 2,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(1004), 1,
      sym__non_newline_whitespace,
  [4133] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1006), 1,
      sym_shisho_metavariable_name,
  [4140] = 2,
    ACTIONS(180), 1,
      sym_line_continuation,
    ACTIONS(1008), 1,
      anon_sym_LF,
  [4147] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1010), 1,
      anon_sym_EQ,
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
  [SMALL_STATE(12)] = 506,
  [SMALL_STATE(13)] = 534,
  [SMALL_STATE(14)] = 562,
  [SMALL_STATE(15)] = 590,
  [SMALL_STATE(16)] = 618,
  [SMALL_STATE(17)] = 646,
  [SMALL_STATE(18)] = 674,
  [SMALL_STATE(19)] = 702,
  [SMALL_STATE(20)] = 725,
  [SMALL_STATE(21)] = 750,
  [SMALL_STATE(22)] = 779,
  [SMALL_STATE(23)] = 804,
  [SMALL_STATE(24)] = 829,
  [SMALL_STATE(25)] = 854,
  [SMALL_STATE(26)] = 879,
  [SMALL_STATE(27)] = 904,
  [SMALL_STATE(28)] = 929,
  [SMALL_STATE(29)] = 946,
  [SMALL_STATE(30)] = 969,
  [SMALL_STATE(31)] = 994,
  [SMALL_STATE(32)] = 1019,
  [SMALL_STATE(33)] = 1043,
  [SMALL_STATE(34)] = 1065,
  [SMALL_STATE(35)] = 1087,
  [SMALL_STATE(36)] = 1113,
  [SMALL_STATE(37)] = 1137,
  [SMALL_STATE(38)] = 1159,
  [SMALL_STATE(39)] = 1185,
  [SMALL_STATE(40)] = 1207,
  [SMALL_STATE(41)] = 1231,
  [SMALL_STATE(42)] = 1251,
  [SMALL_STATE(43)] = 1272,
  [SMALL_STATE(44)] = 1289,
  [SMALL_STATE(45)] = 1304,
  [SMALL_STATE(46)] = 1325,
  [SMALL_STATE(47)] = 1340,
  [SMALL_STATE(48)] = 1361,
  [SMALL_STATE(49)] = 1382,
  [SMALL_STATE(50)] = 1403,
  [SMALL_STATE(51)] = 1424,
  [SMALL_STATE(52)] = 1439,
  [SMALL_STATE(53)] = 1454,
  [SMALL_STATE(54)] = 1477,
  [SMALL_STATE(55)] = 1492,
  [SMALL_STATE(56)] = 1507,
  [SMALL_STATE(57)] = 1528,
  [SMALL_STATE(58)] = 1549,
  [SMALL_STATE(59)] = 1564,
  [SMALL_STATE(60)] = 1584,
  [SMALL_STATE(61)] = 1604,
  [SMALL_STATE(62)] = 1624,
  [SMALL_STATE(63)] = 1638,
  [SMALL_STATE(64)] = 1652,
  [SMALL_STATE(65)] = 1670,
  [SMALL_STATE(66)] = 1692,
  [SMALL_STATE(67)] = 1710,
  [SMALL_STATE(68)] = 1730,
  [SMALL_STATE(69)] = 1750,
  [SMALL_STATE(70)] = 1770,
  [SMALL_STATE(71)] = 1790,
  [SMALL_STATE(72)] = 1810,
  [SMALL_STATE(73)] = 1830,
  [SMALL_STATE(74)] = 1848,
  [SMALL_STATE(75)] = 1868,
  [SMALL_STATE(76)] = 1888,
  [SMALL_STATE(77)] = 1902,
  [SMALL_STATE(78)] = 1922,
  [SMALL_STATE(79)] = 1944,
  [SMALL_STATE(80)] = 1964,
  [SMALL_STATE(81)] = 1986,
  [SMALL_STATE(82)] = 2004,
  [SMALL_STATE(83)] = 2026,
  [SMALL_STATE(84)] = 2048,
  [SMALL_STATE(85)] = 2066,
  [SMALL_STATE(86)] = 2086,
  [SMALL_STATE(87)] = 2106,
  [SMALL_STATE(88)] = 2124,
  [SMALL_STATE(89)] = 2138,
  [SMALL_STATE(90)] = 2158,
  [SMALL_STATE(91)] = 2178,
  [SMALL_STATE(92)] = 2191,
  [SMALL_STATE(93)] = 2208,
  [SMALL_STATE(94)] = 2221,
  [SMALL_STATE(95)] = 2238,
  [SMALL_STATE(96)] = 2255,
  [SMALL_STATE(97)] = 2268,
  [SMALL_STATE(98)] = 2285,
  [SMALL_STATE(99)] = 2298,
  [SMALL_STATE(100)] = 2315,
  [SMALL_STATE(101)] = 2332,
  [SMALL_STATE(102)] = 2349,
  [SMALL_STATE(103)] = 2362,
  [SMALL_STATE(104)] = 2375,
  [SMALL_STATE(105)] = 2392,
  [SMALL_STATE(106)] = 2405,
  [SMALL_STATE(107)] = 2424,
  [SMALL_STATE(108)] = 2437,
  [SMALL_STATE(109)] = 2456,
  [SMALL_STATE(110)] = 2469,
  [SMALL_STATE(111)] = 2481,
  [SMALL_STATE(112)] = 2497,
  [SMALL_STATE(113)] = 2509,
  [SMALL_STATE(114)] = 2521,
  [SMALL_STATE(115)] = 2533,
  [SMALL_STATE(116)] = 2545,
  [SMALL_STATE(117)] = 2557,
  [SMALL_STATE(118)] = 2569,
  [SMALL_STATE(119)] = 2581,
  [SMALL_STATE(120)] = 2595,
  [SMALL_STATE(121)] = 2607,
  [SMALL_STATE(122)] = 2619,
  [SMALL_STATE(123)] = 2631,
  [SMALL_STATE(124)] = 2643,
  [SMALL_STATE(125)] = 2657,
  [SMALL_STATE(126)] = 2669,
  [SMALL_STATE(127)] = 2681,
  [SMALL_STATE(128)] = 2691,
  [SMALL_STATE(129)] = 2701,
  [SMALL_STATE(130)] = 2713,
  [SMALL_STATE(131)] = 2725,
  [SMALL_STATE(132)] = 2737,
  [SMALL_STATE(133)] = 2750,
  [SMALL_STATE(134)] = 2763,
  [SMALL_STATE(135)] = 2774,
  [SMALL_STATE(136)] = 2787,
  [SMALL_STATE(137)] = 2798,
  [SMALL_STATE(138)] = 2809,
  [SMALL_STATE(139)] = 2822,
  [SMALL_STATE(140)] = 2835,
  [SMALL_STATE(141)] = 2846,
  [SMALL_STATE(142)] = 2859,
  [SMALL_STATE(143)] = 2872,
  [SMALL_STATE(144)] = 2885,
  [SMALL_STATE(145)] = 2896,
  [SMALL_STATE(146)] = 2907,
  [SMALL_STATE(147)] = 2918,
  [SMALL_STATE(148)] = 2931,
  [SMALL_STATE(149)] = 2942,
  [SMALL_STATE(150)] = 2953,
  [SMALL_STATE(151)] = 2966,
  [SMALL_STATE(152)] = 2979,
  [SMALL_STATE(153)] = 2992,
  [SMALL_STATE(154)] = 3003,
  [SMALL_STATE(155)] = 3014,
  [SMALL_STATE(156)] = 3025,
  [SMALL_STATE(157)] = 3038,
  [SMALL_STATE(158)] = 3048,
  [SMALL_STATE(159)] = 3058,
  [SMALL_STATE(160)] = 3066,
  [SMALL_STATE(161)] = 3074,
  [SMALL_STATE(162)] = 3084,
  [SMALL_STATE(163)] = 3094,
  [SMALL_STATE(164)] = 3104,
  [SMALL_STATE(165)] = 3114,
  [SMALL_STATE(166)] = 3122,
  [SMALL_STATE(167)] = 3132,
  [SMALL_STATE(168)] = 3142,
  [SMALL_STATE(169)] = 3152,
  [SMALL_STATE(170)] = 3162,
  [SMALL_STATE(171)] = 3172,
  [SMALL_STATE(172)] = 3182,
  [SMALL_STATE(173)] = 3192,
  [SMALL_STATE(174)] = 3202,
  [SMALL_STATE(175)] = 3212,
  [SMALL_STATE(176)] = 3222,
  [SMALL_STATE(177)] = 3232,
  [SMALL_STATE(178)] = 3242,
  [SMALL_STATE(179)] = 3252,
  [SMALL_STATE(180)] = 3262,
  [SMALL_STATE(181)] = 3272,
  [SMALL_STATE(182)] = 3282,
  [SMALL_STATE(183)] = 3292,
  [SMALL_STATE(184)] = 3302,
  [SMALL_STATE(185)] = 3312,
  [SMALL_STATE(186)] = 3322,
  [SMALL_STATE(187)] = 3332,
  [SMALL_STATE(188)] = 3342,
  [SMALL_STATE(189)] = 3350,
  [SMALL_STATE(190)] = 3360,
  [SMALL_STATE(191)] = 3368,
  [SMALL_STATE(192)] = 3376,
  [SMALL_STATE(193)] = 3386,
  [SMALL_STATE(194)] = 3396,
  [SMALL_STATE(195)] = 3406,
  [SMALL_STATE(196)] = 3416,
  [SMALL_STATE(197)] = 3426,
  [SMALL_STATE(198)] = 3433,
  [SMALL_STATE(199)] = 3440,
  [SMALL_STATE(200)] = 3447,
  [SMALL_STATE(201)] = 3454,
  [SMALL_STATE(202)] = 3461,
  [SMALL_STATE(203)] = 3468,
  [SMALL_STATE(204)] = 3475,
  [SMALL_STATE(205)] = 3482,
  [SMALL_STATE(206)] = 3489,
  [SMALL_STATE(207)] = 3496,
  [SMALL_STATE(208)] = 3503,
  [SMALL_STATE(209)] = 3510,
  [SMALL_STATE(210)] = 3517,
  [SMALL_STATE(211)] = 3524,
  [SMALL_STATE(212)] = 3531,
  [SMALL_STATE(213)] = 3538,
  [SMALL_STATE(214)] = 3545,
  [SMALL_STATE(215)] = 3552,
  [SMALL_STATE(216)] = 3559,
  [SMALL_STATE(217)] = 3566,
  [SMALL_STATE(218)] = 3573,
  [SMALL_STATE(219)] = 3580,
  [SMALL_STATE(220)] = 3587,
  [SMALL_STATE(221)] = 3594,
  [SMALL_STATE(222)] = 3601,
  [SMALL_STATE(223)] = 3608,
  [SMALL_STATE(224)] = 3615,
  [SMALL_STATE(225)] = 3622,
  [SMALL_STATE(226)] = 3629,
  [SMALL_STATE(227)] = 3636,
  [SMALL_STATE(228)] = 3643,
  [SMALL_STATE(229)] = 3650,
  [SMALL_STATE(230)] = 3657,
  [SMALL_STATE(231)] = 3664,
  [SMALL_STATE(232)] = 3671,
  [SMALL_STATE(233)] = 3678,
  [SMALL_STATE(234)] = 3685,
  [SMALL_STATE(235)] = 3692,
  [SMALL_STATE(236)] = 3699,
  [SMALL_STATE(237)] = 3706,
  [SMALL_STATE(238)] = 3713,
  [SMALL_STATE(239)] = 3720,
  [SMALL_STATE(240)] = 3727,
  [SMALL_STATE(241)] = 3734,
  [SMALL_STATE(242)] = 3741,
  [SMALL_STATE(243)] = 3748,
  [SMALL_STATE(244)] = 3755,
  [SMALL_STATE(245)] = 3762,
  [SMALL_STATE(246)] = 3769,
  [SMALL_STATE(247)] = 3776,
  [SMALL_STATE(248)] = 3783,
  [SMALL_STATE(249)] = 3790,
  [SMALL_STATE(250)] = 3797,
  [SMALL_STATE(251)] = 3804,
  [SMALL_STATE(252)] = 3811,
  [SMALL_STATE(253)] = 3818,
  [SMALL_STATE(254)] = 3825,
  [SMALL_STATE(255)] = 3832,
  [SMALL_STATE(256)] = 3839,
  [SMALL_STATE(257)] = 3846,
  [SMALL_STATE(258)] = 3853,
  [SMALL_STATE(259)] = 3860,
  [SMALL_STATE(260)] = 3867,
  [SMALL_STATE(261)] = 3874,
  [SMALL_STATE(262)] = 3881,
  [SMALL_STATE(263)] = 3888,
  [SMALL_STATE(264)] = 3895,
  [SMALL_STATE(265)] = 3902,
  [SMALL_STATE(266)] = 3909,
  [SMALL_STATE(267)] = 3916,
  [SMALL_STATE(268)] = 3923,
  [SMALL_STATE(269)] = 3930,
  [SMALL_STATE(270)] = 3937,
  [SMALL_STATE(271)] = 3944,
  [SMALL_STATE(272)] = 3951,
  [SMALL_STATE(273)] = 3958,
  [SMALL_STATE(274)] = 3965,
  [SMALL_STATE(275)] = 3972,
  [SMALL_STATE(276)] = 3979,
  [SMALL_STATE(277)] = 3986,
  [SMALL_STATE(278)] = 3993,
  [SMALL_STATE(279)] = 4000,
  [SMALL_STATE(280)] = 4007,
  [SMALL_STATE(281)] = 4014,
  [SMALL_STATE(282)] = 4021,
  [SMALL_STATE(283)] = 4028,
  [SMALL_STATE(284)] = 4035,
  [SMALL_STATE(285)] = 4042,
  [SMALL_STATE(286)] = 4049,
  [SMALL_STATE(287)] = 4056,
  [SMALL_STATE(288)] = 4063,
  [SMALL_STATE(289)] = 4070,
  [SMALL_STATE(290)] = 4077,
  [SMALL_STATE(291)] = 4084,
  [SMALL_STATE(292)] = 4091,
  [SMALL_STATE(293)] = 4098,
  [SMALL_STATE(294)] = 4105,
  [SMALL_STATE(295)] = 4112,
  [SMALL_STATE(296)] = 4119,
  [SMALL_STATE(297)] = 4126,
  [SMALL_STATE(298)] = 4133,
  [SMALL_STATE(299)] = 4140,
  [SMALL_STATE(300)] = 4147,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(179),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(217),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(50),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(27),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(38),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(35),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(65),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(70),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(142),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(41),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(178),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(201),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(202),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_instruction, 2),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 2),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(196),
  [187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(17),
  [190] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(192),
  [193] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(43),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_instruction, 2),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [232] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(172),
  [235] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(22),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(22),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_string, 1),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_string, 1),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 2),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [261] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(171),
  [264] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(26),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(26),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shisho_metavariable, 3),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shisho_metavariable, 3),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stopsignal_value, 2),
  [282] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stopsignal_value, 2), SHIFT_REPEAT(185),
  [285] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stopsignal_value, 2), SHIFT_REPEAT(29),
  [288] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stopsignal_value, 2), SHIFT_REPEAT(157),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 2),
  [299] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 2), SHIFT_REPEAT(187),
  [302] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 2), SHIFT_REPEAT(31),
  [305] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 2), SHIFT_REPEAT(240),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 1),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 1),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat1, 2),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2), SHIFT_REPEAT(226),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 2),
  [333] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2), SHIFT_REPEAT(181),
  [336] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2), SHIFT_REPEAT(36),
  [339] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2), SHIFT_REPEAT(300),
  [342] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2), SHIFT_REPEAT(186),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2), SHIFT_REPEAT(37),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2),
  [350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2), SHIFT_REPEAT(135),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [357] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(176),
  [360] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(39),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_instruction, 2),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_value_repeat1, 2),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_value_repeat1, 2),
  [379] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_tag_value_repeat1, 2), SHIFT_REPEAT(166),
  [382] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_tag_value_repeat1, 2), SHIFT_REPEAT(42),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 1),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 1),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 4),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 4),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_tag_value, 1),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_tag_value, 1),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 2),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 2),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_value_repeat1, 2),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_value_repeat1, 2),
  [435] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_digest_value_repeat1, 2), SHIFT_REPEAT(167),
  [438] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_value_repeat1, 2), SHIFT_REPEAT(59),
  [441] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(170),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2),
  [446] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(60),
  [449] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(60),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shisho_ellipsis_metavariable, 4),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shisho_ellipsis_metavariable, 4),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [468] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(175),
  [471] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(66),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_digest_value, 1),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_digest_value, 1),
  [494] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 2, .production_id = 4),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_name_or_group, 2),
  [512] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__user_name_or_group, 2), SHIFT_REPEAT(116),
  [515] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__user_name_or_group, 2), SHIFT_REPEAT(192),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [520] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(81),
  [523] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(173),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [550] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment_line, 2),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_line, 2),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [562] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(94),
  [565] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(174),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [570] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [574] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(97),
  [577] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(161),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 2),
  [582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 2),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2),
  [586] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(168),
  [589] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(99),
  [592] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 1),
  [598] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [600] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [602] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 4, .production_id = 13),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 4, .production_id = 15),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 6),
  [610] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 6),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3),
  [614] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_name_or_group, 1),
  [618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__user_name_or_group, 1),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 2),
  [622] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 2),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_fragment, 1),
  [626] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [628] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_fragment, 1),
  [630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param, 4, .production_id = 17),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, .production_id = 17),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [636] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2), SHIFT_REPEAT(124),
  [639] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_pair, 3, .production_id = 10),
  [643] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_pair, 3, .production_id = 10),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 3, .production_id = 11),
  [647] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 3, .production_id = 11),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_array_repeat1, 2),
  [655] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_array_repeat1, 2), SHIFT_REPEAT(64),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [664] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [666] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [668] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2),
  [670] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2), SHIFT_REPEAT(53),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [675] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 2),
  [677] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_tag, 2),
  [681] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_tag, 2),
  [683] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [685] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [689] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 3),
  [691] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [693] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 2, .production_id = 5),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 2),
  [711] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 3),
  [715] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 7),
  [719] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 7),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 2),
  [735] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 2, .production_id = 3),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_digest, 2),
  [781] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_digest, 2),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [789] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 1),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat2, 2),
  [811] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 2), SHIFT_REPEAT(6),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 4, .production_id = 9),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_instruction, 2),
  [818] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [820] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [822] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_instruction, 5),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_instruction, 5),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 4),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat2, 3),
  [836] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 3),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anon_comment, 2),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 5, .production_id = 18),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 4, .production_id = 16),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 4, .production_id = 14),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 4, .production_id = 12),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_instruction, 4),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_instruction, 4),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__spaced_env_pair, 3, .production_id = 11),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 3),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [866] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [868] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 2),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 2),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 3),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 2),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [916] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [928] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cross_build_instruction, 2),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_maintainer_instruction, 2),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_instruction, 2),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 2),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [944] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_onbuild_instruction, 2),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [948] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [952] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workdir_instruction, 2),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [958] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_volume_instruction, 2),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [968] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [976] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entrypoint_instruction, 2),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [984] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [990] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [992] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [994] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [996] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [998] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [1000] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [1002] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1008] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 2, .production_id = 2),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
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
