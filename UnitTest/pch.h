﻿// pch.h: 这是预编译标头文件。
// 下方列出的文件仅编译一次，提高了将来生成的生成性能。
// 这还将影响 IntelliSense 性能，包括代码完成和许多代码浏览功能。
// 但是，如果此处列出的文件中的任何一个在生成之间有更新，它们全部都将被重新编译。
// 请勿在此处添加要频繁更新的文件，这将使得性能优势无效。

#ifndef PCH_H
#define PCH_H
#define UMDF_USING_NTSTATUS
#define WIN32_LEAN_AND_MEAN             // 从 Windows 头文件中排除极少使用的内容

#include "..\Sources\crt\km.h"

// 添加要在此处预编译的标头
#include <Windows.h>
#include <vector>
#include <set>
#include <atlstr.h>
#include "CppUnitTest.h"

LSTATUS RunCmd(LPCWSTR FilePath, CString CmdString, CString* pOutString);

LSTATUS CreateFileByData(LPCWSTR FilePath, const void* Data, DWORD ccbData);

byte* ReadFileData(LPCWSTR szFile);

CString RunMSBuildTest(
	CStringA FileData,
	LPCWSTR DetectName,
	LPCWSTR szPlatform,
	LPCWSTR szConfiguration,
	LPCWSTR szWindowsTargetPlatformMinVersion,
	LPCWSTR BuildProperty = nullptr,
	CStringW* pTempRoot = nullptr
	);

CString RunMSBuildTest(
	const void* FileData,
	DWORD cbFileData,
	LPCWSTR DetectName,
	LPCWSTR szPlatform,
	LPCWSTR szConfiguration,
	LPCWSTR szWindowsTargetPlatformMinVersion,
	LPCWSTR BuildProperty = nullptr,
	CStringW* pTempRoot = nullptr
	);
#endif //PCH_H
