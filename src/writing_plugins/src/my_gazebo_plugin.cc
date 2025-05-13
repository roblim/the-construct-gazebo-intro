#include <gazebo/gazebo.hh>
#include <gazebo/physics/physics.hh>
namespace gazebo {
    class MyGazeboPlugin : public WorldPlugin {
        public:
        MyGazeboPlugin() : WorldPlugin() {
            printf("Plugin constructor method!\n");
        }

        public:
        void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf) {
            printf("Everything is awesome!\n");
        }
    };

    // Register plugin
    GZ_REGISTER_WORLD_PLUGIN(MyGazeboPlugin)
}