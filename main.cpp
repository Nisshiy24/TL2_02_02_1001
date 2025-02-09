#include <cstdio>
#include <cstdlib>
#include <cassert>
#include "TextureConverter.h"
#include <Windows.h>

//�R�}���h���C��
enum Argument {
	kApplicationPath,
	kFilePath,

	NumArgument
};

int main(int argc, char* argv[])
{

	/*argc�̐������J��Ԃ�
	for (int i = 0; i < argc; i++)
	{
		������argv��i�Ԃ�\��
		printf(argv[i]);
		���s
		printf("\n");
	}*/


	assert(argc >= NumArgument);
	HRESULT hr = CoInitializeEx(nullptr, COINIT_MULTITHREADED);
	assert(SUCCEEDED(hr));
	TextureConverter textureConverter;
	textureConverter.ConvertTextureWICToDDS(argv[kFilePath]);



	CoUninitialize();
	system("pause");
	return 0;

}