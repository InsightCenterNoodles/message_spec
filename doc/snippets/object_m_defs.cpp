void activate(string)
void activate(int)
list<string> get_activation_choices()

list<string> get_option_choices()
string get_current_option()
void set_current_option(string)

void set_position(vec3 p)
void set_rotation(vec4 q)
void set_scale(vec3 s)

void select_region(vec3, vec3, int)
void select_sphere(vec3, real, int)
void select_half_plane(vec3, vec3, int)
void select_hull([vec3], [int], int)
[string, vec3] probe_at(vec3)

void signal_attention()
void signal_attention(vec3)
void signal_attention(vec3, string)
