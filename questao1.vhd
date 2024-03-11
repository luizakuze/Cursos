library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity questao1 is
	port 
	(
		a			: in std_logic_vector(4 downto 0);
		b			: in std_logic_vector(4 downto 0);
		opcode	: in std_logic_vector(1 downto 0);
		y			: out std_logic_vector(4 downto 0)
	);

end entity;

architecture questaol of questao1 is

	signal a_sig : signed (4 downto 0);
	signal b_sig : signed (4 downto 0);
	signal saida : signed (4 downto 0);
	
begin
	a_sig <= signed(a);
	b_sig <= signed(b);
	process(opcode)
	begin
	if(opcode = "00") then
		saida <= (a_sig + b_sig);
	end if;
	if(opcode = "01") then
		saida <= (a_sig - b_sig);
	end if;
	if(opcode = "10") then
		saida <= (a_sig - "00001");
	end if;
	if(opcode = "11") then
		saida <= (a_sig + "00001");
	end if;
	end process;
	y <= std_logic_vector(saida);
end architecture;
