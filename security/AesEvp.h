/*
	use openssl EVP functions
*/
#pragma  once

class YAesEvp{
public:
	static bool AES64Encrypt_128cbc(const std::string& sKey, const std::string& sIv, const unsigned char* pSrc, int nSrcLen, std::string& sEncrypted);
	static bool AES64Decrypt_128cbc(const std::string& sKey, const std::string& sIv, const unsigned char* pSrc, int nSrcLen, std::string& sDecrypted);

	static  int AESEncrypt_128cbc(const std::string& sKey, const std::string& sIv, const unsigned char* pSrc, int nSrcLen, std::string& sEncrypted);
	 static int AESDecrypt_128cbc(const std::string& sKey, const std::string& sIv, const unsigned char* pSrc, int nSrcLen, std::string& sDecrypted);

private:
	YAesEvp(){}
	~YAesEvp(){}
};