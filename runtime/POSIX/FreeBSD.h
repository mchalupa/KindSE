#ifndef _FREEBSD_SHIMS_H
#define _FREEBSD_SHIMS_H

// termios maps
#define TCGETS  TIOCGETA
#define TCSETS  TIOCSETA
#define TCSETSW TIOCSETAW
#define TCSETSF TIOCSETAF

// for stubs.c, define gnu_dev_type
#define __GLIBC_PREREQ(x,y) 1

// for various typedefs inside FreeBSD headers
#define __BSD_VISIBLE   1

#define stat64 stat

#include <sys/syscall.h>

struct rlimit64;

#define	__NR_syscall	SYS_syscall
#define	__NR_exit	SYS_exit
#define	__NR_fork	SYS_fork
#define	__NR_read	SYS_read
#define	__NR_write	SYS_write
#define	__NR_open	SYS_open
#define	__NR_close	SYS_close
#define	__NR_wait4	SYS_wait4
#define	__NR_link	SYS_link
#define	__NR_unlink	SYS_unlink
#define	__NR_chdir	SYS_chdir
#define	__NR_fchdir	SYS_fchdir
#define	__NR_mknod	SYS_mknod
#define	__NR_chmod	SYS_chmod
#define	__NR_chown	SYS_chown
#define	__NR_break	SYS_break
#define	__NR_getpid	SYS_getpid
#define	__NR_mount	SYS_mount
#define	__NR_unmount	SYS_unmount
#define	__NR_setuid	SYS_setuid
#define	__NR_getuid	SYS_getuid
#define	__NR_geteuid	SYS_geteuid
#define	__NR_ptrace	SYS_ptrace
#define	__NR_recvmsg	SYS_recvmsg
#define	__NR_sendmsg	SYS_sendmsg
#define	__NR_recvfrom	SYS_recvfrom
#define	__NR_accept	SYS_accept
#define	__NR_getpeername	SYS_getpeername
#define	__NR_getsockname	SYS_getsockname
#define	__NR_access	SYS_access
#define	__NR_chflags	SYS_chflags
#define	__NR_fchflags	SYS_fchflags
#define	__NR_sync	SYS_sync
#define	__NR_kill	SYS_kill
#define	__NR_getppid	SYS_getppid
#define	__NR_dup	SYS_dup
#define	__NR_freebsd10_pipe	SYS_freebsd10_pipe
#define	__NR_getegid	SYS_getegid
#define	__NR_profil	SYS_profil
#define	__NR_ktrace	SYS_ktrace
#define	__NR_getgid	SYS_getgid
#define	__NR_getlogin	SYS_getlogin
#define	__NR_setlogin	SYS_setlogin
#define	__NR_acct	SYS_acct
#define	__NR_sigaltstack	SYS_sigaltstack
#define	__NR_ioctl	SYS_ioctl
#define	__NR_reboot	SYS_reboot
#define	__NR_revoke	SYS_revoke
#define	__NR_symlink	SYS_symlink
#define	__NR_readlink	SYS_readlink
#define	__NR_execve	SYS_execve
#define	__NR_umask	SYS_umask
#define	__NR_chroot	SYS_chroot
#define	__NR_msync	SYS_msync
#define	__NR_vfork	SYS_vfork
#define	__NR_sbrk	SYS_sbrk
#define	__NR_sstk	SYS_sstk
#define	__NR_vadvise	SYS_vadvise
#define	__NR_munmap	SYS_munmap
#define	__NR_mprotect	SYS_mprotect
#define	__NR_madvise	SYS_madvise
#define	__NR_mincore	SYS_mincore
#define	__NR_getgroups	SYS_getgroups
#define	__NR_setgroups	SYS_setgroups
#define	__NR_getpgrp	SYS_getpgrp
#define	__NR_setpgid	SYS_setpgid
#define	__NR_setitimer	SYS_setitimer
#define	__NR_swapon	SYS_swapon
#define	__NR_getitimer	SYS_getitimer
#define	__NR_getdtablesize	SYS_getdtablesize
#define	__NR_dup2	SYS_dup2
#define	__NR_fcntl	SYS_fcntl
#define	__NR_select	SYS_select
#define	__NR_fsync	SYS_fsync
#define	__NR_setpriority	SYS_setpriority
#define	__NR_socket	SYS_socket
#define	__NR_connect	SYS_connect
#define	__NR_getpriority	SYS_getpriority
#define	__NR_bind	SYS_bind
#define	__NR_setsockopt	SYS_setsockopt
#define	__NR_listen	SYS_listen
#define	__NR_gettimeofdaySYS_gettimeofday
#define	__NR_getrusage	SYS_getrusage
#define	__NR_getsockopt	SYS_getsockopt
#define	__NR_readv	SYS_readv
#define	__NR_writev	SYS_writev
#define	__NR_settimeofdaySYS_settimeofday
#define	__NR_fchown	SYS_fchown
#define	__NR_fchmod	SYS_fchmod
#define	__NR_setreuid	SYS_setreuid
#define	__NR_setregid	SYS_setregid
#define	__NR_rename	SYS_rename
#define	__NR_flock	SYS_flock
#define	__NR_mkfifo	SYS_mkfifo
#define	__NR_sendto	SYS_sendto
#define	__NR_shutdown	SYS_shutdown
#define	__NR_socketpair	SYS_socketpair
#define	__NR_mkdir	SYS_mkdir
#define	__NR_rmdir	SYS_rmdir
#define	__NR_utimes	SYS_utimes
#define	__NR_adjtime	SYS_adjtime
#define	__NR_setsid	SYS_setsid
#define	__NR_quotactl	SYS_quotactl
#define	__NR_nlm_syscall	SYS_nlm_syscall
#define	__NR_nfssvc	SYS_nfssvc
#define	__NR_lgetfh	SYS_lgetfh
#define	__NR_getfh	SYS_getfh
#define	__NR_sysarch	SYS_sysarch
#define	__NR_rtprio	SYS_rtprio
#define	__NR_semsys	SYS_semsys
#define	__NR_msgsys	SYS_msgsys
#define	__NR_shmsys	SYS_shmsys
#define	__NR_setfib	SYS_setfib
#define	__NR_ntp_adjtime	SYS_ntp_adjtime
#define	__NR_setgid	SYS_setgid
#define	__NR_setegid	SYS_setegid
#define	__NR_seteuid	SYS_seteuid
#ifdef SYS_stat
#define	__NR_stat	SYS_stat
#else
#define	__NR_stat	SYS_freebsd11_stat
#endif
#define	__NR_fstat	SYS_fstat
#ifdef SYS_lstat
#define	__NR_lstat	SYS_lstat
#else
#define	__NR_lstat	SYS_freebsd11_lstat
#endif
#define	__NR_pathconf	SYS_pathconf
#define	__NR_fpathconf	SYS_fpathconf
#define	__NR_getrlimit	SYS_getrlimit
#define	__NR_setrlimit	SYS_setrlimit
#define	__NR_getdirentries	SYS_getdirentries
#define	__NR___syscall	SYS___syscall
#define	__NR___sysctl	SYS___sysctl
#define	__NR_mlock	SYS_mlock
#define	__NR_munlock	SYS_munlock
#define	__NR_undelete	SYS_undelete
#define	__NR_futimes	SYS_futimes
#define	__NR_getpgid	SYS_getpgid
#define	__NR_poll	SYS_poll
#define	__NR_freebsd7___semctl	SYS_freebsd7___semctl
#define	__NR_semget	SYS_semget
#define	__NR_semop	SYS_semop
#define	__NR_freebsd7_msgctl	SYS_freebsd7_msgctl
#define	__NR_msgget	SYS_msgget
#define	__NR_msgsnd	SYS_msgsnd
#define	__NR_msgrcv	SYS_msgrcv
#define	__NR_shmat	SYS_shmat
#define	__NR_freebsd7_shmctl	SYS_freebsd7_shmctl
#define	__NR_shmdt	SYS_shmdt
#define	__NR_shmget	SYS_shmget
#define	__NR_clock_gettime	SYS_clock_gettime
#define	__NR_clock_settime	SYS_clock_settime
#define	__NR_clock_getres	SYS_clock_getres
#define	__NR_ktimer_create	SYS_ktimer_create
#define	__NR_ktimer_delete	SYS_ktimer_delete
#define	__NR_ktimer_settime	SYS_ktimer_settime
#define	__NR_ktimer_gettime	SYS_ktimer_gettime
#define	__NR_ktimer_getoverrun	SYS_ktimer_getoverrun
#define	__NR_nanosleep	SYS_nanosleep
#define	__NR_ffclock_getcounter	SYS_ffclock_getcounter
#define	__NR_ffclock_setestimate	SYS_ffclock_setestimate
#define	__NR_ffclock_getestimate	SYS_ffclock_getestimate
#define	__NR_clock_getcpuclockid2SYS_clock_getcpuclockid2
#define	__NR_ntp_gettime	SYS_ntp_gettime
#define	__NR_minherit	SYS_minherit
#define	__NR_rfork	SYS_rfork
#define	__NR_openbsd_pollSYS_openbsd_poll
#define	__NR_issetugid	SYS_issetugid
#define	__NR_lchown	SYS_lchown
#define	__NR_aio_read	SYS_aio_read
#define	__NR_aio_write	SYS_aio_write
#define	__NR_lio_listio	SYS_lio_listio
#ifdef SYS_getdents
#define	__NR_getdents	SYS_getdents
#define	__NR_getdents64	SYS_getdents
#else
#define	__NR_getdents	SYS_freebsd11_getdents
#define	__NR_getdents64	SYS_freebsd11_getdents
#endif
#define	__NR_lchmod	SYS_lchmod
#define	__NR_netbsd_lchown	SYS_netbsd_lchown
#define	__NR_lutimes	SYS_lutimes
#define	__NR_netbsd_msync	SYS_netbsd_msync
#define	__NR_nstat	SYS_nstat
#define	__NR_nfstat	SYS_nfstat
#define	__NR_nlstat	SYS_nlstat
#define	__NR_preadv	SYS_preadv
#define	__NR_pwritev	SYS_pwritev
#define	__NR_fhopen	SYS_fhopen
#define	__NR_fhstat	SYS_fhstat
#define	__NR_modnext	SYS_modnext
#define	__NR_modstat	SYS_modstat
#define	__NR_modfnext	SYS_modfnext
#define	__NR_modfind	SYS_modfind
#define	__NR_kldload	SYS_kldload
#define	__NR_kldunload	SYS_kldunload
#define	__NR_kldfind	SYS_kldfind
#define	__NR_kldnext	SYS_kldnext
#define	__NR_kldstat	SYS_kldstat
#define	__NR_kldfirstmod	SYS_kldfirstmod
#define	__NR_getsid	SYS_getsid
#define	__NR_setresuid	SYS_setresuid
#define	__NR_setresgid	SYS_setresgid
#define	__NR_aio_return	SYS_aio_return
#define	__NR_aio_suspend	SYS_aio_suspend
#define	__NR_aio_cancel	SYS_aio_cancel
#define	__NR_aio_error	SYS_aio_error
#define	__NR_yield	SYS_yield
#define	__NR_mlockall	SYS_mlockall
#define	__NR_munlockall	SYS_munlockall
#define	__NR_getcwd	SYS___getcwd
#define	__NR_sched_setparam	SYS_sched_setparam
#define	__NR_sched_getparam	SYS_sched_getparam
#define	__NR_sched_setscheduler	SYS_sched_setscheduler
#define	__NR_sched_getscheduler	SYS_sched_getscheduler
#define	__NR_sched_yield	331SYS_sched_yield	331
#define	__NR_sched_get_priority_max	SYS_sched_get_priority_max
#define	__NR_sched_get_priority_min	SYS_sched_get_priority_min
#define	__NR_sched_rr_get_interval	SYS_sched_rr_get_interval
#define	__NR_utrace	SYS_utrace
#define	__NR_kldsym	SYS_kldsym
#define	__NR_jail	SYS_jail
#define	__NR_nnpfs_syscall	SYS_nnpfs_syscall
#define	__NR_sigprocmask	SYS_sigprocmask
#define	__NR_sigsuspend	SYS_sigsuspend
#define	__NR_sigpending	SYS_sigpending
#define	__NR_sigtimedwait	SYS_sigtimedwait
#define	__NR_sigwaitinfo	SYS_sigwaitinfo
#define	__NR___acl_get_file	SYS___acl_get_file
#define	__NR___acl_set_file	SYS___acl_set_file
#define	__NR___acl_get_fd	SYS___acl_get_fd
#define	__NR___acl_set_fd	SYS___acl_set_fd
#define	__NR___acl_delete_file	SYS___acl_delete_file
#define	__NR___acl_delete_fd	SYS___acl_delete_fd
#define	__NR___acl_aclcheck_file	SYS___acl_aclcheck_file
#define	__NR___acl_aclcheck_fd	SYS___acl_aclcheck_fd
#define	__NR_extattrctl	355SYS_extattrctl	355
#define	__NR_extattr_set_file	SYS_extattr_set_file
#define	__NR_extattr_get_file	SYS_extattr_get_file
#define	__NR_extattr_delete_file	SYS_extattr_delete_file
#define	__NR_aio_waitcomplete	SYS_aio_waitcomplete
#define	__NR_getresuid	SYS_getresuid
#define	__NR_getresgid	SYS_getresgid
#define	__NR_kqueue	SYS_kqueue
#define	__NR_kevent	SYS_kevent
#define	__NR_extattr_set_fd	SYS_extattr_set_fd
#define	__NR_extattr_get_fd	SYS_extattr_get_fd
#define	__NR_extattr_delete_fd	SYS_extattr_delete_fd
#define	__NR___setugid	SYS___setugid
#define	__NR_eaccess	SYS_eaccess
#define	__NR_afs3_syscall	SYS_afs3_syscall
#define	__NR_nmount	SYS_nmount
#define	__NR___mac_get_proc	SYS___mac_get_proc
#define	__NR___mac_set_proc	SYS___mac_set_proc
#define	__NR___mac_get_fd	SYS___mac_get_fd
#define	__NR___mac_get_file	SYS___mac_get_file
#define	__NR___mac_set_fd	SYS___mac_set_fd
#define	__NR___mac_set_file	SYS___mac_set_file
#define	__NR_kenv	SYS_kenv
#define	__NR_lchflags	SYS_lchflags
#define	__NR_uuidgen	SYS_uuidgen
#define	__NR_sendfile	SYS_sendfile
#define	__NR_mac_syscall	SYS_mac_syscall
#define	__NR_getfsstat	SYS_getfsstat
#define	__NR_statfs	SYS_statfs
#define	__NR_fstatfs	SYS_fstatfs
#define	__NR_fhstatfs	SYS_fhstatfs
#define	__NR_ksem_close	SYS_ksem_close
#define	__NR_ksem_post	SYS_ksem_post
#define	__NR_ksem_wait	SYS_ksem_wait
#define	__NR_ksem_trywait	SYS_ksem_trywait
#define	__NR_ksem_init	SYS_ksem_init
#define	__NR_ksem_open	SYS_ksem_open
#define	__NR_ksem_unlink	SYS_ksem_unlink
#define	__NR_ksem_getvalue	SYS_ksem_getvalue
#define	__NR_ksem_destroy	SYS_ksem_destroy
#define	__NR___mac_get_pid	SYS___mac_get_pid
#define	__NR___mac_get_link	SYS___mac_get_link
#define	__NR___mac_set_link	SYS___mac_set_link
#define	__NR_extattr_set_link	SYS_extattr_set_link
#define	__NR_extattr_get_link	SYS_extattr_get_link
#define	__NR_extattr_delete_link	SYS_extattr_delete_link
#define	__NR___mac_execve	SYS___mac_execve
#define	__NR_sigaction	SYS_sigaction
#define	__NR_sigreturn	SYS_sigreturn
#define	__NR_getcontext	SYS_getcontext
#define	__NR_setcontext	SYS_setcontext
#define	__NR_swapcontext	SYS_swapcontext
#define	__NR_swapoff	SYS_swapoff
#define	__NR___acl_get_link	SYS___acl_get_link
#define	__NR___acl_set_link	SYS___acl_set_link
#define	__NR___acl_delete_link	SYS___acl_delete_link
#define	__NR___acl_aclcheck_link	SYS___acl_aclcheck_link
#define	__NR_sigwait	SYS_sigwait
#define	__NR_thr_create	SYS_thr_create
#define	__NR_thr_exit	SYS_thr_exit
#define	__NR_thr_self	SYS_thr_self
#define	__NR_thr_kill	SYS_thr_kill
#define	__NR_jail_attach	SYS_jail_attach
#define	__NR_extattr_list_fd	SYS_extattr_list_fd
#define	__NR_extattr_list_file	SYS_extattr_list_file
#define	__NR_extattr_list_link	SYS_extattr_list_link
#define	__NR_ksem_timedwait	SYS_ksem_timedwait
#define	__NR_thr_suspend	SYS_thr_suspend
#define	__NR_thr_wake	SYS_thr_wake
#define	__NR_kldunloadf	SYS_kldunloadf
#define	__NR_audit	SYS_audit
#define	__NR_auditon	SYS_auditon
#define	__NR_getauid	SYS_getauid
#define	__NR_setauid	SYS_setauid
#define	__NR_getaudit	SYS_getaudit
#define	__NR_setaudit	SYS_setaudit
#define	__NR_getaudit_addr	SYS_getaudit_addr
#define	__NR_setaudit_addr	SYS_setaudit_addr
#define	__NR_auditctl	SYS_auditctl
#define	__NR__umtx_op	SYS__umtx_op
#define	__NR_thr_new	SYS_thr_new
#define	__NR_sigqueue	SYS_sigqueue
#define	__NR_kmq_open	SYS_kmq_open
#define	__NR_kmq_setattr	SYS_kmq_setattr
#define	__NR_kmq_timedreceive	SYS_kmq_timedreceive
#define	__NR_kmq_timedsend	SYS_kmq_timedsend
#define	__NR_kmq_notify	SYS_kmq_notify
#define	__NR_kmq_unlink	SYS_kmq_unlink
#define	__NR_abort2	SYS_abort2
#define	__NR_thr_set_name	SYS_thr_set_name
#define	__NR_aio_fsync	SYS_aio_fsync
#define	__NR_rtprio_thread	SYS_rtprio_thread
#define	__NR_sctp_peeloff	SYS_sctp_peeloff
#define	__NR_sctp_generic_sendmsg	SYS_sctp_generic_sendmsg
#define	__NR_sctp_generic_sendmsg_iov	SYS_sctp_generic_sendmsg_iov
#define	__NR_sctp_generic_recvmsg	SYS_sctp_generic_recvmsg
#define	__NR_pread	SYS_pread	SYS_sctp_generic_recvmsg
#define	__NR_pread64	SYS_pread
#define	__NR_pwrite	SYS_pwrite
#define	__NR_pwrite64	SYS_pwrite
#define	__NR_mmap	SYS_mmap
#define	__NR_lseek	SYS_lseek
#define	__NR_truncate	SYS_truncate
#define	__NR_ftruncate	SYS_ftruncate
#define	__NR_thr_kill2	SYS_thr_kill2
#define	__NR_shm_open	SYS_shm_open
#define	__NR_shm_unlink	SYS_shm_unlink
#define	__NR_cpuset	SYS_cpuset
#define	__NR_cpuset_setid	SYS_cpuset_setid
#define	__NR_cpuset_getid	SYS_cpuset_getid
#define	__NR_cpuset_getaffinity	SYS_cpuset_getaffinity
#define	__NR_cpuset_setaffinity	SYS_cpuset_setaffinity
#define	__NR_faccessat	SYS_faccessat
#define	__NR_fchmodat	SYS_fchmodat
#define	__NR_fchownat	SYS_fchownat
#define	__NR_fexecve	SYS_fexecve
#define	__NR_fstatat	SYS_fstatat
#define	__NR_fstatat64	SYS_fstatat
#define	__NR_futimesat	SYS_futimesat
#define	__NR_linkat	SYS_linkat
#define	__NR_mkdirat	SYS_mkdirat
#define	__NR_mkfifoat	SYS_mkfifoat
#define	__NR_mknodat	SYS_mknodat
#define	__NR_openat	SYS_openat
#define	__NR_readlinkat	SYS_readlinkat
#define	__NR_renameat	SYS_renameat
#define	__NR_symlinkat	SYS_symlinkat
#define	__NR_unlinkat	SYS_unlinkat
#define	__NR_posix_openpt	SYS_posix_openpt
#define	__NR_gssd_syscall	SYS_gssd_syscall
#define	__NR_jail_get	SYS_jail_get
#define	__NR_jail_set	SYS_jail_set
#define	__NR_jail_remove	SYS_jail_remove
#define	__NR_closefrom	SYS_closefrom
#define	__NR___semctl	SYS___semctl
#define	__NR_msgctl	SYS_msgctl
#define	__NR_shmctl	SYS_shmctl
#define	__NR_lpathconf	SYS_lpathconf
#define	__NR___cap_rights_get	SYS___cap_rights_get
#define	__NR_cap_enter	SYS_cap_enter
#define	__NR_cap_getmode	SYS_cap_getmode
#define	__NR_pdfork	SYS_pdfork
#define	__NR_pdkill	SYS_pdkill
#define	__NR_pdgetpid	SYS_pdgetpid
#define	__NR_pselect	SYS_pselect
#define	__NR_getloginclass	SYS_getloginclass
#define	__NR_setloginclass	SYS_setloginclass
#define	__NR_rctl_get_racct	SYS_rctl_get_racct
#define	__NR_rctl_get_rules	SYS_rctl_get_rules
#define	__NR_rctl_get_limits	SYS_rctl_get_limits
#define	__NR_rctl_add_rule	SYS_rctl_add_rule
#define	__NR_rctl_remove_rule	SYS_rctl_remove_rule
#define	__NR_posix_fallocate	SYS_posix_fallocate
#define	__NR_posix_fadvise	SYS_posix_fadvise
#define	__NR_wait6	SYS_wait6
#define	__NR_cap_rights_limit	SYS_cap_rights_limit
#define	__NR_cap_ioctls_limit	SYS_cap_ioctls_limit
#define	__NR_cap_ioctls_get	SYS_cap_ioctls_get
#define	__NR_cap_fcntls_limit	SYS_cap_fcntls_limit
#define	__NR_cap_fcntls_get	SYS_cap_fcntls_get
#define	__NR_bindat	SYS_bindat
#define	__NR_connectat	SYS_connectat
#define	__NR_chflagsat	SYS_chflagsat
#define	__NR_accept4	SYS_accept4
#define	__NR_pipe2	SYS_pipe2
#define	__NR_aio_mlock	SYS_aio_mlock
#define	__NR_procctl	SYS_procctl
#define	__NR_ppoll	SYS_ppoll
#define	__NR_futimens	SYS_futimens
#define	__NR_utimensat	SYS_utimensat
#define	__NR_numa_getaffinity	SYS_numa_getaffinity
#define	__NR_numa_setaffinity	SYS_numa_setaffinity
#define	__NR_MAXSYSCALL	SYS_MAXSYSCALL

#endif //_FREEBSD_SHIMS_H