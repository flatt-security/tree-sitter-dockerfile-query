#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 295
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
      if (lookahead == '"') ADVANCE(266);
      if (lookahead == '#') ADVANCE(265);
      if (lookahead == '$') ADVANCE(227);
      if (lookahead == ',') ADVANCE(260);
      if (lookahead == '-') ADVANCE(49);
      if (lookahead == ':') ADVANCE(204);
      if (lookahead == '=') ADVANCE(209);
      if (lookahead == '@') ADVANCE(248);
      if (lookahead == '[') ADVANCE(259);
      if (lookahead == '\\') ADVANCE(222);
      if (lookahead == ']') ADVANCE(185);
      if (lookahead == '{') ADVANCE(228);
      if (lookahead == '}') ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(174)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(189);
      if (lookahead != 0) ADVANCE(221);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(263);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(263);
      if (lookahead == ' ') ADVANCE(277);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(263);
      if (lookahead == 'U') ADVANCE(173);
      if (lookahead == 'u') ADVANCE(169);
      if (lookahead == 'x') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(280);
      if (lookahead != 0) ADVANCE(278);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(263);
      if (lookahead != 0) ADVANCE(262);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '$') ADVANCE(227);
      if (lookahead == '/') ADVANCE(76);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == '=') ADVANCE(209);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(236);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '$') ADVANCE(227);
      if (lookahead == '/') ADVANCE(76);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(236);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '$') ADVANCE(227);
      if (lookahead == ':') ADVANCE(204);
      if (lookahead == '=') ADVANCE(209);
      if (lookahead == '@') ADVANCE(248);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(236);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '$') ADVANCE(227);
      if (lookahead == ':') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(236);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '$') ADVANCE(227);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(236);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '$') ADVANCE(227);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '$') ADVANCE(227);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(212);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '$') ADVANCE(227);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '$') ADVANCE(227);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(236);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '$') ADVANCE(227);
      if (lookahead == ':') ADVANCE(203);
      if (lookahead == '@') ADVANCE(248);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(242);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (lookahead != 0) ADVANCE(243);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '$') ADVANCE(227);
      if (lookahead == ':') ADVANCE(203);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '$') ADVANCE(227);
      if (lookahead == ':') ADVANCE(272);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(276);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '$') ADVANCE(227);
      if (lookahead == ':') ADVANCE(272);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(276);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '$') ADVANCE(227);
      if (lookahead == '@') ADVANCE(248);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(246);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (lookahead != 0 &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(247);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '$') ADVANCE(227);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '$') ADVANCE(227);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '$') ADVANCE(227);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '$') ADVANCE(227);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '$') ADVANCE(227);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '$') ADVANCE(227);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(242);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(243);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '$') ADVANCE(227);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(276);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '$') ADVANCE(227);
      if (lookahead == '\\') ADVANCE(225);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (lookahead != 0) ADVANCE(226);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == ':') ADVANCE(203);
      if (lookahead == '@') ADVANCE(248);
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
          lookahead != '[') ADVANCE(261);
      END_STATE();
    case 31:
      if (lookahead == '\n') SKIP(35)
      if (lookahead == '"') ADVANCE(266);
      if (lookahead == '$') ADVANCE(227);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(267);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(179);
      if (lookahead == '\r') SKIP(32)
      if (lookahead == '$') ADVANCE(227);
      if (lookahead == '\\') ADVANCE(225);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(281);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 33:
      if (lookahead == '"') ADVANCE(266);
      if (lookahead == '$') ADVANCE(227);
      if (lookahead == ':') ADVANCE(271);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (lookahead != 0) ADVANCE(276);
      END_STATE();
    case 34:
      if (lookahead == '"') ADVANCE(266);
      if (lookahead == '$') ADVANCE(227);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      END_STATE();
    case 35:
      if (lookahead == '"') ADVANCE(266);
      if (lookahead == '$') ADVANCE(227);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      END_STATE();
    case 36:
      if (lookahead == '#') ADVANCE(265);
      if (lookahead == '[') ADVANCE(259);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (lookahead != 0) ADVANCE(261);
      END_STATE();
    case 37:
      if (lookahead == '$') ADVANCE(227);
      if (lookahead == '-') ADVANCE(49);
      if (lookahead == ':') ADVANCE(224);
      if (lookahead == '\\') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (lookahead != 0) ADVANCE(221);
      END_STATE();
    case 38:
      if (lookahead == '$') ADVANCE(227);
      if (lookahead == '-') ADVANCE(241);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(243);
      END_STATE();
    case 39:
      if (lookahead == '$') ADVANCE(227);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(189);
      END_STATE();
    case 40:
      if (lookahead == '$') ADVANCE(227);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == '[') ADVANCE(259);
      if (lookahead == '\\') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(221);
      END_STATE();
    case 41:
      if (lookahead == '$') ADVANCE(227);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == '\\') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(221);
      END_STATE();
    case 42:
      if (lookahead == '$') ADVANCE(227);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(42)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(212);
      END_STATE();
    case 43:
      if (lookahead == '$') ADVANCE(227);
      if (lookahead == ':') ADVANCE(245);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      if (lookahead != 0 &&
          lookahead != '@' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(247);
      END_STATE();
    case 44:
      if (lookahead == '$') ADVANCE(227);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 45:
      if (lookahead == '$') ADVANCE(227);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      END_STATE();
    case 46:
      if (lookahead == '$') ADVANCE(227);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 47:
      if (lookahead == '$') ADVANCE(227);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(243);
      END_STATE();
    case 48:
      if (lookahead == '$') ADVANCE(227);
      if (lookahead == '\\') ADVANCE(225);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(282);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(48)
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 49:
      if (lookahead == '-') ADVANCE(252);
      END_STATE();
    case 50:
      if (lookahead == '.') ADVANCE(69);
      END_STATE();
    case 51:
      if (lookahead == '.') ADVANCE(188);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 56:
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(58)
      if (lookahead != 0) ADVANCE(257);
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
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 61:
      if (lookahead == '=') ADVANCE(209);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      END_STATE();
    case 62:
      if (lookahead == 'E') ADVANCE(214);
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
      if (lookahead == '{') ADVANCE(228);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(67)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 68:
      if (lookahead == '\\') ADVANCE(229);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(231);
      END_STATE();
    case 69:
      if (lookahead == ']') ADVANCE(186);
      END_STATE();
    case 70:
      if (lookahead == '_') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
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
      if (lookahead == 'p') ADVANCE(237);
      END_STATE();
    case 75:
      if (lookahead == 'p') ADVANCE(238);
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
          lookahead == 'd') ADVANCE(198);
      END_STATE();
    case 89:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(194);
      END_STATE();
    case 90:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(210);
      END_STATE();
    case 91:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(220);
      END_STATE();
    case 92:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(109);
      END_STATE();
    case 93:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 94:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(201);
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
          lookahead == 'g') ADVANCE(207);
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
          lookahead == 'k') ADVANCE(213);
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
          lookahead == 'l') ADVANCE(195);
      END_STATE();
    case 117:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(215);
      END_STATE();
    case 118:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(211);
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
          lookahead == 'm') ADVANCE(190);
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
          lookahead == 'n') ADVANCE(193);
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
          lookahead == 'r') ADVANCE(202);
      END_STATE();
    case 146:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(206);
      END_STATE();
    case 147:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(216);
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
          lookahead == 's') ADVANCE(191);
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
          lookahead == 't') ADVANCE(200);
      END_STATE();
    case 158:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(148);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(197);
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
          lookahead == 'y') ADVANCE(199);
      END_STATE();
    case 165:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(143);
      END_STATE();
    case 166:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(278);
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
      if (lookahead == '"') ADVANCE(266);
      if (lookahead == '#') ADVANCE(265);
      if (lookahead == '$') ADVANCE(227);
      if (lookahead == ',') ADVANCE(260);
      if (lookahead == '-') ADVANCE(49);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == '[') ADVANCE(259);
      if (lookahead == '\\') ADVANCE(222);
      if (lookahead == ']') ADVANCE(185);
      if (lookahead == '{') ADVANCE(228);
      if (lookahead == '}') ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(174)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(189);
      if (lookahead != 0) ADVANCE(221);
      END_STATE();
    case 175:
      if (eof) ADVANCE(177);
      if (lookahead == '"') ADVANCE(266);
      if (lookahead == '#') ADVANCE(283);
      if (lookahead == '$') ADVANCE(227);
      if (lookahead == ',') ADVANCE(260);
      if (lookahead == '-') ADVANCE(49);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == '=') ADVANCE(209);
      if (lookahead == 'N') ADVANCE(64);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(185);
      if (lookahead == '}') ADVANCE(232);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(236);
      END_STATE();
    case 176:
      if (eof) ADVANCE(177);
      if (lookahead == '"') ADVANCE(266);
      if (lookahead == '#') ADVANCE(283);
      if (lookahead == '$') ADVANCE(227);
      if (lookahead == ',') ADVANCE(260);
      if (lookahead == '-') ADVANCE(49);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == 'N') ADVANCE(64);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(185);
      if (lookahead == '}') ADVANCE(232);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(236);
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
          lookahead == ' ') ADVANCE(281);
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
      if (lookahead == '.') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(276);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_COLON_LBRACK);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(276);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_COLON_LBRACK);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(257);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_shisho_ellipsis);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_shisho_ellipsis);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(276);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_shisho_metavariable_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(189);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_from_instruction_token1);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_from_instruction_token2);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_from_instruction_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(243);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_run_instruction_token1);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_cmd_instruction_token1);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_label_instruction_token1);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_expose_instruction_token1);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_env_instruction_token1);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_add_instruction_token1);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_copy_instruction_token1);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_entrypoint_instruction_token1);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_volume_instruction_token1);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_user_instruction_token1);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '[') ADVANCE(181);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym__user_name_or_group_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_workdir_instruction_token1);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_arg_instruction_token1);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_arg_instruction_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_onbuild_instruction_token1);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token1);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym__stopsignal_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(212);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_healthcheck_instruction_token1);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_NONE);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_shell_instruction_token1);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token1);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead == '\n') ADVANCE(263);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead == '\\') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(219);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(219);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_cross_build_instruction_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_path_token1);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '\n') ADVANCE(263);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '[') ADVANCE(181);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '[') ADVANCE(180);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead == '\n') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(226);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(226);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == '\n') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(231);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == '\\') ADVANCE(229);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(231);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(231);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym__spaced_env_pair_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym__env_key_token1);
      if (lookahead == '_') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_expose_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(236);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_SLASHtcp);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_SLASHudp);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_label_pair_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead == '\n') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(243);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead == '-') ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(243);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(243);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(243);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_image_tag_value_token1);
      if (lookahead == '\n') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(247);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_image_tag_value_token1);
      if (lookahead == '[') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@' &&
          lookahead != ']') ADVANCE(247);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_image_tag_value_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(247);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_image_tag_value_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(247);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_image_digest_value_token1);
      if (lookahead == '[') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_image_digest_value_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_image_digest_value_token1);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(243);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_param_name);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_param_value);
      if (lookahead == '\n') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(257);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_param_value);
      if (lookahead == '[') ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(257);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_param_value);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(257);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_image_alias_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(261);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token2);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_line_continuation);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_line_continuation);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(231);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(268);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(268);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '.') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(276);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '.') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(276);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '[') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(276);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '[') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(276);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == ']') ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(276);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '_') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(276);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(276);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(276);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym__non_newline_whitespace);
      if (lookahead == '\n') ADVANCE(179);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(281);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym__non_newline_whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(282);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(283);
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
  [6] = {.lex_state = 38},
  [7] = {.lex_state = 175},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 33},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 33},
  [12] = {.lex_state = 33},
  [13] = {.lex_state = 33},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 16},
  [16] = {.lex_state = 11},
  [17] = {.lex_state = 40},
  [18] = {.lex_state = 54},
  [19] = {.lex_state = 11},
  [20] = {.lex_state = 16},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 17},
  [23] = {.lex_state = 175},
  [24] = {.lex_state = 7},
  [25] = {.lex_state = 17},
  [26] = {.lex_state = 175},
  [27] = {.lex_state = 14},
  [28] = {.lex_state = 175},
  [29] = {.lex_state = 27},
  [30] = {.lex_state = 36},
  [31] = {.lex_state = 47},
  [32] = {.lex_state = 36},
  [33] = {.lex_state = 14},
  [34] = {.lex_state = 42},
  [35] = {.lex_state = 37},
  [36] = {.lex_state = 37},
  [37] = {.lex_state = 27},
  [38] = {.lex_state = 175},
  [39] = {.lex_state = 36},
  [40] = {.lex_state = 18},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 8},
  [43] = {.lex_state = 43},
  [44] = {.lex_state = 36},
  [45] = {.lex_state = 8},
  [46] = {.lex_state = 55},
  [47] = {.lex_state = 46},
  [48] = {.lex_state = 44},
  [49] = {.lex_state = 16},
  [50] = {.lex_state = 41},
  [51] = {.lex_state = 16},
  [52] = {.lex_state = 17},
  [53] = {.lex_state = 46},
  [54] = {.lex_state = 18},
  [55] = {.lex_state = 17},
  [56] = {.lex_state = 175},
  [57] = {.lex_state = 36},
  [58] = {.lex_state = 37},
  [59] = {.lex_state = 15},
  [60] = {.lex_state = 37},
  [61] = {.lex_state = 175},
  [62] = {.lex_state = 19},
  [63] = {.lex_state = 31},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 37},
  [66] = {.lex_state = 31},
  [67] = {.lex_state = 15},
  [68] = {.lex_state = 31},
  [69] = {.lex_state = 37},
  [70] = {.lex_state = 39},
  [71] = {.lex_state = 14},
  [72] = {.lex_state = 19},
  [73] = {.lex_state = 14},
  [74] = {.lex_state = 31},
  [75] = {.lex_state = 31},
  [76] = {.lex_state = 36},
  [77] = {.lex_state = 39},
  [78] = {.lex_state = 32},
  [79] = {.lex_state = 37},
  [80] = {.lex_state = 28},
  [81] = {.lex_state = 32},
  [82] = {.lex_state = 32},
  [83] = {.lex_state = 25},
  [84] = {.lex_state = 31},
  [85] = {.lex_state = 25},
  [86] = {.lex_state = 31},
  [87] = {.lex_state = 37},
  [88] = {.lex_state = 39},
  [89] = {.lex_state = 175},
  [90] = {.lex_state = 37},
  [91] = {.lex_state = 48},
  [92] = {.lex_state = 5},
  [93] = {.lex_state = 48},
  [94] = {.lex_state = 11},
  [95] = {.lex_state = 11},
  [96] = {.lex_state = 5},
  [97] = {.lex_state = 48},
  [98] = {.lex_state = 23},
  [99] = {.lex_state = 18},
  [100] = {.lex_state = 23},
  [101] = {.lex_state = 26},
  [102] = {.lex_state = 18},
  [103] = {.lex_state = 26},
  [104] = {.lex_state = 11},
  [105] = {.lex_state = 26},
  [106] = {.lex_state = 11},
  [107] = {.lex_state = 11},
  [108] = {.lex_state = 11},
  [109] = {.lex_state = 25},
  [110] = {.lex_state = 27},
  [111] = {.lex_state = 27},
  [112] = {.lex_state = 30},
  [113] = {.lex_state = 27},
  [114] = {.lex_state = 7},
  [115] = {.lex_state = 5},
  [116] = {.lex_state = 25},
  [117] = {.lex_state = 175},
  [118] = {.lex_state = 15},
  [119] = {.lex_state = 27},
  [120] = {.lex_state = 5},
  [121] = {.lex_state = 27},
  [122] = {.lex_state = 30},
  [123] = {.lex_state = 19},
  [124] = {.lex_state = 32},
  [125] = {.lex_state = 19},
  [126] = {.lex_state = 32},
  [127] = {.lex_state = 31},
  [128] = {.lex_state = 31},
  [129] = {.lex_state = 5},
  [130] = {.lex_state = 5},
  [131] = {.lex_state = 47},
  [132] = {.lex_state = 56},
  [133] = {.lex_state = 26},
  [134] = {.lex_state = 59},
  [135] = {.lex_state = 37},
  [136] = {.lex_state = 23},
  [137] = {.lex_state = 23},
  [138] = {.lex_state = 26},
  [139] = {.lex_state = 47},
  [140] = {.lex_state = 60},
  [141] = {.lex_state = 32},
  [142] = {.lex_state = 175},
  [143] = {.lex_state = 48},
  [144] = {.lex_state = 32},
  [145] = {.lex_state = 175},
  [146] = {.lex_state = 48},
  [147] = {.lex_state = 56},
  [148] = {.lex_state = 47},
  [149] = {.lex_state = 32},
  [150] = {.lex_state = 59},
  [151] = {.lex_state = 37},
  [152] = {.lex_state = 56},
  [153] = {.lex_state = 59},
  [154] = {.lex_state = 7},
  [155] = {.lex_state = 175},
  [156] = {.lex_state = 36},
  [157] = {.lex_state = 5},
  [158] = {.lex_state = 67},
  [159] = {.lex_state = 175},
  [160] = {.lex_state = 39},
  [161] = {.lex_state = 7},
  [162] = {.lex_state = 67},
  [163] = {.lex_state = 5},
  [164] = {.lex_state = 67},
  [165] = {.lex_state = 39},
  [166] = {.lex_state = 7},
  [167] = {.lex_state = 67},
  [168] = {.lex_state = 67},
  [169] = {.lex_state = 175},
  [170] = {.lex_state = 67},
  [171] = {.lex_state = 39},
  [172] = {.lex_state = 39},
  [173] = {.lex_state = 39},
  [174] = {.lex_state = 7},
  [175] = {.lex_state = 67},
  [176] = {.lex_state = 14},
  [177] = {.lex_state = 39},
  [178] = {.lex_state = 61},
  [179] = {.lex_state = 61},
  [180] = {.lex_state = 67},
  [181] = {.lex_state = 32},
  [182] = {.lex_state = 7},
  [183] = {.lex_state = 39},
  [184] = {.lex_state = 67},
  [185] = {.lex_state = 175},
  [186] = {.lex_state = 7},
  [187] = {.lex_state = 39},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 67},
  [190] = {.lex_state = 67},
  [191] = {.lex_state = 5},
  [192] = {.lex_state = 32},
  [193] = {.lex_state = 67},
  [194] = {.lex_state = 67},
  [195] = {.lex_state = 5},
  [196] = {.lex_state = 68},
  [197] = {.lex_state = 48},
  [198] = {.lex_state = 5},
  [199] = {.lex_state = 5},
  [200] = {.lex_state = 5},
  [201] = {.lex_state = 5},
  [202] = {.lex_state = 5},
  [203] = {.lex_state = 5},
  [204] = {.lex_state = 5},
  [205] = {.lex_state = 5},
  [206] = {.lex_state = 5},
  [207] = {.lex_state = 5},
  [208] = {.lex_state = 5},
  [209] = {.lex_state = 5},
  [210] = {.lex_state = 5},
  [211] = {.lex_state = 5},
  [212] = {.lex_state = 5},
  [213] = {.lex_state = 218},
  [214] = {.lex_state = 5},
  [215] = {.lex_state = 5},
  [216] = {.lex_state = 175},
  [217] = {.lex_state = 5},
  [218] = {.lex_state = 175},
  [219] = {.lex_state = 48},
  [220] = {.lex_state = 39},
  [221] = {.lex_state = 175},
  [222] = {.lex_state = 48},
  [223] = {.lex_state = 175},
  [224] = {.lex_state = 175},
  [225] = {.lex_state = 5},
  [226] = {.lex_state = 175},
  [227] = {.lex_state = 175},
  [228] = {.lex_state = 175},
  [229] = {.lex_state = 175},
  [230] = {.lex_state = 175},
  [231] = {.lex_state = 5},
  [232] = {.lex_state = 5},
  [233] = {.lex_state = 175},
  [234] = {.lex_state = 5},
  [235] = {.lex_state = 175},
  [236] = {.lex_state = 175},
  [237] = {.lex_state = 175},
  [238] = {.lex_state = 5},
  [239] = {.lex_state = 175},
  [240] = {.lex_state = 175},
  [241] = {.lex_state = 175},
  [242] = {.lex_state = 5},
  [243] = {.lex_state = 175},
  [244] = {.lex_state = 175},
  [245] = {.lex_state = 175},
  [246] = {.lex_state = 5},
  [247] = {.lex_state = 175},
  [248] = {.lex_state = 175},
  [249] = {.lex_state = 5},
  [250] = {.lex_state = 175},
  [251] = {.lex_state = 175},
  [252] = {.lex_state = 175},
  [253] = {.lex_state = 175},
  [254] = {.lex_state = 5},
  [255] = {.lex_state = 175},
  [256] = {.lex_state = 48},
  [257] = {.lex_state = 175},
  [258] = {.lex_state = 48},
  [259] = {.lex_state = 175},
  [260] = {.lex_state = 39},
  [261] = {.lex_state = 175},
  [262] = {.lex_state = 5},
  [263] = {.lex_state = 39},
  [264] = {.lex_state = 39},
  [265] = {.lex_state = 68},
  [266] = {.lex_state = 175},
  [267] = {.lex_state = 175},
  [268] = {.lex_state = 39},
  [269] = {.lex_state = 39},
  [270] = {.lex_state = 68},
  [271] = {.lex_state = 175},
  [272] = {.lex_state = 5},
  [273] = {.lex_state = 39},
  [274] = {.lex_state = 39},
  [275] = {.lex_state = 68},
  [276] = {.lex_state = 5},
  [277] = {.lex_state = 39},
  [278] = {.lex_state = 39},
  [279] = {.lex_state = 68},
  [280] = {.lex_state = 175},
  [281] = {.lex_state = 39},
  [282] = {.lex_state = 39},
  [283] = {.lex_state = 68},
  [284] = {.lex_state = 68},
  [285] = {.lex_state = 68},
  [286] = {.lex_state = 68},
  [287] = {.lex_state = 68},
  [288] = {.lex_state = 68},
  [289] = {.lex_state = 68},
  [290] = {.lex_state = 68},
  [291] = {.lex_state = 39},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 218},
  [294] = {.lex_state = 218},
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
    [sym_source_file] = STATE(292),
    [sym_shisho_metavariable] = STATE(210),
    [sym_shisho_ellipsis_metavariable] = STATE(210),
    [sym__instruction] = STATE(210),
    [sym_from_instruction] = STATE(210),
    [sym_run_instruction] = STATE(210),
    [sym_cmd_instruction] = STATE(210),
    [sym_label_instruction] = STATE(210),
    [sym_expose_instruction] = STATE(210),
    [sym_env_instruction] = STATE(210),
    [sym_add_instruction] = STATE(210),
    [sym_copy_instruction] = STATE(210),
    [sym_entrypoint_instruction] = STATE(210),
    [sym_volume_instruction] = STATE(210),
    [sym_user_instruction] = STATE(210),
    [sym_workdir_instruction] = STATE(210),
    [sym_arg_instruction] = STATE(210),
    [sym_onbuild_instruction] = STATE(210),
    [sym_stopsignal_instruction] = STATE(210),
    [sym_healthcheck_instruction] = STATE(210),
    [sym_shell_instruction] = STATE(210),
    [sym_maintainer_instruction] = STATE(210),
    [sym_cross_build_instruction] = STATE(210),
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
    STATE(210), 22,
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
    STATE(210), 22,
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
    STATE(242), 21,
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
  [314] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(120), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(122), 1,
      anon_sym_DOLLAR,
    ACTIONS(124), 1,
      aux_sym_image_name_token1,
    ACTIONS(126), 1,
      anon_sym_DASH_DASH,
    STATE(166), 1,
      sym_image_spec,
    STATE(31), 2,
      sym_shisho_ellipsis_metavariable,
      sym_param,
    STATE(33), 2,
      sym_expansion,
      aux_sym_image_name_repeat1,
    STATE(80), 2,
      sym_shisho_metavariable,
      sym_image_name,
  [345] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(15), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(128), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(130), 1,
      sym_shisho_ellipsis,
    ACTIONS(132), 1,
      anon_sym_NONE,
    ACTIONS(134), 1,
      anon_sym_DASH_DASH,
    STATE(238), 1,
      sym_cmd_instruction,
    STATE(23), 4,
      sym_shisho_metavariable,
      sym_shisho_ellipsis_metavariable,
      sym_param,
      aux_sym_healthcheck_instruction_repeat1,
  [373] = 8,
    ACTIONS(136), 1,
      anon_sym_LF,
    ACTIONS(138), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(141), 1,
      sym_shisho_ellipsis,
    ACTIONS(144), 1,
      anon_sym_DOLLAR,
    ACTIONS(147), 1,
      aux_sym_expose_port_token1,
    ACTIONS(150), 1,
      sym_line_continuation,
    STATE(92), 1,
      sym_shisho_metavariable,
    STATE(8), 4,
      sym_shisho_ellipsis_metavariable,
      sym_expansion,
      sym_expose_port,
      aux_sym_expose_instruction_repeat1,
  [401] = 8,
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
    STATE(83), 2,
      sym_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(205), 3,
      sym_shisho_metavariable,
      sym_double_quoted_string,
      sym_unquoted_string,
  [429] = 8,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(162), 1,
      anon_sym_LF,
    ACTIONS(164), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(166), 1,
      sym_shisho_ellipsis,
    ACTIONS(168), 1,
      anon_sym_DOLLAR,
    ACTIONS(170), 1,
      aux_sym_expose_port_token1,
    STATE(92), 1,
      sym_shisho_metavariable,
    STATE(8), 4,
      sym_shisho_ellipsis_metavariable,
      sym_expansion,
      sym_expose_port,
      aux_sym_expose_instruction_repeat1,
  [457] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(172), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(174), 1,
      anon_sym_DOLLAR,
    ACTIONS(176), 1,
      anon_sym_DQUOTE,
    ACTIONS(178), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(180), 1,
      anon_sym_BSLASH,
    STATE(25), 2,
      sym_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(129), 3,
      sym_shisho_metavariable,
      sym_double_quoted_string,
      sym_unquoted_string,
  [485] = 8,
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
    STATE(83), 2,
      sym_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(198), 3,
      sym_shisho_metavariable,
      sym_double_quoted_string,
      sym_unquoted_string,
  [513] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(156), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(184), 1,
      anon_sym_DOLLAR,
    ACTIONS(186), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(188), 1,
      anon_sym_BSLASH,
    STATE(20), 2,
      sym_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(119), 3,
      sym_shisho_metavariable,
      sym_double_quoted_string,
      sym_unquoted_string,
  [541] = 7,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(190), 1,
      anon_sym_LF,
    ACTIONS(192), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(195), 1,
      sym_shisho_ellipsis,
    ACTIONS(198), 1,
      aux_sym__env_key_token1,
    STATE(224), 2,
      sym_shisho_metavariable,
      sym__env_key,
    STATE(14), 3,
      sym_shisho_ellipsis_metavariable,
      sym_env_pair,
      aux_sym_env_instruction_repeat1,
  [566] = 7,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(201), 1,
      anon_sym_LF,
    ACTIONS(205), 1,
      anon_sym_DOLLAR,
    ACTIONS(208), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(211), 1,
      anon_sym_BSLASH,
    STATE(15), 2,
      sym_expansion,
      aux_sym_unquoted_string_repeat1,
    ACTIONS(203), 3,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      aux_sym_label_pair_token1,
  [591] = 6,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(214), 1,
      anon_sym_LF,
    ACTIONS(216), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(222), 1,
      anon_sym_DOLLAR,
    ACTIONS(219), 2,
      sym_shisho_ellipsis,
      aux_sym__stopsignal_value_token1,
    STATE(16), 4,
      sym_shisho_metavariable,
      sym_shisho_ellipsis_metavariable,
      aux_sym__stopsignal_value,
      sym_expansion,
  [614] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(225), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(227), 1,
      sym_shisho_ellipsis,
    ACTIONS(229), 1,
      aux_sym_path_token1,
    ACTIONS(231), 1,
      anon_sym_DOLLAR,
    ACTIONS(233), 1,
      anon_sym_LBRACK,
    STATE(78), 1,
      sym_expansion,
    STATE(249), 1,
      sym_string_array,
    STATE(149), 2,
      sym_shisho_ellipsis_metavariable,
      sym_path,
  [643] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(235), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(237), 1,
      sym_shisho_ellipsis,
    ACTIONS(239), 1,
      aux_sym__env_key_token1,
    STATE(262), 1,
      sym__spaced_env_pair,
    STATE(179), 2,
      sym_shisho_metavariable,
      sym__env_key,
    STATE(21), 3,
      sym_shisho_ellipsis_metavariable,
      sym_env_pair,
      aux_sym_env_instruction_repeat1,
  [668] = 6,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(241), 1,
      anon_sym_LF,
    ACTIONS(243), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(247), 1,
      anon_sym_DOLLAR,
    ACTIONS(245), 2,
      sym_shisho_ellipsis,
      aux_sym__stopsignal_value_token1,
    STATE(16), 4,
      sym_shisho_metavariable,
      sym_shisho_ellipsis_metavariable,
      aux_sym__stopsignal_value,
      sym_expansion,
  [691] = 7,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(249), 1,
      anon_sym_LF,
    ACTIONS(253), 1,
      anon_sym_DOLLAR,
    ACTIONS(255), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(257), 1,
      anon_sym_BSLASH,
    STATE(15), 2,
      sym_expansion,
      aux_sym_unquoted_string_repeat1,
    ACTIONS(251), 3,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      aux_sym_label_pair_token1,
  [716] = 7,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(259), 1,
      anon_sym_LF,
    ACTIONS(261), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(263), 1,
      sym_shisho_ellipsis,
    ACTIONS(265), 1,
      aux_sym__env_key_token1,
    STATE(224), 2,
      sym_shisho_metavariable,
      sym__env_key,
    STATE(14), 3,
      sym_shisho_ellipsis_metavariable,
      sym_env_pair,
      aux_sym_env_instruction_repeat1,
  [741] = 7,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(201), 1,
      anon_sym_LF,
    ACTIONS(267), 1,
      anon_sym_DOLLAR,
    ACTIONS(270), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(273), 1,
      anon_sym_BSLASH,
    STATE(22), 2,
      sym_expansion,
      aux_sym_unquoted_string_repeat1,
    ACTIONS(203), 3,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      aux_sym__env_key_token1,
  [766] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(15), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(128), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(134), 1,
      anon_sym_DASH_DASH,
    ACTIONS(276), 1,
      sym_shisho_ellipsis,
    STATE(217), 1,
      sym_cmd_instruction,
    STATE(28), 4,
      sym_shisho_metavariable,
      sym_shisho_ellipsis_metavariable,
      sym_param,
      aux_sym_healthcheck_instruction_repeat1,
  [791] = 3,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(278), 3,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_AT,
    ACTIONS(280), 6,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      aux_sym_from_instruction_token2,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [808] = 7,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(249), 1,
      anon_sym_LF,
    ACTIONS(282), 1,
      anon_sym_DOLLAR,
    ACTIONS(284), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(286), 1,
      anon_sym_BSLASH,
    STATE(22), 2,
      sym_expansion,
      aux_sym_unquoted_string_repeat1,
    ACTIONS(251), 3,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      aux_sym__env_key_token1,
  [833] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(164), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(288), 1,
      sym_shisho_ellipsis,
    ACTIONS(290), 1,
      anon_sym_DOLLAR,
    ACTIONS(292), 1,
      aux_sym_expose_port_token1,
    STATE(92), 1,
      sym_shisho_metavariable,
    STATE(10), 4,
      sym_shisho_ellipsis_metavariable,
      sym_expansion,
      sym_expose_port,
      aux_sym_expose_instruction_repeat1,
  [858] = 6,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(296), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(298), 1,
      anon_sym_DOLLAR,
    ACTIONS(301), 1,
      aux_sym_image_name_token1,
    STATE(27), 2,
      sym_expansion,
      aux_sym_image_name_repeat1,
    ACTIONS(294), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [880] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(304), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(307), 1,
      sym_shisho_ellipsis,
    ACTIONS(310), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(312), 1,
      anon_sym_DASH_DASH,
    STATE(28), 4,
      sym_shisho_metavariable,
      sym_shisho_ellipsis_metavariable,
      sym_param,
      aux_sym_healthcheck_instruction_repeat1,
  [902] = 7,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(315), 1,
      anon_sym_LF,
    ACTIONS(317), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(320), 1,
      sym_shisho_ellipsis,
    ACTIONS(323), 1,
      aux_sym_label_pair_token1,
    STATE(267), 1,
      sym_shisho_metavariable,
    STATE(29), 3,
      sym_shisho_ellipsis_metavariable,
      sym_label_pair,
      aux_sym_label_instruction_repeat1,
  [926] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(328), 1,
      anon_sym_POUND,
    STATE(112), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(201), 1,
      sym_shell_fragment,
    STATE(211), 1,
      sym__anon_comment,
    ACTIONS(326), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(76), 2,
      sym__comment_line,
      aux_sym_shell_command_repeat1,
  [950] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(116), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(122), 1,
      anon_sym_DOLLAR,
    ACTIONS(124), 1,
      aux_sym_image_name_token1,
    STATE(186), 1,
      sym_image_spec,
    STATE(33), 2,
      sym_expansion,
      aux_sym_image_name_repeat1,
    STATE(80), 2,
      sym_shisho_metavariable,
      sym_image_name,
  [974] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(328), 1,
      anon_sym_POUND,
    STATE(112), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(211), 1,
      sym__anon_comment,
    STATE(212), 1,
      sym_shell_fragment,
    ACTIONS(326), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(30), 2,
      sym__comment_line,
      aux_sym_shell_command_repeat1,
  [998] = 6,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(332), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(334), 1,
      anon_sym_DOLLAR,
    ACTIONS(336), 1,
      aux_sym_image_name_token1,
    STATE(27), 2,
      sym_expansion,
      aux_sym_image_name_repeat1,
    ACTIONS(330), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [1020] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(243), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(340), 1,
      anon_sym_DOLLAR,
    ACTIONS(338), 2,
      sym_shisho_ellipsis,
      aux_sym__stopsignal_value_token1,
    STATE(19), 4,
      sym_shisho_metavariable,
      sym_shisho_ellipsis_metavariable,
      aux_sym__stopsignal_value,
      sym_expansion,
  [1040] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(342), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(344), 1,
      aux_sym_path_token1,
    ACTIONS(346), 1,
      anon_sym_DOLLAR,
    ACTIONS(348), 1,
      anon_sym_DASH_DASH,
    STATE(65), 1,
      sym_param,
    STATE(91), 1,
      sym_expansion,
    STATE(258), 2,
      sym_shisho_metavariable,
      sym_path,
  [1066] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(342), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(344), 1,
      aux_sym_path_token1,
    ACTIONS(346), 1,
      anon_sym_DOLLAR,
    ACTIONS(348), 1,
      anon_sym_DASH_DASH,
    STATE(60), 1,
      sym_param,
    STATE(91), 1,
      sym_expansion,
    STATE(256), 2,
      sym_shisho_metavariable,
      sym_path,
  [1092] = 7,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(350), 1,
      anon_sym_LF,
    ACTIONS(352), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(354), 1,
      sym_shisho_ellipsis,
    ACTIONS(356), 1,
      aux_sym_label_pair_token1,
    STATE(267), 1,
      sym_shisho_metavariable,
    STATE(29), 3,
      sym_shisho_ellipsis_metavariable,
      sym_label_pair,
      aux_sym_label_instruction_repeat1,
  [1116] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(128), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(358), 1,
      anon_sym_RBRACK,
    ACTIONS(360), 1,
      sym_shisho_ellipsis,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    STATE(142), 3,
      sym_shisho_metavariable,
      sym_shisho_ellipsis_metavariable,
      sym_double_quoted_string,
  [1137] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(233), 1,
      anon_sym_LBRACK,
    STATE(112), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(163), 1,
      sym_shell_fragment,
    ACTIONS(326), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(272), 2,
      sym_string_array,
      sym_shell_command,
  [1158] = 6,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(366), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(368), 1,
      anon_sym_DOLLAR,
    ACTIONS(371), 1,
      aux_sym_image_tag_value_token1,
    ACTIONS(364), 2,
      anon_sym_LF,
      anon_sym_AT,
    STATE(40), 2,
      sym_expansion,
      aux_sym_image_tag_value_repeat1,
  [1179] = 4,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(374), 1,
      anon_sym_LF,
    ACTIONS(378), 2,
      anon_sym_SLASHtcp,
      anon_sym_SLASHudp,
    ACTIONS(376), 4,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [1196] = 3,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(380), 1,
      anon_sym_LF,
    ACTIONS(382), 6,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      anon_sym_COLON,
      aux_sym__user_name_or_group_token1,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [1211] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(116), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(384), 1,
      anon_sym_DOLLAR,
    ACTIONS(386), 1,
      aux_sym_image_tag_value_token1,
    STATE(54), 2,
      sym_expansion,
      aux_sym_image_tag_value_repeat1,
    STATE(154), 2,
      sym_shisho_metavariable,
      sym_image_tag_value,
  [1232] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(233), 1,
      anon_sym_LBRACK,
    STATE(112), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(163), 1,
      sym_shell_fragment,
    ACTIONS(326), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(276), 2,
      sym_string_array,
      sym_shell_command,
  [1253] = 3,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(388), 1,
      anon_sym_LF,
    ACTIONS(390), 6,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      anon_sym_COLON,
      aux_sym__user_name_or_group_token1,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [1268] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(352), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(392), 1,
      sym_shisho_ellipsis,
    ACTIONS(394), 1,
      aux_sym_label_pair_token1,
    STATE(267), 1,
      sym_shisho_metavariable,
    STATE(37), 3,
      sym_shisho_ellipsis_metavariable,
      sym_label_pair,
      aux_sym_label_instruction_repeat1,
  [1289] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(116), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(396), 1,
      anon_sym_DOLLAR,
    ACTIONS(398), 1,
      aux_sym_image_alias_token1,
    STATE(98), 2,
      sym_expansion,
      aux_sym_image_alias_repeat1,
    STATE(215), 2,
      sym_shisho_metavariable,
      sym_image_alias,
  [1310] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(116), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(400), 1,
      anon_sym_DOLLAR,
    ACTIONS(402), 1,
      aux_sym_image_digest_value_token1,
    STATE(62), 2,
      sym_expansion,
      aux_sym_image_digest_value_repeat1,
    STATE(161), 2,
      sym_shisho_metavariable,
      sym_image_digest_value,
  [1331] = 3,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(380), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(382), 5,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      anon_sym_DOLLAR,
      aux_sym_label_pair_token1,
      aux_sym_unquoted_string_token1,
  [1346] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(225), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(229), 1,
      aux_sym_path_token1,
    ACTIONS(231), 1,
      anon_sym_DOLLAR,
    ACTIONS(404), 1,
      sym_shisho_ellipsis,
    STATE(78), 1,
      sym_expansion,
    STATE(192), 2,
      sym_shisho_ellipsis_metavariable,
      sym_path,
  [1369] = 3,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(388), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(390), 5,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      anon_sym_DOLLAR,
      aux_sym_label_pair_token1,
      aux_sym_unquoted_string_token1,
  [1384] = 3,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(380), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(382), 5,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      anon_sym_DOLLAR,
      aux_sym__env_key_token1,
      aux_sym_unquoted_string_token1,
  [1399] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(116), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(396), 1,
      anon_sym_DOLLAR,
    ACTIONS(398), 1,
      aux_sym_image_alias_token1,
    STATE(98), 2,
      sym_expansion,
      aux_sym_image_alias_repeat1,
    STATE(204), 2,
      sym_shisho_metavariable,
      sym_image_alias,
  [1420] = 6,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(408), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(410), 1,
      anon_sym_DOLLAR,
    ACTIONS(412), 1,
      aux_sym_image_tag_value_token1,
    ACTIONS(406), 2,
      anon_sym_LF,
      anon_sym_AT,
    STATE(40), 2,
      sym_expansion,
      aux_sym_image_tag_value_repeat1,
  [1441] = 3,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(388), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(390), 5,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      anon_sym_DOLLAR,
      aux_sym__env_key_token1,
      aux_sym_unquoted_string_token1,
  [1456] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(280), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(278), 6,
      anon_sym_RBRACK,
      sym_shisho_ellipsis,
      aux_sym_cmd_instruction_token1,
      anon_sym_EQ,
      anon_sym_DASH_DASH,
      anon_sym_COMMA,
  [1471] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(233), 1,
      anon_sym_LBRACK,
    STATE(112), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(163), 1,
      sym_shell_fragment,
    ACTIONS(326), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(254), 2,
      sym_string_array,
      sym_shell_command,
  [1492] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(116), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(414), 1,
      aux_sym_path_token1,
    ACTIONS(416), 1,
      anon_sym_DOLLAR,
    STATE(105), 1,
      sym_expansion,
    STATE(199), 2,
      sym_shisho_metavariable,
      sym_path,
  [1512] = 7,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(168), 1,
      anon_sym_DOLLAR,
    ACTIONS(418), 1,
      anon_sym_LF,
    ACTIONS(420), 1,
      anon_sym_COLON,
    ACTIONS(422), 1,
      aux_sym__user_name_or_group_token1,
    STATE(67), 1,
      aux_sym__user_name_or_group,
    STATE(118), 1,
      sym_expansion,
  [1534] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(342), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(344), 1,
      aux_sym_path_token1,
    ACTIONS(346), 1,
      anon_sym_DOLLAR,
    STATE(91), 1,
      sym_expansion,
    STATE(219), 2,
      sym_shisho_metavariable,
      sym_path,
  [1554] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(128), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(424), 1,
      sym_shisho_ellipsis,
    STATE(169), 3,
      sym_shisho_metavariable,
      sym_shisho_ellipsis_metavariable,
      sym_double_quoted_string,
  [1572] = 6,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(426), 1,
      anon_sym_LF,
    ACTIONS(428), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(430), 1,
      anon_sym_DOLLAR,
    ACTIONS(432), 1,
      aux_sym_image_digest_value_token1,
    STATE(72), 2,
      sym_expansion,
      aux_sym_image_digest_value_repeat1,
  [1592] = 6,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(434), 1,
      anon_sym_DOLLAR,
    ACTIONS(436), 1,
      anon_sym_DQUOTE,
    ACTIONS(438), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(440), 1,
      sym_escape_sequence,
    STATE(75), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1612] = 3,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(442), 1,
      anon_sym_LF,
    ACTIONS(444), 5,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      anon_sym_DOLLAR,
      aux_sym__env_key_token1,
      aux_sym_expose_port_token1,
  [1626] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(342), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(344), 1,
      aux_sym_path_token1,
    ACTIONS(346), 1,
      anon_sym_DOLLAR,
    STATE(91), 1,
      sym_expansion,
    STATE(222), 2,
      sym_shisho_metavariable,
      sym_path,
  [1646] = 6,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(434), 1,
      anon_sym_DOLLAR,
    ACTIONS(438), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(440), 1,
      sym_escape_sequence,
    ACTIONS(446), 1,
      anon_sym_DQUOTE,
    STATE(75), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1666] = 6,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(450), 1,
      aux_sym__user_name_or_group_token1,
    ACTIONS(453), 1,
      anon_sym_DOLLAR,
    STATE(67), 1,
      aux_sym__user_name_or_group,
    STATE(118), 1,
      sym_expansion,
    ACTIONS(448), 2,
      anon_sym_LF,
      anon_sym_COLON,
  [1686] = 6,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(434), 1,
      anon_sym_DOLLAR,
    ACTIONS(456), 1,
      anon_sym_DQUOTE,
    ACTIONS(458), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(460), 1,
      sym_escape_sequence,
    STATE(66), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1706] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(116), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(414), 1,
      aux_sym_path_token1,
    ACTIONS(416), 1,
      anon_sym_DOLLAR,
    STATE(105), 1,
      sym_expansion,
    STATE(200), 2,
      sym_shisho_metavariable,
      sym_path,
  [1726] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(116), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(290), 1,
      anon_sym_DOLLAR,
    ACTIONS(462), 1,
      aux_sym__user_name_or_group_token1,
    STATE(95), 1,
      aux_sym__user_name_or_group,
    STATE(118), 1,
      sym_expansion,
    STATE(206), 1,
      sym_shisho_metavariable,
  [1748] = 3,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(388), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
    ACTIONS(390), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_image_name_token1,
  [1762] = 6,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(464), 1,
      anon_sym_LF,
    ACTIONS(466), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(468), 1,
      anon_sym_DOLLAR,
    ACTIONS(471), 1,
      aux_sym_image_digest_value_token1,
    STATE(72), 2,
      sym_expansion,
      aux_sym_image_digest_value_repeat1,
  [1782] = 3,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(380), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
    ACTIONS(382), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_image_name_token1,
  [1796] = 6,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(434), 1,
      anon_sym_DOLLAR,
    ACTIONS(438), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(440), 1,
      sym_escape_sequence,
    ACTIONS(474), 1,
      anon_sym_DQUOTE,
    STATE(75), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1816] = 6,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(476), 1,
      anon_sym_DOLLAR,
    ACTIONS(479), 1,
      anon_sym_DQUOTE,
    ACTIONS(481), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(484), 1,
      sym_escape_sequence,
    STATE(75), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1836] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(489), 1,
      anon_sym_POUND,
    STATE(211), 1,
      sym__anon_comment,
    ACTIONS(487), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(76), 2,
      sym__comment_line,
      aux_sym_shell_command_repeat1,
  [1854] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(116), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(290), 1,
      anon_sym_DOLLAR,
    ACTIONS(462), 1,
      aux_sym__user_name_or_group_token1,
    STATE(94), 1,
      aux_sym__user_name_or_group,
    STATE(118), 1,
      sym_expansion,
    STATE(207), 1,
      sym_shisho_metavariable,
  [1876] = 5,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(494), 1,
      aux_sym_path_token2,
    ACTIONS(496), 1,
      anon_sym_DOLLAR,
    ACTIONS(492), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
    STATE(81), 2,
      sym_expansion,
      aux_sym_path_repeat1,
  [1894] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(116), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(414), 1,
      aux_sym_path_token1,
    ACTIONS(416), 1,
      anon_sym_DOLLAR,
    STATE(105), 1,
      sym_expansion,
    STATE(208), 2,
      sym_shisho_metavariable,
      sym_path,
  [1914] = 7,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(498), 1,
      anon_sym_LF,
    ACTIONS(500), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(502), 1,
      anon_sym_COLON,
    ACTIONS(504), 1,
      anon_sym_AT,
    STATE(114), 1,
      sym_image_tag,
    STATE(182), 1,
      sym_image_digest,
  [1936] = 5,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(496), 1,
      anon_sym_DOLLAR,
    ACTIONS(508), 1,
      aux_sym_path_token2,
    ACTIONS(506), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
    STATE(82), 2,
      sym_expansion,
      aux_sym_path_repeat1,
  [1954] = 5,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(512), 1,
      aux_sym_path_token2,
    ACTIONS(515), 1,
      anon_sym_DOLLAR,
    ACTIONS(510), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
    STATE(82), 2,
      sym_expansion,
      aux_sym_path_repeat1,
  [1972] = 5,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(249), 1,
      anon_sym_LF,
    ACTIONS(518), 1,
      anon_sym_DOLLAR,
    ACTIONS(520), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
    STATE(85), 2,
      sym_expansion,
      aux_sym_unquoted_string_repeat1,
  [1990] = 6,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(434), 1,
      anon_sym_DOLLAR,
    ACTIONS(522), 1,
      anon_sym_DQUOTE,
    ACTIONS(524), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(526), 1,
      sym_escape_sequence,
    STATE(63), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [2010] = 5,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(201), 1,
      anon_sym_LF,
    ACTIONS(528), 1,
      anon_sym_DOLLAR,
    ACTIONS(531), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
    STATE(85), 2,
      sym_expansion,
      aux_sym_unquoted_string_repeat1,
  [2028] = 6,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(434), 1,
      anon_sym_DOLLAR,
    ACTIONS(534), 1,
      anon_sym_DQUOTE,
    ACTIONS(536), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(538), 1,
      sym_escape_sequence,
    STATE(74), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [2048] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(116), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(414), 1,
      aux_sym_path_token1,
    ACTIONS(416), 1,
      anon_sym_DOLLAR,
    STATE(105), 1,
      sym_expansion,
    STATE(246), 2,
      sym_shisho_metavariable,
      sym_path,
  [2068] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(116), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(290), 1,
      anon_sym_DOLLAR,
    ACTIONS(462), 1,
      aux_sym__user_name_or_group_token1,
    STATE(59), 1,
      aux_sym__user_name_or_group,
    STATE(118), 1,
      sym_expansion,
    STATE(176), 1,
      sym_shisho_metavariable,
  [2090] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(444), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(442), 5,
      anon_sym_RBRACK,
      sym_shisho_ellipsis,
      aux_sym_cmd_instruction_token1,
      anon_sym_DASH_DASH,
      anon_sym_COMMA,
  [2104] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(116), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(414), 1,
      aux_sym_path_token1,
    ACTIONS(416), 1,
      anon_sym_DOLLAR,
    STATE(105), 1,
      sym_expansion,
    STATE(209), 2,
      sym_shisho_metavariable,
      sym_path,
  [2124] = 5,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(540), 1,
      aux_sym_path_token2,
    ACTIONS(542), 1,
      anon_sym_DOLLAR,
    ACTIONS(544), 1,
      sym__non_newline_whitespace,
    STATE(97), 2,
      sym_expansion,
      aux_sym_path_repeat1,
  [2141] = 3,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(374), 1,
      anon_sym_LF,
    ACTIONS(376), 4,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [2154] = 5,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(546), 1,
      aux_sym_path_token2,
    ACTIONS(549), 1,
      anon_sym_DOLLAR,
    ACTIONS(552), 1,
      sym__non_newline_whitespace,
    STATE(93), 2,
      sym_expansion,
      aux_sym_path_repeat1,
  [2171] = 6,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(168), 1,
      anon_sym_DOLLAR,
    ACTIONS(422), 1,
      aux_sym__user_name_or_group_token1,
    ACTIONS(554), 1,
      anon_sym_LF,
    STATE(67), 1,
      aux_sym__user_name_or_group,
    STATE(118), 1,
      sym_expansion,
  [2190] = 6,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(168), 1,
      anon_sym_DOLLAR,
    ACTIONS(422), 1,
      aux_sym__user_name_or_group_token1,
    ACTIONS(556), 1,
      anon_sym_LF,
    STATE(67), 1,
      aux_sym__user_name_or_group,
    STATE(118), 1,
      sym_expansion,
  [2209] = 3,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(558), 1,
      anon_sym_LF,
    ACTIONS(560), 4,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [2222] = 5,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(542), 1,
      anon_sym_DOLLAR,
    ACTIONS(562), 1,
      aux_sym_path_token2,
    ACTIONS(564), 1,
      sym__non_newline_whitespace,
    STATE(93), 2,
      sym_expansion,
      aux_sym_path_repeat1,
  [2239] = 5,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(566), 1,
      anon_sym_LF,
    ACTIONS(568), 1,
      anon_sym_DOLLAR,
    ACTIONS(570), 1,
      aux_sym_image_alias_token1,
    STATE(100), 2,
      sym_expansion,
      aux_sym_image_alias_repeat1,
  [2256] = 3,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(388), 2,
      anon_sym_LF,
      anon_sym_AT,
    ACTIONS(390), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_image_tag_value_token1,
  [2269] = 5,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(572), 1,
      anon_sym_LF,
    ACTIONS(574), 1,
      anon_sym_DOLLAR,
    ACTIONS(577), 1,
      aux_sym_image_alias_token1,
    STATE(100), 2,
      sym_expansion,
      aux_sym_image_alias_repeat1,
  [2286] = 5,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(552), 1,
      anon_sym_LF,
    ACTIONS(580), 1,
      aux_sym_path_token2,
    ACTIONS(583), 1,
      anon_sym_DOLLAR,
    STATE(101), 2,
      sym_expansion,
      aux_sym_path_repeat1,
  [2303] = 3,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(380), 2,
      anon_sym_LF,
      anon_sym_AT,
    ACTIONS(382), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_image_tag_value_token1,
  [2316] = 5,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(564), 1,
      anon_sym_LF,
    ACTIONS(586), 1,
      aux_sym_path_token2,
    ACTIONS(588), 1,
      anon_sym_DOLLAR,
    STATE(101), 2,
      sym_expansion,
      aux_sym_path_repeat1,
  [2333] = 3,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(278), 1,
      anon_sym_LF,
    ACTIONS(280), 4,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      aux_sym__stopsignal_value_token1,
      anon_sym_DOLLAR,
  [2346] = 5,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(544), 1,
      anon_sym_LF,
    ACTIONS(588), 1,
      anon_sym_DOLLAR,
    ACTIONS(590), 1,
      aux_sym_path_token2,
    STATE(103), 2,
      sym_expansion,
      aux_sym_path_repeat1,
  [2363] = 3,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(388), 1,
      anon_sym_LF,
    ACTIONS(390), 4,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      aux_sym__stopsignal_value_token1,
      anon_sym_DOLLAR,
  [2376] = 3,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(442), 1,
      anon_sym_LF,
    ACTIONS(444), 4,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      aux_sym__stopsignal_value_token1,
      anon_sym_DOLLAR,
  [2389] = 3,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(380), 1,
      anon_sym_LF,
    ACTIONS(382), 4,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      aux_sym__stopsignal_value_token1,
      anon_sym_DOLLAR,
  [2402] = 3,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(382), 1,
      anon_sym_DOLLAR,
    ACTIONS(380), 3,
      anon_sym_LF,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [2414] = 3,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(442), 1,
      anon_sym_LF,
    ACTIONS(444), 3,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      aux_sym_label_pair_token1,
  [2426] = 3,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(592), 1,
      anon_sym_LF,
    ACTIONS(594), 3,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      aux_sym_label_pair_token1,
  [2438] = 4,
    ACTIONS(596), 1,
      anon_sym_LF,
    ACTIONS(600), 1,
      sym_line_continuation,
    STATE(122), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(598), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [2452] = 3,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(602), 1,
      anon_sym_LF,
    ACTIONS(604), 3,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      aux_sym_label_pair_token1,
  [2464] = 5,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(504), 1,
      anon_sym_AT,
    ACTIONS(606), 1,
      anon_sym_LF,
    ACTIONS(608), 1,
      aux_sym_from_instruction_token2,
    STATE(174), 1,
      sym_image_digest,
  [2480] = 3,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(592), 1,
      anon_sym_LF,
    ACTIONS(594), 3,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      aux_sym__env_key_token1,
  [2492] = 3,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(390), 1,
      anon_sym_DOLLAR,
    ACTIONS(388), 3,
      anon_sym_LF,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [2504] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(610), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(612), 3,
      sym_shisho_ellipsis,
      aux_sym_cmd_instruction_token1,
      anon_sym_DASH_DASH,
  [2516] = 3,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(614), 2,
      anon_sym_LF,
      anon_sym_COLON,
    ACTIONS(616), 2,
      aux_sym__user_name_or_group_token1,
      anon_sym_DOLLAR,
  [2528] = 3,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(618), 1,
      anon_sym_LF,
    ACTIONS(620), 3,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      aux_sym_label_pair_token1,
  [2540] = 3,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(602), 1,
      anon_sym_LF,
    ACTIONS(604), 3,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      aux_sym__env_key_token1,
  [2552] = 3,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(278), 1,
      anon_sym_LF,
    ACTIONS(280), 3,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      aux_sym_label_pair_token1,
  [2564] = 4,
    ACTIONS(622), 1,
      anon_sym_LF,
    ACTIONS(627), 1,
      sym_line_continuation,
    STATE(122), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(624), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [2578] = 3,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(380), 2,
      anon_sym_LF,
      aux_sym_image_digest_value_token1,
    ACTIONS(382), 2,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
  [2590] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(382), 4,
      anon_sym_LF,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
      sym__non_newline_whitespace,
  [2600] = 3,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(388), 2,
      anon_sym_LF,
      aux_sym_image_digest_value_token1,
    ACTIONS(390), 2,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
  [2612] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(390), 4,
      anon_sym_LF,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
      sym__non_newline_whitespace,
  [2622] = 3,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(388), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(390), 3,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [2634] = 3,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(380), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(382), 3,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [2646] = 3,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(629), 1,
      anon_sym_LF,
    ACTIONS(631), 3,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      aux_sym__env_key_token1,
  [2658] = 3,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(278), 1,
      anon_sym_LF,
    ACTIONS(280), 3,
      anon_sym_COLON_LBRACK,
      sym_shisho_ellipsis,
      aux_sym__env_key_token1,
  [2670] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(444), 1,
      aux_sym_image_name_token1,
    ACTIONS(442), 2,
      anon_sym_COLON_LBRACK,
      anon_sym_DOLLAR,
  [2681] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(633), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(635), 1,
      sym_param_value,
    STATE(148), 1,
      sym_shisho_metavariable,
  [2694] = 3,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(388), 1,
      anon_sym_LF,
    ACTIONS(390), 2,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
  [2705] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(637), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(639), 1,
      sym_param_name,
    STATE(271), 1,
      sym_shisho_metavariable,
  [2718] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(280), 1,
      aux_sym_path_token1,
    ACTIONS(278), 2,
      anon_sym_COLON_LBRACK,
      anon_sym_DOLLAR,
  [2729] = 3,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(388), 1,
      anon_sym_LF,
    ACTIONS(390), 2,
      anon_sym_DOLLAR,
      aux_sym_image_alias_token1,
  [2740] = 3,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(380), 1,
      anon_sym_LF,
    ACTIONS(382), 2,
      anon_sym_DOLLAR,
      aux_sym_image_alias_token1,
  [2751] = 3,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(380), 1,
      anon_sym_LF,
    ACTIONS(382), 2,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
  [2762] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(280), 1,
      aux_sym_image_name_token1,
    ACTIONS(278), 2,
      anon_sym_COLON_LBRACK,
      anon_sym_DOLLAR,
  [2773] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(116), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(641), 1,
      aux_sym_arg_instruction_token2,
    STATE(157), 1,
      sym_shisho_metavariable,
  [2786] = 4,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(643), 1,
      anon_sym_LF,
    ACTIONS(645), 1,
      sym__non_newline_whitespace,
    STATE(141), 1,
      aux_sym_volume_instruction_repeat1,
  [2799] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(648), 1,
      anon_sym_RBRACK,
    ACTIONS(650), 1,
      anon_sym_COMMA,
    STATE(145), 1,
      aux_sym_string_array_repeat1,
  [2812] = 3,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(388), 1,
      sym__non_newline_whitespace,
    ACTIONS(390), 2,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
  [2823] = 4,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(652), 1,
      anon_sym_LF,
    ACTIONS(654), 1,
      sym__non_newline_whitespace,
    STATE(141), 1,
      aux_sym_volume_instruction_repeat1,
  [2836] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(650), 1,
      anon_sym_COMMA,
    ACTIONS(656), 1,
      anon_sym_RBRACK,
    STATE(155), 1,
      aux_sym_string_array_repeat1,
  [2849] = 3,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(380), 1,
      sym__non_newline_whitespace,
    ACTIONS(382), 2,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
  [2860] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(658), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(660), 1,
      sym_param_value,
    STATE(117), 1,
      sym_shisho_metavariable,
  [2873] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(610), 1,
      aux_sym_image_name_token1,
    ACTIONS(612), 2,
      anon_sym_COLON_LBRACK,
      anon_sym_DOLLAR,
  [2884] = 4,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(654), 1,
      sym__non_newline_whitespace,
    ACTIONS(662), 1,
      anon_sym_LF,
    STATE(144), 1,
      aux_sym_volume_instruction_repeat1,
  [2897] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(637), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(664), 1,
      sym_param_name,
    STATE(266), 1,
      sym_shisho_metavariable,
  [2910] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(610), 1,
      aux_sym_path_token1,
    ACTIONS(612), 2,
      anon_sym_COLON_LBRACK,
      anon_sym_DOLLAR,
  [2921] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(666), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(668), 1,
      sym_param_value,
    STATE(151), 1,
      sym_shisho_metavariable,
  [2934] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(637), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(670), 1,
      sym_param_name,
    STATE(227), 1,
      sym_shisho_metavariable,
  [2947] = 3,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(674), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(672), 2,
      anon_sym_LF,
      anon_sym_AT,
  [2958] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(676), 1,
      anon_sym_RBRACK,
    ACTIONS(678), 1,
      anon_sym_COMMA,
    STATE(155), 1,
      aux_sym_string_array_repeat1,
  [2971] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(681), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      anon_sym_POUND,
  [2980] = 3,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(683), 1,
      anon_sym_LF,
    ACTIONS(685), 1,
      anon_sym_EQ,
  [2990] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(687), 1,
      anon_sym_LBRACE,
    ACTIONS(689), 1,
      sym_variable,
  [3000] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(602), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [3008] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(691), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(693), 1,
      sym_shisho_metavariable_name,
  [3018] = 3,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(695), 1,
      anon_sym_LF,
    ACTIONS(697), 1,
      aux_sym_from_instruction_token2,
  [3028] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(699), 1,
      anon_sym_LBRACE,
    ACTIONS(701), 1,
      sym_variable,
  [3038] = 3,
    ACTIONS(703), 1,
      anon_sym_LF,
    ACTIONS(705), 1,
      sym_line_continuation,
    STATE(191), 1,
      aux_sym_shell_command_repeat2,
  [3048] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(707), 1,
      anon_sym_LBRACE,
    ACTIONS(709), 1,
      sym_variable,
  [3058] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(711), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(713), 1,
      sym_shisho_metavariable_name,
  [3068] = 3,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(715), 1,
      anon_sym_LF,
    ACTIONS(717), 1,
      aux_sym_from_instruction_token2,
  [3078] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(719), 1,
      anon_sym_LBRACE,
    ACTIONS(721), 1,
      sym_variable,
  [3088] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(723), 1,
      anon_sym_LBRACE,
    ACTIONS(725), 1,
      sym_variable,
  [3098] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(676), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [3106] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(727), 1,
      anon_sym_LBRACE,
    ACTIONS(729), 1,
      sym_variable,
  [3116] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(731), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(733), 1,
      sym_shisho_metavariable_name,
  [3126] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(691), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(733), 1,
      sym_shisho_metavariable_name,
  [3136] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(735), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(737), 1,
      sym_shisho_metavariable_name,
  [3146] = 3,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(739), 1,
      anon_sym_LF,
    ACTIONS(741), 1,
      aux_sym_from_instruction_token2,
  [3156] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(743), 1,
      anon_sym_LBRACE,
    ACTIONS(745), 1,
      sym_variable,
  [3166] = 3,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(747), 1,
      anon_sym_LF,
    ACTIONS(749), 1,
      anon_sym_COLON,
  [3176] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(733), 1,
      sym_shisho_metavariable_name,
    ACTIONS(751), 1,
      anon_sym_DOT_DOT_DOT,
  [3186] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(278), 2,
      anon_sym_EQ,
      aux_sym__spaced_env_pair_token1,
  [3194] = 3,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(753), 1,
      anon_sym_EQ,
    ACTIONS(755), 1,
      aux_sym__spaced_env_pair_token1,
  [3204] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(757), 1,
      anon_sym_LBRACE,
    ACTIONS(759), 1,
      sym_variable,
  [3214] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(444), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
  [3222] = 3,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(761), 1,
      anon_sym_LF,
    ACTIONS(763), 1,
      aux_sym_from_instruction_token2,
  [3232] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(691), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(737), 1,
      sym_shisho_metavariable_name,
  [3242] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(765), 1,
      anon_sym_LBRACE,
    ACTIONS(767), 1,
      sym_variable,
  [3252] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(592), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [3260] = 3,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(769), 1,
      anon_sym_LF,
    ACTIONS(771), 1,
      aux_sym_from_instruction_token2,
  [3270] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(737), 1,
      sym_shisho_metavariable_name,
    ACTIONS(751), 1,
      anon_sym_DOT_DOT_DOT,
  [3280] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(233), 1,
      anon_sym_LBRACK,
    STATE(234), 1,
      sym_string_array,
  [3290] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(773), 1,
      anon_sym_LBRACE,
    ACTIONS(775), 1,
      sym_variable,
  [3300] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(777), 1,
      anon_sym_LBRACE,
    ACTIONS(779), 1,
      sym_variable,
  [3310] = 3,
    ACTIONS(705), 1,
      sym_line_continuation,
    ACTIONS(781), 1,
      anon_sym_LF,
    STATE(195), 1,
      aux_sym_shell_command_repeat2,
  [3320] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(643), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
  [3328] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(783), 1,
      anon_sym_LBRACE,
    ACTIONS(785), 1,
      sym_variable,
  [3338] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(787), 1,
      anon_sym_LBRACE,
    ACTIONS(789), 1,
      sym_variable,
  [3348] = 3,
    ACTIONS(791), 1,
      anon_sym_LF,
    ACTIONS(793), 1,
      sym_line_continuation,
    STATE(195), 1,
      aux_sym_shell_command_repeat2,
  [3358] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(796), 1,
      aux_sym_expansion_token1,
  [3365] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(278), 1,
      sym__non_newline_whitespace,
  [3372] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(798), 1,
      anon_sym_LF,
  [3379] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(800), 1,
      anon_sym_LF,
  [3386] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(802), 1,
      anon_sym_LF,
  [3393] = 2,
    ACTIONS(804), 1,
      anon_sym_LF,
    ACTIONS(806), 1,
      sym_line_continuation,
  [3400] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(808), 1,
      anon_sym_LF,
  [3407] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(810), 1,
      anon_sym_LF,
  [3414] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(812), 1,
      anon_sym_LF,
  [3421] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(814), 1,
      anon_sym_LF,
  [3428] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(816), 1,
      anon_sym_LF,
  [3435] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(818), 1,
      anon_sym_LF,
  [3442] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(820), 1,
      anon_sym_LF,
  [3449] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(822), 1,
      anon_sym_LF,
  [3456] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(824), 1,
      anon_sym_LF,
  [3463] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(826), 1,
      anon_sym_LF,
  [3470] = 2,
    ACTIONS(791), 1,
      anon_sym_LF,
    ACTIONS(828), 1,
      sym_line_continuation,
  [3477] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(830), 1,
      aux_sym_maintainer_instruction_token2,
  [3484] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(832), 1,
      anon_sym_LF,
  [3491] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(834), 1,
      anon_sym_LF,
  [3498] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(836), 1,
      anon_sym_RBRACE,
  [3505] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(838), 1,
      anon_sym_LF,
  [3512] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(840), 1,
      anon_sym_RBRACK,
  [3519] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(842), 1,
      sym__non_newline_whitespace,
  [3526] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(737), 1,
      sym_shisho_metavariable_name,
  [3533] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(844), 1,
      anon_sym_RBRACK,
  [3540] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(846), 1,
      sym__non_newline_whitespace,
  [3547] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(848), 1,
      anon_sym_RBRACE,
  [3554] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(753), 1,
      anon_sym_EQ,
  [3561] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(850), 1,
      anon_sym_LF,
  [3568] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(852), 1,
      anon_sym_RBRACK,
  [3575] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(854), 1,
      anon_sym_EQ,
  [3582] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(856), 1,
      anon_sym_RBRACK,
  [3589] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(858), 1,
      anon_sym_RBRACK,
  [3596] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(860), 1,
      anon_sym_RBRACE,
  [3603] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(862), 1,
      anon_sym_LF,
  [3610] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(864), 1,
      anon_sym_LF,
  [3617] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(866), 1,
      anon_sym_RBRACK,
  [3624] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(868), 1,
      anon_sym_LF,
  [3631] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(870), 1,
      anon_sym_RBRACK,
  [3638] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(872), 1,
      anon_sym_RBRACE,
  [3645] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(874), 1,
      anon_sym_RBRACK,
  [3652] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(876), 1,
      anon_sym_LF,
  [3659] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(878), 1,
      anon_sym_RBRACK,
  [3666] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(880), 1,
      anon_sym_RBRACE,
  [3673] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(882), 1,
      anon_sym_RBRACK,
  [3680] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(884), 1,
      anon_sym_LF,
  [3687] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(886), 1,
      anon_sym_RBRACK,
  [3694] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(888), 1,
      anon_sym_RBRACE,
  [3701] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(890), 1,
      anon_sym_RBRACK,
  [3708] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(892), 1,
      anon_sym_LF,
  [3715] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(894), 1,
      anon_sym_RBRACE,
  [3722] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(896), 1,
      anon_sym_RBRACK,
  [3729] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(898), 1,
      anon_sym_LF,
  [3736] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(900), 1,
      anon_sym_RBRACE,
  [3743] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(902), 1,
      anon_sym_RBRACK,
  [3750] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(904), 1,
      anon_sym_DOT_DOT_DOT,
  [3757] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(906), 1,
      anon_sym_RBRACE,
  [3764] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(908), 1,
      anon_sym_LF,
  [3771] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(910), 1,
      anon_sym_RBRACE,
  [3778] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(912), 1,
      sym__non_newline_whitespace,
  [3785] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(914), 1,
      anon_sym_RBRACE,
  [3792] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(916), 1,
      sym__non_newline_whitespace,
  [3799] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(918), 1,
      anon_sym_RBRACE,
  [3806] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(920), 1,
      sym_shisho_metavariable_name,
  [3813] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(922), 1,
      anon_sym_RBRACE,
  [3820] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(924), 1,
      anon_sym_LF,
  [3827] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(926), 1,
      sym_shisho_metavariable_name,
  [3834] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(733), 1,
      sym_shisho_metavariable_name,
  [3841] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(928), 1,
      aux_sym_expansion_token1,
  [3848] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(930), 1,
      anon_sym_EQ,
  [3855] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(932), 1,
      anon_sym_EQ,
  [3862] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(934), 1,
      sym_shisho_metavariable_name,
  [3869] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(936), 1,
      sym_shisho_metavariable_name,
  [3876] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(938), 1,
      aux_sym_expansion_token1,
  [3883] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(940), 1,
      anon_sym_EQ,
  [3890] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(942), 1,
      anon_sym_LF,
  [3897] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(944), 1,
      sym_shisho_metavariable_name,
  [3904] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(946), 1,
      sym_shisho_metavariable_name,
  [3911] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(948), 1,
      aux_sym_expansion_token1,
  [3918] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(950), 1,
      anon_sym_LF,
  [3925] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(952), 1,
      sym_shisho_metavariable_name,
  [3932] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(954), 1,
      sym_shisho_metavariable_name,
  [3939] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(956), 1,
      aux_sym_expansion_token1,
  [3946] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(958), 1,
      anon_sym_RBRACK,
  [3953] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(960), 1,
      sym_shisho_metavariable_name,
  [3960] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(962), 1,
      sym_shisho_metavariable_name,
  [3967] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(964), 1,
      aux_sym_expansion_token1,
  [3974] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(966), 1,
      aux_sym_expansion_token1,
  [3981] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(968), 1,
      aux_sym_expansion_token1,
  [3988] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(970), 1,
      aux_sym_expansion_token1,
  [3995] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(972), 1,
      aux_sym_expansion_token1,
  [4002] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(974), 1,
      aux_sym_expansion_token1,
  [4009] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(976), 1,
      aux_sym_expansion_token1,
  [4016] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(978), 1,
      aux_sym_expansion_token1,
  [4023] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(980), 1,
      sym_shisho_metavariable_name,
  [4030] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(982), 1,
      ts_builtin_sym_end,
  [4037] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(984), 1,
      aux_sym_maintainer_instruction_token2,
  [4044] = 2,
    ACTIONS(150), 1,
      sym_line_continuation,
    ACTIONS(986), 1,
      aux_sym_maintainer_instruction_token2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 98,
  [SMALL_STATE(4)] = 196,
  [SMALL_STATE(5)] = 283,
  [SMALL_STATE(6)] = 314,
  [SMALL_STATE(7)] = 345,
  [SMALL_STATE(8)] = 373,
  [SMALL_STATE(9)] = 401,
  [SMALL_STATE(10)] = 429,
  [SMALL_STATE(11)] = 457,
  [SMALL_STATE(12)] = 485,
  [SMALL_STATE(13)] = 513,
  [SMALL_STATE(14)] = 541,
  [SMALL_STATE(15)] = 566,
  [SMALL_STATE(16)] = 591,
  [SMALL_STATE(17)] = 614,
  [SMALL_STATE(18)] = 643,
  [SMALL_STATE(19)] = 668,
  [SMALL_STATE(20)] = 691,
  [SMALL_STATE(21)] = 716,
  [SMALL_STATE(22)] = 741,
  [SMALL_STATE(23)] = 766,
  [SMALL_STATE(24)] = 791,
  [SMALL_STATE(25)] = 808,
  [SMALL_STATE(26)] = 833,
  [SMALL_STATE(27)] = 858,
  [SMALL_STATE(28)] = 880,
  [SMALL_STATE(29)] = 902,
  [SMALL_STATE(30)] = 926,
  [SMALL_STATE(31)] = 950,
  [SMALL_STATE(32)] = 974,
  [SMALL_STATE(33)] = 998,
  [SMALL_STATE(34)] = 1020,
  [SMALL_STATE(35)] = 1040,
  [SMALL_STATE(36)] = 1066,
  [SMALL_STATE(37)] = 1092,
  [SMALL_STATE(38)] = 1116,
  [SMALL_STATE(39)] = 1137,
  [SMALL_STATE(40)] = 1158,
  [SMALL_STATE(41)] = 1179,
  [SMALL_STATE(42)] = 1196,
  [SMALL_STATE(43)] = 1211,
  [SMALL_STATE(44)] = 1232,
  [SMALL_STATE(45)] = 1253,
  [SMALL_STATE(46)] = 1268,
  [SMALL_STATE(47)] = 1289,
  [SMALL_STATE(48)] = 1310,
  [SMALL_STATE(49)] = 1331,
  [SMALL_STATE(50)] = 1346,
  [SMALL_STATE(51)] = 1369,
  [SMALL_STATE(52)] = 1384,
  [SMALL_STATE(53)] = 1399,
  [SMALL_STATE(54)] = 1420,
  [SMALL_STATE(55)] = 1441,
  [SMALL_STATE(56)] = 1456,
  [SMALL_STATE(57)] = 1471,
  [SMALL_STATE(58)] = 1492,
  [SMALL_STATE(59)] = 1512,
  [SMALL_STATE(60)] = 1534,
  [SMALL_STATE(61)] = 1554,
  [SMALL_STATE(62)] = 1572,
  [SMALL_STATE(63)] = 1592,
  [SMALL_STATE(64)] = 1612,
  [SMALL_STATE(65)] = 1626,
  [SMALL_STATE(66)] = 1646,
  [SMALL_STATE(67)] = 1666,
  [SMALL_STATE(68)] = 1686,
  [SMALL_STATE(69)] = 1706,
  [SMALL_STATE(70)] = 1726,
  [SMALL_STATE(71)] = 1748,
  [SMALL_STATE(72)] = 1762,
  [SMALL_STATE(73)] = 1782,
  [SMALL_STATE(74)] = 1796,
  [SMALL_STATE(75)] = 1816,
  [SMALL_STATE(76)] = 1836,
  [SMALL_STATE(77)] = 1854,
  [SMALL_STATE(78)] = 1876,
  [SMALL_STATE(79)] = 1894,
  [SMALL_STATE(80)] = 1914,
  [SMALL_STATE(81)] = 1936,
  [SMALL_STATE(82)] = 1954,
  [SMALL_STATE(83)] = 1972,
  [SMALL_STATE(84)] = 1990,
  [SMALL_STATE(85)] = 2010,
  [SMALL_STATE(86)] = 2028,
  [SMALL_STATE(87)] = 2048,
  [SMALL_STATE(88)] = 2068,
  [SMALL_STATE(89)] = 2090,
  [SMALL_STATE(90)] = 2104,
  [SMALL_STATE(91)] = 2124,
  [SMALL_STATE(92)] = 2141,
  [SMALL_STATE(93)] = 2154,
  [SMALL_STATE(94)] = 2171,
  [SMALL_STATE(95)] = 2190,
  [SMALL_STATE(96)] = 2209,
  [SMALL_STATE(97)] = 2222,
  [SMALL_STATE(98)] = 2239,
  [SMALL_STATE(99)] = 2256,
  [SMALL_STATE(100)] = 2269,
  [SMALL_STATE(101)] = 2286,
  [SMALL_STATE(102)] = 2303,
  [SMALL_STATE(103)] = 2316,
  [SMALL_STATE(104)] = 2333,
  [SMALL_STATE(105)] = 2346,
  [SMALL_STATE(106)] = 2363,
  [SMALL_STATE(107)] = 2376,
  [SMALL_STATE(108)] = 2389,
  [SMALL_STATE(109)] = 2402,
  [SMALL_STATE(110)] = 2414,
  [SMALL_STATE(111)] = 2426,
  [SMALL_STATE(112)] = 2438,
  [SMALL_STATE(113)] = 2452,
  [SMALL_STATE(114)] = 2464,
  [SMALL_STATE(115)] = 2480,
  [SMALL_STATE(116)] = 2492,
  [SMALL_STATE(117)] = 2504,
  [SMALL_STATE(118)] = 2516,
  [SMALL_STATE(119)] = 2528,
  [SMALL_STATE(120)] = 2540,
  [SMALL_STATE(121)] = 2552,
  [SMALL_STATE(122)] = 2564,
  [SMALL_STATE(123)] = 2578,
  [SMALL_STATE(124)] = 2590,
  [SMALL_STATE(125)] = 2600,
  [SMALL_STATE(126)] = 2612,
  [SMALL_STATE(127)] = 2622,
  [SMALL_STATE(128)] = 2634,
  [SMALL_STATE(129)] = 2646,
  [SMALL_STATE(130)] = 2658,
  [SMALL_STATE(131)] = 2670,
  [SMALL_STATE(132)] = 2681,
  [SMALL_STATE(133)] = 2694,
  [SMALL_STATE(134)] = 2705,
  [SMALL_STATE(135)] = 2718,
  [SMALL_STATE(136)] = 2729,
  [SMALL_STATE(137)] = 2740,
  [SMALL_STATE(138)] = 2751,
  [SMALL_STATE(139)] = 2762,
  [SMALL_STATE(140)] = 2773,
  [SMALL_STATE(141)] = 2786,
  [SMALL_STATE(142)] = 2799,
  [SMALL_STATE(143)] = 2812,
  [SMALL_STATE(144)] = 2823,
  [SMALL_STATE(145)] = 2836,
  [SMALL_STATE(146)] = 2849,
  [SMALL_STATE(147)] = 2860,
  [SMALL_STATE(148)] = 2873,
  [SMALL_STATE(149)] = 2884,
  [SMALL_STATE(150)] = 2897,
  [SMALL_STATE(151)] = 2910,
  [SMALL_STATE(152)] = 2921,
  [SMALL_STATE(153)] = 2934,
  [SMALL_STATE(154)] = 2947,
  [SMALL_STATE(155)] = 2958,
  [SMALL_STATE(156)] = 2971,
  [SMALL_STATE(157)] = 2980,
  [SMALL_STATE(158)] = 2990,
  [SMALL_STATE(159)] = 3000,
  [SMALL_STATE(160)] = 3008,
  [SMALL_STATE(161)] = 3018,
  [SMALL_STATE(162)] = 3028,
  [SMALL_STATE(163)] = 3038,
  [SMALL_STATE(164)] = 3048,
  [SMALL_STATE(165)] = 3058,
  [SMALL_STATE(166)] = 3068,
  [SMALL_STATE(167)] = 3078,
  [SMALL_STATE(168)] = 3088,
  [SMALL_STATE(169)] = 3098,
  [SMALL_STATE(170)] = 3106,
  [SMALL_STATE(171)] = 3116,
  [SMALL_STATE(172)] = 3126,
  [SMALL_STATE(173)] = 3136,
  [SMALL_STATE(174)] = 3146,
  [SMALL_STATE(175)] = 3156,
  [SMALL_STATE(176)] = 3166,
  [SMALL_STATE(177)] = 3176,
  [SMALL_STATE(178)] = 3186,
  [SMALL_STATE(179)] = 3194,
  [SMALL_STATE(180)] = 3204,
  [SMALL_STATE(181)] = 3214,
  [SMALL_STATE(182)] = 3222,
  [SMALL_STATE(183)] = 3232,
  [SMALL_STATE(184)] = 3242,
  [SMALL_STATE(185)] = 3252,
  [SMALL_STATE(186)] = 3260,
  [SMALL_STATE(187)] = 3270,
  [SMALL_STATE(188)] = 3280,
  [SMALL_STATE(189)] = 3290,
  [SMALL_STATE(190)] = 3300,
  [SMALL_STATE(191)] = 3310,
  [SMALL_STATE(192)] = 3320,
  [SMALL_STATE(193)] = 3328,
  [SMALL_STATE(194)] = 3338,
  [SMALL_STATE(195)] = 3348,
  [SMALL_STATE(196)] = 3358,
  [SMALL_STATE(197)] = 3365,
  [SMALL_STATE(198)] = 3372,
  [SMALL_STATE(199)] = 3379,
  [SMALL_STATE(200)] = 3386,
  [SMALL_STATE(201)] = 3393,
  [SMALL_STATE(202)] = 3400,
  [SMALL_STATE(203)] = 3407,
  [SMALL_STATE(204)] = 3414,
  [SMALL_STATE(205)] = 3421,
  [SMALL_STATE(206)] = 3428,
  [SMALL_STATE(207)] = 3435,
  [SMALL_STATE(208)] = 3442,
  [SMALL_STATE(209)] = 3449,
  [SMALL_STATE(210)] = 3456,
  [SMALL_STATE(211)] = 3463,
  [SMALL_STATE(212)] = 3470,
  [SMALL_STATE(213)] = 3477,
  [SMALL_STATE(214)] = 3484,
  [SMALL_STATE(215)] = 3491,
  [SMALL_STATE(216)] = 3498,
  [SMALL_STATE(217)] = 3505,
  [SMALL_STATE(218)] = 3512,
  [SMALL_STATE(219)] = 3519,
  [SMALL_STATE(220)] = 3526,
  [SMALL_STATE(221)] = 3533,
  [SMALL_STATE(222)] = 3540,
  [SMALL_STATE(223)] = 3547,
  [SMALL_STATE(224)] = 3554,
  [SMALL_STATE(225)] = 3561,
  [SMALL_STATE(226)] = 3568,
  [SMALL_STATE(227)] = 3575,
  [SMALL_STATE(228)] = 3582,
  [SMALL_STATE(229)] = 3589,
  [SMALL_STATE(230)] = 3596,
  [SMALL_STATE(231)] = 3603,
  [SMALL_STATE(232)] = 3610,
  [SMALL_STATE(233)] = 3617,
  [SMALL_STATE(234)] = 3624,
  [SMALL_STATE(235)] = 3631,
  [SMALL_STATE(236)] = 3638,
  [SMALL_STATE(237)] = 3645,
  [SMALL_STATE(238)] = 3652,
  [SMALL_STATE(239)] = 3659,
  [SMALL_STATE(240)] = 3666,
  [SMALL_STATE(241)] = 3673,
  [SMALL_STATE(242)] = 3680,
  [SMALL_STATE(243)] = 3687,
  [SMALL_STATE(244)] = 3694,
  [SMALL_STATE(245)] = 3701,
  [SMALL_STATE(246)] = 3708,
  [SMALL_STATE(247)] = 3715,
  [SMALL_STATE(248)] = 3722,
  [SMALL_STATE(249)] = 3729,
  [SMALL_STATE(250)] = 3736,
  [SMALL_STATE(251)] = 3743,
  [SMALL_STATE(252)] = 3750,
  [SMALL_STATE(253)] = 3757,
  [SMALL_STATE(254)] = 3764,
  [SMALL_STATE(255)] = 3771,
  [SMALL_STATE(256)] = 3778,
  [SMALL_STATE(257)] = 3785,
  [SMALL_STATE(258)] = 3792,
  [SMALL_STATE(259)] = 3799,
  [SMALL_STATE(260)] = 3806,
  [SMALL_STATE(261)] = 3813,
  [SMALL_STATE(262)] = 3820,
  [SMALL_STATE(263)] = 3827,
  [SMALL_STATE(264)] = 3834,
  [SMALL_STATE(265)] = 3841,
  [SMALL_STATE(266)] = 3848,
  [SMALL_STATE(267)] = 3855,
  [SMALL_STATE(268)] = 3862,
  [SMALL_STATE(269)] = 3869,
  [SMALL_STATE(270)] = 3876,
  [SMALL_STATE(271)] = 3883,
  [SMALL_STATE(272)] = 3890,
  [SMALL_STATE(273)] = 3897,
  [SMALL_STATE(274)] = 3904,
  [SMALL_STATE(275)] = 3911,
  [SMALL_STATE(276)] = 3918,
  [SMALL_STATE(277)] = 3925,
  [SMALL_STATE(278)] = 3932,
  [SMALL_STATE(279)] = 3939,
  [SMALL_STATE(280)] = 3946,
  [SMALL_STATE(281)] = 3953,
  [SMALL_STATE(282)] = 3960,
  [SMALL_STATE(283)] = 3967,
  [SMALL_STATE(284)] = 3974,
  [SMALL_STATE(285)] = 3981,
  [SMALL_STATE(286)] = 3988,
  [SMALL_STATE(287)] = 3995,
  [SMALL_STATE(288)] = 4002,
  [SMALL_STATE(289)] = 4009,
  [SMALL_STATE(290)] = 4016,
  [SMALL_STATE(291)] = 4023,
  [SMALL_STATE(292)] = 4030,
  [SMALL_STATE(293)] = 4037,
  [SMALL_STATE(294)] = 4044,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(187),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(210),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(44),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(39),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(46),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(26),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(35),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(36),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(57),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(88),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(87),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(140),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(34),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(188),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(294),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(293),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 2),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(183),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(8),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(189),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(41),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_instruction, 2),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 2),
  [192] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 2), SHIFT_REPEAT(172),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 2), SHIFT_REPEAT(14),
  [198] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 2), SHIFT_REPEAT(224),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(167),
  [208] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(15),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(15),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stopsignal_value, 2),
  [216] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stopsignal_value, 2), SHIFT_REPEAT(165),
  [219] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stopsignal_value, 2), SHIFT_REPEAT(16),
  [222] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stopsignal_value, 2), SHIFT_REPEAT(162),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_instruction, 2),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_string, 1),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_string, 1),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 2),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [267] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(194),
  [270] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(22),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(22),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shisho_metavariable, 3),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shisho_metavariable, 3),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [298] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(168),
  [301] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(27),
  [304] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2), SHIFT_REPEAT(171),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2), SHIFT_REPEAT(28),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2), SHIFT_REPEAT(134),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 2),
  [317] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2), SHIFT_REPEAT(177),
  [320] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2), SHIFT_REPEAT(29),
  [323] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2), SHIFT_REPEAT(267),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 1),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 1),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_instruction, 2),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_value_repeat1, 2),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_value_repeat1, 2),
  [368] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_tag_value_repeat1, 2), SHIFT_REPEAT(158),
  [371] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_tag_value_repeat1, 2), SHIFT_REPEAT(40),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 1),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 1),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 2),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 2),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 4),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 4),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_tag_value, 1),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_tag_value, 1),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 2, .production_id = 4),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_digest_value, 1),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_digest_value, 1),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shisho_ellipsis_metavariable, 4),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shisho_ellipsis_metavariable, 4),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_name_or_group, 2),
  [450] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__user_name_or_group, 2), SHIFT_REPEAT(118),
  [453] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__user_name_or_group, 2), SHIFT_REPEAT(189),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [460] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_value_repeat1, 2),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_value_repeat1, 2),
  [468] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_digest_value_repeat1, 2), SHIFT_REPEAT(184),
  [471] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_value_repeat1, 2), SHIFT_REPEAT(72),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [476] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(164),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2),
  [481] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(75),
  [484] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(75),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2),
  [489] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2), SHIFT_REPEAT(213),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [494] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [512] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(82),
  [515] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(175),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [526] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [528] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(193),
  [531] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(85),
  [534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [546] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(93),
  [549] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(180),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 4, .production_id = 13),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 4, .production_id = 15),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 2),
  [560] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 2),
  [562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 1),
  [568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [570] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2),
  [574] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(190),
  [577] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(100),
  [580] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(101),
  [583] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(170),
  [586] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [588] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [590] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 2),
  [594] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 2),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_fragment, 1),
  [598] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_fragment, 1),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3),
  [604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 6),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 6),
  [610] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param, 4, .production_id = 17),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, .production_id = 17),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_name_or_group, 1),
  [616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__user_name_or_group, 1),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_pair, 3, .production_id = 10),
  [620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_pair, 3, .production_id = 10),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [624] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2), SHIFT_REPEAT(122),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 3, .production_id = 11),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 3, .production_id = 11),
  [633] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [635] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [643] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2),
  [645] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2), SHIFT_REPEAT(50),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [652] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 3),
  [654] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [658] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [660] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [662] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 2),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [666] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [668] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_tag, 2),
  [674] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_tag, 2),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_array_repeat1, 2),
  [678] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_array_repeat1, 2), SHIFT_REPEAT(61),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_line, 2),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 2, .production_id = 5),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_digest, 2),
  [697] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_digest, 2),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 1),
  [705] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 2),
  [717] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [741] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 2, .production_id = 3),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 7),
  [763] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 7),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 3),
  [771] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 2),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat2, 2),
  [793] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 2), SHIFT_REPEAT(32),
  [796] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__spaced_env_pair, 3, .production_id = 11),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_instruction, 5),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_instruction, 5),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat2, 3),
  [806] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 3),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anon_comment, 2),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 4),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 5, .production_id = 18),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 4, .production_id = 16),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 4, .production_id = 14),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 4, .production_id = 12),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_instruction, 4),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_instruction, 4),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [828] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 2),
  [830] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 3),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 4, .production_id = 9),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 3),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 2),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cross_build_instruction, 2),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_maintainer_instruction, 2),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_instruction, 2),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 2),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_onbuild_instruction, 2),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workdir_instruction, 2),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_volume_instruction, 2),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [908] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entrypoint_instruction, 2),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 2, .production_id = 2),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [928] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [938] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [942] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_instruction, 2),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [948] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 2),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [956] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [964] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [966] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [968] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [970] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [972] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [974] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [976] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [978] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [982] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [984] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [986] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
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
