// generated by Fast Light User Interface Designer (fluid) version 1.0100

#include "ListEditor.h"

inline void ListEditor::cb_window_i(Fl_Double_Window*, void*) {
  close_cb(this);
}
void ListEditor::cb_window(Fl_Double_Window* o, void* v) {
  ((ListEditor*)(o->user_data()))->cb_window_i(o,v);
}

inline void ListEditor::cb_New_i(Fl_Menu_*, void*) {
  new_cb(this);
}
void ListEditor::cb_New(Fl_Menu_* o, void* v) {
  ((ListEditor*)(o->parent()->user_data()))->cb_New_i(o,v);
}

inline void ListEditor::cb_Open_i(Fl_Menu_*, void*) {
  open_cb(this);
}
void ListEditor::cb_Open(Fl_Menu_* o, void* v) {
  ((ListEditor*)(o->parent()->user_data()))->cb_Open_i(o,v);
}

inline void ListEditor::cb_history_items_i(Fl_Menu_*, void*) {
  open_history_cb(this, history_items[0].label());
}
void ListEditor::cb_history_items(Fl_Menu_* o, void* v) {
  ((ListEditor*)(o->parent()->user_data()))->cb_history_items_i(o,v);
}

inline void ListEditor::cb_filename_i(Fl_Menu_*, void*) {
  open_history_cb(this, history_items[1].label());
}
void ListEditor::cb_filename(Fl_Menu_* o, void* v) {
  ((ListEditor*)(o->parent()->user_data()))->cb_filename_i(o,v);
}

inline void ListEditor::cb_filename1_i(Fl_Menu_*, void*) {
  open_history_cb(this, history_items[2].label());
}
void ListEditor::cb_filename1(Fl_Menu_* o, void* v) {
  ((ListEditor*)(o->parent()->user_data()))->cb_filename1_i(o,v);
}

inline void ListEditor::cb_filename2_i(Fl_Menu_*, void*) {
  open_history_cb(this, history_items[3].label());
}
void ListEditor::cb_filename2(Fl_Menu_* o, void* v) {
  ((ListEditor*)(o->parent()->user_data()))->cb_filename2_i(o,v);
}

inline void ListEditor::cb_filename3_i(Fl_Menu_*, void*) {
  open_history_cb(this, history_items[4].label());
}
void ListEditor::cb_filename3(Fl_Menu_* o, void* v) {
  ((ListEditor*)(o->parent()->user_data()))->cb_filename3_i(o,v);
}

inline void ListEditor::cb_filename4_i(Fl_Menu_*, void*) {
  open_history_cb(this, history_items[5].label());
}
void ListEditor::cb_filename4(Fl_Menu_* o, void* v) {
  ((ListEditor*)(o->parent()->user_data()))->cb_filename4_i(o,v);
}

inline void ListEditor::cb_filename5_i(Fl_Menu_*, void*) {
  open_history_cb(this, history_items[6].label());
}
void ListEditor::cb_filename5(Fl_Menu_* o, void* v) {
  ((ListEditor*)(o->parent()->user_data()))->cb_filename5_i(o,v);
}

inline void ListEditor::cb_filename6_i(Fl_Menu_*, void*) {
  open_history_cb(this, history_items[7].label());
}
void ListEditor::cb_filename6(Fl_Menu_* o, void* v) {
  ((ListEditor*)(o->parent()->user_data()))->cb_filename6_i(o,v);
}

inline void ListEditor::cb_filename7_i(Fl_Menu_*, void*) {
  open_history_cb(this, history_items[8].label());
}
void ListEditor::cb_filename7(Fl_Menu_* o, void* v) {
  ((ListEditor*)(o->parent()->user_data()))->cb_filename7_i(o,v);
}

inline void ListEditor::cb_filename8_i(Fl_Menu_*, void*) {
  open_history_cb(this, history_items[9].label());
}
void ListEditor::cb_filename8(Fl_Menu_* o, void* v) {
  ((ListEditor*)(o->parent()->user_data()))->cb_filename8_i(o,v);
}

inline void ListEditor::cb_Close_i(Fl_Menu_*, void*) {
  close_cb(this);
}
void ListEditor::cb_Close(Fl_Menu_* o, void* v) {
  ((ListEditor*)(o->parent()->user_data()))->cb_Close_i(o,v);
}

inline void ListEditor::cb_Save_i(Fl_Menu_*, void*) {
  save_cb(this);
}
void ListEditor::cb_Save(Fl_Menu_* o, void* v) {
  ((ListEditor*)(o->parent()->user_data()))->cb_Save_i(o,v);
}

inline void ListEditor::cb_Save1_i(Fl_Menu_*, void*) {
  save_as_cb(this);
}
void ListEditor::cb_Save1(Fl_Menu_* o, void* v) {
  ((ListEditor*)(o->parent()->user_data()))->cb_Save1_i(o,v);
}

inline void ListEditor::cb_Build_i(Fl_Menu_*, void*) {
  build_cb(this);
}
void ListEditor::cb_Build(Fl_Menu_* o, void* v) {
  ((ListEditor*)(o->parent()->user_data()))->cb_Build_i(o,v);
}

inline void ListEditor::cb_Quit_i(Fl_Menu_*, void*) {
  quit_cb(this);
}
void ListEditor::cb_Quit(Fl_Menu_* o, void* v) {
  ((ListEditor*)(o->parent()->user_data()))->cb_Quit_i(o,v);
}

inline void ListEditor::cb_Copy_i(Fl_Menu_*, void*) {
  copy_cb(this);
}
void ListEditor::cb_Copy(Fl_Menu_* o, void* v) {
  ((ListEditor*)(o->parent()->user_data()))->cb_Copy_i(o,v);
}

inline void ListEditor::cb_Cu_i(Fl_Menu_*, void*) {
  cut_cb(this);
}
void ListEditor::cb_Cu(Fl_Menu_* o, void* v) {
  ((ListEditor*)(o->parent()->user_data()))->cb_Cu_i(o,v);
}

inline void ListEditor::cb_Delete_i(Fl_Menu_*, void*) {
  delete_cb(this);
}
void ListEditor::cb_Delete(Fl_Menu_* o, void* v) {
  ((ListEditor*)(o->parent()->user_data()))->cb_Delete_i(o,v);
}

inline void ListEditor::cb_Paste_i(Fl_Menu_*, void*) {
  paste_cb(this);
}
void ListEditor::cb_Paste(Fl_Menu_* o, void* v) {
  ((ListEditor*)(o->parent()->user_data()))->cb_Paste_i(o,v);
}

inline void ListEditor::cb_File_i(Fl_Menu_*, void*) {
  file_settings_cb(this);
}
void ListEditor::cb_File(Fl_Menu_* o, void* v) {
  ((ListEditor*)(o->parent()->user_data()))->cb_File_i(o,v);
}

inline void ListEditor::cb_P_i(Fl_Menu_*, void*) {
  project_settings_cb(this);
}
void ListEditor::cb_P(Fl_Menu_* o, void* v) {
  ((ListEditor*)(o->parent()->user_data()))->cb_P_i(o,v);
}

inline void ListEditor::cb_Contents_i(Fl_Menu_*, void*) {
  help_cb(this, "index.html");
}
void ListEditor::cb_Contents(Fl_Menu_* o, void* v) {
  ((ListEditor*)(o->parent()->user_data()))->cb_Contents_i(o,v);
}

inline void ListEditor::cb_Introduction_i(Fl_Menu_*, void*) {
  help_cb(this, "index.html");
}
void ListEditor::cb_Introduction(Fl_Menu_* o, void* v) {
  ((ListEditor*)(o->parent()->user_data()))->cb_Introduction_i(o,v);
}

inline void ListEditor::cb_Basic_i(Fl_Menu_*, void*) {
  help_cb(this, "index.html");
}
void ListEditor::cb_Basic(Fl_Menu_* o, void* v) {
  ((ListEditor*)(o->parent()->user_data()))->cb_Basic_i(o,v);
}

inline void ListEditor::cb_Advanced_i(Fl_Menu_*, void*) {
  help_cb(this, "index.html");
}
void ListEditor::cb_Advanced(Fl_Menu_* o, void* v) {
  ((ListEditor*)(o->parent()->user_data()))->cb_Advanced_i(o,v);
}

inline void ListEditor::cb_Version_i(Fl_Menu_*, void*) {
  help_cb(this, "index.html");
}
void ListEditor::cb_Version(Fl_Menu_* o, void* v) {
  ((ListEditor*)(o->parent()->user_data()))->cb_Version_i(o,v);
}

Fl_Menu_Item ListEditor::menu_menubar[] = {
 {"&File", 0,  0, 0, 64, 0, 0, 14, 56},
 {"&New", 0x4006e,  (Fl_Callback*)ListEditor::cb_New, 0, 0, 0, 0, 14, 56},
 {"&Open...", 0x4006f,  (Fl_Callback*)ListEditor::cb_Open, 0, 0, 0, 0, 14, 56},
 {"Open &Previous", 0,  0, 0, 65, 0, 0, 14, 56},
 {"filename", 0x40030,  (Fl_Callback*)ListEditor::cb_history_items, 0, 16, 0, 0, 14, 56},
 {"filename", 0x40031,  (Fl_Callback*)ListEditor::cb_filename, 0, 16, 0, 0, 14, 56},
 {"filename", 0x40032,  (Fl_Callback*)ListEditor::cb_filename1, 0, 16, 0, 0, 14, 56},
 {"filename", 0x40033,  (Fl_Callback*)ListEditor::cb_filename2, 0, 16, 0, 0, 14, 56},
 {"filename", 0x40034,  (Fl_Callback*)ListEditor::cb_filename3, 0, 16, 0, 0, 14, 56},
 {"filename", 0x40035,  (Fl_Callback*)ListEditor::cb_filename4, 0, 16, 0, 0, 14, 56},
 {"filename", 0x40036,  (Fl_Callback*)ListEditor::cb_filename5, 0, 16, 0, 0, 14, 56},
 {"filename", 0x40037,  (Fl_Callback*)ListEditor::cb_filename6, 0, 16, 0, 0, 14, 56},
 {"filename", 0x40038,  (Fl_Callback*)ListEditor::cb_filename7, 0, 16, 0, 0, 14, 56},
 {"filename", 0x40039,  (Fl_Callback*)ListEditor::cb_filename8, 0, 16, 0, 0, 14, 56},
 {0},
 {"&Close", 0x40077,  (Fl_Callback*)ListEditor::cb_Close, 0, 128, 0, 0, 14, 56},
 {"&Save", 0x40073,  (Fl_Callback*)ListEditor::cb_Save, 0, 0, 0, 0, 14, 56},
 {"Save &As...", 0x50073,  (Fl_Callback*)ListEditor::cb_Save1, 0, 128, 0, 0, 14, 56},
 {"&Build Package...", 0x40062,  (Fl_Callback*)ListEditor::cb_Build, 0, 128, 0, 0, 14, 56},
 {"&Quit", 0x40071,  (Fl_Callback*)ListEditor::cb_Quit, 0, 0, 0, 0, 14, 56},
 {0},
 {"&Edit", 0,  0, 0, 64, 0, 0, 14, 56},
 {"&Copy", 0x40063,  (Fl_Callback*)ListEditor::cb_Copy, 0, 0, 0, 0, 14, 56},
 {"Cu&t", 0x40078,  (Fl_Callback*)ListEditor::cb_Cu, 0, 0, 0, 0, 14, 56},
 {"&Delete", 0xffff,  (Fl_Callback*)ListEditor::cb_Delete, 0, 0, 0, 0, 14, 56},
 {"&Paste", 0x40076,  (Fl_Callback*)ListEditor::cb_Paste, 0, 128, 0, 0, 14, 56},
 {"&File Settings...", 0x40066,  (Fl_Callback*)ListEditor::cb_File, 0, 0, 0, 0, 14, 56},
 {"P&roject Settings...", 0x40070,  (Fl_Callback*)ListEditor::cb_P, 0, 0, 0, 0, 14, 56},
 {0},
 {"&Help", 0,  0, 0, 64, 0, 0, 14, 56},
 {"&Contents...", 0xffbe,  (Fl_Callback*)ListEditor::cb_Contents, 0, 128, 0, 0, 14, 56},
 {"&Introduction...", 0,  (Fl_Callback*)ListEditor::cb_Introduction, 0, 0, 0, 0, 14, 56},
 {"&Basic...", 0,  (Fl_Callback*)ListEditor::cb_Basic, 0, 0, 0, 0, 14, 56},
 {"&Advanced...", 0,  (Fl_Callback*)ListEditor::cb_Advanced, 0, 128, 0, 0, 14, 56},
 {"&Version...", 0,  (Fl_Callback*)ListEditor::cb_Version, 0, 0, 0, 0, 14, 56},
 {0},
 {0}
};
Fl_Menu_Item* ListEditor::history_items = ListEditor::menu_menubar + 4;

inline void ListEditor::cb_margin_tile_i(Fl_Tile*, void*) {
  margins_cb(this);
}
void ListEditor::cb_margin_tile(Fl_Tile* o, void* v) {
  ((ListEditor*)(o->parent()->user_data()))->cb_margin_tile_i(o,v);
}

inline void ListEditor::cb_margin_items_i(Fl_Menu_*, void*) {
  margins_cb(this);
}
void ListEditor::cb_margin_items(Fl_Menu_* o, void* v) {
  ((ListEditor*)(o->parent()->user_data()))->cb_margin_items_i(o,v);
}

inline void ListEditor::cb_Source_i(Fl_Menu_*, void*) {
  margins_cb(this);
}
void ListEditor::cb_Source(Fl_Menu_* o, void* v) {
  ((ListEditor*)(o->parent()->user_data()))->cb_Source_i(o,v);
}

inline void ListEditor::cb_Package_i(Fl_Menu_*, void*) {
  margins_cb(this);
}
void ListEditor::cb_Package(Fl_Menu_* o, void* v) {
  ((ListEditor*)(o->parent()->user_data()))->cb_Package_i(o,v);
}

Fl_Menu_Item ListEditor::menu_margin_menu[] = {
 {"Destination Path", 0,  (Fl_Callback*)ListEditor::cb_margin_items, 0, 6, 0, 0, 14, 56},
 {"Source Path", 0,  (Fl_Callback*)ListEditor::cb_Source, 0, 6, 0, 0, 14, 56},
 {"Package", 0,  (Fl_Callback*)ListEditor::cb_Package, 0, 6, 0, 0, 14, 56},
 {0}
};
Fl_Menu_Item* ListEditor::margin_items = ListEditor::menu_margin_menu + 0;

inline void ListEditor::cb_list_i(Fl_File_Browser*, void*) {
  list_cb(this);
}
void ListEditor::cb_list(Fl_File_Browser* o, void* v) {
  ((ListEditor*)(o->parent()->user_data()))->cb_list_i(o,v);
}

void ListEditor::modified(int m) {
  modified_ = m;
set_title();
}

ListEditor::ListEditor(const char *listfile) {
  Fl_Double_Window* w;
  { Fl_Double_Window* o = window = new Fl_Double_Window(500, 495, "EPM List Editor 4.0");
    w = o;
    o->callback((Fl_Callback*)cb_window, (void*)(this));
    { Fl_Menu_Bar* o = menubar = new Fl_Menu_Bar(0, 0, 500, 25);
      o->menu(menu_menubar);
    }
    { Fl_Tile* o = margin_tile = new Fl_Tile(0, 25, 500, 25);
      o->callback((Fl_Callback*)cb_margin_tile);
      { Fl_Box* o = margin_buttons[0] = new Fl_Box(0, 25, 280, 20, "Destination Path");
        o->box(FL_ENGRAVED_BOX);
      }
      { Fl_Box* o = margin_buttons[1] = new Fl_Box(280, 25, 150, 20, "Source Path");
        o->box(FL_ENGRAVED_BOX);
      }
      { Fl_Box* o = margin_buttons[2] = new Fl_Box(430, 25, 70, 20, "Package");
        o->box(FL_ENGRAVED_BOX);
      }
      o->end();
    }
    { Fl_Menu_Button* o = margin_menu = new Fl_Menu_Button(0, 25, 500, 20);
      o->box(FL_NO_BOX);
      o->menu(menu_margin_menu);
    }
    { Fl_File_Browser* o = list = new Fl_File_Browser(0, 45, 500, 450);
      o->type(3);
      o->callback((Fl_Callback*)cb_list);
      Fl_Group::current()->resizable(o);
      list->has_scrollbar(Fl_Browser_::VERTICAL);
    }
    o->end();
  }
  dist_        = (dist_t *)0;
filename_[0] = '\0';
modified_    = 0;
title_[0]    = '\0';

open(listfile);

next_  = first_;
first_ = this;
}

void ListEditor::hide() {
  window->hide();
}

int ListEditor::modified() {
  return modified_;
}

int ListEditor::save() {
  return save(filename_);
}

void ListEditor::show() {
  char *progname = (char *)"ListEditor";
window->show(1, &progname);
}

int ListEditor::shown() {
  return window->shown();
}
