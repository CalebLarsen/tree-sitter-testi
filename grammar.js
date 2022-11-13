module.exports = grammar({
	name: 'testi',
	rules: {
		source_file: $ => choice($.IdList),
		letter: $ => choice(/[a-z]/,/[A-Z]/),
		id: $ => seq($.letter,repeat($.letter)),
		_ws_inline: $ => choice("\r","\t"," "),
		_op: $ => ",",
		_top: $ => choice($.id,$._op),
		IdList: $ => field('ids', seq(repeat(seq($._Id, ",")), $._Id)),
		_Id: $ => $.id
	}
});