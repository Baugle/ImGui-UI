#include "ImGui-UI.hpp"
#include "imgui/imgui_spectrum.h"
using namespace ImGui;

void Styles()
{
    ImGuiStyle& style = ImGui::GetStyle();
    style.Alpha = 1.0;
    //style.WindowFillAlphaDefault = 0.83;
    //style.ChildWindowRounding = 3;
    style.WindowRounding = 3;
    style.GrabRounding = 1;
    style.GrabMinSize = 20;
    style.FrameRounding = 3;


    style.Colors[ImGuiCol_Text] = ImVec4(0.00f, 1.00f, 1.00f, 1.00f);
    style.Colors[ImGuiCol_TextDisabled] = ImVec4(0.00f, 0.40f, 0.41f, 1.00f);
    style.Colors[ImGuiCol_WindowBg] = ImVec4(0.00f, 0.00f, 0.00f, 1.00f);
    //style.Colors[ImGuiCol_ChildWindowBg] = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
    style.Colors[ImGuiCol_Border] = ImVec4(0.00f, 1.00f, 1.00f, 0.65f);
    style.Colors[ImGuiCol_BorderShadow] = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
    style.Colors[ImGuiCol_FrameBg] = ImVec4(0.44f, 0.80f, 0.80f, 0.18f);
    style.Colors[ImGuiCol_FrameBgHovered] = ImVec4(0.44f, 0.80f, 0.80f, 0.27f);
    style.Colors[ImGuiCol_FrameBgActive] = ImVec4(0.44f, 0.81f, 0.86f, 0.66f);
    style.Colors[ImGuiCol_TitleBg] = ImVec4(0.14f, 0.18f, 0.21f, 0.73f);
    style.Colors[ImGuiCol_TitleBgCollapsed] = ImVec4(0.00f, 0.00f, 0.00f, 0.54f);
    style.Colors[ImGuiCol_TitleBgActive] = ImVec4(0.00f, 1.00f, 1.00f, 0.27f);
    style.Colors[ImGuiCol_MenuBarBg] = ImVec4(0.00f, 0.00f, 0.00f, 0.20f);
    style.Colors[ImGuiCol_ScrollbarBg] = ImVec4(0.22f, 0.29f, 0.30f, 0.71f);
    style.Colors[ImGuiCol_ScrollbarGrab] = ImVec4(0.00f, 1.00f, 1.00f, 0.44f);
    style.Colors[ImGuiCol_ScrollbarGrabHovered] = ImVec4(0.00f, 1.00f, 1.00f, 0.74f);
    style.Colors[ImGuiCol_ScrollbarGrabActive] = ImVec4(0.00f, 1.00f, 1.00f, 1.00f);
    //style.Colors[ImGuiCol_ComboBg] = ImVec4(0.16f, 0.24f, 0.22f, 0.60f);
    style.Colors[ImGuiCol_CheckMark] = ImVec4(0.00f, 1.00f, 1.00f, 0.68f);
    style.Colors[ImGuiCol_SliderGrab] = ImVec4(0.00f, 1.00f, 1.00f, 0.36f);
    style.Colors[ImGuiCol_SliderGrabActive] = ImVec4(0.00f, 1.00f, 1.00f, 0.76f);
    style.Colors[ImGuiCol_Button] = ImVec4(0.00f, 0.65f, 0.65f, 0.46f);
    style.Colors[ImGuiCol_ButtonHovered] = ImVec4(0.01f, 1.00f, 1.00f, 0.43f);
    style.Colors[ImGuiCol_ButtonActive] = ImVec4(0.00f, 1.00f, 1.00f, 0.62f);
    style.Colors[ImGuiCol_Header] = ImVec4(0.00f, 1.00f, 1.00f, 0.33f);
    style.Colors[ImGuiCol_HeaderHovered] = ImVec4(0.00f, 1.00f, 1.00f, 0.42f);
    style.Colors[ImGuiCol_HeaderActive] = ImVec4(0.00f, 1.00f, 1.00f, 0.54f);
    //style.Colors[ImGuiCol_Column] = ImVec4(0.00f, 0.50f, 0.50f, 0.33f);
   //style.Colors[ImGuiCol_ColumnHovered] = ImVec4(0.00f, 0.50f, 0.50f, 0.47f);
    //style.Colors[ImGuiCol_ColumnActive] = ImVec4(0.00f, 0.70f, 0.70f, 1.00f);
    style.Colors[ImGuiCol_ResizeGrip] = ImVec4(0.00f, 1.00f, 1.00f, 0.54f);
    style.Colors[ImGuiCol_ResizeGripHovered] = ImVec4(0.00f, 1.00f, 1.00f, 0.74f);
    style.Colors[ImGuiCol_ResizeGripActive] = ImVec4(0.00f, 1.00f, 1.00f, 1.00f);
   //style.Colors[ImGuiCol_CloseButton] = ImVec4(0.00f, 0.78f, 0.78f, 0.35f);
    //style.Colors[ImGuiCol_CloseButtonHovered] = ImVec4(0.00f, 0.78f, 0.78f, 0.47f);
    //style.Colors[ImGuiCol_CloseButtonActive] = ImVec4(0.00f, 0.78f, 0.78f, 1.00f);
    style.Colors[ImGuiCol_PlotLines] = ImVec4(0.00f, 1.00f, 1.00f, 1.00f);
    style.Colors[ImGuiCol_PlotLinesHovered] = ImVec4(0.00f, 1.00f, 1.00f, 1.00f);
    style.Colors[ImGuiCol_PlotHistogram] = ImVec4(0.00f, 1.00f, 1.00f, 1.00f);
    style.Colors[ImGuiCol_PlotHistogramHovered] = ImVec4(0.00f, 1.00f, 1.00f, 1.00f);
    style.Colors[ImGuiCol_TextSelectedBg] = ImVec4(0.00f, 1.00f, 1.00f, 0.22f);
    //style.Colors[ImGuiCol_TooltipBg] = ImVec4(0.00f, 0.13f, 0.13f, 0.90f);
    style.Colors[ImGuiCol_ModalWindowDarkening] = ImVec4(0.04f, 0.10f, 0.09f, 0.51f);
}
static bool showing = true;
static int currentColumn = 0;

char email[255] = "";
char user[255] = "";

char pass1[255] = "";
char pass2[255] = "";
char pass3[255] = "";
char pass4[255] = "";

// Main code
int APIENTRY WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
    WNDCLASSEX wc = { sizeof(WNDCLASSEX), CS_CLASSDC, WndProc, 0L, 0L, GetModuleHandle(NULL), NULL, NULL, NULL, NULL, L"  ", NULL };
    //WNDCLASSEX wc = { sizeof(WNDCLASSEX), CS_CLASSDC, WndProc, 0L, 0L, GetModuleHandle(NULL), NULL, NULL, NULL, NULL, LOADER_BRAND, NULL };
    RegisterClassEx(&wc);
    main_hwnd = HWND(CreateWindow(wc.lpszClassName, L"  ", WS_POPUP, 0, 0, 5, 5, NULL, NULL, wc.hInstance, NULL));
    //main_hwnd = HWND(CreateWindow(wc.lpszClassName, LOADER_BRAND, WS_POPUP, 0, 0, 5, 5, NULL, NULL, wc.hInstance, NULL));

    // Initialize Direct3D
    if (!CreateDeviceD3D(main_hwnd)) {
        CleanupDeviceD3D();
        UnregisterClass(wc.lpszClassName, wc.hInstance);
        return 1;
    }

    // Show window
    ShowWindow(main_hwnd, SW_HIDE);
    UpdateWindow(main_hwnd);

    // Style Eulen 0x49
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO();
    io.IniFilename = nullptr;

    io.ConfigFlags |= ImGuiConfigFlags_ViewportsEnable;
    ImGui::StyleColorsDark();
    ImGuiStyle& style = ImGui::GetStyle();

    if (io.ConfigFlags & ImGuiConfigFlags_ViewportsEnable)
    {
        style.Colors[ImGuiCol_TitleBg] = ImColor(39, 45, 59);
        style.Colors[ImGuiCol_TitleBgCollapsed] = ImColor(39, 45, 59);
        style.Colors[ImGuiCol_TitleBgActive] = ImColor(39, 45, 59);
        style.Colors[ImGuiCol_WindowBg] = ImColor(32, 36, 47);
        style.Colors[ImGuiCol_Button] = ImColor(48, 59, 80);
        style.Colors[ImGuiCol_ButtonActive] = ImColor(48, 59, 80);
        style.Colors[ImGuiCol_ButtonHovered] = ImColor(48, 59, 80);
        style.Colors[ImGuiCol_CheckMark] = ImColor(255, 255, 255, 255);
        style.Colors[ImGuiCol_FrameBg] = ImColor(45, 55, 78);
        style.Colors[ImGuiCol_FrameBgActive] = ImColor(45, 55, 78);
        style.Colors[ImGuiCol_FrameBgHovered] = ImColor(45, 55, 78);
        style.Colors[ImGuiCol_Header] = ImColor(24, 24, 24, 255);
        style.Colors[ImGuiCol_HeaderActive] = ImColor(54, 53, 55);
        style.Colors[ImGuiCol_HeaderHovered] = ImColor(24, 24, 24, 100);
        style.Colors[ImGuiCol_ResizeGrip] = ImColor(51, 49, 50, 255);
        style.Colors[ImGuiCol_ResizeGripActive] = ImColor(54, 53, 55);
        style.Colors[ImGuiCol_ResizeGripHovered] = ImColor(51, 49, 50, 255);
        style.Colors[ImGuiCol_SliderGrab] = ImColor(249, 79, 49, 255);
        style.Colors[ImGuiCol_SliderGrabActive] = ImColor(249, 79, 49, 255);
        style.Colors[ImGuiCol_TabActive] = ImColor(32, 36, 47);
        style.Colors[ImGuiCol_Tab] = ImColor(32, 36, 47);
        style.Colors[ImGuiCol_Border] = ImColor(54, 54, 54);
        style.Colors[ImGuiCol_Separator] = ImColor(54, 54, 54);
        style.Colors[ImGuiCol_SeparatorActive] = ImColor(54, 54, 54);
        style.Colors[ImGuiCol_SeparatorHovered] = ImColor(54, 54, 54);

        ImGui_ImplWin32_Init(main_hwnd);
        ImGui_ImplDX9_Init(g_pd3dDevice);
    }

    ImFont* font = io.Fonts->AddFontFromFileTTF("C:\\Windows\\Fonts\\simhei.ttf", 18.0f, NULL, io.Fonts->GetGlyphRangesChineseFull());
    DWORD window_flags = ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoSavedSettings | ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoScrollbar;

    RECT screen_rect;
    GetWindowRect(GetDesktopWindow(), &screen_rect);
    auto x = float(screen_rect.right - WINDOW_WIDTH) / 2.f;
    auto y = float(screen_rect.bottom - WINDOW_HEIGHT) / 2.f;

    MSG msg;
    ZeroMemory(&msg, sizeof(msg));
    while (msg.message != WM_QUIT)
    {
        if (PeekMessage(&msg, NULL, 0U, 0U, PM_REMOVE))
        {
            TranslateMessage(&msg);
            DispatchMessage(&msg);
            continue;
        }

        // Start the Dear ImGui frame
        ImGui_ImplDX9_NewFrame();
        ImGui_ImplWin32_NewFrame();
        ImGui::NewFrame();
        {
            ImGui::SetNextWindowPos(ImVec2(x, y), ImGuiCond_Once);
            ImGui::SetNextWindowSize(ImVec2(WINDOW_WIDTH, WINDOW_HEIGHT));
            ImGui::SetNextWindowBgAlpha(1.0f);


            ImGui::Begin(LOADER_BRAND, &loader_active, window_flags);
            {

                Styles();
                switch (currentColumn) {

                    // Style
                    break;
                case 0:

                    if (ImGui::BeginTabBar("##Login"))
                    {

                        ImGui::Spacing();
                        ImGui::Spacing();
                        ImGui::Spacing();
                        ImGui::Spacing();
                        ImGui::Spacing();
                        ImGui::Spacing();
                        ImGui::Spacing();
                        ImGui::Spacing();
                        ImGui::Spacing();
                        ImGui::Spacing();
                        ImGui::Spacing();
                        ImGui::Spacing();
                        ImGui::SetCursorPosX(ImGui::GetContentRegionAvail().x / 2.5);
                        ImGui::Text("你好！Hello");
                        ImGui::Spacing();
                        ImGui::Spacing();
                        ImGui::Spacing();
                        ImGui::Spacing();
                        ImGui::Spacing();
                        ImGui::Spacing();
                        ImGui::Spacing();
                        ImGui::Spacing();
                        ImGui::Spacing();
                        ImGui::Spacing();

                        

                        ImGui::SetCursorPosX(ImGui::GetContentRegionAvail().x / 4.0);
                        ImGui::InputTextEx("", NULL, user, IM_ARRAYSIZE(user), ImVec2(240, 28), 0, 0, 0);

                        ImGui::SetCursorPosX(ImGui::GetContentRegionAvail().x / 4.0);
                        ImGui::InputTextEx("", NULL, pass1, IM_ARRAYSIZE(pass1), ImVec2(240, 28), 0, 0, 0);
                        ImGui::Spacing();

                        static bool Eulen = false;
                        ImGui::SetCursorPosX(ImGui::GetContentRegionAvail().x / 4.0);
                        if (ImGui::Checkbox("Remember Me", &Eulen))
                        {
                            // Load Resource
                        }

                        ImGui::Spacing();
                        ImGui::SetCursorPosX(ImGui::GetContentRegionAvail().x / 4.0);
                        if (ImGui::Button("Login你好", ImVec2(ImGui::GetWindowWidth() / 4, 26)))
                        {
                            // Load Login
                        }
                        ImGui::SameLine();
                        if (ImGui::Button("Register", ImVec2(ImGui::GetWindowWidth() / 4, 26)))
                        {
                            currentColumn = 1;
                        }

                        ImGui::EndTabBar();
                    }

                    break;
                case 1:

                    if (ImGui::BeginTabBar("##Register"))
                    {
                        ImGui::Spacing();
                        ImGui::Spacing();
                        ImGui::Spacing();
                        ImGui::Spacing();
                        ImGui::Spacing();
                        ImGui::Spacing();
                        ImGui::Spacing();
                        ImGui::Spacing();
                        ImGui::Spacing();
                        ImGui::Spacing();
                        ImGui::Spacing();
                        ImGui::Spacing();
                        ImGui::Spacing();
                        ImGui::Spacing();
                        ImGui::Spacing();
                        ImGui::Spacing();

                        ImGui::SetCursorPosX(ImGui::GetContentRegionAvail().x / 4.0);
                        ImGui::Text("Username");

                        ImGui::SetCursorPosX(ImGui::GetContentRegionAvail().x / 4.0);
                        ImGui::InputTextEx("     ", NULL, user, IM_ARRAYSIZE(user), ImVec2(240, 20), 0, 0, 0);

                        ImGui::SetCursorPosX(ImGui::GetContentRegionAvail().x / 4.0);
                        ImGui::Text("Password");

                        ImGui::SetCursorPosX(ImGui::GetContentRegionAvail().x / 4.0);
                        ImGui::InputTextEx("    ", NULL, pass3, IM_ARRAYSIZE(pass3), ImVec2(240, 20), 0, 0, 0);

                        ImGui::SetCursorPosX(ImGui::GetContentRegionAvail().x / 4.0);
                        ImGui::Text("Repeat Password");

                        ImGui::SetCursorPosX(ImGui::GetContentRegionAvail().x / 4.0);
                        ImGui::InputTextEx("   ", NULL, pass4, IM_ARRAYSIZE(pass4), ImVec2(240, 18), 0, 0, 0);

                        ImGui::SetCursorPosX(ImGui::GetContentRegionAvail().x / 4.0);
                        ImGui::Text("Email");

                        ImGui::SetCursorPosX(ImGui::GetContentRegionAvail().x / 4.0);
                        ImGui::InputTextEx("  ", NULL, email, IM_ARRAYSIZE(email), ImVec2(240, 18), 0, 0, 0);

                        ImGui::Spacing();

                        ImGui::SetCursorPosX(ImGui::GetContentRegionAvail().x / 4.0);
                        if (ImGui::Button("Register"))
                        {
                            MessageBoxA(NULL, "Thanks Eulen.", "Eulen", MB_OK | MB_ICONERROR);
                        }
                        ImGui::SameLine();
                        if (ImGui::Button("Cancel"))
                        {
                            exit(40);
                        }
                    }
                    ImGui::EndTabBar();
                }
            }
            ImGui::End();
        }
        ImGui::EndFrame();

        g_pd3dDevice->Clear(0, NULL, D3DCLEAR_TARGET | D3DCLEAR_ZBUFFER, 0, 1.0f, 0);
        if (g_pd3dDevice->BeginScene() >= 0)
        {
            ImGui::Render();
            ImGui_ImplDX9_RenderDrawData(ImGui::GetDrawData());
            g_pd3dDevice->EndScene();
        }

        // Update and Render additional Platform Windows
        if (io.ConfigFlags & ImGuiConfigFlags_ViewportsEnable)
        {
            ImGui::UpdatePlatformWindows();
            ImGui::RenderPlatformWindowsDefault();
        }

        HRESULT result = g_pd3dDevice->Present(NULL, NULL, NULL, NULL);
        if (result == D3DERR_DEVICELOST && g_pd3dDevice->TestCooperativeLevel() == D3DERR_DEVICENOTRESET) {
            ResetDevice();
        }
        if (!loader_active) {
            msg.message = WM_QUIT;
        }
    }

    ImGui_ImplDX9_Shutdown();
    ImGui_ImplWin32_Shutdown();
    ImGui::DestroyContext();
    CleanupDeviceD3D();
    DestroyWindow(main_hwnd);
    UnregisterClass(wc.lpszClassName, wc.hInstance);
    return 0;
}


// Show 
LRESULT CALLBACK WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam) {
    if (ImGui_ImplWin32_WndProcHandler(hWnd, msg, wParam, lParam))
        return true;

    switch (msg)
    {
    case WM_SIZE:
        if (g_pd3dDevice != NULL && wParam != SIZE_MINIMIZED)
        {
            g_d3dpp.BackBufferWidth = LOWORD(lParam);
            g_d3dpp.BackBufferHeight = HIWORD(lParam);
            ResetDevice();
        }
        return 0;
    case WM_SYSCOMMAND:
        if ((wParam & 0xfff0) == SC_KEYMENU) // Disable ALT application menu
            return 0;
        break;
    case WM_DESTROY:
        PostQuitMessage(0);
        return 0;
    }
    return DefWindowProc(hWnd, msg, wParam, lParam);
}