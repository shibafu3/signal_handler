// ����
// �V�O�i���n���h���̃w�b�_���C���N���[�h
// �R�[���o�b�N�֐����`
// �V�O�i���n���h���ɃR�[���o�b�N�֐���ݒ�

// ���l
// ����finish�ϐ���while���[�v�̏����Ɏg���Ƃ�����ƕ֗�

// �Q�lURL
// http://uguisu.skr.jp/Windows/c_signal.html
// http://d.hatena.ne.jp/cupnes/20150504/1430712820
// https://codezine.jp/article/detail/4700


#include <signal.h>

static int finish = 0;
// �V�O�i���n���h�� �R�[���o�b�N�֐�
void sig_handler(int signo){
	if (signo == SIGINT){
		finish = 1;
	}
}

int main(){
	signal(SIGINT, sig_handler);


	return 0;
}