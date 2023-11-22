grammar MaGrammaire;

rule1: rule2 | rule3 | rule4;

rule2: rule3 | rule5;

rule3: 'a';

rule4: 'b' x+=rule2;

rule5: 'c' (x=rule3)?;
