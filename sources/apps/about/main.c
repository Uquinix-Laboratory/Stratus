#include <stratus-io>
#include <stratus-ui>

UiView *about_informations(void)
{
    UiView *label_title = ui_text_create(str$("STRATUS"), UI_FONT_TITLE);
    UiView *label_version = ui_text_create(str$("Stable @ 0.01-Beta"), UI_FONT_BODY);
    UiView *label_license = ui_text_create(str$("The Stratus Operating System is licensed under GNU GPL v2.0, see LICENSE for more information."), UI_FONT_BODY);
    UiView *button = ui_button_create_with_text(str$("OK"));
    ui_view_layout(button, "g-end g-vfill");

    UiView *container = ui_panel_create(UI_COLOR_BASE00);
    ui_view_layout(container, "flex gaps-12 grow-1 ttb m-16");

    ui_view_mount(container, label_title);
    ui_view_mount(container, label_version);
    ui_view_mount(container, label_license);
    ui_view_mount(container, ui_spacer_create());
    ui_view_mount(container, button);

    return container;
}

UiWin *about_win_create(UiApp *app)
{
    UiWin *self = ui_win_create(app, m_rectf(150, 150, 500, 300), UI_WIN_NORMAL);

    UiView *container = ui_panel_create(UI_COLOR_BASE00);
    ui_view_layout(container, "flex");
    ui_win_mount(self, container);

    UiView *logo = ui_panel_create(UI_COLOR_BASE09);
    ui_view_layout(logo, "grow-1");
    ui_view_mount(container, logo);

    UiView *infos = about_informations();
    ui_view_mount(container, infos);

    return self;
}

int main(int argc, char const *argv[])
{
    (void)argc;
    (void)argv;

    UiApp app;
    ui_app_init(&app);

    UiWin *win = about_win_create(&app);
    ui_win_show(win);

    int result = ui_app_run(&app);

    ui_win_deref(win);
    ui_app_deinit(&app);

    return result;
}
