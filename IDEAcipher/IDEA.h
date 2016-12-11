//对称加密：整个算法和DES相似
bool SetKey(unsigned short *key, unsigned short kLen);
void idea_encrypt(unsigned short *in, unsigned short *out);
void idea_decrypt(unsigned short *in, unsigned short *out);