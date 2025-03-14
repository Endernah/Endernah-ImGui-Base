#pragma once
#include <string>
#include <sstream>
#include <iostream>
#include <windows.h>
#include <d3d11.h>
#include <dxgi.h>
#include "dependencies/kiero/kiero.h"
#include "dependencies/imgui/imgui.h"
#include "dependencies/imgui/imgui_impl_win32.h"
#include "dependencies/imgui/imgui_impl_dx11.h"

typedef HRESULT(__stdcall* Present) (IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags);
typedef LRESULT(CALLBACK* WNDPROC)(HWND, UINT, WPARAM, LPARAM);
typedef uintptr_t PTR;