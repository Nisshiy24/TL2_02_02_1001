#pragma once
#include <string>
#include "externals/DirectXTex/DirectXTex.h"
class TextureConverter
{
public:
	TextureConverter();
	~TextureConverter();



	void ConvertTextureWICToDDS(const std::string& filePath);
private:

	void LoadWINCTextureFromFile(const std::string& filepath);

	static std::wstring ConvertMultiByteStringToWideString(const std::string& mString);



	void SeparateFilePath(const std::wstring& filePath);

	void SaveDDSTextureToFile();

	std::wstring directoryPath_;

	std::wstring fileName_;

	std::wstring fileExt_;

	DirectX::TexMetadata metadata_;
	DirectX::ScratchImage scratchImage_;

};



