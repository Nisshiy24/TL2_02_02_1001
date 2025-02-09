#include <cstdio>
#include <cstdlib>
#include <cassert>
#include "TextureConverter.h"
#include <Windows.h>

//コマンドライン
enum Argument {
	kApplicationPath,
	kFilePath,

	NumArgument
};

int main(int argc, char* argv[])
{

	/*argcの数だけ繰り返す
	for (int i = 0; i < argc; i++)
	{
		文字列argvのi番を表示
		printf(argv[i]);
		改行
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