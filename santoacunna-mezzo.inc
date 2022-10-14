\context Staff = "mezzo" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Mezzosoprano"
	\set Staff.shortInstrumentName = "M."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-mezzo" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\time 4/4
		\clef "treble"
		\key c \major

		R1*2  |
		c' 4 c' 8 c' 4. c' 8 c' ~  |
		c' 8 c' 2..  |
%% 5
		b 4 b 8 b 4. c' 8 b ~  |
		b 8 r4 b b 8 a g  |
		a 4 b 8 ( a ~ a 2 )  |
		r4. b 4 b 8 a g  |
		a 4 g 2. ~  |
%% 10
		g 2. r4  |
		c' 4 c' 8 c' 4. c' 8 c' ~  |
		c' 8 c' 2..  |
		b 4 b 8 b 4. c' 8 b ~  |
		b 8 r r b 4 b 8 a g  |
%% 15
		a 4 b 8 ( a ~ a 2 )  |
		r4 r8 b 4 b 8 a g  |
		a 4 g 2. ~  |
		g 2. r4  |
		r8 c' c' c' c' c' 4 c' 8 ~  |
%% 20
		c' 8 c' c' c' 4 c' 8 c' c'  |
		c' 4. b 8 ~ b 2 ~  |
		b 8 r4 b 8 b a g a ~  |
		a 8 b ( a 2. )  |
		r4. b 8 b a g a ~  |
%% 25
		a 8 g 2.. ~  |
		g 2. r4  |
		r4 r8 c' c' c' c' c' ~  |
		c' 8 c' 4 c' c' 8 c' c'  |
		c' 4. ( b 8 ~ b 2 ~
		% warning: overlong bar truncated here |
%% 30
		b 8 ) r4 b 8 b a g a ~  |
		a 8 b ( a 2. )  |
		r4 r8 b b a g a ~  |
		a 8 g 2.. ~  |
		g 2. r4  |
%% 35
		c' 4 c' 8 c' 4. c' 8 c' ~  |
		c' 8 c' 2..  |
		b 4 b 8 b 4. c' 8 b ~  |
		b 8 r r b 4 b 8 a g  |
		a 4 b 8 ( a ~ a 2 )  |
%% 40
		r4 r8 b 4 b 8 a g  |
		a 4 g 2. ~  |
		g 2. r4  |
		c' 4 c' 8 c' 4. c' 8 c' ~  |
		c' 8 c' 2..  |
%% 45
		b 4 b 8 b 4. c' 8 b ~  |
		b 8 r r b 4 b 8 a g  |
		a 4 b 8 ( a ~ a 2 )  |
		r4 r8 b 4 b 8 a g  |
		a 4 g 2. ~  |
%% 50
		g 1 ~  |
		g 1  |
		R1  |
		\bar "|."
	}

	\new Lyrics \lyricsto "voz-mezzo" {
		% Santo, santo, santo...
		San -- to, san -- to, san -- to,
		san -- "to es" el Se -- ñor __
		Dios del U -- ni -- ver -- so, __
		Dios del U -- ni -- ver -- so. __

		San -- to, san -- to, san -- to, __
		san -- "to es" el Se -- ñor __
		Dios del U -- ni -- ver -- so, __
		Dios del U -- ni -- ver -- so. __

		% Llenos están el cielo...
		Lle -- nos es -- tán el cie -- "lo y"
		la tie -- rra de tu glo -- ria. __
		¡Ho -- san -- "na en" el cie __ lo, __
		ho -- san -- "na en" el cie __ lo! __

		Ben -- di -- "to el" que vie -- "ne en"
		nom -- bre del Se -- ñor. __
		¡Ho -- san -- "na en" el cie __ lo, __
		ho -- san -- "na en" el cie __ lo! __

		% Santo, santo, santo...
		San -- to, san -- to, san -- to, __
		san -- "to es" el Se -- ñor __
		Dios del U -- ni -- ver -- so, __
		Dios del U -- ni -- ver -- so. __

		San -- to, san -- to, san -- to, __
		san -- "to es" el Se -- ñor __
		Dios del U -- ni -- ver -- so, __
		Dios del U -- ni -- ver -- so. __
	}
>>
