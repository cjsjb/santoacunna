\context Staff = "tenor" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Tenor"
	\set Staff.shortInstrumentName = "T."
	\set Staff.midiInstrument = "Voice Oohs"
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-tenor" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\time 4/4
		\clef "treble_8"
		\key c \major

		R1*2  |
		e 4 e 8 e 4. f 8 e ~  |
		e 8 c 4. ( d 4 e )  |
%% 5
		g 4 g 8 g 4. a 8 g ~  |
		g 8 r r4 r2  |
		r4. g 4 g 8 f e  |
		f 4 g 2.  |
		r4 e 2 ( ~ e 8 f 16 e
		% warning: overlong bar truncated here |
%% 10
		d 2. ) r4  |
		e 4 e 8 e 4. f 8 e ~  |
		e 8 c 4. ( d 4 e )  |
		g 4 g 8 g 4. a 8 g ~  |
		g 8 r r4 r2  |
%% 15
		r4 r8 g 4 g 8 f e  |
		f 4 g 2.  |
		r4 e 2 ( ~ e 8 f 16 e
		% warning: overlong bar truncated here |
		d 2. ) r4  |
		r8 a a a a a 4 a 8 ~  |
%% 20
		a 8 a a a 4 a 8 a a  |
		a 4. g 8 ~ g 2 ~  |
		g 8 r4 g 8 g f e f ~  |
		f 8 c 2..  |
		r4 r8 g g f e f ~  |
%% 25
		f 8 e 2. ( f 16 e
		% warning: overlong bar truncated here |
		d 2. ) r4  |
		r4 r8 a a a a a ~  |
		a 8 a 4 a a 8 a a  |
		a 4. ( g 8 ~ g 2 ~
		% warning: overlong bar truncated here |
%% 30
		g 8 ) r r g g f e f ~  |
		f 8 c 2..  |
		r4 r8 g g f e f ~  |
		f 8 e 2. ( f 16 e
		% warning: overlong bar truncated here |
		d 2. ) r4  |
%% 35
		e 4 e 8 e 4. f 8 e ~  |
		e 8 c 4. ( d 4 e )  |
		g 4 g 8 g 4. a 8 g ~  |
		g 8 r r4 r2  |
		r4 r8 g 4 g 8 f e  |
%% 40
		f 4 g 2.  |
		r4 e 2 ( ~ e 8 f 16 e
		% warning: overlong bar truncated here |
		d 2. ) r4  |
		e 4 e 8 e 4. f 8 e ~  |
		e 8 c 4. ( d 4 e )  |
%% 45
		g 4 g 8 g 4. a 8 g ~  |
		g 8 r r4 r2  |
		r4 r8 g 4 g 8 f e  |
		f 4 g 2.  |
		r4 e 2 ( ~ e 8 f 16 e
		% warning: overlong bar truncated here |
%% 50
		d 1  |
		c 1 )  |
		R1  |
		\bar "|."
	}

	\new Lyrics \lyricsto "voz-tenor" {
		% Santo, santo, santo...
		San -- to, san -- to, san -- to, __
		san -- "to es" el Se -- ñor __
		Dios del U -- ni -- ver -- so,
		oh. __

		San -- to, san -- to, san -- to, __
		san -- "to es" el Se -- ñor __
		Dios del U -- ni -- ver -- so,
		oh. __

		% Llenos están el cielo...
		Lle -- nos es -- tán el cie -- "lo y"
		la tie -- rra de tu glo -- ria. __
		¡Ho -- san -- "na en" el cie __ lo,
		ho -- san -- "na en" el cie __ lo! __

		Ben -- di -- "to el" que vie -- "ne en"
		nom -- bre del Se -- ñor. __
		¡Ho -- san -- "na en" el cie __ lo,
		ho -- san -- "na en" el cie __ lo! __

		% Santo, santo, santo...
		San -- to, san -- to, san -- to, __
		san -- "to es" el Se -- ñor __
		Dios del U -- ni -- ver -- so,
		oh. __

		San -- to, san -- to, san -- to, __
		san -- "to es" el Se -- ñor __
		Dios del U -- ni -- ver -- so,
		oh. __
	}
>>
