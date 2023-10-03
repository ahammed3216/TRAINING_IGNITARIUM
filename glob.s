	.file	"glob.c"
	.text
	.globl	varx
	.data
	.align 4
	.type	varx, @object
	.size	varx, 4
varx:
	.long	10
	.globl	ptr1
	.section	.data.rel.local,"aw"
	.align 8
	.type	ptr1, @object
	.size	ptr1, 8
ptr1:
	.quad	varx
	.section	.rodata
.LC0:
	.string	"global variable is %d"
.LC1:
	.string	"\nswaping the values :"
.LC2:
	.string	"\nThe global value now is :%d"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	$50, -4(%rbp)
	movq	ptr1(%rip), %rax
	movl	(%rax), %eax
	movl	%eax, %esi
	leaq	.LC0(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	.LC1(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movq	ptr1(%rip), %rax
	movl	(%rax), %ecx
	movq	ptr1(%rip), %rax
	movl	-4(%rbp), %edx
	addl	%ecx, %edx
	movl	%edx, (%rax)
	movq	ptr1(%rip), %rax
	movl	(%rax), %eax
	subl	-4(%rbp), %eax
	movl	%eax, -4(%rbp)
	movq	ptr1(%rip), %rax
	movl	(%rax), %edx
	movq	ptr1(%rip), %rax
	subl	-4(%rbp), %edx
	movl	%edx, (%rax)
	movq	ptr1(%rip), %rax
	movl	(%rax), %eax
	movl	%eax, %esi
	leaq	.LC2(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 9.4.0-1ubuntu1~20.04.2) 9.4.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	 1f - 0f
	.long	 4f - 1f
	.long	 5
0:
	.string	 "GNU"
1:
	.align 8
	.long	 0xc0000002
	.long	 3f - 2f
2:
	.long	 0x3
3:
	.align 8
4:
