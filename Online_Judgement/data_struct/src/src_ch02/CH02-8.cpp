/*************************************
 *  �̲�P46��ջ��˳��洢�ṹ
**************************************/

# define MAXSIZE 100
typedef int EntryType;
 
/*************************************
 * ����˳��ջ����������
 * ˵������Լ��top = -1��ʾ��ջ����top = MAXSIZE-1��ʾջ��
**************************************/
typedef struct stack{
   int top;                                   // ���ջ��λ��
   EntryType entry[MAXSIZE]; // �������Ԫ��
}Stack, *StackPtr;

/*************************************
 * �̲�P47��ջ�ĳ�ʼ��1����̬����洢�ռ�
**************************************/
Stack s;  // ����������ջ����s

int stack_init(Stack s){
   s.top = -1;  // ��ջ��Ԫ�ظ���Ϊ��
   return 0;
}

/*************************************
 * �̲�P47��ջ�ĳ�ʼ��2����̬����洢�ռ�
**************************************/

int stack_init(StackPtr *s){
    int status = -1;
    StackPtr ps;    // ��������һ��ָ��ջ��ָ��
    
    ps = (StackPtr) malloc (sizeof (Stack) )  // Ϊ��ջ����洢�ռ�
   
    if (ps){                    // ���ռ����ɹ�
        ps -> top = -1;    // ��ջ��Ԫ�ظ���Ϊ��
        *s = ps;               // ͨ�������������ض�ջ�洢�ռ���׵�ַ
        status = 0;
    }
    return status;
}

/*************************************
 * �̲�P48��ջ�����٣��ͷ�ջ�Ĵ洢�ռ䣩
 * ע�⣺������˳��ջ����ջ��������Ҫ�����д���ٺ���
**************************************/
void stack_destroy(StackPtr *s) {
	if(*s) {              // �����ж�ջ�Ĵ洢�ռ��Ƿ����
		free (*s);
		*s = NULL;
	}
}

/*************************************
 * �̲�P48��ջ����գ����ջ�д�ŵ�����Ԫ�أ�
 * ջ�д�ŵ���Ч������ջ��ָ��ָʾ����ջ�ռ��д洢��ֵ�޹�
**************************************/
void stack_clear(StackPtr s){
	s -> top = -1;
}

/*************************************
 * �̲�P48���п�
**************************************/
bool stack_empty(StackPtr s){
	return (s -> top <= -1);
}

/*************************************
 * �̲�P48������
**************************************/
bool stack_full(StackPtr s){
	return (s -> top >= MAXSIZE -1);
}