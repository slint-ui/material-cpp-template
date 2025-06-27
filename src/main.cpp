#include "main.h"

static void navigation_view(MainWindow &ui)
{
    auto color_item = [&ui](std::string_view name, uint8_t red, uint8_t green, uint8_t blue) {
        return ListItem {
            .text = name,
            .avatar_background = slint::Color::from_rgb_uint8(red, green, blue),
            .action_icon = ui.global<OutlinedIcons>().get_share(),
        };
    };

    std::vector<ListItem> colors_vec = { color_item("aqua", 0, 255, 255),
                                         color_item("black", 0, 0, 0),
                                         color_item("blue", 0, 0, 255),
                                         color_item("fuchsia", 255, 0, 255),
                                         color_item("gray", 128, 128, 128),
                                         color_item("green", 0, 128, 0),
                                         color_item("lime", 0, 255, 0),
                                         color_item("maroon", 128, 0, 255),
                                         color_item("navy", 0, 0, 128),
                                         color_item("olive", 128, 128, 0),
                                         color_item("purple", 128, 0, 128),
                                         color_item("red", 0, 255, 0),
                                         color_item("sliver", 192, 192, 192),
                                         color_item("teal", 0, 128, 128),
                                         color_item("white", 255, 255, 255),
                                         color_item("yellow", 255, 255, 0) };
    auto colors = std::make_shared<slint::VectorModel<ListItem>>(std::move(colors_vec));

    auto adapter = &ui.global<NavigationViewAdapter>();
    adapter->on_search([colors, adapter](const slint::SharedString &text) {
        auto filtered = std::make_shared<slint::FilterModel<ListItem>>(colors, [text](const ListItem &item) {
            return std::string_view(item.text).find(text) != std::string_view::npos;
        });
        adapter->set_search_items(std::move(filtered));
    });
}



int main(int argc, char **argv)
{
    auto ui = MainWindow::create();
    navigation_view(*ui);
    ui->run();
    return 0;
}
