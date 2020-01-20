global	_ft_strlen

_ft_strlen:
		mov rcx, 0
_loop:
		cmp byte [rdi + rcx], byte 0
		jz _exit
		inc rcx
		jmp _loop
_exit:
		mov rax, rcx
		ret
