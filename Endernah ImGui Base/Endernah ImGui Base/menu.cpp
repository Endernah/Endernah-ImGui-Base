#include "includes.h"

template<typename T>
void print(const T& text) // I like to have my own print function just for the sake of it.
{
    std::ostringstream oss;
    oss << text;
    std::cout << oss.str() << std::endl;
}

#include "menu.h"

namespace menu {
    void RenderMenu()
    {
        ImGui::SetNextWindowSize(ImVec2(500, 500));

        if (!ImGui::Begin("Endernah ImGui Base", nullptr, ImGuiWindowFlags_NoResize))
        {
            ImGui::End();
            return;
        }

        ImGui::BeginTabBar("1");
		if (ImGui::BeginTabItem("Idk"))
		{
			ImGui::Text("Idk");
			if (ImGui::Button("Idk Button"))
			{
				print("Idk Button Pressed");
			}
			ImGui::Checkbox("Enable Idk", &idk_enable);
			ImGui::SliderFloat("Idk Width", &idk_width, 0.f, 100.f);
			ImGui::SliderFloat("Idk Length", &idk_length, 0.f, 100.f);
			ImGui::EndTabItem();
		}
        ImGui::EndTabBar();

        ImGui::End();
    }
}