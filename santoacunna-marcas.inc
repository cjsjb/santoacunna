\context ChordNames \chords {
	$(if (>= (cadr (ly:version)) 24)
		#{ \set Score.rehearsalMarkFormatter = #format-mark-box-numbers #}
		#{ \set Score.markFormatter = #format-mark-box-numbers #})

	% intro
	\mark \default
	\skip 1*2

	% Santo, santo, santo...
	\mark \default
	\skip 1*4
	\skip 1*4

	% Santo, santo, santo...
	%\mark \default
	\skip 1*4
	\skip 1*4

	% Llenos estan el cielo y la tierra...
	\mark \default
	\skip 1*4
	\skip 1*4

	% Bendito el que viene...
	%\mark \default
	\skip 1*4
	\skip 1*4

	% Santo, santo, santo...
	\mark \default
	\skip 1*4
	\skip 1*4

	% Santo, santo, santo...
	%\mark \default
	\skip 1*4
	\skip 1*4
	%\skip 1*2
}
