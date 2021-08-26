module.exports = grammar({
  name: "dockerfile",

  extras: ($) => [/\s+/, $.line_continuation],

  rules: {
    source_file: ($) =>
      repeat(
        seq(
          choice(
            $._instruction,
            $.comment,
            $.shisho_metavariable,
            $.shisho_ellipsis_metavariable,
            $.shisho_ellipsis
          ),
          "\n"
        )
      ),

    // query syntax for shisho
    shisho_metavariable: ($) => seq(":[", $.shisho_metavariable_name, "]"),
    shisho_ellipsis: ($) => ":[...]",
    shisho_ellipsis_metavariable: ($) =>
      seq(":[", "...", $.shisho_metavariable_name, "]"),

    shisho_metavariable_name: ($) => /[A-Z_][A-Z_0-9]*/,

    _instruction: ($) =>
      choice(
        $.from_instruction,
        $.run_instruction,
        $.cmd_instruction,
        $.label_instruction,
        $.expose_instruction,
        $.env_instruction,
        $.add_instruction,
        $.copy_instruction,
        $.entrypoint_instruction,
        $.volume_instruction,
        $.user_instruction,
        $.workdir_instruction,
        $.arg_instruction,
        $.onbuild_instruction,
        $.stopsignal_instruction,
        $.healthcheck_instruction,
        $.shell_instruction,
        $.maintainer_instruction,
        $.cross_build_instruction
      ),

    from_instruction: ($) =>
      seq(
        alias(/[fF][rR][oO][mM]/, "FROM"),
        optional(choice($.shisho_ellipsis_metavariable, $.param)),
        $.image_spec,
        optional(
          seq(
            alias(/[aA][sS]/, "AS"),
            field("as", choice($.image_alias, $.shisho_metavariable))
          )
        )
      ),

    run_instruction: ($) =>
      seq(
        alias(/[rR][uU][nN]/, "RUN"),
        choice($.string_array, $.shell_command)
      ),

    cmd_instruction: ($) =>
      seq(
        alias(/[cC][mM][dD]/, "CMD"),
        choice($.string_array, $.shell_command)
      ),

    label_instruction: ($) =>
      seq(
        alias(/[lL][aA][bB][eE][lL]/, "LABEL"),
        repeat1(
          choice(
            $.label_pair,
            $.shisho_ellipsis,
            $.shisho_ellipsis_metavariable
          )
        )
      ),

    expose_instruction: ($) =>
      seq(
        alias(/[eE][xX][pP][oO][sS][eE]/, "EXPOSE"),
        repeat1(
          choice(
            $.expose_port,
            $.shisho_ellipsis,
            $.shisho_ellipsis_metavariable,
            $.expansion
          )
        )
      ),

    env_instruction: ($) =>
      seq(
        alias(/[eE][nN][vV]/, "ENV"),
        choice(
          repeat1(
            choice(
              $.env_pair,
              $.shisho_ellipsis,
              $.shisho_ellipsis_metavariable
            )
          ),
          alias($._spaced_env_pair, $.env_pair)
        )
      ),

    add_instruction: ($) =>
      seq(
        alias(/[aA][dD][dD]/, "ADD"),
        optional($.param),
        choice($.path, $.shisho_metavariable),
        $._non_newline_whitespace,
        choice($.path, $.shisho_metavariable)
      ),

    copy_instruction: ($) =>
      seq(
        alias(/[cC][oO][pP][yY]/, "COPY"),
        optional($.param),
        choice($.path, $.shisho_metavariable),
        $._non_newline_whitespace,
        choice($.path, $.shisho_metavariable)
      ),

    entrypoint_instruction: ($) =>
      seq(
        alias(/[eE][nN][tT][rR][yY][pP][oO][iI][nN][tT]/, "ENTRYPOINT"),
        choice($.string_array, $.shell_command)
      ),

    volume_instruction: ($) =>
      seq(
        alias(/[vV][oO][lL][uU][mM][eE]/, "VOLUME"),
        choice(
          $.string_array,
          seq(
            choice($.path, $.shisho_ellipsis, $.shisho_ellipsis_metavariable),
            repeat(
              seq(
                $._non_newline_whitespace,
                choice(
                  $.path,
                  $.shisho_ellipsis,
                  $.shisho_ellipsis_metavariable
                )
              )
            )
          )
        )
      ),

    user_instruction: ($) =>
      seq(
        alias(/[uU][sS][eE][rR]/, "USER"),
        field(
          "user",
          choice(
            alias($._user_name_or_group, $.unquoted_string),
            $.shisho_metavariable
          )
        ),
        optional(
          seq(
            token.immediate(":"),
            field(
              "group",
              choice(
                alias($._user_name_or_group, $.unquoted_string),
                $.shisho_metavariable
              )
            )
          )
        )
      ),

    _user_name_or_group: ($) =>
      repeat1(choice(/[a-z][-a-z0-9_]*/, $.expansion)),

    workdir_instruction: ($) =>
      seq(
        alias(/[wW][oO][rR][kK][dD][iI][rR]/, "WORKDIR"),
        choice($.path, $.shisho_metavariable)
      ),

    arg_instruction: ($) =>
      seq(
        alias(/[aA][rR][gG]/, "ARG"),
        field(
          "name",
          choice(
            alias(/[a-zA-Z0-9_]+/, $.unquoted_string),
            $.shisho_metavariable
          )
        ),
        optional(
          seq(
            token.immediate("="),
            field(
              "default",
              choice(
                $.shisho_metavariable,
                $.double_quoted_string,
                $.unquoted_string
              )
            )
          )
        )
      ),

    onbuild_instruction: ($) =>
      seq(
        alias(/[oO][nN][bB][uU][iI][lL][dD]/, "ONBUILD"),
        choice($._instruction, $.shisho_metavariable)
      ),

    stopsignal_instruction: ($) =>
      seq(
        alias(/[sS][tT][oO][pP][sS][iI][gG][nN][aA][lL]/, "STOPSIGNAL"),
        $._stopsignal_value
      ),

    _stopsignal_value: ($) =>
      repeat1(
        choice(
          /[A-Z0-9]+/,
          $.expansion,
          $.shisho_metavariable,
          $.shisho_ellipsis_metavariable,
          $.shisho_ellipsis
        )
      ),

    healthcheck_instruction: ($) =>
      seq(
        alias(/[hH][eE][aA][lL][tT][hH][cC][hH][eE][cC][kK]/, "HEALTHCHECK"),
        choice(
          "NONE",
          seq(
            repeat(
              choice(
                $.param,
                $.shisho_metavariable,
                $.shisho_ellipsis_metavariable,
                $.shisho_ellipsis
              )
            ),
            $.cmd_instruction
          )
        )
      ),

    shell_instruction: ($) =>
      seq(alias(/[sS][hH][eE][lL][lL]/, "SHELL"), $.string_array),

    maintainer_instruction: ($) =>
      seq(
        alias(/[mM][aA][iI][nN][tT][aA][iI][nN][eE][rR]/, "MAINTAINER"),
        /.*/
      ),

    cross_build_instruction: ($) =>
      seq(
        alias(
          /[cC][rR][oO][sS][sS]_[bB][uU][iI][lL][dD][a-zA-Z_]*/,
          "CROSS_BUILD"
        ),
        /.*/
      ),

    path: ($) =>
      seq(
        choice(
          /[^-\s\$]/, // cannot start with a '-' to avoid conflicts with params
          $.expansion
        ),
        repeat(choice(/[^\s\$]+/, $.expansion))
      ),
    expansion: ($) =>
      seq("$", choice($.variable, seq("{", alias(/[^\}]+/, $.variable), "}"))),

    variable: ($) => /[a-zA-Z][a-zA-Z0-9_]*/,

    env_pair: ($) =>
      seq(
        field("name", choice($._env_key, $.shisho_metavariable)),
        token.immediate("="),
        field(
          "value",
          choice(
            $.shisho_metavariable,
            $.double_quoted_string,
            $.unquoted_string
          )
        )
      ),

    _spaced_env_pair: ($) =>
      seq(
        field("name", choice($._env_key, $.shisho_metavariable)),
        token.immediate(/\s+/),
        field(
          "value",
          choice(
            $.shisho_metavariable,
            $.double_quoted_string,
            $.unquoted_string
          )
        )
      ),

    _env_key: ($) =>
      alias(/[a-zA-Z][a-zA-Z0-9_]*[a-zA-Z0-9]/, $.unquoted_string),

    expose_port: ($) =>
      choice(
        $.shisho_metavariable,
        seq(/\d+/, optional(choice("/tcp", "/udp")))
      ),

    label_pair: ($) =>
      seq(
        field(
          "key",
          choice(
            $.shisho_metavariable,
            alias(/[-a-zA-Z0-9\._]+/, $.unquoted_string)
          )
        ),
        token.immediate("="),
        field(
          "value",
          choice(
            $.shisho_metavariable,
            $.double_quoted_string,
            $.unquoted_string
          )
        )
      ),

    image_spec: ($) =>
      seq(
        field("name", choice($.image_name, $.shisho_metavariable)),
        seq(
          field("tag", optional($.image_tag)),
          field("digest", optional($.image_digest))
        )
      ),

    image_name: ($) => repeat1(choice(/[^@:\s\$]+/, $.expansion)),

    image_tag: ($) =>
      seq(
        token.immediate(":"),
        choice($.image_tag_value, $.shisho_metavariable)
      ),

    image_tag_value: ($) =>
      repeat1(choice(token.immediate(/[^\[\]@\s\$]+/), $.expansion)),

    image_digest: ($) =>
      seq(
        token.immediate("@"),
        choice($.image_digest_value, $.shisho_metavariable)
      ),
    image_digest_value: ($) =>
      repeat1(choice(token.immediate(/[a-zA-Z0-9:]+/), $.expansion)),

    param: ($) =>
      seq(
        "--",
        field("name", choice($.param_name, $.shisho_metavariable)),
        token.immediate("="),
        field("value", choice($.param_value, $.shisho_metavariable))
      ),

    param_name: ($) => token.immediate(/[a-z][-a-z]*/),
    param_value: ($) => token.immediate(/[^\s]+/),

    image_alias: ($) => repeat1(choice(/[-a-zA-Z0-9_]+/, $.expansion)),

    string_array: ($) =>
      seq(
        "[",
        optional(
          seq(
            choice(
              $.double_quoted_string,
              $.shisho_metavariable,
              $.shisho_ellipsis_metavariable,
              $.shisho_ellipsis
            ),
            repeat(
              seq(
                ",",
                choice(
                  $.double_quoted_string,
                  $.shisho_metavariable,
                  $.shisho_ellipsis_metavariable,
                  $.shisho_ellipsis
                )
              )
            )
          )
        ),
        "]"
      ),

    shell_command: ($) =>
      seq(
        choice(
          $.shisho_ellipsis,
          $.shisho_metavariable,
          $.shisho_ellipsis_metavariable,
          $.shell_fragment
        ),
        repeat(
          seq(
            $.line_continuation,
            repeat($._comment_line),
            choice(
              $.shisho_ellipsis,
              $.shisho_metavariable,
              $.shisho_ellipsis_metavariable,
              $.shell_fragment
            )
          )
        )
      ),

    shell_fragment: ($) => repeat1(choice(/[^\\\[\n#\s][^\\\n]*/, /\\[^\n]/)),

    line_continuation: ($) => "\\\n",

    _comment_line: ($) => seq(alias($._anon_comment, $.comment), "\n"),

    _anon_comment: ($) => seq("#", /.*/),

    double_quoted_string: ($) =>
      seq(
        '"',
        repeat(
          choice(token.immediate(/[^"\n\\\$]+/), $.escape_sequence, $.expansion)
        ),
        '"'
      ),

    unquoted_string: ($) =>
      repeat1(
        choice(
          token.immediate(/[^\s\n\"\\\$]+/),
          token.immediate("\\ "),
          $.expansion
        )
      ),

    escape_sequence: ($) =>
      token.immediate(
        seq(
          "\\",
          choice(
            /[^xuU]/,
            /\d{2,3}/,
            /x[0-9a-fA-F]{2,}/,
            /u[0-9a-fA-F]{4}/,
            /U[0-9a-fA-F]{8}/
          )
        )
      ),

    _non_newline_whitespace: ($) => /[\t ]+/,

    comment: ($) => /#.*/,
  },
});
